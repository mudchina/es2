// lifeheal.c

#include <ansi.h>

int exert(object me, object target)
{
	if( !target )
		return notify_fail("你要用真氣為誰療傷﹖\n");

	if( me->is_fighting() || target->is_fighting())
		return notify_fail("戰鬥中無法運功\療傷﹗\n");

	if( (int)me->query("force") - (int)me->query("max_force") < 150 )
		return notify_fail("你的真氣不夠。\n");

	if( (int)target->query("eff_kee") < (int)target->query("max_kee") / 5 )
		return notify_fail( target->name() + "已經受傷過重﹐經受不起你的真氣震盪﹗\n");

	message_vision(
		HIY "$N坐了下來運起內功\﹐將手掌貼在$n背心﹐緩緩地將真氣輸入$n體內....\n\n"
		"過了不久﹐$N額頭上冒出豆大的汗珠﹐$n吐出一口瘀血﹐臉色看起來紅潤多了。\n" NOR,
		me, target );

	target->receive_curing("kee", 10 + (int)me->query_skill("force")/3 );
	me->add("force", -150);
	me->set("force_factor", 0);

	return 1;
}
