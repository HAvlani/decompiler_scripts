extern unsigned int g_406085;
extern unsigned int g_4060bb;
extern unsigned int g_406278;
extern struct_0 optind;
extern char usage;

int main()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v10;  // r12
    unsigned long long v2;  // [bp-0x28]
    unsigned int v9;  // edi

    set_program_name();
    setlocale();
    bindtextdomain(&g_406085, &g_406278);
    textdomain(&g_406085);
    atexit();
    v2 = 0;
    v1 = "Jim Meyering";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (optind >= v9)
    {
        __printf_chk(0x1, "%08x\n", gethostid());
        return 0;
    }
    v10 = (long long)quote();
    error(0x0, 0x0, dcgettext(0x0, &g_4060bb, 0x5));
    usage(); /* do not return */
}
