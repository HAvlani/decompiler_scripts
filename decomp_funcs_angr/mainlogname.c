extern unsigned int g_40609a;
extern unsigned int g_4060d2;
extern unsigned int g_4060e3;
extern unsigned int g_406258;
extern struct_0 optind;
extern char usage;

int main()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned int v10;  // edi
    unsigned long long v11;  // r12
    unsigned long long v2;  // [bp-0x28]
    unsigned long v9;  // rdi

    set_program_name();
    setlocale();
    bindtextdomain(&g_40609a, &g_406258);
    textdomain(&g_40609a);
    atexit();
    v2 = 0;
    v1 = "FIXME: unknown";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (optind >= v10)
    {
        v9 = getlogin();
        if (v9 != 0)
        {
            puts(v9);
            return 0;
        }
        error(0x1, 0x0, dcgettext(v9, &g_4060e3, 0x5));
    }
    else
    {
        v11 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_4060d2, 0x5));
        usage(); /* do not return */
    }
}
