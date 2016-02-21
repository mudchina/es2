// Room: /d/death/gate.c

inherit ROOM;

void create()
{
	set("short", "[1;37m¹íÃÅ¹Ø[2;37;0m");
	set("long", @LONG
ÕâÀï¾ÍÊÇÖøÃûµÄÒõ¼äÈë¿Ú¡¸¹íÃÅ¹Ø¡¹£¬ÔÚÄãÃæÇ°´£Á¢ÖøÒ»×ù¸ß´óµÄ
ºÚÉ«³ÇÂ¥£¬Ğí¶àÍö»êÕı¿Ş¿ŞÌäÌäµØÁĞ¶ÓÇ°½ø£¬ÒòÎªÒ»½ø¹íÃÅ¹Ø¾ÍÎŞ·¨ÔÙ
»ØÑô¼äÁË¡£
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"south" : __DIR__"bridge",
		"north" : __DIR__"gateway",
]));
	set("objects", ([ /* sizeof() == 1 */
		__DIR__"npc/wgargoyle" : 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
