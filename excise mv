typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
} struct_0;

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

typedef struct struct_2 {
    char padding_0[26];
    char field_1a;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

extern unsigned int g_416c30;
extern unsigned int g_416c46;
extern unsigned int g_416c52;

int excise()
{
    unsigned long long v0;  // [bp-0x1e8]
    char v1;  // [bp-0xc8]
    unsigned long|char * v10;  // rsi
    struct_1 *v11;  // rsi
    unsigned long v12;  // rdi
    struct_0 *v13;  // rdi
    struct_3 *v14;  // r12
    struct_3 *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v17;  // r14
    char v18;  // cc_dep1
    unsigned long long [12] v3;  // rax
    unsigned long long|unsigned int v5;  // rax
    char v6;  // cl
    char *v7;  // rdx
    struct_4 *v8;  // rbx
    struct_0 *v9;  // rbp

    v9 = v13;
    v8 = v11;
    v10 = v11->field_30;
    v12 = ((long long)v13->field_2c);
    v5 = unlinkat(v12, v10, ((int)(((long long)(((long long)v6) != 0)) * 0x200)));
    if (v5 != 0)
    {
        v17 = ((long long)v15->field_0);
        v15 = __errno_location();
        if (v15->field_0 != 30)
        {
            if (*(v7) != 0)
            {
                v5 = 2;
                if (!(((int)v17) != 22))
                {
                    return v5;
                }
                else if (((char)(v17 <= 22)))
                {
                    if (((int)v17) != 2)
                    {
                    }
                    else
                    {
                        return v5;
                    }
                    if (((int)v17) == 20)
                    {
                        return v5;
                    }
                }
                else if (((int)v17) == 84)
                {
                    return v5;
                }
            }
        }
        v5 = __fxstatat(0x1, v9->field_2c, ((int)v8->field_30), ((int)&v1), 0x100);
        if (v5 != 0)
        {
            if (v14->field_0 == 2)
            {
                v5 = 2;
                v17 = 2;
                if (*(v7) != 0)
                {
                    return v5;
                }
            }
        }
        if (v5 == 0 || v14->field_0 != 2)
        {
            v18 = ((char)*(v7));
            v14->field_0 = 30;
        }
        if (...)
        {
            v0 = 0x8000320000;
            if ((((char)(((long long)*(&stack_base-488 + ((v17 & 63) >> 3))) >> ((long long)((char)(v17 & 63 & 7))))) & 1) != 0)
            {
                v5 = ((int)v8->field_40);
                if (v8->field_40 == 1 || v5 == 13)
                {
                    v14->field_0 = v5;
                }
            }
        }
        if (...)
        {
            v16 = (long long)quotearg_style();
            error(0x0, v14->field_0, dcgettext(0x0, &g_416c52, 0x5));
            v3 = v8->field_8;
            if (((char)(v8->field_8->field_58 - 0 >> 63)))
            {
                v5 = 4;
                return v5;
            }
            while (true)
            {
                if (v3[4] == 0)
                {
                    v3[4] = 1;
                    v3 = v3[1];
                    v5 = 4;
                    return v5;
                }
                else
                {
                    v5 = 4;
                    return v5;
                }
            }
        }
    }
    v5 = 2;
    if (*(v7 + 0x1a) == 0)
    {
        return v5;
    }
    else
    {
        v16 = (long long)quotearg_style();
        if (((long long)v6) != 0)
        {
            v10 = dcgettext(0x0, &g_416c30, 0x5);
            __printf_chk(0x1, v10);
            v5 = 2;
            return v5;
        }
        else
        {
            v10 = dcgettext(0x0, &g_416c46, 0x5);
            __printf_chk(0x1, v10);
            v5 = 2;
            return v5;
        }
    }
}
