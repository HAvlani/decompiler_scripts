extern unsigned int g_409178;
extern unsigned int g_4091ce;
extern unsigned int g_409478;
extern struct_0 optind;
extern char usage;

int main()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long v14;  // rbx
    unsigned int v15;  // edi
    unsigned long long v16;  // r12
    unsigned long v17;  // r12
    unsigned long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x18]
    unsigned long v6;  // [bp-0x8]

    v6 = v17;
    v5 = v14;
    set_program_name();
    setlocale();
    bindtextdomain(&g_409178, &g_409478);
    textdomain(&g_409178);
    atexit();
    v4 = 0;
    v3 = "Kaveh Ghazi";
    v2 = "David MacKenzie";
    v1 = "Joseph Arceneaux";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (!(v15 != optind))
    {
        uptime(); /* do not return */
    }
    else if (v15 - optind != 1)
    {
        v16 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_4091ce, 0x5));
        usage(); /* do not return */
    }
    else
    {
        uptime(); /* do not return */
    }
}
