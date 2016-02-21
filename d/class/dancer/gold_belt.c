// gold_belt.c

#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name( HIY "Èí½ğÊø´ø" NOR, ({ "gold belt", "belt" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "Ìõ");
		set("value", 27000);
		set("material", "cloth");
		set("armor_type", "waist");
		set("armor_prop/armor", 4);
		set("armor_prop/dodge", -1);
	}
}
