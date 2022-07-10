typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_406083;
extern unsigned int g_4060ba;
extern unsigned int g_4060f4;
extern unsigned int g_4062c8;
extern struct_0 optind;
extern char usage;

int main()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    struct_1 *v10;  // rbx
    unsigned long long v11;  // rbp
    unsigned long v12;  // rsi
    unsigned int v13;  // edi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v10 = v12;
    set_program_name();
    setlocale();
    bindtextdomain(&g_406083, &g_4062c8);
    textdomain(&g_406083);
    atexit();
    v2 = 0;
    v1 = "Michael Stone";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (((int)(((long long)optind) + 1)) < v13)
    {
        v9 = ((long long)optind);
        if (optind + 2 >= v13)
        {
            v8 = link(((int)*(v10 + (v9 + 1) * 8 + 8)), ((int)*(v10 + (v9 + 1) * 8)));
            if (v8 == 0)
            {
                return 0;
            }
            v11 = (long long)quotearg_n_style();
            v15 = (long long)quotearg_n_style();
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_4060f4, 0x5));
        }
        else
        {
            v14 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, v12, 0x5));
            usage(); /* do not return */
        }
    }
    else if (((int)optind) >= v13)
    {
        error(0x0, 0x0, dcgettext(0x0, &g_4060ba, 0x5));
        usage(); /* do not return */
    }
    else
    {
        v14 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, v12, 0x5));
        usage(); /* do not return */
    }
}
