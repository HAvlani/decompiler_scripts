typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_2;

extern struct_0 *args;
extern unsigned int exit_failure;
extern unsigned int g_420960;
extern unsigned int g_420988;
extern unsigned int g_420a4e;
extern unsigned int g_420b4e;
extern unsigned long long stdout[7];

int main()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    struct_2 *v12;  // rbp
    struct_1 *v13;  // rsi
    unsigned int v14;  // edi
    unsigned int v15;  // r8d
    unsigned long long v16;  // r12
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    struct_1 * v5;  // rax
    char *v6;  // rax
    unsigned int v9;  // eax

    set_program_name();
    setlocale();
    bindtextdomain(&g_420a4e, &g_420960);
    textdomain(&g_420a4e);
    exit_failure = 3;
    atexit();
    v3 = 0;
    v2 = "Paul Eggert";
    v1 = "James Youngman";
    v0 = "Mike Parker";
    parse_long_options();
    if (v14 > 1)
    {
        v15 = strcmp(v13->field_8, "--");
        v5 = v13 + 8;
        if (!(v15 == 0))
        {
            v5 = v13;
        }
        else if (v14 == 2)
        {
            error(0x0, 0x0, dcgettext(0x0, &g_420b4e, 0x5));
            usage(); /* do not return */
        }
        if (v15 != 0 || v14 != 2)
        {
            args = v5 + 8;
            v12 = (long long)eval();
            if (*(args) == 0)
            {
                v9 = ((int)v12->field_0);
                if (!(v12->field_0 != 0))
                {
                    mpz_out_str();
                    v6 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v6) = 10;
                        return (long long)null();
                    }
                    __overflow();
                    return (long long)null();
                }
                else if (v9 == 1)
                {
                    puts(v12->field_8);
                    return (long long)null();
                }
            }
            v16 = (long long)quotearg_n_style();
            error(0x2, 0x0, dcgettext(0x0, &g_420988, 0x5));
        }
    }
    else
    {
        error(0x0, 0x0, dcgettext(0x0, &g_420b4e, 0x5));
        usage(); /* do not return */
    }
}
