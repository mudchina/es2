// butcher.c

inherit NPC;
inherit F_VENDOR;

void create()
{
        set_name("֣����", ({ "butcher", "zheng" }) );
        set("title", "������");
        set("gender", "����" );
        set("age", 35);
        set("long", "�㿴��һ���⺷�Ĵ��ͷ, �����øֵ���ţ�ǡ�\n");
        set("str", 29);
        set("int", 14);
        set("combat_exp", 2500);
        set("attitude", "heroism");
        set_skill("unarmed", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);

        set("inquiry", ([
                "����" : "�⵶���Ǹ�����, 
��˵�ǵ����ż�����������ʱ���ϴ͵ġ�",
                "������" : "��Ҳ֪��'�̺�����'����¥���ڽֶ��棬�ҳ�ȥ�ġ�", 
        ]) );

        set("vendor_goods", ([
                "ţ��": "/u/cloud/obj/meat/b_beef",
                "ţ��": "/u/cloud/obj/meat/hind",
                "ţβ": "/u/cloud/obj/meat/tail",
                "����": "/u/cloud/obj/meat/zasui",
                "����": "/u/cloud/obj/meat/dog_m",
        ]) );

        setup();
        add_money("silver", 12);
        add_money("coin", 500);
        carry_object("/obj/cloth")->wear();
        carry_object("/u/cloud/obj/npc/butcher/knife");
        carry_object("/u/cloud/obj/npc/butcher/skin_belt")->wear();
}

void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(4) ) {
                case 0:
                        say( "������޹�ͷ������ţ����Ǻõ����޵ú����! 
\n");
                        break;
                case 1:
                        say( "����ҡҡͷ, ̾�˿���˵����, ��֪�Ǳ��񵶾���"
                                +"�����⵶��������...\n");
                        break;
                case 2:
                        say( "�����ֿ�����, Ц�ŵ�����λ"  
                                + RANK_D->query_respect(ob)
                                + "��Ҫ��������? \n");
                        break;
                case 3:
                        say( "����æ�Ÿ���ȡ��, �ƺ�ûע�⵽�������\n");
                        break;
        }
}

 