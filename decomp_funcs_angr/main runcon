typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_406085;
extern unsigned int g_4060ae;
extern unsigned int g_406109;
extern unsigned int g_4064f8;
extern unsigned int g_406550;
extern struct_1 g_406578;
extern unsigned int long_options;
extern struct_1 optind;

int main()
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v12;  // rax
    unsigned long long|struct_1 * v14;  // rax
    unsigned int v18;  // ebx
    struct_1 *v19;  // rbx
    unsigned long long v2;  // [bp-0x50]
    unsigned long|unsigned int v20;  // rsi
    unsigned int v21;  // edi
    unsigned long v22;  // r12
    unsigned long v23;  // r13
    unsigned long v24;  // r14
    unsigned long v25;  // r15
    struct_0 *v26;  // fs
    unsigned int v3;  // [bp-0x44]
    unsigned long v4;  // [bp-0x40]
    struct_1 *v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]

    v9 = v25;
    v8 = v24;
    v7 = v23;
    v6 = v22;
    v5 = v19;
    v18 = v20;
    v4 = *(v26 + 0x28);
    set_program_name();
    setlocale();
    bindtextdomain(&g_406085, &g_4064f8);
    textdomain(&g_406085);
    atexit();
    v2 = 0;
    v0 = 0;
    v1 = 0;
    v3 = 0;
    v14 = getopt_long(v21, v20, &g_4060ae, &long_options, ((int)&v3));
    if (v14 != -1)
    {
        if (!(v14 <= 117))
        {
            usage(); /* do not return */
        }
        else if (v14 > 98)
        {
            v14 = ((long long)v14) - 99;
            if (((int)v14) <= 18)
            {
                v12 = ((long long)*(g_406578 + v14 * 4)) + &g_406578;
                /* goto v12; */
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else if (!(v14 != -131))
        {
            version_etc();
            exit(0x0); /* do not return */
        }
        else if (v14 == -130)
        {
            usage(); /* do not return */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else
    {
        if (optind != v21)
        {
            if (v0 == 0)
            {
                if ((v1 | v2) == 0)
                {
                    if (((long long)0) == 0)
                    {
                        if (optind < v21)
                        {
                            optind = optind + 1;
                        }
                        else
                        {
                            v20 = "you must specify -c, -t, -u, -l, -r, or context";
                            error(0x0, 0x0, dcgettext(0x0, v20, 0x5));
                            usage(); /* do not return */
                        }
                    }
                }
            }
            if (optind < v21 || v0 != 0 || ((long long)0) != 0 || (v1 | v2) != 0)
            {
                if (optind >= v21)
                {
                    v20 = "no command specified";
                    error(0x0, 0x0, dcgettext(0x0, v20, 0x5));
                    usage(); /* do not return */
                }
                error(0x1, 0x0, dcgettext(0x0, &g_406550, 0x5));
            }
        }
        else
        {
            *(rbx<8> + None) = 95;
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_406109, 0x5));
        }
    }
}
