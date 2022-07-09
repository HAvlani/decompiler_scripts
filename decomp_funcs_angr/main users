extern unsigned int g_4070be;
extern unsigned int g_407108;
extern unsigned int g_4072d0;
extern struct_0 optind;
extern char usage;

int main()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned int v10;  // edi
    unsigned long long v11;  // r12
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]

    set_program_name();
    setlocale();
    bindtextdomain(&g_4070be, &g_4072d0);
    textdomain(&g_4070be);
    atexit();
    v3 = 0;
    v2 = "David MacKenzie";
    v1 = "Joseph Arceneaux";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (!(v10 != optind))
    {
        users();
        return 0;
    }
    else if (v10 - optind == 1)
    {
        users();
        return 0;
    }
    else
    {
        v11 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_407108, 0x5));
        usage(); /* do not return */
    }
}
