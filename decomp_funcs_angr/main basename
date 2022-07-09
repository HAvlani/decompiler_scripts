extern unsigned int g_406087;
extern unsigned int g_4060b0;
extern unsigned int g_4060c6;
extern unsigned int g_4060d6;
extern unsigned int g_4064d0;
extern unsigned int longopts;
extern struct_0 optind;

int main()
{
    unsigned long long|unsigned int v1;  // rax
    unsigned long long v10;  // r13
    unsigned int v7;  // esi
    unsigned long v8;  // rdi
    unsigned long long v9;  // r12

    v10 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_406087, &g_4064d0);
    textdomain(&g_406087);
    atexit();
    while (true)
    {
        v1 = getopt_long(((int)v8), v7, &g_4060b0, &longopts, 0x0);
        if (((int)v1) != -1)
        {
            if (((int)v1) != 97)
            {
                if (!(((char)(v1 <= 97))))
                {
                    if (((int)v1) != 122)
                    {
                        usage(); /* do not return */
                    }
                }
                else
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
            }
            if (((int)v1) == 97 || ((int)v1) == 115 && !(((char)(v1 <= 97))))
            {
                v10 = 1;
            }
        }
        else if (optind >= ((int)v8))
        {
            error(0x0, 0x0, dcgettext(0x0, &g_4060c6, 0x5));
            usage(); /* do not return */
        }
        else if (((long long)v10) != 0)
        {
            while (true)
            {
                perform_basename();
                v1 = ((int)(optind + 1));
                optind = optind + 1;
                if (v1 >= ((int)v8))
                {
                    break;
                }
            }
            return 0;
        }
        else if (optind + 2 < ((int)v8))
        {
            v9 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_4060d6, 0x5));
            usage(); /* do not return */
        }
        else if (!(((char)(((long long)(optind + 2)) == v8))))
        {
            perform_basename();
            return 0;
        }
        else
        {
            perform_basename();
        }
    }
    return 0;
}
