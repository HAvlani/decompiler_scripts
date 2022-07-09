typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_407084;
extern unsigned int g_4070c6;
extern unsigned int g_4070d6;
extern unsigned int g_4070ef;
extern unsigned int g_407378;
extern struct_0 optind;
extern char usage;

int main()
{
    BOT tmp_17;  // tmp #17
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    struct_0 *|unsigned long long v12;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rsi
    unsigned int v17;  // edi
    unsigned long long v18;  // r12
    unsigned long long v19;  // r14
    unsigned long v2;  // [bp-0x78]
    unsigned long long v20;  // r15
    unsigned long long v21;  // r15
    unsigned long long v22;  // cc_dep1
    uint128_t v23;  // xmm0
    unsigned long long v3;  // [bp-0x70]
    unsigned long|unsigned long long v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x50]
    char v6[2];  // [bp-0x48]

    v18 = v16;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407084, &g_407378);
    textdomain(&g_407084);
    atexit();
    v3 = 0;
    v2 = "Paul Eggert";
    v1 = "Jim Meyering";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (v17 != 1)
    {
        v12 = ((long long)optind);
        if (v17 > optind)
        {
            v20 = 1;
            v4 = 0;
            v15 = v18 + v12 * 8;
            v12 = ((long long)(!(optind) + v17)) + v12;
            v19 = v18 + v12 * 8 + 8;
            do
            {
                v12 = xstrtod();
                if (((long long)v12) == 0)
                {
                    v12 = __errno_location();
                }
                if (v12->field_0 == 34 || ((long long)v12) != 0)
                {
                    v23 = 0;
                    v23 = v5;
                    if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
                    {
                        v12 = ((long long)v6[0]);
                        if (v6[1] == 0 && ((long long)v6[0]) != 0)
                        {
                            v22 = ((long long)v12);
                            if (v12 == 104)
                            {
                                v23 = xmm0<16> * 0x40ac200000000000;
                                /* goto 4204402; */
                            }
                            else if (!(((char)(v22 <= 104))))
                            {
                                if (v12 == 109)
                                {
                                    v23 = xmm0<16> * 0x404e000000000000;
                                    /* goto 4204402; */
                                }
                                if (v12 == 115)
                                {
                                    /* goto 4204402; */
                                }
                            }
                            else if (v12 == 100)
                            {
                                v23 = xmm0<16> * 0x40f5180000000000;
                                /* goto 4204402; */
                            }
                        }
                    }
                }
                if (...)
                {
                    v21 = (long long)quote();
                    v20 = 0;
                    error(0x0, 0x0, dcgettext(0x0, &g_4070d6, 0x5));
                    v23 = 0;
                    v23 = v5;
                }
                xmm0<16> = (xmm0<16> + Conv(64->128, Load(addr=stack_base-96, size=8, endness=Iend_LE)))
                v15 += 8;
                tmp_17 = v23;
                v4 = tmp_17;
            }
            while (v15 != v19);
            if (((long long)v20) == 0)
            {
                usage(); /* do not return */
            }
        }
        v4 = 0;
        if (v17 <= optind || ((long long)v20) != 0)
        {
            if (xnanosleep() == 0)
            {
                return 0;
            }
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_4070ef, 0x5));
        }
    }
    else
    {
        error(0x0, 0x0, dcgettext(0x0, &g_4070c6, 0x5));
        usage(); /* do not return */
    }
}
