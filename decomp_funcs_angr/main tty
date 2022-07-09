extern unsigned int exit_failure;
extern unsigned int g_406095;
extern unsigned int g_4060ce;
extern unsigned int g_4060df;
extern unsigned int g_4062d0;
extern unsigned int g_40630a;
extern unsigned int longopts;
extern struct_0 optind;
extern char silent;

int main()
{
    unsigned long long v10;  // r12
    unsigned long long v3;  // rax
    unsigned long long v6;  // rax
    unsigned int v7;  // esi
    unsigned long|unsigned int v8;  // rdi
    unsigned long long v9;  // r12

    set_program_name();
    setlocale();
    bindtextdomain(&g_406095, &g_4062d0);
    textdomain(&g_406095);
    exit_failure = 3;
    atexit();
    silent = 0;
    while (true)
    {
        v3 = getopt_long(v8, v7, &g_40630a, &longopts, 0x0);
        if (v3 != -1)
        {
            if (v3 == -130)
            {
                usage(); /* do not return */
            }
            else if (v3 == 115)
            {
                silent = 1;
            }
            else if (v3 != -131)
            {
                usage(); /* do not return */
            }
            else
            {
                version_etc();
                exit(0x0); /* do not return */
            }
        }
        else
        {
            if (optind >= v8)
            {
                *(__errno_location() + None) = 2;
                if (silent == 0)
                {
                    v9 = 0;
                    v8 = ttyname();
                    if (v8 != 0)
                    {
                        puts(v8);
                        v6 = v9;
                        return v6;
                    }
                    v9 = 1;
                    v8 = dcgettext(v8, &g_4060df, 0x5);
                    puts(v8);
                }
                else
                {
                    v9 = 0;
                    v9 = ((char)(isatty() == 0));
                    v6 = v9;
                    return v6;
                }
            }
            else
            {
                v10 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_4060ce, 0x5));
                usage(); /* do not return */
            }
        }
    }
    v6 = v9;
    return v6;
}
