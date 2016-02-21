// raincoat.c

#include <armor.h>

inherit SURCOAT;

void create()
{
	set_name("ËòÒÂ", ({ "raincoat" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("material", "plant");
		set("unit", "¼ş");
		set("value", 30);
		set("armor_prop/armor", 2);
		set("armor_prop/personality", -1);
	}
	setup();
}
