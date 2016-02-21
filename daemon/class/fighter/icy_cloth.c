// icy_cloth.c

#include <ansi.h>
#include <armor.h>

inherit CLOTH;

void create()
{
	set_name( HIC "´µÑ©²ÐÔÆÒÂ" NOR, ({ "icy cloth", "cloth" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¼þ");
		set("value", 40000);
		set("material", "cloth");
		set("armor_prop/armor", 10);
		set("armor_prop/dodge", 5);
	}
	setup();
}
