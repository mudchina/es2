inherit NPC;
 
void create()
{
        set_name("æ¾Å®", ({ "girl","servant" }) );
        set("gender", "Å®ĞÔ" );
        set("age",18);
        set("long", @TEXT
TEXT
);
       set("class", "dancer");
       set("combat_exp", 100);
        set_skill("unarmed", 5);
        set_skill("dodge", 10);
        set_skill("force",50);
        set("force", 50);
        set("max_force", 50);

        setup();
        carry_object("/d/latemoon/obj/skirt")->wear();
}

