// black_vest.c

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("黑絲背心", ({ "black vest", "vest" }) );
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long",
			"這件黑絲背心看起來黑黝黝地不怎麼起眼﹐而且比一般的衣服\n"
			"重了些﹐你仔細一看﹐它的質料非金非帛﹐卻不知是什麼東西\n"
			"織成的。\n");
		set("unit", "件");
		set("value", 14000);
		set("material", "blacksilk");
		set("armor_prop/armor", 30);
		set("armor_prop/armor_vs_force", 70);
		set("armor_prop/attack", -5);
	}
	setup();
}

int query_autoload() { return 1; }
