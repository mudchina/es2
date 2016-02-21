inherit NPC;	
#include <ansi.h>	
int time_period(int timep, object me);		

void create()	
{
        set_name("���ѩ", ({ "Zhu hongxue", "zhu hongxue", "zhu" }) );	

        set("gender", "Ů��");	        
	set("age", 69);
        set("long",
               "���ѩ��ü��Ŀ��������˭���뵽������ɱ����֯���ˡ�\n");	
        set("attitude", "peaceful");	
        set("skill_public",1);	
        set("str", 26000);	
        set("cor", 30);	
        set("int", 24);	        
	set("cps", 30);	

        set("force", 40000);	
        set("max_force", 80000);	
        set("force_factor", 1000);	

        set("combat_exp", 1000000);	
        set("score", 200000);	

        set_skill("unarmed",100);	
        set_skill("dodge", 100);	
        set_skill("force", 100);	    
	set_skill("pyrobat-steps", 100);	

        set_skill("snowshade-force", 100);	
        set_skill("snowshade-sword", 100);	
        set_skill("sword", 100);	
        map_skill("sword","snowshade-sword");	
        map_skill("force","snowshade-force");	
        map_skill("dodge","pyrobat-steps");	
        set("force", 5000);	
        set("max_force", 5000);	
        set("force_factor", 10);	

        create_family("�������", 2, "����");	

        setup();	

        carry_object("/d/latemoon/obj/deer_boot")->wear();	
        carry_object("/d/latemoon/obj/sword")->wield();	
}	

int accept_fight(object me)	
{
        command("say �����ɹ󣡲�Ҫ��Ѱ��·��");	
        return 0;	
}

void init ()
{
        add_action("give_quest", "quest");	
}

int give_quest () 
{
        mapping quest ;	
        object me;	
        int j, combatexp, timep,factor,num,tfinished;	
        string tag = "1000000";	
	string *levels = ({	
		"1000",
		"1500",
		"2000",
		"3000",
		"5000",
		"8000",
		"10000",
		"13000",
		"17000",
		"22000",
		"40000",
		"50000",
		"60000",
		"80000",
		"100000",
		"200000",
		"400000",
		"800000",
		"1000000"
	});

        me = this_player();	
// Let's see if this player still carries an un-expired task	
        if ((int)me->query("combat_exp") <= 1000) {	
		message_vision("���ѩ��ֵ�������$N,˵:" ��ƾ������С��ɫҲ�����⣿\n");
		message_vision("�������!\n");	
	        return 0;	
		}
       if((quest =  me->query("quest"))) {	
       		if( ((int) me->query("task_time")) >  time() )	
                	return 0;	
	    else {	
                message_vision("���ѩ��$Nһ˦���䣬˵������û�ã����������㻹�������Ϸ�ķ��ϣ����ڸ���һ�λ��ᣮ\n", me);		
                me->set("kee", me->query("kee")/2+1);	
		}
		}

        combatexp = (int) me->query("combat_exp");	
        for(j= sizeof(levels) - 1 ; j>=0; j--) {	
                if( atoi(levels[j])  <= combatexp ) {	
			num=j;	
			factor=10;	
			break;	
			}
		}

	if (!(tfinished =  me->query("tfinished"))) {	
		me->set("tfinished",0);					
		tfinished = 0;	
		}
	if (tfinished >= 0) 	
		num += (((int) (tfinished / 3) - (sizeof(level)-1-num))	
			? sizeof(level)-1-num : (int)(tfinished/3);	
	    else 	
		num -= ((int)(-tfinished/3)+1 - num) 	
			? num : (int)(-tfinished/3)+1;	

	tag=levels[num];
        quest = QUEST_D(tag)->query_quest();	
        timep = quest["time"];	
        time_period(timep, me);

	if (quest["quest_type"] == "ɱ") 	 
       	tell_object(me,"����ɱ�ˡ�"+quest["quest"]+"����\n" NOR);	 

        quest["exp_bonus"]=quest["exp_bonus"];
        quest["pot_bonus"]=quest["pot_bonus"];	      
	quest["score"]=quest["score"];	       	

        me->set("quest", quest);
        me->set("task_time", (int) time()+(int) quest["time"]);
        me->set("quest_factor",factor);
	return 1;
}

int time_period(int timep, object me)	
{
	int t, d, h, m, s;
        string time;
        
	t = timep;	
        s = t % 60;             t /= 60;
        m = t % 60;             t /= 60;	 
        h = t % 24;             t /= 24;	
        d = t;	

        if(d) time = chinese_number(d) + "��";	     
	   else time = "";

        if(h) time += chinese_number(h) + "Сʱ";
        if(m) time += chinese_number(m) + "��";	  
        time += chinese_number(s) + "��";	

        tell_object(me,HIW "���ѩ��˼��һ�����˵����\n����" + time + "��");	     
	return 1;
}		