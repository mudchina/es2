inherit SKILL;

mapping *quest = ({
        ([      "quest":                " ÿ≥«πŸ±¯",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            12,
                "score" :               9 
        ]),
        ([      "quest":                "∫’‘Ïª˘",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               9 
        ]),
        ([      "quest":                "∂¿—€Õ∑Õ”",
                "quest_type":           "…±",
                "time":                 100,
                "exp_bonus":            20,
                "pot_bonus":            10,
                "score" :               5 
        ]),
        ([      "quest":                "‹Ω‘∆",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            30,
                "pot_bonus":            12,
                "score" :               5
        ]),
        ([      "quest":                "√Œ”Ò¬•",
                "quest_type":           "…±",
                "time":                 300,
                "exp_bonus":            20,
                "pot_bonus":            20,
                "score" :               8
        ]),
       ([      "quest":                "∞≤œßÂ«",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            30,
                "pot_bonus":            20,
                "score" :               5
        ]),
       ([      "quest":                "Œ‰πŸ",
                "quest_type":           "…±",
                "time":                 500,
                "exp_bonus":            40,
                "pot_bonus":            20,
                "score" :               15
        ]),
       ([      "quest":                "œÿ≥«πŸ±¯",  
               "quest_type":           "…±",
               "time":                  500,
               "exp_bonus":             40,
               "pot_bonus":             20,
               "score" :                8
         ]),
});

mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

