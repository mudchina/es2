// steel_fork.c

#include <weapon.h>

inherit FORK;

void create()
{
	set_name("¤­ªÑ¿û¤e", ({ "steel fork" }) );
	set_weight(30000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "§â");
		set("value", 3400);
		set("material", "steel");
	}
	init_fork(50);

	setup();
}
