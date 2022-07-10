extern char both;
extern unsigned int check_input_order;
extern unsigned long long col_sep_len;
extern char delim;
extern unsigned int g_407608;
extern unsigned int g_407708;
extern unsigned int g_407755;
extern unsigned int g_40775a;
extern char hard_LC_COLLATE;
extern unsigned short issued_disorder_warning;
extern unsigned int long_options;
extern char only_file_1;
extern char only_file_2;
extern struct_0 optind;
extern char seen_unpairable;
extern char total_option;

int main()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v12;  // rbx
    unsigned int v13;  // esi
    unsigned int v14;  // edi
    unsigned long|unsigned long long v15;  // r12
    unsigned long v16;  // r13
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long long v6;  // rax

    total_option = 1;
    /* goto 4204373; */
    check_input_order = 2;
    /* goto 4204373; */
    delim = 0;
    /* goto 4204373; */
    check_input_order = 1;
    /* goto 4204373; */
    v4 = v16;
    v3 = v15;
    v2 = v12;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407708, &g_407608);
    textdomain(&g_407708);
    hard_LC_COLLATE = (char)hard_locale();
    atexit();
    only_file_1 = 1;
    only_file_2 = 1;
    both = 1;
    seen_unpairable = 0;
    issued_disorder_warning = 0;
    check_input_order = 0;
    total_option = 0;
    while (true)
    {
        v6 = getopt_long(v14, v13, &g_407755, &long_options, 0x0);
        if (((int)v1) == -1)
        {
            if (col_sep_len == 0)
            {
                col_sep_len = 1;
            }
            if (v14 - optind > 1)
            {
                if (v14 - optind != 2)
                {
                    v15 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, v13, 0x5));
                    usage(); /* do not return */
                }
                compare_files(); /* do not return */
            }
            if (optind >= v14)
            {
                error(0x0, 0x0, dcgettext(0x0, &g_40775a, 0x5));
                usage(); /* do not return */
            }
            else
            {
                v15 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, v13, 0x5));
                usage(); /* do not return */
            }
        }
        else if (((int)v1) > 131)
        {
            usage(); /* do not return */
        }
        else if (((int)v1) <= 121)
        {
            if (((int)v1) == 49)
            {
                only_file_1 = 0;
            }
            else if (!(((char)(v1 <= 49))))
            {
                if (((int)v1) == 50)
                {
                    only_file_2 = 0;
                }
                else if (((int)v1) == 51)
                {
                    both = 0;
                }
                else
                {
                    usage(); /* do not return */
                }
            }
            else
            {
                if (((int)v1) == -131)
                {
                    v1 = v6;
                    v0 = 0;
                    version_etc();
                    exit(0x0); /* do not return */
                }
                else if (((int)v1) == -130)
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
            if (((int)(((int)v1) - 122)) <= 9)
            {
                /* goto ((long long)*(4224980 + ((long long)(((int)v1) - 122)) * 4)) + 4224980; */
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
}
