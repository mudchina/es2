// skin_belt.c

#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name( "Å£Æ¤Êø´ø", ({ "skin belt", "belt" }) );
        set_weight(1500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "Ìõ");
                set("value", 5000);
                set("material", "skin");
                set("armor_type", "waist");
                set("armor_prop/armor", 2);
                set("armor_prop/dodge", -2);
        }
}

