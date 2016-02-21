
#include <room.h>
inherit ROOM;

void create()
{
     set("short", "╥Плццег╟");
	set("long", @LONG
уБюОйгв╞т╨╤Чб╔╣д╥Плццег╟ё╛дЦ©иртне╣╫р╩╧ие╗сТ╣дл╢оЦфЬо╒║ё
вътзуБюОдЦспр╩жжв╞яокЮ╬╡╣д╦п╬Уё╛тзопо╬ж╝БедЦ╬У╣цю╢╣╫уБ©ирт
тщй╠мЭх╔жэтБ╣д╥ЁхккЖйбё╛Ащ╥П©ирт╥е©╙р╩гп║ кЫспй╠©у╤╪╬╡ж╧╟Ц
╣дпИ©усд╬╡║ёнВцФдЦ©╢╣╫р╩ихл╢оЦд╬це║ё
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
    "west" :__DIR__"uproom",
    "north" :__DIR__"upstar1",
    "south" :__DIR__"upstar2",

]));

    create_door("west","л╢оЦд╬це","east", DOOR_CLOSED);
	setup();
	replace_program(ROOM);
}
