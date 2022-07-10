extern char break_spaces;
extern char count_bytes;
extern unsigned int g_407083;
extern unsigned int g_4070ac;
extern unsigned int g_4073c0;
extern char have_read_stdin;
extern unsigned int longopts;
extern struct_1 optarg;
extern struct_0 optind;
extern unsigned int shortopts;

int main()
{
    BOT tmp_19;  // tmp #19
    char v0;  // [bp-0x32]
    char v1;  // [bp-0x31]
    unsigned long long v10;  // rbp
    unsigned long v11;  // rsi
    unsigned long v12;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    unsigned long long v3;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbx

    v9 = v11;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407083, &g_4073c0);
    textdomain(&g_407083);
    atexit();
    have_read_stdin = 0;
    count_bytes = 0;
    break_spaces = 0;
    while (true)
    {
        v3 = getopt_long(((int)v12), ((int)v11), &shortopts, &longopts, 0x0);
        if (((int)v0) == -1)
        {
            if (optind == ((int)v12))
            {
                v9 = (long long)fold_file();
            }
            else if (((char)(((long long)optind) < v12)))
            {
                v8 = ((long long)optind);
                v13 = v9 + v8 * 8;
                v3 = ((long long)(!(((int)v8)) + ((int)v12))) + v8;
                v10 = v9 + v3 * 8 + 8;
                v9 = 1;
                while (true)
                {
                    v13 += 8;
                    v9 = ((int)(v9 & fold_file()));
                    if (v13 == v10)
                    {
                        break;
                    }
                }
            }
            if (have_read_stdin == 0)
            {
                return ((long long)tmp_19);
            }
            else if (!(((char)(rpl_fclose() + 1 == 0))))
            {
                break;
            }
            else
            {
                error(0x1, *(__errno_location()), "-");
            }
        }
        else if (v0 != 98)
        {
            if (((char)(((long long)v0) <= 98)))
            {
                if (((int)v0) == -130)
                {
                    usage(); /* do not return */
                }
                else if (((int)v0) < -129)
                {
                    if (((int)v0) == -131)
                    {
                        version_etc();
                        exit(0x0); /* do not return */
                    }
                    usage(); /* do not return */
                }
                else
                {
                    if (((int)(((long long)v0) - 48)) > 9)
                    {
                        usage(); /* do not return */
                    }
                    else if (optarg != 0)
                    {
                        optarg = optarg - 1;
                        /* goto 4204576; */
                    }
                    else
                    {
                        v0 = v3;
                        v1 = 0;
                        optarg = &stack_base-50;
                        /* goto 4204576; */
                    }
                }
            }
            else
            {
                if (v0 == 115)
                {
                    break_spaces = 1;
                }
                else if (v0 != 119)
                {
                    usage(); /* do not return */
                }
            }
            if ((((char)(((long long)v0) <= 98)) || v0 == 119) && (((char)(((long long)v0) <= 98)) || v0 != 115) && (((int)(((long long)v0) - 48)) <= 9 || !(((char)(((long long)v0) <= 98)))) && (!(((char)(((long long)v0) <= 98))) || ((int)v0) >= -129) && (!(((char)(((long long)v0) <= 98))) || ((int)v0) != -130))
            {
                dcgettext(0x0, &g_4070ac, 0x5);
                v14 = (long long)xdectoumax();
            }
        }
        else
        {
            count_bytes = 1;
        }
    }
    return ((long long)tmp_19);
}
