typedef struct struct_3 {
    char padding_0[44];
    unsigned int field_2c;
} struct_3;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[8];
    unsigned int field_40;
    char padding_44[36];
    unsigned short field_68;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[8];
    unsigned int field_40;
    char padding_44[36];
    unsigned short field_68;
} struct_4;

typedef struct struct_0 {
    char padding_0[26];
    char field_1a;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

extern unsigned int g_40cc38;
extern unsigned int g_40cc4e;
extern unsigned int g_40cc5a;

int excise()
{
    unsigned long long v0;  // [bp-0x1e8]
    char v1;  // [bp-0xc8]
    unsigned long|char * v10;  // rsi
    struct_1 *v11;  // rsi
    struct_3 *v12;  // rdi
    unsigned long v13;  // rdi
    struct_2 *v14;  // r12
    struct_2 *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v17;  // r14
    char v18;  // cc_dep1
    unsigned int|unsigned long long v3;  // rax
    unsigned long long [12] v5;  // rax
    char v6;  // cl
    char *v7;  // rdx
    struct_4 *v8;  // rbx
    struct_3 *v9;  // rbp

    v9 = v12;
    v8 = v11;
    v10 = v11->field_30;
    v13 = ((long long)v12->field_2c);
    v3 = unlinkat(v13, v10, ((int)(((long long)(((long long)v6) != 0)) * 0x200)));
    if (v3 != 0)
    {
        v17 = ((long long)v14->field_0);
        v14 = __errno_location();
        if (v14->field_0 != 30)
        {
            if (*(v7) != 0)
            {
                v3 = 2;
                if (!(((int)v17) != 22))
                {
                    return v3;
                }
                else if (((char)(v17 <= 22)))
                {
                    if (((int)v17) != 2)
                    {
                    }
                    else
                    {
                        return v3;
                    }
                    if (((int)v17) == 20)
                    {
                        return v3;
                    }
                }
                else if (((int)v17) == 84)
                {
                    return v3;
                }
            }
        }
        v3 = __fxstatat(0x1, v9->field_2c, ((int)v8->field_30), ((int)&v1), 0x100);
        if (v3 != 0)
        {
            if (v15->field_0 == 2)
            {
                v3 = 2;
                v17 = 2;
                if (*(v7) != 0)
                {
                    return v3;
                }
            }
        }
        if (v3 == 0 || v15->field_0 != 2)
        {
            v18 = ((char)*(v7));
            v15->field_0 = 30;
        }
        if (...)
        {
            v0 = 0x8000320000;
            if ((((char)(((long long)*(&stack_base-488 + ((v17 & 63) >> 3))) >> ((long long)((char)(v17 & 63 & 7))))) & 1) != 0)
            {
                v3 = ((int)v8->field_40);
                if (v3 == 13 || v8->field_40 == 1)
                {
                    v15->field_0 = v3;
                }
            }
        }
        if (...)
        {
            v16 = (long long)quotearg_style();
            error(0x0, v15->field_0, dcgettext(0x0, &g_40cc5a, 0x5));
            v5 = v8->field_8;
            if (((char)(v8->field_8->field_58 - 0 >> 63)))
            {
                v3 = 4;
                return v3;
            }
            while (true)
            {
                if (v5[4] == 0)
                {
                    v5[4] = 1;
                    v5 = v5[1];
                    v3 = 4;
                    return v3;
                }
                else
                {
                    v3 = 4;
                    return v3;
                }
            }
        }
    }
    v3 = 2;
    if (*(v7 + 0x1a) == 0)
    {
        return v3;
    }
    else
    {
        v16 = (long long)quotearg_style();
        if (((long long)v6) != 0)
        {
            v10 = dcgettext(0x0, &g_40cc38, 0x5);
            __printf_chk(0x1, v10);
            v3 = 2;
            return v3;
        }
        else
        {
            v10 = dcgettext(0x0, &g_40cc4e, 0x5);
            __printf_chk(0x1, v10);
            v3 = 2;
            return v3;
        }
    }
}
