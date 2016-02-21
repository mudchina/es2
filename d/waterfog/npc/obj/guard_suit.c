// guard_suit.c

#include <armor.h>

inherit ARMOR;

void create()
{
	set_name("Ë®ÑÌ¸óÎäÊ¿ë©", ({ "guard suit", "suit" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¼ş");
		set("value", 1400);
		set("armor_prop/armor", 10);
	}
	setup();
}
