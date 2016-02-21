inherit SKILL;

mapping *quest = ({
        ([      "quest":                "ÎÔÁú¸ÚÇ¿µÁ",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               10 
        ]),
        ([      "quest":                "Ö£ÍÀ·ò",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               6 
        ]),
        ([      "quest":                "²ÊÒÂÉÙÅ®",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               4
        ]),
        ([      "quest":                "·ÉÔô",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            12,
                "score" :               5
        ]),
        ([      "quest":                "±øÆ÷··×Ó",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               8
        ]),
        ([      "quest":                "Áõ°²Â»",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            15,
                "score" :               8 
        ]),
        ([      "quest":                "ÂÃ¿Í",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               8
        ]),
       ([      "quest":                "ÍÁ·Ë×¦ÑÀ",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               5
        ]),
       ([      "quest":                "¾ÞÑÒòÎ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               15 
        ]),
       ([      "quest":                "Ï®ÈË",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            10,
                "pot_bonus":            10,
                "score" :               9
        ]),
       ([      "quest":                "Ô²´º",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            10,
                "pot_bonus":            10,
                "score" :               8
        ]),
/*       ([      "quest":                "Áø»æÐÄ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
       ([      "quest":                "ÀÏ±ø",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               8 
        ]),
        ([      "quest":                "ÌË×ÓÊÖ",
                "quest_type":           "É±",
                "time":                 540,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               8
        ]),
        ([      "quest":                "ºó±¸±ø",
                "quest_type":           "É±",
                "time":                 480,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "ÂÃ¿Í",
                "quest_type":           "É±",
                "time":                 200,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "ÊéÉú",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               10 
        ]),
        ([      "quest":                "²ÊÒÂÉÙÅ®",
                "quest_type":           "É±",
                "time":                 400,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "´¬·ò",
                "quest_type":           "É±",
                "time":                 150,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               5 
        ]),
        ([      "quest":                "Ã÷ÐÄ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               8 
        ]),
        ([      "quest":                "õËÉ®ÈË",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               8 
        ]),
        ([      "quest":                "ÆÍÒÛ",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               3
        ]),
*/
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

