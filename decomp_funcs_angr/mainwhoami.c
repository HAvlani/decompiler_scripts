typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_40609c;
extern unsigned int g_4060d6;
extern unsigned int g_406280;
extern unsigned int g_4062a8;
extern struct_0 optind;
extern char usage;

int main()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned int v10;  // ebx
    struct_0 *v11;  // rbp
    unsigned int v12;  // edi
    unsigned long long v13;  // r12
    unsigned long long v2;  // [bp-0x28]
    unsigned int v4;  // [bp+0x100008]
    struct_1 *v7;  // rax

    set_program_name();
    setlocale();
    bindtextdomain(&g_40609c, &g_406280);
    textdomain(&g_40609c);
    atexit();
    v2 = 0;
    v1 = "Richard Mlynarik";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (optind == v12)
    {
        v4 = 0;
        v11 = __errno_location();
        v10 = geteuid();
        if (v10 == -1)
        {
            if (v11->field_0 != 0)
            {
                error(0x1, v11->field_0, dcgettext(0x0, &g_4062a8, 0x5));
            }
        }
        if (v11->field_0 == 0 || v10 != -1)
        {
            v7 = getpwuid(v10);
            if (v7 != 0)
            {
                puts(v7->field_0);
                return 0;
            }
            error(0x1, v11->field_0, dcgettext(0x0, &g_4062a8, 0x5));
        }
    }
    else
    {
        v13 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_4060d6, 0x5));
        usage(); /* do not return */
    }
}
