typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_4060a2;
extern unsigned int g_4060cb;
extern unsigned int g_4060ea;
extern unsigned int g_4063b0;
extern unsigned int longopts;
extern struct_0 optind;
extern unsigned long long stdout[7];

int main()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v10;  // rdx
    struct_1 *v11;  // rsi
    unsigned int v12;  // edi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r12
    unsigned int v15;  // r13d
    void *v16;  // r14
    unsigned long long|struct_1 * v2;  // rax
    char *v4;  // rax
    char *v6;  // rax
    unsigned long long v9[7];  // rcx

    v13 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4060a2, &g_4063b0);
    textdomain(&g_4060a2);
    atexit();
    while (true)
    {
        v2 = getopt_long(v12, ((int)v11), &g_4060cb, &longopts, 0x0);
        if (v2 == -1)
        {
            v2 = ((long long)optind);
            if (optind < v12)
            {
                v15 = ((int)(0 - ((int)(((long long)v13) < 1)) & 10));
                v14 = ((long long)(0 - ((int)(((long long)v13) < 1)) & 10));
                do
                {
                    v16 = *(v11 + v2 * 8);
                    v10 = (long long)dir_len();
                    if (v10 == 0)
                    {
                        v6 = v9[5];
                        if (v9[6] > v9[5])
                        {
                            v9[5] = *(stdout + 40) + 1;
                            *(v6) = 46;
                        }
                        else
                        {
                            __overflow(((int)v9), 0x2e);
                        }
                    }
                    else
                    {
                        fwrite_unlocked(v16, 0x1, v10, stdout);
                    }
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = v14;
                    }
                    else
                    {
                        __overflow(((int)stdout), v15);
                    }
                    v2 = ((long long)(optind + 1));
                    optind = optind + 1;
                }
                while (((int)v2) < v12);
            }
            else
            {
                error(0x0, 0x0, dcgettext(0x0, &g_4060ea, 0x5));
                usage(); /* do not return */
            }
        }
        else if (v2 != -130)
        {
            v13 = 1;
            if (v2 != -131)
            {
                usage(); /* do not return */
            }
            v0 = 0;
            version_etc();
            exit(0x0); /* do not return */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    return 0;
}
