//girl_yu
inherit NPC;
 
void create()
{
        set_name("Ü½ÔÆ", ({ "fuyun" }) );
        set("gender", "Å®ÐÔ" );
        set("age",17);
        set("long", @TEXT
TEXT
);
        set("combat_exp", 50000);
        set_skill("unarmed",20);
        set_skill("force",100);
//
        set_skill("force",100);
        set("force",4500);
        set("max_force",4500);
        set("force_factor",20);
        set("attitude","peaceful");
        setup();
}
