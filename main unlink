typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_406085;
extern unsigned int g_4060bc;
extern unsigned int g_4060cc;
extern unsigned int g_4060dd;
extern unsigned int g_406298;
extern struct_0 optind;
extern char usage;

int main()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    struct_1 *v10;  // rsi
    unsigned int v11;  // edi
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v5;  // rax

    set_program_name();
    setlocale();
    bindtextdomain(&g_406085, &g_406298);
    textdomain(&g_406085);
    atexit();
    v2 = 0;
    v1 = "Michael Stone";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (!(optind < v11))
    {
        error(0x0, 0x0, dcgettext(0x0, &g_4060bc, 0x5));
        usage(); /* do not return */
    }
    else if (optind + 1 >= v11)
    {
        v5 = unlink(*(v10 + ((long long)optind) * 8));
        if (v5 == 0)
        {
            return 0;
        }
        v13 = (long long)quotearg_style();
        error(0x1, *(__errno_location()), dcgettext(0x0, &g_4060dd, 0x5));
    }
    else
    {
        v12 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_4060cc, 0x5));
        usage(); /* do not return */
    }
}
