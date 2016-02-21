// hat.c

inherit EQUIP;

void create()
{
	set_name("±ÌÓñ¹Ú", ({ "jade hat", "hat" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¶¥");
		set("long", "Ò»¶¥ÏâÖøÒ»¿é±ÌÓñµÄµÀ¹Ú¡£\n");
		set("value", 2000);
		set("material", "cloth");
		set("armor_type", "head");
		set("armor_prop/armor", 1);
		set("armor_prop/spells", 3);
	}
}
