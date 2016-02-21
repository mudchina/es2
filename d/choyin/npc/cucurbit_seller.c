// cucurbit_seller.c

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("ÂôÌÇºùÂ«µÄ", ({ "cucurbit chapman", "chapman" }) );
	set("gender", "ÄĞĞÔ" );
	set("age", 42);
	set("combat_exp", 30);
	set("attitude", "friendly");
	set("vendor_goods", ([
	      "ÌÇºùÂ«":__DIR__"obj/cucurbit",
	]) );
	set("chat_chance", 15);
	set("chat_msg", ({
		"ÂôÌÇºùÂ«µÄßººÈµÀ£ºÌÇºùÂ«£¡ºÃÌğºÃÏãµÄÌÇºùÂ«£¡\n",
	}) );
	set("inquiry", ([
		"ÌÇºùÂ«" : (: do_vendor_list :),
	]) );
	setup();
}

void init()
{	
	::init();

	add_action("do_vendor_list", "list");
}

