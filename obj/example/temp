// waterskin.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("牛皮酒袋", ({ "wineskin", "skin" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一個牛皮縫的大酒袋﹐大概裝得八、九升的酒。\n");
		set("unit", "個");
		set("value", 20);
		set("max_liquid", 15);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("liquid", ([
		"type": "alcohol",
		"name": "紅酒",
		"remaining": 15,
		"drunk_apply": 6,
	]) );
}
