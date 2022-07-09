typedef struct struct_1 {
    unsigned long long field_0;
    char field_1;
    char padding_2[6];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char field_1;
    char padding_2[6];
    unsigned long long field_8;
} struct_3;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char crown;
extern char g_402863;
extern unsigned int g_4080b8;
extern unsigned int g_4080ef;
extern unsigned int g_408104;
extern unsigned int g_408114;
extern unsigned int g_40812f;
extern unsigned int g_408650;
extern unsigned int g_408678;
extern struct_0 g_4086d8;
extern unsigned long long g_408f21;
extern struct_0 goal_width;
extern unsigned int long_options;
extern unsigned int max_width;
extern unsigned long long optarg;
extern struct_0 optind;
extern char *prefix;
extern unsigned int prefix_full_length;
extern unsigned int prefix_lead_space;
extern unsigned int prefix_length;
extern char split;
extern char tagged;
extern char uniform;

int main()
{
    BOT tmp_27;  // tmp #27
    unsigned long v0;  // [bp+0x0]
    unsigned int v10;  // edx
    unsigned long long|unsigned int v11;  // rbx
    unsigned long long v12;  // rbx
    struct_3 * v13;  // rbp
    struct_1 *v14;  // rsi
    unsigned long long v15;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r14
    char * v2;  // rax
    unsigned long long v20;  // r15
    unsigned long long v21;  // r15
    unsigned long long v3;  // rax
    struct_0 *|unsigned int v4;  // rax
    unsigned long long v7;  // rax

    uniform = 1;
    tagged = 1;
    split = 1;
    v19 = optarg;
    crown = 1;
    v20 = optarg;
    prefix_lead_space = 0;
    v18 = 0;
    v16 = v15;
    v13 = v14;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4080b8, &g_408650);
    textdomain(&g_4080b8);
    atexit();
    uniform = 0;
    split = 0;
    tagged = 0;
    crown = 0;
    max_width = 75;
    prefix = &g_408f21;
    prefix_full_length = 0;
    prefix_lead_space = 0;
    prefix_length = 0;
    if (*(optarg) == 32)
    {
        /* goto 4204608; */
        if (*(v20) != 32)
        {
            prefix_lead_space = v10;
            /* goto 4204628; */
        }
    }
    if (((int)v15) > 1)
    {
        if (*(v14->field_1) == 45)
        {
            if (((int)*(v14->field_1 + 1)) - 48 <= 9)
            {
                v18 = v14->field_1 + 1;
                v16 = ((long long)(((int)v15) - 1));
                v13 = v14 + 8;
                v14->field_1 = v14->field_0;
                /* goto 4204436; */
            }
        }
    }
    if (*(v20) == 32 || *(optarg) == 32)
    {
        v10 = ((int)(((long long)(1 - ((int)optarg))) + v20));
        v20 += 1;
    }
    if (*(v20) != 32 || *(optarg) != 32)
    {
        prefix = v20;
        rsp<8> = rsp<8> - 8;
        v0 = &g_402863;
        prefix_full_length = (int)strlen(v20);
        v2 = ((long long)prefix_full_length) + v20;
        if (v20 >= ((long long)prefix_full_length) + v20)
        {
            /* goto 4204679; */
        }
    }
    v19 = 0;
    if (*(v2 + 0x1) == 32 && (v20 < ((long long)prefix_full_length) + v20 || v20 != v2) && (*(v20) != 32 || v20 != v2 || *(optarg) != 32))
    {
        v2 -= 1;
    }
    if (v20 == v2 && *(v20) != 32 || v20 == v2 && *(optarg) != 32 || *(v20) != 32 && v20 >= ((long long)prefix_full_length) + v20 || v20 != v2 && *(v2 + 0x1) != 32 || v20 >= ((long long)prefix_full_length) + v20 && *(optarg) != 32)
    {
        *(v2) = 0;
        v4 = ((int)(v2 - v20));
        prefix_length = ((int)(v2 - v20));
    }
    v21 = getopt_long(((int)v16), ((int)v13), &g_4080ef, &long_options, 0x0);
    if (((int)v21) != -1)
    {
        if (((int)v21) <= 119)
        {
            if (((int)v21) > 98)
            {
                v4 = v21 - 99;
                if (((int)(v21 - 99)) <= 20)
                {
                    v7 = ((long long)*(g_4086d8 + v4 * 4)) + &g_4086d8;
                    /* goto v7; */
                }
            }
            else
            {
                if (((int)v21) == -131)
                {
                    version_etc();
                    exit(0x0); /* do not return */
                }
                if (((int)v21) == -130)
                {
                    usage(); /* do not return */
                }
            }
        }
        if (((int)v21) > 119 || ((int)(v21 - 99)) > 20 && ((int)v21) > 98 || ((int)v21) <= 98 && ((int)v21) != -131 && ((int)v21) != -130)
        {
            if (((int)(v21 - 48)) > 9)
            {
                usage(); /* do not return */
            }
            error(0x0, 0x0, dcgettext(0x0, &g_408678, 0x5));
            usage(); /* do not return */
        }
    }
    if (v18 != 0)
    {
        dcgettext(0x0, &g_408104, 0x5);
        max_width = (int)xdectoumax();
        if (v19 != 0)
        {
            dcgettext(0x0, &g_408104, 0x5);
            goal_width = xdectoumax();
            /* goto 4204967; */
        }
    }
    else if (v19 != 0)
    {
        dcgettext(0x0, &g_408104, 0x5);
        goal_width = xdectoumax();
        max_width = goal_width + 10;
        /* goto 4204967; */
    }
    if (v19 == 0)
    {
        goal_width = ((int)((max_width * 187 >> 31 CONCAT max_width * 187) % 200));
    }
    v3 = ((long long)optind);
    if (optind != ((int)v16))
    {
        v18 = 0;
        v11 = 1;
        if (((char)(((long long)optind) < v16)))
        {
            do
            {
                if (*(v13 + (v3 << 3)).field_0 == 45 && *(v14 + 0x1) == 0)
                {
                    v18 = 1;
                    v11 = ((long long)(v11 & fmt()));
                }
                if (*(v13 + (v3 << 3)).field_0 != 45 || *(v14 + 0x1) != 0)
                {
                    v15 = fopen(v14, "r");
                    if (v15 != 0)
                    {
                        v11 = ((long long)(v11 & fmt()));
                    }
                    else
                    {
                        v11 = 0;
                        v21 = (long long)quotearg_style();
                        error(0x0, *(__errno_location()), dcgettext(0x0, &g_408114, 0x5));
                    }
                }
                v3 = ((long long)(optind + 1));
                optind = optind + 1;
            }
            while (((int)v3) < ((int)v16));
            if (((long long)v18) == 0)
            {
                v12 = ((long long)(v11 ^ 1));
                tmp_27 = v12;
                return ((long long)tmp_27);
            }
        }
        else
        {
            v12 = ((long long)(v11 ^ 1));
            tmp_27 = v12;
            return ((long long)tmp_27);
        }
    }
    else
    {
        v11 = (long long)fmt();
    }
    if (optind == ((int)v16) || ((char)(((long long)optind) < v16)) && ((long long)v18) != 0)
    {
        v3 = rpl_fclose();
        if (v3 == 0)
        {
            v12 = ((long long)(v11 ^ 1));
            tmp_27 = v12;
            return ((long long)tmp_27);
        }
        else
        {
            v17 = dcgettext(0x0, &g_40812f, 0x5);
            error(0x1, *(__errno_location()), "%s");
        }
    }
}
