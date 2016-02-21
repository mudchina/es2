inherit SKILL;

mapping *quest = ({
        ([      "quest":                "÷£Õ¿∑Ú",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "ﬁƒ’ﬂ",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            25,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "ªØ‘µ∫Õ…–",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "ª§À¬Œ‰…Æ",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               15
        ]),
        ([      "quest":                "±ƒ∏",
                "quest_type":           "…±",
                "time":                 50,
                "exp_bonus":            20,
                "pot_bonus":            15,
                "score" :               10
        ]),
        ([      "quest":                "≈©∑Ú",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               12
        ]),
        ([      "quest":                "¬√øÕ",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "È‘∑Ú",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            25,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "∑ —“ÚŒ",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "¥Û—“ÚŒ",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "’—“«",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "‘≤¥∫",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "œß¥∫",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            25,
                "score" :               10
        ]),
        ([      "quest":                "ıÀ…Æ»À",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               10
        ]),
        ([      "quest":                "Ω© ¨ Ã’ﬂ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            40,
                "score" :               10
        ]),
        ([      "quest":                "√˜–ƒ",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            30,
                "score" :               10
        ]),
        ([      "quest":                "«Â–È",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            30,
                "score" :               10
        ]),
});


mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

