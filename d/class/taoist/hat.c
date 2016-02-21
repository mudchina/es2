// hat.c

inherit EQUIP;

void create()
{
	set_name("ÈýÇåÉñ¹Ú", ({ "trimystic hat", "hat" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¶¥");
		set("value", 7000);
		set("material", "cloth");
		set("armor_type", "head");
		set("armor_prop/armor", 1);
		set("armor_prop/spells", 6);
	}
}
