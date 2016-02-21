// soulimpaler.c

#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
	set_name( HIW "邪劍穿靈" NOR, ({ "soulimpaler", "sword" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long", "這是一把血紅色的的長劍﹐份量大約有十來斤左右。\n");
		set("value", 4000000);
		set("material", "crimsonsteel");
		set("wield_msg", "$N「唰」地一聲抽出一把$n握在手中。\n");
		set("unequip_msg", "$N將手中的$n插入背後的劍鞘。\n");
	}
	init_sword(80);
	setup();
}
