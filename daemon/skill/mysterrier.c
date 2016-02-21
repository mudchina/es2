// mysterrier.c

inherit SKILL;

string *dodge_msg = ({
        "$n��Ӱһת�����׵رܿ�����һ�С�\n",
        "$n����Ʈ������һ�㣬��һ�٣���������һ�ԡ�\n",
        "����$n��Ӱһ�࣬�ڼ䲻�ݷ�֮�ʴ��ݵرܿ�����һ�С�\n",
        "$n���ζ�Ȼ�θߣ�ʹ$N�Ĺ��ƾ�����ա�\n",
        "$n����һ�㣬��Ӱ���󻬿����ߣ����˿�ȥ��\n",
});

int valid_enable(string usage)
{
        return (usage=="dodge") || (usage=="move");
}

int valid_learn(object me)
{
        if( me->query_skill_mapped("force") != "mystforce" )
                return notify_fail("�����߾�������ϲ����ķ�ʹ�á�\n");
	if ( me->query_skill("music") < me->query_skill("mysterrier")/2 )
		return notify_fail("�������֮ѧ��Ϊ�������޷����������Ĳ����߾���");

        return 1;
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 20
        ||      (int)me->query("sen") < 20 )
                return notify_fail("��������񲻹��������������߾���\n");
        me->receive_damage("kee", 20);
        me->receive_damage("sen", 20);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("scholar") + "/mysterrier/" + action;
}