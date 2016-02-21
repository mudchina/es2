// magic_book.c

inherit ITEM;

void create()
{
        set_name("Ä§·¨ÈëÃÅ", ({ "magicbook" }));
        set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "±¾");
                set("long",

"ÕâËÆºõÊÇÒ»±¾Ä§·¨µÄÈëÃÅÊé£¬ÀïÃæËµÁËÒ»Ğ©Ï¡Ææ¹Å¹ÖµÄºÍÒ»°ãµÄÎäÑ§²»Í¬µÄ¶«Î÷\n"
                );
                set("value", 260);
                set("material", "paper");
                set("skill", ([
                        "name":     "magic",    // name of the skill
                    "exp_required": 100, // minimum combat experience equired
                        "sen_cost":  30, // gin cost every time study this
                      "difficulty":  10,//the base int to learn this skill
        // modify is gin_cost's (difficulty - int)*5%³)
                    "max_skill":  20 // the maximum level you can learn

        // from this object.
                ]) );
        }
}
