//seal.c

#include <ansi.h>

inherit ITEM;

void create()
{
    set_name("[1;33mÓ¡¼ø[0m",({ "seal" }) );
	set("long", "·ºÖø»Æ¹â£¬ÉÏÃæ¿ÌÖøÕò¹ú´ó½«¾ü¡£\n");
	set("unit", "¿Å");
	set("base_weight", 200);

	set("no_sell", 1);
}


