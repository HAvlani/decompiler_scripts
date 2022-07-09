typedef struct struct_2 {
    unsigned short field_0;
    char padding_2[42];
    char field_2c;
    char padding_2d[295];
    unsigned int field_154;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_409011;
extern unsigned int g_409028;
extern unsigned int g_409034;
extern unsigned int g_40903f;
extern unsigned int g_409055;
extern unsigned int g_40906d;
extern unsigned int g_409084;
extern unsigned int g_409094;
extern unsigned int g_40909e;
extern unsigned int g_4090a7;
extern unsigned long long stdout[7];

int print_uptime()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_1;  // tmp #1
    unsigned long long v0;  // [bp-0x2080]
    unsigned long v1;  // [bp-0x2070]
    char *v11;  // rax
    struct_2 * v12;  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rsi
    unsigned long v16;  // rdi
    unsigned long|unsigned long long|unsigned int v17;  // r12
    unsigned int v18;  // r13d
    unsigned long long v19;  // r13
    char v2;  // [bp-0x2068]
    unsigned long|unsigned long long v20;  // r14
    unsigned long long v21;  // r14
    unsigned long long v22;  // r15
    struct_0 *v23;  // fs
    unsigned long v24;  // xmm0lq
    char v3;  // [bp-0x2048]
    unsigned long v4;  // [bp-0x2030]
    unsigned long v5;  // [bp-0x1030]
    unsigned long v6;  // [bp-0x40]
    void *|unsigned long long v8;  // rax

    v5 = v5;
    v4 = v4;
    v12 = v15;
    v14 = v16 - 1;
    v8 = fopen("/proc/uptime", "r");
    if (v17 != 0)
    {
        v17 = v8;
        v21 = fgets_unlocked(&v3, 0x2000, v17);
        if (v21 == &v3)
        {
            c_strtod();
            if (v1 != v21)
            {
                if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
                {
                    if (((((char)((long long)(BinaryOp CmpF))) & 69 | ((char)((((long long)(BinaryOp CmpF)) & 69) >> 6))) & 1) != 1)
                    {
                        tmp_5 = BinaryOp None;
                        v20 = tmp_5;
                        rpl_fclose();
                        if (v16 == 0)
                        {
                            v1 = time(NULL);
                            if (v20 == 0)
                            {
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_409011, 0x5));
                            }
                        }
                    }
                }
            }
        }
        if (v1 == v21 || v21 != &v3)
        {
            rpl_fclose();
        }
    }
    if (v1 == v21 || v17 == 0 || v21 != &v3)
    {
        v20 = 0;
        if (v16 == 0)
        {
            v1 = time(NULL);
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_409011, 0x5));
        }
    }
    if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0 && v21 == &v3 && v1 != v21 && v17 != 0 && ((((char)((long long)(BinaryOp CmpF))) & 69 | ((char)((((long long)(BinaryOp CmpF)) & 69) >> 6))) & 1) == 1 || v21 == &v3 && v1 != v21 && v17 != 0 && (((char)((long long)(BinaryOp CmpF))) & 1) != 0)
    {
        rpl_fclose();
        if (v16 == 0)
        {
            v20 = 18446744069414584319;
            v1 = time(NULL);
            /* goto 4206332; */
        }
        else
        {
            v20 = 18446744069414584319;
        }
    }
    if (...)
    {
        v19 = 0;
        v17 = 0;
        do
        {
            v8 = ((long long)v12->field_0);
            if (v8 == 7 && v12->field_2c != 0)
            {
                v17 += 1;
                /* goto 4205501; */
            }
            if (v8 == 2 && (v12->field_2c == 0 || v8 != 7))
            {
                v19 = ((long long)v12->field_154);
            }
            v14 -= 1;
            v12 += 384;
        }
        while (v14 != 18446744069414584319);
        v1 = time(NULL);
        if (v20 == 0)
        {
            v20 = v1 - v19;
            if (v19 == 0)
            {
                error(0x1, *(__errno_location()), dcgettext(0x0, &g_409011, 0x5));
            }
        }
    }
    if (...)
    {
        v17 = 0;
        /* goto 4205581; */
    }
    if (...)
    {
        v18 = ((int)((((long long)(v20 * 1749024623285053783 >> 64)) >> 13) - (v20 >> 63)));
        v22 = localtime(((int)&v1), ((int)(...)), ((int)(...)));
        if (v22 != 0)
        {
            dcgettext(0x0, &g_409028, 0x5);
            fprintftime();
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_409034, 0x5));
        }
        if (!(v20 != 18446744069414584319))
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40903f, 0x5));
        }
        else if (v20 <= 86399)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_409084, 0x5));
        }
        else
        {
            __printf_chk(0x1, dcngettext(0x0, &g_40906d, &g_409055, v18, 0x5));
        }
        __printf_chk(0x1, dcngettext(0x0, &g_40909e, &g_409094, v17, 0x5));
        v13 = getloadavg(((int)&v2), 0x3);
        if (((int)v13) != -1)
        {
            if (((int)v13) > 0)
            {
                v0 = v2;
                __printf_chk(0x1, dcgettext(0x0, &g_4090a7, 0x5));
            }
            if (!(((int)v13) <= 1))
            {
                __printf_chk(0x1, ", %.2f", 5);
                if (((int)v13) != 2)
                {
                    __printf_chk(0x1, ", %.2f", 5);
                }
            }
            else if (!(((char)(v13 == 1))))
            {
                return v6 ^ *(v23 + 0x28);
            }
        }
        if (((char)(v13 == 1)) || ((int)v13) == -1 || ((int)v13) > 1)
        {
            v11 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v11) = 10;
                return v6 ^ *(v23 + 0x28);
            }
            __overflow();
            return v6 ^ *(v23 + 0x28);
        }
    }
}
