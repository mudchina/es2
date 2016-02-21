// heal.c

#include <ansi.h>

int exert(object me, object target)
{
	if( me->is_fighting() )
		return notify_fail("戰鬥中運功\療傷﹖找死嗎﹖\n");

	if( (int)me->query("force") - (int)me->query("max_force") < 50 )
		return notify_fail("你的真氣不夠。\n");

	if( (int)me->query("eff_kee") < (int)me->query("max_kee") / 2 )
		return notify_fail("你已經受傷過重﹐只怕一運真氣便有生命危險﹗\n");

	write( HIW "你全身放鬆﹐坐下來開始運功\療傷。\n" NOR);
	message("vision",
		HIW + me->name() + "坐下來運功\療傷﹐臉上一陣紅一陣白﹐不久﹐吐出一口瘀血﹐臉色看起來好多了。\n" NOR,
		environment(me), me);

	me->receive_curing("kee", 10 + (int)me->query_skill("force")/5 );
	me->add("force", -50);
	me->set("force_factor", 0);

	return 1;
}
