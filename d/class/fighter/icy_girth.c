// icy_girth.c

#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name( HIC "´µÑ©²ÐÔÆ´ø" NOR, ({ "icy girth", "girth" }) );
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "Ìõ");
		set("value", 7000);
		set("material", "cloth");
		set("armor_type", "waist");
		set("armor_prop/armor", 1);
		set("armor_prop/dodge", 5);
	}
}
