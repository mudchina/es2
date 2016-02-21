// eye_patch.c

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("ºÚÑÛÕÖ", ({ "eye patch", "patch" }) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¸±");
		set("material", "cloth");
		set("value", 30);
		set("armor_prop/attack", 3);
		set("armor_prop/defense", -3);
	}
	setup();
}
