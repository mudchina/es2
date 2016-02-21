// exercise.c

#include <skill.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        int kee_cost, force_gain;

        seteuid(getuid());
        
        if( me->is_fighting() )
                return notify_fail("Õ½¶·ÖĞ²»ÄÜÁ·ÄÚ¹¦£¬»á×ß»ğÈëÄ§¡£\n");

        if( !stringp(me->query_skill_mapped("force")) )
                return notify_fail("Äã±ØĞëÏÈÓÃ enable 
Ñ¡ÔñÄãÒªÓÃµÄÄÚ¹¦ĞÄ·¨¡£\n");

        if( !arg
        ||      !sscanf(arg, "%d", kee_cost) )
                return notify_fail("ÄãÒª»¨¶àÉÙÆøÁ·¹¦£¿\n");

        if( kee_cost < 10 ) return notify_fail("Äã×îÉÙÒª»¨ 10 
µã¡¸Æø¡¹²ÅÄÜÁ·¹¦¡£\n");

        if( (int)me->query("kee") < kee_cost )
                return 
notify_fail("ÄãÏÖÔÚµÄÆøÌ«ÉÙÁË£¬ÎŞ·¨²úÉúÄÚÏ¢ÔËĞĞÈ«Éí¾­Âö¡£\n");

        if( (int)me->query("sen") * 100 / (int)me->query("max_sen") < 70 )
                return notify_fail("ÄãÏÖÔÚ¾«Éñ×´¿öÌ«²îÁË£¬ÎŞ·¨ÄıÉñ×¨Ò»£¡\n");

        if( (int)me->query("gin") * 100 / (int)me->query("max_gin") < 70 )
                return notify_fail("ÄãÏÖÔÚ¾«Á¦²»¹»£¬ÎŞ·¨¿ØÖÆÄÚÏ¢µÄÁ÷¶¯£¡\n");

        write("Äã×øÏÂÀ´ÔËÆøÓÃ¹¦£¬Ò»¹ÉÄÚÏ¢¿ªÊ¼ÔÚÌåÄÚÁ÷¶¯¡£\n");

        me->receive_damage("kee", kee_cost);

        // This function ranged from 1 to 15 when kee_cost = 30
        force_gain = kee_cost * ((int)me->query_skill("force", 1)
                + (int)me->query("con") ) / 300;

        if( force_gain < 1 ) {
                write("µ«ÊÇµ±ÄãĞĞ¹¦Íê±Ï£¬Ö»¾õµÃÈ«Éí¡õÂé¡£\n");
                return 1;
        }

        me->add("force", force_gain );

        if( (int)me->query("force") > (int)me->query("max_force") * 2) {
                if( (int)me->query("max_force") >= 
                        ((int)me->query_skill("force", 1) + 
me->query_skill("force")/5) * 10 ) {
                        
write("µ±ÄãµÄÄÚÏ¢±é²¼È«Éí¾­ÂöÊ±È´Ã»ÓĞ¹¦Á¦ÌáÉıµÄ¼£Ïó£¬ËÆºõÄÚÁ¦ĞŞÎªÒÑ¾­Óöµ½ÁËÆ¿¾
±¡£\n");
                } else {
                        write("ÄãµÄÄÚÁ¦ÔöÇ¿ÁË£¡\n");
                        me->add("max_force", 1);
                }
                me->set("force", me->query("max_force"));
        }       
        
        return 1;
}

int help(object me)
{
        write(@HELP
Ö¸Áî¸ñÊ½ : exercise [<ºÄ·Ñ¡¸Æø¡¹µÄÁ¿£¬Ô¤ÉèÖµ 30>]

ÔËÆøÁ·¹¦£¬¿ØÖÆÌåÄÚµÄÆøÔÚ¸÷¾­Âö¼äÁ÷¶¯£¬½åÒÔÑµÁ·ÈËÌå¼¡Èâ¹Ç÷ÀµÄÄÍ
Á¦¡¢±¬·¢Á¦£¬²¢ÇÒÓÃÄÚÁ¦µÄĞÎÊ½½«ÄÜÁ¿´¢±¸ÏÂÀ´¡£

Çë²Î¿¼ help stats
HELP
        );
        return 1;
}
 
