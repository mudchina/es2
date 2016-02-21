
//hat.c

#include <ansi.h>

inherit EQUIP;

void create()
{
    set_name( MAG"ÃÔ»Ã" NOR""HIM"¾­ÂÚ" NOR, ({ "dream hat", "hat" }));
	set_weight(500);
	if ( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¶¥");
		set("value", 7000);
		set("material", "cloud");
		set("armor_type", "head");
		set("armor_prop/spells", 5);
        set("armor_prop/intelligence", 3);
	}
}
