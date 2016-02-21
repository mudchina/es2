inherit COMBINED_ITEM;

void create()
{
        set_name("ÏÉµ¤", ({"tablet"}));
        set("long",     "ÕâÊÇÒ»Á£ÏÉµ¤£¬·şÊ³¿ÉÎ»ÁĞÏÉ°à¡£\n"
);
        set("unit", "Á£");
        set("value",100); 
        set("base_unit", "Á£");
        set("base_weight", 10000);
        set_amount(1);
}

void init()
{
        if( this_player()==environment() )
                add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        if( !arg || arg != "tablet")  return notify_fail("ÄãÒª³ÔÉõÃ´ÄØ? \n");
        message_vision(
           "$NÄÃ³öÒ»Á£ÏÉµ¤£¬ÄÉÈë¿ÚÖĞ. ³ÔµÄÌ«¼±, ±ÇÌéÑÛÀáÁ÷ÁËÂúÁ³..\n"
           ,this_player()  );
        this_player()->receive_heal("gin", 5);
        this_player()->receive_heal("kee", 30);
        this_player()->receive_heal("sen", 5);

        add_amount(-1);
        return 1;
} 
