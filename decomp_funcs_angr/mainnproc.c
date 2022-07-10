extern unsigned int g_407020;
extern unsigned int g_40709b;
extern unsigned int g_4070d6;
extern unsigned int g_4070e5;
extern unsigned int g_407350;
extern unsigned int longopts;
extern struct_0 optind;

int main()
{
    unsigned long long v1;  // rax
    unsigned int v10;  // esi
    unsigned int v11;  // edi
    unsigned long long v12;  // r12
    unsigned long long v2;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbp

    v9 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40709b, &g_407350);
    textdomain(&g_40709b);
    atexit();
    while (true)
    {
        v1 = getopt_long(v11, v10, &g_407020, &longopts, 0x0);
        if (((int)v1) != -1)
        {
            if (((int)v1) != 128)
            {
                if (((char)(v1 <= 128)))
                {
                    if (((int)v1) == -131)
                    {
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
                if (((int)v1) == 129)
                {
                    dcgettext(0x0, &g_4070d6, 0x5);
                    v9 = (long long)xdectoumax();
                }
                else
                {
                    usage(); /* do not return */
                }
            }
        }
        else
        {
            if (optind == v11)
            {
                v2 = num_processors();
                v8 = 1;
                if (v9 < v2)
                {
                    v2 -= v9;
                    v8 = v2;
                    __printf_chk(0x1, "%lu\n", v8);
                }
                else
                {
                    __printf_chk(0x1, "%lu\n", v8);
                    return 0;
                }
            }
            else
            {
                v12 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_4070e5, 0x5));
                usage(); /* do not return */
            }
        }
    }
    return 0;
}
