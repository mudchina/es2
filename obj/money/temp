// thousand.c

inherit MONEY;

void create()
{
	set_name("一千兩銀票", ({"thousand-cash", "thousand-cash_money", "cash"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("money_id", "thousand-cash");
		set("long", "一張面額值一千兩銀子的銀票。\n");
		set("unit", "疊");
		set("base_value", 100000);
		set("base_unit", "張");
		set("base_weight", 3);
	}
	set_amount(1);
}

