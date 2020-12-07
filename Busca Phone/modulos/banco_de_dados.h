#include <stdio.h>
#include <stdlib.h>

/*TABELA MENOR QUE 1000*/
    char SAmenor1000[6][20]= {{"GALAXY J7 PRIME"},    /*sansung <1000*/
        {"GALAXY J7 PRIME"},
        {"GALAXY J7 PRIME"},
        {"GALAXY J7 PRIME"},
        {"GALAXY J7 PRIME"},
        {"GALAXY J7 PRIME"}
    };
    int SAmenorpreco1[]= {830,830,830,830,830,830};


    char MOmenor1000[6][20]= {{"MOTO G5 S"},     /*motorola <1000*/
        {"MOTO E PLUS"},
        {"MOTO G5 S"},
        {"MOTO E PLUS"},
        {"MOTO E PLUS"},
        {"MOTO E PLUS"}
    };

    int MOmenorpreco1[6][1]= {899,923,899,923,923,923};


    char LEmenor1000[6][20]= {{"LENOVO VIBE K6"},   /*lenovo <1000*/
        {"LENOVO VIBE K6"},
        {"LENOVO VIBE K6"},
        {"LENOVO VIBE K6"},
        {"LENOVO VIBE K6"},
        {"LENOVO VIBE K6"}
    };
    int LEmenorpreco1[]= {609,609,609,609,609,609};


    char XImenor1000[6][20]= {{"REDMI 5 A"},   /*XIAOMI <1000*/
        {"REDMI 5"},
        {"MI 5 X"},
        {"MI 5 X"},
        {"MI 5 X"},
        {"REDMI 4 X"}
    };
    int XImenorpreco1[]= {509,468,710,710,710,536};

    char IPmenor1000[6][20]= {{"vazio"},   /*IPhone <1000*/
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"}
    };
    int IPmenorpreco1[]= {0,0,0,0,0,0};

    char HUmenor1000[6][20]= {{"HONOR 9 LITE"},   /*HUAWEI <1000*/
        {"HONOR 7X"},
        {"HONOR 9 LITE"},
        {"P20 LITE"},
        {"HONOR 7X"},
        {"HONOR 6X"}
    };
    int HUmenorpreco1[]= {578,657,578,984,656,522};

    char melhor1[6][25]= {{"HONORO 9 LITE (HUAWEI)"},   /* MARCAS MELHORES<1000*/
        {"REDMI 6 PRO (XIAOMI)"},
        {"P 20 PRO (HUAWEI)"},
        {"P 20 PRO (HUAWEI)"},
        {"P 20 PRO (HUAWEI)"},
        {"P 20 PRO (HUAWEI)"},
    };
    int precomelhor1[]= {578,660,578,985,657,536};

/*--------------------------------------------------*/
/*TABELHA 1000 A 15000*/

    char SA1000a1500[6][20]= {{"GALAXY J7 PRO"},   /*SANSUNG >1000 <1500*/
        {"GALAXY J7 PRO"},
        {"GALAXY J7 PRO"},
        {"GALAXY J7 PRO"},
        {"GALAXY J7 PRO"},
        {"GALAXY J7 PRO"}
    };
    int SAmenorpreco2[]= {1080,1080,1080,1080,1080,1080};

    char MO1000a1500[6][20]= {{"MOTO G6 PLAY"},   /*MOTOROLA >1000 <1500*/
        {"MOTO G6"},
        {"MOTO G6 PLAY"},
        {"MOTO G6"},
        {"MOTO G6"},
        {"MOTO G6 PLAY"}
    };
    int MOmenorpreco2[]= {1099,1299,1099,1299,1299,1099};

    char LE1000a1500[6][20]= {{"vazio"},   /*LENOVO >1000 <1500*/
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"}
    };
    int LEmenorpreco2[]= {0,0,0,0,0,0};

    char IP1000a1500[6][20]= {{"vazio"},   /*IPHONE >1000 <1500*/
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"}
    };
    int IPmenorpreco2[]= {0,0,0,0,0,0};

    char XI1000a1500[6][20]= {{"MI 6X"},   /*XIAOMI >1000 <1500*/
        {"MI 5S PLUS"},
        {"MI 6X"},
        {"MI 6X"},
        {"MI 6X"},
        {"MI MAX 2"}
    };
    int XImenorpreco2[]= {1022,1030,1022,1022,1022,1099};

    char HU1000a1500[6][20]= {{"HOMOR 10"},   /*HUAWEI >1000 <1500*/
        {"HOMOR 10"},
        {"P 10"},
        {"HOMOR 10"},
        {"HOMOR 10"},
        {"HOMOR 10"}
    };
    int HUmenorpreco2[]= {1022,1030,1022,1022,1022,1099};

    char melhor2[6][25]= {{"HOMOR 10 (HUAWEI)"},   /*MARCAS MELHORES ENTRE 1000 E 1500*/
        {"MI 5S PLUS (XIAOMI)"},
        {"P 10 (HUAWEI)"},
        {"HOMOR 10 (HUAWEI)"},
        {"MI 6X (XIAOMI)"},
        {"MI MAX 2 (XIAOMI)"},
    };
    int precomelhor2[]= {1482,1030,1437,1482,1022,1099};
