typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int exit_status;
extern unsigned int g_40a798;
extern unsigned int g_40a7c0;
extern unsigned int g_40a8d2;
extern unsigned int g_40a92f;
extern <missing-type> posixly_correct;

int main()
{
    struct_0 *v10;  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned int|unsigned long|unsigned long long v8;  // rbx
    struct_0 *|unsigned long long v9;  // rbp

    v9 = v10;
    v8 = v11;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40a8d2, &g_40a798);
    textdomain(&g_40a8d2);
    atexit();
    exit_status = 0;
    posixly_correct = ((char)(getenv("POSIXLY_CORRECT") != 0));
    if (!(((int)v11) != 2))
    {
        v3 = strcmp(v10->field_8, "--help");
        if (v3 != 0)
        {
            v12 = (long long)strcmp(v10->field_8, "--version");
            if (((int)v12) != 0)
            {
                v2 = strcmp(v10->field_8, "--");
                if (v2 == 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, &g_40a92f, 0x5));
                    usage(); /* do not return */
                }
            }
            version_etc();
            v6 = v12;
            return v6;
        }
        usage(); /* do not return */
    }
    else if (((int)v11) <= 1)
    {
        error(0x0, 0x0, dcgettext(0x0, &g_40a92f, 0x5));
        usage(); /* do not return */
    }
    else
    {
        v2 = strcmp(v10->field_8, "--");
        if (v2 == 0)
        {
            v8 = ((int)(((int)v11) - 1));
            v9 = v10 + 8;
            /* goto 4204555; */
        }
    }
    if ((((int)v11) == 2 || ((int)v11) > 1) && (v2 != 0 || ((int)v11) != 2) && (((int)v12) != 0 || ((int)v11) != 2) && (v3 != 0 || ((int)v11) != 2))
    {
        v8 = ((long long)v8) - 2;
        v9 += 16;
        while (true)
        {
            v7 = (long long)print_formatted();
            v8 = ((long long)(v8 - v7));
            v9 += v7 * 8;
            if (((int)v7) > 0)
            {
                v12 = ((long long)exit_status);
                v6 = v12;
                return v6;
            }
            else if (((int)v8) <= 0)
            {
                v12 = ((long long)exit_status);
                v6 = v12;
                return v6;
            }
            else
            {
                v12 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_40a7c0, 0x5));
                v12 = ((long long)exit_status);
                break;
            }
        }
        v6 = v12;
        return v6;
    }
}
