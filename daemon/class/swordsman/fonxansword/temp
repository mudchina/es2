// counterattack.c

#include <ansi.h>

inherit SSERVER;

int perform(object me, object target)
{
	string msg;

	if( !target ) target = offensive_target(me);

	if( !target
	||	!target->is_character()
	||	!me->is_fighting(target) )
		return notify_fail("牽制攻擊只能對戰鬥中的對手使用。\n");

	if( target->is_busy() )
		return notify_fail(target->name() + "目前正自顧不暇﹐放膽攻擊吧﹗\n");

	msg = CYN "$N使出封山劍法「封」字訣﹐連遞數個虛招企圖擾亂$n的攻勢﹐";

	me->start_busy(1);
	if( random(me->query("combat_exp")) > (int)target->query("combat_exp")/2 ) {
		msg += "結果$p被$P攻了個措手不及﹗\n" NOR;
		target->start_busy( (int)me->query_skill("fonxansword") / 20 + 2);
	} else {
		msg += "可是$p看破了$P的企圖﹐並沒有上當。\n" NOR;
	}
	message_vision(msg, me, target);

	return 1;
}