/*----------------------------------------*/
/* TABELA DE 1500 A 2000*/

    char SA1500a2000[6][20]= {{"GALAXY A8 PLUS"},   /*SANSUNG >1500 <2000*/
        {"GALAXY A8 PLUS"},
        {"GALAXY A8 PLUS"},
        {"GALAXY A8 PLUS"},
        {"GALAXY A8 PLUS"},
        {"GALAXY A8 PLUS"},
    };
    int SAmenorpreco3[]= {1857,1857,1857,1857,1857,1857};

        char MO1500a2000[6][20]= {{"MOTO Z2 PLAY"},   /*MOTOROLA >10500 <2000*/
        {"MOTO G6 PLUS"},
        {"MOTO Z2 PLAY"},
        {"MOTO Z2 PLAY"},
        {"MOTO G6 PLUS"},
        {"MOTO Z2 PLAY"},
    };
    int MOmenorpreco3[]= {1799,1699,1799,1799,1699,1799};

    char LE1500a2000[6][20]= {{"vazio"},   /*LENOVO >1500 <2000*/
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"}
    };
    int LEmenorpreco3[]= {0,0,0,0,0,0};

    char IP1500a2000[6][20]= {{"IPHONE SE"},   /*IPHONE >1500 <2000*/
        {"IPHONE SE"},
        {"IPHONE SE"},
        {"IPHONE SE"},
        {"IPHONE SE"},
        {"IPHONE SE"},
    };

    int IPmenorpreco3[]= {1999,1999,1999,1999,1999,1999};

        char XI1500a2000[6][20]= {{"MI 8"},   /*XIAOMI >10500 <2000*/
        {"MI 8"},
        {"MI 8"},
        {"MI 8"},
        {"MI 8"},
        {"MI 8"},
    };
    int XImenorpreco3[]= {1874,1874,1874,1874,1874,1874};


        char HU1500a2000[6][20]= {{"MATE 10"},   /*HUAWEI >10500 <2000*/
        {"MATE 10"},
        {"MATE 10"},
        {"P10 PLUS"},
        {"P10 PLUS"},
        {"MATE 10"},
    };
    int HUmenorpreco3[]= {1910,1910,1910,1762,1762,1910};

    /*MELHOR ENTRE 1500 E 2000*/
    char melhor3[6][25]= {{"MI 8 (XIAOMI)"},   /*MARCAS MELHORES ENTRE 1500 E 2000*/
        {"MI 8 (XIAOMI)"},
        {"MI 8 (XIAOMI)"},
        {"MI 8 (XIAOMI)"},
        {"MI 8 (XIAOMI)"},
        {"MI 8 (XIAOMI)"},
    };
    int precomelhor3[]= {1873,1873,1873,1873,1873,1873};

/*----------------------------------------*/
/*TABELA ACIMA DE 2000*/

 char SAmaior2000[6][20]= {{"GALAXY A8"},   /*SANSUNG >2000*/
        {"GALAXY S8"},
        {"GALAXY A7"},
        {"GALAXY A8"},
        {"GALAXY S8 PLUS"},
        {"GALAXY S8"},
    };
    int SAmenorpreco4[]= {2460,2600,2299,2460,2600,2600};

char MOmaior2000[6][20]= {{"MOTO Z3 PLAY"},   /*MOTOROLA >2000*/
        {"MOTO Z3 PLAY"},
        {"MOTO Z3 PLAY"},
        {"MOTO Z3 PLAY"},
        {"MOTO Z2 FORCE"},
        {"MOTO Z3 PLAY"},
    };
    int MOmenorpreco4[]= {2699,2699,2699,2699,2111,2699};

char LEmaior2000[6][20]= {{"vazio"},   /*LENOVO >2000*/
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"},
        {"vazio"},
    };
    int LEmenorpreco4[]= {0,0,0,0,0,0};

 char IPmaior2000[6][20]= {{"IPHONE X"},   /*IPHONE >2000*/
        {"IPHONE X"},
        {"IPHONE X"},
        {"IPHONE X"},
        {"IPHONE X"},
        {"IPHONE X"},
    };
    int IPmenorpreco4[]= {4599,4599,4599,4599,4599,4599};

  char XImaior2000[6][20]= {{"MI 8"},   /*XIAOMI >2000*/
        {"MI 8"},
        {"MI 8"},
        {"MI 8"},
        {"MI 8"},
        {"MI 8"},
    };
    int XImenorpreco4[]= {2000,2000,2000,2000,2000,2000};

    char HUmaior2000[6][20]= {{"P 20 PRO"},   /*HUAUMI >2000*/
        {"P 20 PRO"},
        {"P 20 PRO"},
        {"P 20 PRO"},
        {"P 20 PRO"},
        {"P 20 PRO"},
    };
    int HUmenorpreco4[]= {2900,2900,2900,2900,2900,2900};

    /*MELHOR ACIMA DE 2000*/
    char melhor4[6][25]= {{"P 20 PRO (HUAWEI)"},   /*MARCAS MELHORES ACIMA DAE 2000*/
        {"P 20 PRO (HUAWEI)"},
        {"P 20 PRO (HUAWEI)"},
        {"IPHONE X (IPHONE)"},
        {"P 20 PRO (HUAWEI)"},
        {"P 20 PRO (HUAWEI)"},
    };
    int precomelhor4[]= {2900,2900,2900,4599,2900,2900};




