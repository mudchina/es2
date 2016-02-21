#include <armor.h>
inherit BOOTS;

void create()
{
        set_name("Ðå»¨Ð¬", ({ "flower boots","boots" }) );
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "¼þ");
                set("value", 2500);
                set("armor_prop/armor", 3);
        }
        setup();
}
