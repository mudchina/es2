inherit SKILL;

mapping *quest = ({
       ([      "quest":                "¿Ó–≈",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            60,
                "pot_bonus":            30,
                "score" :               20
        ]),
       ([      "quest":                "—œÕ¢“Û",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            100,
                "pot_bonus":            50,
                "score" :               30
        ]),
       ([      "quest":                "∫’‘Ïª˘",
                "quest_type":           "…±",
                "time":                 200,
                "exp_bonus":            50,
                "pot_bonus":            20,
                "score" :               15
        ]),
       ([      "quest":                "¿«π∑",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            80,
                "pot_bonus":            40,
                "score" :               20
        ]),
       ([      "quest":                "≥£¿œ¥Û",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            100,
                "pot_bonus":            50,
                "score" :               30
        ]),
       ([      "quest":                "¿∂”Í√∑",
                "quest_type":           "…±",
                "time":                 50,
                "exp_bonus":            40,
                "pot_bonus":            15,
                "score" :               15
        ]),
       ([      "quest":                "¿∂Û„ﬁ±",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               15
        ]),
       ([      "quest":                "Õ¡∑À ◊¡Ï",
                "quest_type":           "…±",
                "time":                 400,
                "exp_bonus":            60,
                "pot_bonus":            35,
                "score" :               15
        ]),
       ([      "quest":                "∑Ë¿œÕ∑◊”",
                "quest_type":           "…±",
                "time":                 400,
                "exp_bonus":            70,
                "pot_bonus":            40,
                "score" :               15
        ]),
        ([      "quest":                " ÿ≥«πŸ±¯",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            12,
                "score" :               9 
        ]),
        ([      "quest":                "ƒ™–¿∑º",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               9 
        ]),
        ([      "quest":                "–œ«ßª€",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               5 
        ]),
        ([      "quest":                "‹Ω‘∆",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            12,
                "score" :               5
        ]),
        ([      "quest":                "√Œ”Ò¬•",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               8
        ]),
       ([      "quest":                "∞≤œßÂ«",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               5
        ]),
       ([      "quest":                "Œ‰πŸ",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               15
        ]),
       ([      "quest":                "œÿ≥«πŸ±¯",  
               "quest_type":           "…±",
               "time":                  300,
               "exp_bonus":             40,
               "pot_bonus":             20,
               "score" :                8
         ]),
});

mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

