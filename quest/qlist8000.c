inherit SKILL;

mapping *quest = ({
        ([      "quest":                "÷£Õ¿∑Ú",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "Œ‘¡˙∏⁄«øµ¡",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            35,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "≤ “¬…Ÿ≈Æ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "ª§À¬Œ‰…Æ",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               15
        ]),
        ([      "quest":                "∑…‘Ù",
                "quest_type":           "…±",
                "time":                 600,
                "exp_bonus":            40,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "≈©∑Ú",
                "quest_type":           "…±",
                "time":                 120,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               12
        ]),
        ([      "quest":                "¬√øÕ",
                "quest_type":           "…±",
                "time":                 200,
                "exp_bonus":            25,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "È‘∑Ú",
                "quest_type":           "…±",
                "time":                 120,
                "exp_bonus":            15,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "∑ —“ÚŒ",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "¥Û—“ÚŒ",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "æﬁ—“ÚŒ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            50,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "Õ¡∑À◊¶—¿",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            45,
                "pot_bonus":            35,
                "score" :               10
        ]),
        ([      "quest":                "’—“«",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "‘≤¥∫",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "œß¥∫",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "ıÀ…Æ»À",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            10,
                "score" :               10
        ]),
        ([      "quest":                "Ω© ¨ Ã’ﬂ",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            35,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "√˜–ƒ",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "«Â–È",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            35,
                "pot_bonus":            20,
                "score" :               10
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

