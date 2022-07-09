typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_1 cached_modes;
extern <missing-type> decimal_point;
extern struct_0 decimal_point_len;
extern char dont_sync;
extern char follow_links;
extern char force_sync;
extern unsigned int g_411190;
extern unsigned int g_4111b8;
extern unsigned int g_411200;
extern unsigned int g_411248;
extern unsigned int g_411716;
extern unsigned int g_411757;
extern unsigned int g_41175d;
extern unsigned long long g_4128c1;
extern char interpret_backslash_escapes;
extern unsigned int long_options;
extern struct_0 optarg;
extern struct_1 optind;
extern struct_0 trailing_delim;

int main()
{
    BOT tmp_19;  // tmp #19
    unsigned long long v0;  // [bp-0xe8]
    unsigned long v1;  // [bp-0xd0]
    unsigned long|unsigned long long|unsigned int v11;  // rax
    unsigned long long|unsigned int v12;  // rax
    char **v14;  // rax
    unsigned long long|unsigned int v15;  // ebx
    unsigned int v16;  // ebp
    unsigned long v17;  // rsi
    unsigned int v18;  // edi
    char *v19;  // rdi
    unsigned long|unsigned long long v2;  // [bp-0xc8]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long|struct_0 * v22;  // r14
    char *|unsigned long long v23;  // r15
    unsigned long v3;  // [bp-0xc0]

    v16 = v18;
    ((unsigned int)v15) = v17;
    set_program_name();
    setlocale();
    bindtextdomain(&g_411716, &g_411190);
    textdomain(&g_411716);
    v14 = localeconv();
    v19 = (*(v14[0]) == 0? "." : v14[0]);
    v21 = 0;
    v20 = 0;
    decimal_point = (*(v14[0]) == 0? "." : v14[0]);
    decimal_point_len = strlen(v19);
    atexit();
    while (true)
    {
        v12 = getopt_long(v16, ((int)v17), &g_411757, &long_options, 0x0);
        if (((int)v12) != -1)
        {
            if (((int)v12) == 99)
            {
                interpret_backslash_escapes = 0;
                v21 = optarg;
                trailing_delim = "\n";
            }
            else if (((char)(v12 <= 99)))
            {
                if (((int)v12) == 0)
                {
                    v0 = 1;
                    v12 = ((int)*(cached_modes + (long long)__xargmatch_internal() * 4));
                    if (v12 == 1)
                    {
                        force_sync = 1;
                        dont_sync = 0;
                    }
                    else if (v12 != 2)
                    {
                        force_sync = 0;
                        dont_sync = 0;
                    }
                    else
                    {
                        force_sync = 0;
                        dont_sync = 1;
                    }
                }
                else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    if (((int)v12) == 76)
                    {
                        follow_links = 1;
                    }
                    else
                    {
                        usage(); /* do not return */
                    }
                }
                else
                {
                    if (((int)v12) == -131)
                    {
                        version_etc();
                        exit(0x0); /* do not return */
                    }
                    else if (((int)v12) == -130)
                    {
                        usage(); /* do not return */
                    }
                    else
                    {
                        usage(); /* do not return */
                    }
                }
            }
            else
            {
                if (((int)v12) != 116)
                {
                    if (((int)v12) == 128)
                    {
                        interpret_backslash_escapes = 1;
                        v21 = optarg;
                        trailing_delim = &g_4128c1;
                    }
                    else if (((int)v12) == 102)
                    {
                        v20 = 1;
                    }
                    else
                    {
                        usage(); /* do not return */
                    }
                }
            }
        }
        else
        {
            if (optind == v16)
            {
                error(0x0, 0x0, dcgettext(0x0, &g_41175d, 0x5));
                usage(); /* do not return */
            }
            else if (v21 != 0)
            {
                v12 = strstr(v21, "%N");
                v2 = v21;
                if (v12 == 0)
                {
                    break;
                }
                v22 = getenv("QUOTING_STYLE");
                if (!(v22 != 0))
                {
                    set_quoting_style();
                    v2 = v21;
                    break;
                }
                else if (argmatch() >= 0)
                {
                    set_quoting_style();
                    v2 = v21;
                    break;
                }
                else
                {
                    set_quoting_style();
                    v22 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_4111b8, 0x5));
                    v2 = v21;
                    break;
                }
            }
            else
            {
                v21 = (long long)default_format();
                v2 = (long long)default_format();
                break;
            }
        }
    }
    v11 = ((long long)optind);
    if (v16 > optind)
    {
        v22 = ((unsigned int)v15) + v11 * 8;
        v11 = ((unsigned int)v15) + (((long long)(!(((int)v11)) + ((int)&stack_base-184))) + v11) * 8 + 8;
        v15 = 1;
        v1 = v11;
        do
        {
            v23 = v22->field_0;
            if (((long long)v20) != 0)
            {
                v11 = strcmp(v23, "-");
                if (!(v11 != 0))
                {
                    v23 = (long long)quotearg_style();
                    error(0x0, 0x0, dcgettext(0x0, &g_411200, 0x5));
                    v11 = 0;
                }
                else if (statfs(((int)v23), ((int)&stack_base-184)) == 0)
                {
                    v11 = ((long long)(print_it() ^ 1));
                }
                else
                {
                    v3 = (long long)quotearg_style();
                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_411248, 0x5));
                    v11 = 0;
                }
            }
            else
            {
                v11 = do_stat();
            }
            v22 += 8;
            v15 = ((long long)(v15 & reg_16<4>));
        }
        while (v1 != v22);
        return ((long long)tmp_19);
    }
    return ((long long)tmp_19);
}
