typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int arch_long_options;
extern unsigned int g_40604a;
extern unsigned int g_4060c3;
extern unsigned int g_406106;
extern unsigned int g_406110;
extern unsigned int g_406121;
extern unsigned int g_4065a0;
extern struct_0 g_4065c8;
extern struct_0 optind;
extern unsigned long long stdout[7];
extern unsigned int uname_long_options;
extern struct_0 uname_mode;

int main()
{
    unsigned long long v0;  // [bp-0x1c8]
    unsigned long v1;  // [bp-0x1c0]
    unsigned long long v13;  // rbx
    unsigned int v14;  // esi
    unsigned int v15;  // edi
    unsigned long long v16;  // r12
    unsigned int v18;  // cc_dep1
    char v2;  // [bp-0x1b8]
    unsigned long long v4;  // rax

    set_program_name();
    setlocale();
    bindtextdomain(&g_4060c3, &g_4065a0);
    textdomain(&g_4060c3);
    atexit();
    if (uname_mode != 2)
    {
    }
    else
    {
        v4 = getopt_long(v15, v14, &g_40604a, &arch_long_options, 0x0);
        if (v4 != -1)
        {
            if (v4 != -131)
            {
                if (v4 == -130)
                {
                    usage(); /* do not return */
                }
                usage(); /* do not return */
            }
        }
        if (v15 == optind)
        {
            v18 = uname(((int)&v2));
            if (!(((char)(uname(((int)&v2)) + 1 == 0))))
            {
                v13 = 16;
            }
            else
            {
                error(0x1, *(__errno_location()), dcgettext(0x0, &g_406121, 0x5));
            }
        }
        else
        {
            v16 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_406110, 0x5));
            usage(); /* do not return */
        }
        if (v4 == -131)
        {
            v1 = "arch";
            v0 = 0;
            version_etc();
            exit(0x0); /* do not return */
        }
    }
}
