typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int argc;
extern struct_0 *argv;
extern unsigned int exit_failure;
extern unsigned int g_40a13a;
extern unsigned int g_40b020;
extern unsigned int pos;

int main()
{
    BOT tmp_9;  // tmp #9
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    struct_0 *v10;  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbp

    set_program_name();
    setlocale();
    bindtextdomain(&g_40a13a, &g_40b020);
    textdomain(&g_40a13a);
    exit_failure = 2;
    atexit();
    argv = v10;
    if (!(((int)v11) != 2))
    {
        v8 = strcmp(v10->field_8, "--help");
        if (v8 != 0)
        {
            v12 = (long long)strcmp(v10->field_8, "--version");
            if (((int)v12) != 0)
            {
                v5 = strcmp(v10->field_8, "]");
                if (v5 == 0)
                {
                    argc = 1;
                    v12 = 1;
                    pos = 1;
                    v6 = v12;
                    return v6;
                }
                v9 = (long long)quote();
                dcgettext(0x0, v10, 0x5);
                test_syntax_error(); /* do not return */
            }
            v1 = v12;
            v0 = 0;
            version_etc();
            v6 = v12;
            return v6;
        }
        usage(); /* do not return */
    }
    else if (((int)v11) > 1)
    {
        v5 = strcmp(v10 + v11 * 8->field_8, "]");
        if (v5 == 0)
        {
            pos = 1;
            argc = ((int)v11) - 1;
            v5 = posixtest();
            if (pos == argc)
            {
                v5 = ((long long)(v5 ^ 1));
                tmp_9 = v5;
                v12 = ((long long)tmp_9);
                v6 = v12;
                return v6;
            }
            v9 = (long long)quote();
            dcgettext(0x0, v10, 0x5);
            test_syntax_error(); /* do not return */
        }
        v9 = (long long)quote();
        dcgettext(0x0, v10, 0x5);
        test_syntax_error(); /* do not return */
    }
    else
    {
        v9 = (long long)quote();
        dcgettext(0x0, v10, 0x5);
        test_syntax_error(); /* do not return */
    }
}
