// leather.c

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("Æ¤ÒÂ", ({ "leather" }) );
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("value", 200);
		set("material", "leather");
		set("unit", "¼þ");
		set("armor_prop/armor", 5);
	}
	setup();
}
