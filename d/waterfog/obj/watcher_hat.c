// watcher_hat.c

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("Ë®ÑÌ¸óË¾ÊÂÃ±", ({ "watcher hat", "hat" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¶¥");
		set("value", 200);
		set("armor_prop/attack", -2);
		set("armor_prop/armor", 3);
	}
	setup();
}
