// westdoor2.c
#include <room.h>

inherit ROOM;

string look_notice();

void create()
{
        set("short", "��ʦ������");
        set("long", @LONG
��������ʦ�������ţ��������䲻�義ʦ�������������Ÿߴ�
���߸ߵĳ�ǽҲ��һ����������Խ����ǽ�����ż��Ų���(notice)��
�����ǳ��⣬��˵һֱ�����Ϳɵ���һ���ɾ������߾��Ǿ�ʦ�Ľ�
���ˡ�
LONG
        );

        set("item_desc", ([
                "notice": (: look_notice :),
                "door": (: look_door, "out" :),
        ]) );

        set("exits", ([
//                "out"          : __DIR__"w2soad1",
                "east"          : __DIR__"street13" ]) );

        set("objects", ([
                __DIR__"npc/guard" : 3 ,]) );  

        create_door("out", "����", "enter" );
        setup();
}

string look_notice()
{
     return "������д�������˳��������һ���ƽ�\n";
}

int valid_leave(object me,string dir)
{
        if ( dir=="out" &&
                ( !(string) me->query("marks/��ʦ")
                || !(string) me->query("marks/����") ) ) {
                tell_object (me, "��ʦ�سǱ�˵����û�йٸ�ͨ��κ��˲��ܳ��뾩ʦ��\n");
                return notify_fail("���Ƿ����·����ʦ�سǱ���ס�ˡ�\n");
                }

        if (me->query("marks/����")) {
                ::valid_leave(me,dir);
                me->set("marks/����", 0);
                return 1;
                }

        return ::valid_leave(me,dir);
}
