inherit SKILL;

mapping *quest = ({
        ([      "quest":                "´¬·ò",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "ÅËÈôÇï",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            16,
                "score" :               10
        ]),
        ([      "quest":                "ÞÄÕß",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            35,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "±¦¹Ù",
                "quest_type":           "É±",
                "time":                 50,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "»¯ÔµºÍÉÐ",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "»¤ËÂÎäÉ®",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            50,
                "pot_bonus":            40,
                "score" :               15
        ]),
        ([      "quest":                "ð±Ä¸",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "ÔÓ»õ··",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "Å©·ò",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               12
        ]),
        ([      "quest":                "Àî»ðÊ¨",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "ÂÃ¿Í",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "éÔ·ò",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            25,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "¹ó¹«×Ó",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "·ÊÑÒòÎ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            45,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "´óÑÒòÎ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            45,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "ºûµû",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "·¼ç±",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "ÕÑÒÇ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            35,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "Ô²´º",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            35,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "Ï§´º",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "õËÉ®ÈË",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "ÐþÕæ",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "Ã÷ÐÄ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            35,
                "pot_bonus":            35,
                "score" :               10
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

