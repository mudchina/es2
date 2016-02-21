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
        set_skill("unarmed", 50);
        set_skill("dodge", 70);
        set_skill("sword", 100);
        set_skill("stormdance", 30);
        set_skill("force",100);
        map_skill("dodge","stormdance");
        set("force",1600);
        set("max_force",800);
        set("force_factor", 10);
        set("attitude","peaceful");
        create_family("åÐÒ£ÅÉ",7,"µÜ×Ó");
        setup();
        add_money("silver", 5);
        carry_object("/obj/example/sword")->wield();
         carry_object("/obj/example/dumpling");
        carry_object(__DIR__"obj/letter");
}
