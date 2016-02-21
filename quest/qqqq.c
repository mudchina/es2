inherit SKILL;

mapping *quest = ({
        ([      "quest":                "Œ‘¡˙∏⁄«øµ¡",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               10 
        ]),
        ([      "quest":                "¡ı∞≤¬ª",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               6 
        ]),
        ([      "quest":                "∑…‘Ù",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               4
        ]),
        ([      "quest":                "ª§À¬Œ‰…Æ",
                "quest_type":           "…±",
                "time":                 400,
                "exp_bonus":            30,
                "pot_bonus":            12,
                "score" :               5
        ]),
        ([      "quest":                "÷£Õ¿∑Ú",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               8
        ]),
        ([      "quest":                "…’∑π…Æ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            15,
                "score" :               8 
        ]),
        ([      "quest":                "Ω© ¨ Ã’ﬂ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               8
        ]),
       ([      "quest":                "’—“«",
                "quest_type":           "…±",
                "time":                 250,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               5
        ]),
       ([      "quest":                "Õ¡∑À‡∂¬ﬁ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               15 
        ]),
       ([      "quest":                "æﬁ—“ÚŒ",
                "quest_type":           "…±",
                "time":                 330,
                "exp_bonus":            10,
                "pot_bonus":            10,
                "score" :               9
        ]),
       ([      "quest":                "Õ¡∑À◊¶—¿",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            10,
                "pot_bonus":            10,
                "score" :               8
        ]),
       ([      "quest":                "¡¯ªÊ–ƒ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
       ([      "quest":                "¿œ±¯",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               8 
        ]),
        ([      "quest":                "ÃÀ◊” ÷",
                "quest_type":           "…±",
                "time":                 540,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               8
        ]),
        ([      "quest":                "∫Û±∏±¯",
                "quest_type":           "…±",
                "time":                 480,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "¬√øÕ",
                "quest_type":           "…±",
                "time":                 200,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                " È…˙",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               10 
        ]),
        ([      "quest":                "≤ “¬…Ÿ≈Æ",
                "quest_type":           "…±",
                "time":                 400,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "¥¨∑Ú",
                "quest_type":           "…±",
                "time":                 150,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               5 
        ]),
        ([      "quest":                "√˜–ƒ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               8 
        ]),
        ([      "quest":                "ıÀ…Æ»À",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               8 
        ]),
        ([      "quest":                "∆Õ“€",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               3
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

