// void_sense.c

#include <ansi.h>

inherit SSERVER;

int conjure(object me, object target)
{
	if( target ) return notify_fail("空識神通只能對自己使用。\n");
	if( me->query("atman") < 50 )
		return notify_fail("你的靈力不夠﹗\n");
	me->add("atman", -50);
	me->receive_damage("gin", 50);
	message_vision(HIY "$N盤膝而座﹐開始運用空識神通靜思入定 ...\n" NOR, me);
	if( random(me->query_skill("magic")) > (int)me->query_int() ) {
		if( random(me->query("max_atman")) < (int)me->query("atman")/2 ) {
			me->add("learned_points", 1);
			write( HIR "你覺得腦中一片混亂﹐你的潛能降低了﹗\n" NOR );
			return 1;
		}
		if( (int)me->query("potential") - (int)me->query("leanred_points") < 500 ) {
			me->add("potential", random( (int)me->query_spi() / 5 ) + 1);
			write( HIG "你的潛能提高了﹗\n" NOR );
			return 1;
		}
	}
	write("可是你只覺得一無所獲。\n");
	return 1;
}
