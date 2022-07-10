extern char dev_debug;
extern unsigned int g_41711b;
extern unsigned int g_4174d8;
extern unsigned int g_41b86b;
extern struct_0 g_4220f8;
extern struct_0 lbuf;
extern unsigned int long_options;
extern struct_1 optind;

int main()
{
    BOT tmp_19;  // tmp #19
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v11;  // rbp
    unsigned int v12;  // esi
    unsigned int v13;  // edi
    unsigned int v14;  // r13d
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax

    set_program_name();
    setlocale();
    bindtextdomain(&g_41711b, &g_4174d8);
    textdomain(&g_41711b);
    if (lbuf == 0)
    {
        v8 = xmalloc();
        lbuf = v8;
        g_4220f8 = v8;
    }
    atexit();
    atexit();
    while (true)
    {
        v6 = getopt_long(v13, v12, &g_41b86b, &long_options, 0x0);
        if (v6 == -1)
        {
            v11 = ((long long)optind);
            if (optind < v13)
            {
                v14 = 1;
                do
                {
                    v14 = ((int)((long long)print_factors() == 0? ((int)0) : ((int)r13<8>)));
                    v11 += 1;
                }
                while (v13 > ((int)v11));
                return ((long long)tmp_19);
            }
            v14 = 1;
            init_tokenbuffer();
            while (true)
            {
                if (readtoken() + 1 == 0)
                {
                    break;
                }
                ((unsigned int)v14) = ((long long)(v14 & print_factors()));
            }
            rpl_free();
            break;
        }
        else if (v6 == -130)
        {
            usage(); /* do not return */
        }
        else if (v6 == 128)
        {
            dev_debug = 1;
        }
        else if (v6 != -131)
        {
            usage(); /* do not return */
        }
        else
        {
            proper_name_utf8();
            v1 = 0;
            v0 = (long long)proper_name_utf8();
            version_etc();
            exit(0x0); /* do not return */
        }
    }
    return ((long long)tmp_19);
}
