inherit SKILL;

mapping *quest = ({
        ([      "quest":                "ÆòØ¤",
                "quest_type":           "É±",
                "time":                 200,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               6
        ]),
        ([      "quest":                "ÀîÊ¦Ê¦",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               5
        ]),
        ([      "quest":                "±¦¹Ù",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               4
        ]),
        ([      "quest":                "Öª¿ÍÉ®",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               5
        ]),
        ([      "quest":                "²Ã·ì",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            40,
                "score" :               8
        ]),
        ([      "quest":                "²è¹¤",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            28,
                "pot_bonus":            18,
                "score" :               12
        ]),
        ([      "quest":                "·è¹·",
                "quest_type":           "É±",
                "time":                 40,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               5
        ]),
        ([      "quest":                "Ò°¹·",
                "quest_type":           "É±",
                "time":                 40,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               5
        ]),
        ([      "quest":                "¶Å¿í",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               8
        ]),
        ([      "quest":                "ÊÕÆÆÀÃµÄ",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               12
        ]),
       ([      "quest":                "ÍõÌú½³",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               8
        ]),
        ([      "quest":                "É¨µØÉ®",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            35,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "½øÏã¿Í",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
       ([      "quest":                "ÎºÎÞ¼«",
                "quest_type":           "É±",
                "time":                 40,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
       ([      "quest":                "Îä¹ÝµÜ×Ó",
                "quest_type":           "É±",
                "time":                 100,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               20
        ]),
        ([      "quest":                "Âô±ý´óÊå",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               8
        ]),
        ([      "quest":                "ÂôÌÇºùÂ«µÄ",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "Âô°ü×ÓµÄ",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               8
        ]),
        ([      "quest":                "¼Ò¶¡",
                "quest_type":           "É±",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "ÑÒòÎ",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            50,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "Ö©Öë",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "½ðË¿È¸",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "Ò©É®",
                "quest_type":           "É±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

