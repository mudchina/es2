// cloud_armor

#include <armor.h>
#include <ansi.h>

inherit ARMOR;
//inherit F_UNIQUE;

void create()
{
	set_name(RED"»ð ÔÆ "HIB"Õ½ ¼×"NOR,({ "cloud armor","armor" }) );
	set_weight(12000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¼þ");
		set("material", "cloud");
		set("value",12000);
		set("armor_prop/armor", 40);
        set("replica_ob", __DIR__"armor");
	}
	setup();
}

