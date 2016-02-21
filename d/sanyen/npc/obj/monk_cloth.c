// monk_cloth.c

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("»Ò²¼É®ÒÂ", ({ "cloth" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¼þ");
		set("material", "cloth");
		set("armor_prop/armor", 2);
	}
	setup();
}
