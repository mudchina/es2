// wizlock.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	int lvl;

	if( me!=this_player(1) ) return 0;
	if( wiz_level(me) < wiz_level("(arch)") )
		return notify_fail("畍单び⊿Τㄏノ硂舦\n");
	if( !arg || arg=="" )
		return notify_fail("Αwizlock <畍单>\n");

	if( sscanf(arg, "%d", lvl)!=1 ) lvl = wiz_level(arg);
	seteuid(getuid());
	if( LOGIN_D->set_wizlock(lvl) ) {
		write("Ok.\n");
		return 1;
	} else
		return notify_fail("絬舦砞﹚ア毖\n");
}

int help (object me)
{
        write(@HELP
Α: wizlock <畍单>
 
琘单ㄏノ秈笴栏
ㄤい畍单だ (immortal) (wizard) (arch) (admin), 璝璶
, 玥块 (player).
 
HELP
);
        return 1;
}
 
