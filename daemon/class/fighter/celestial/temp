// roar.c

#include <ansi.h>

inherit F_CLEAN_UP;

int exert(object me, object target)
{
	object *ob;
	int i, skill, damage;

	if( !me->is_fighting() )
		return notify_fail("天邪虎嘯只能在戰鬥中使用。\n");

	if( (int)me->query("force") < 150 )
		return notify_fail("你的內力不夠。\n");

	skill = me->query_skill("force");

	me->add("force", -150);
	me->receive_damage("kee", 10);

	me->start_busy(5);
	message_vision(
		HIR "$N深深地吸一口氣﹐開始發出有如猛虎般的嘯聲﹗\n" NOR, me);

	ob = all_inventory(environment(me));
	for(i=0; i<sizeof(ob); i++) {
		if( !living(ob[i]) || ob[i]==me ) continue;
		if( skill/2 + random(skill/2) < (int)ob[i]->query("cps") * 2 ) continue;
		
		damage = skill - ((int)ob[i]->query("max_force") / 10);
		if( damage > 0 ) {
			ob[i]->receive_damage("sen", damage);
			if( (int)ob[i]->query("force") < skill * 2 )
				ob[i]->receive_wound("sen", damage/2);
			tell_object(ob[i], "你覺得眼前一陣金星亂冒﹐耳朵痛得像是要裂開一樣﹗\n");
		}
		
		if( userp(ob[i]) ) ob[i]->fight_ob(me);
		else if( !ob[i]->is_killing(me) ) ob[i]->kill_ob(me);
	}

	return 1;
}

