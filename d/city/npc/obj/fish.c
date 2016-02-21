inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("Î÷ºş´×Óã", ({ "fish" }));
	set_weight(1000);

	if( clonep() )
		set_default_object(__FILE__);
	    else {
		set("long", "Ò»ÅÌÎ÷ºş´×Óã£¬ÏãÆøËÄÒç£¬ÈÃÈË´¹ÏÑÓûµÎ¡£\n");
		set("unit", "ÅÌ");
		set("value", 500);
		set("food_remaining", 6);
		set("food_supply", 90);
		}
}

