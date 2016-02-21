// underwear.c

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("Å®×ÓÙôÒÂ", ({ "underwear" }) );
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¼ş");
		set("value", 300);
		set("material", "cloth");
		set("armor_prop/personality", 5);
		set("female_only", 1);
	}
	setup();
}

