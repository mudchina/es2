// hell_armor.c

#include <armor.h>

inherit ARMOR;

void create()
{
	set_name("Ú¤¸®Õ½¼×", ({ "hell armor", "armor" }) );
	set_weight(70000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¼þ");
		set("material", "steel");
		set("value", 19000);
		set("armor_prop/armor", 50);
		set("armor_prop/dodge", -15);
		set("armor_prop/armor_vs_force", 50);
		set("armor_prop/defense", 10);
	}
	setup();
}
