// spells_book.cok.c

inherit ITEM;

void create()
{
        set_name("·ûÖä¼ò½é", ({ "spellsbook" }));
        set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "±¾");
                set("long",

"ÕâËÆºõÊÇÒ»±¾·ûÖäµÄ¼ò½é£¬ÀïÃæ»­×ÅÒ»Ð©Ï¡Ææ¹Å¹ÖµÄ·ûºÅ\n"
                );
                set("value", 260);
                set("material", "paper");
                set("skill", ([
                        "name":     "spells",    // name of the skill
                    "exp_required": 100, // minimum combat experience equired
                        "sen_cost":  30, // gin cost every time study this
                      "difficulty":  10,//the base int to learn this skill
        // modify is gin_cost's (difficulty - int)*5%³)
                    "max_skill":  20 // the maximum level you can learn

        // from this object.
                ]) );
        }
}
