// chillgaze.c

#include <ansi.h>

inherit SSERVER;

int exert(object me, object target)
{
	object *ob;
	int i, skill, damage;

	if( !me->is_fighting() )
		return notify_fail("「意寒睨」之術只能在戰鬥中使用。\n");
	me->start_busy(4);

	if( (int)me->query("force") < 50 )
		return notify_fail("你的內力不夠。\n");

	if( !target || target==me ) {
		target = offensive_target(me);
		if( !target) return notify_fail("你要對誰施展「意寒睨」之術﹖\n");
	}

	skill = me->query_skill("force");

	me->add("force", -50);
	me->receive_damage("sen", 20);

	message_vision(
		HIB "$N眼神忽然發出異光﹐雙瞳猶如兩把利刃般盯著$n﹗\n" NOR, me, target);
	
	if( random(target->query("combat_exp")) > (int)me->query("combat_exp") / 2 ) {
		message_vision("$N很快地轉過頭去﹐避開了$n的目光。\n", target, me);
		return 1;
	}

	damage = (int)me->query("force_factor") * 2 - target->query("max_force") / 15;
	if( damage < 1 ) {
		message_vision("但是$N對$n的注視視若無睹....。\n", target, me);
		return 1;
	}

	target->receive_damage("gin", damage);
	if( random(skill) > (int)target->query("cps") * 2 )
		target->receive_wound("gin", damage/2);
	message_vision("$N被$n的目光所攝﹐不自禁地打了個寒噤。\n", target, me);

	return 1;
}

