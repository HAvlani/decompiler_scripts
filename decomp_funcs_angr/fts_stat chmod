typedef struct struct_1 {
    char padding_0[64];
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[16];
    unsigned long long field_70;
    char padding_78[16];
    unsigned int field_88;
    char padding_8c[116];
    char field_100;
    char field_101;
} struct_1;

typedef struct struct_4 {
    char padding_0[136];
    unsigned long long field_88;
} struct_4;

typedef struct struct_0 {
    char padding_0[72];
    unsigned int field_48;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int fts_stat()
{
    unsigned long|unsigned long long|unsigned int v1;  // rax
    struct_3 * v10;  // rdi
    struct_0 *v11;  // rdi
    struct_2 *v12;  // r13
    unsigned long v13;  // d
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // eax
    unsigned long long v5;  // rcx
    char v6;  // dl
    struct_1 *v7;  // rbx
    struct_4 *v8;  // rbp
    struct_1 *v9;  // rsi

    v8 = v9 + 112;
    v7 = v9;
    if (((long long)(((char)v11->field_48) & 2)) == 0)
    {
        if (((long long)(((char)v11->field_48) & 1)) != 0)
        {
            if (v9->field_58 == 0)
            {
                /* goto 4210392; */
            }
        }
        if (((long long)(((char)v11->field_48) & 1)) == 0 || v9->field_58 != 0)
        {
            if (((long long)v6) == 0)
            {
                v1 = __fxstatat(0x1);
                if (v1 < 0)
                {
                    v1 = ((int)*(__errno_location()));
                    /* goto 4210499; */
                }
            }
        }
    }
    if (((long long)(((char)v11->field_48) & 2)) != 0 || ((long long)v6) != 0 || v9->field_58 == 0 && ((long long)(((char)v11->field_48) & 1)) != 0)
    {
        v1 = __fxstatat(0x1);
    }
    if (v1 < 0)
    {
        if (v9->field_58 == 0 || ((long long)(((char)v11->field_48) & 2)) != 0 || ((long long)v6) != 0)
        {
            if (((long long)(((char)v11->field_48) & 2)) != 0 || ((long long)v6) != 0 || ((long long)(((char)v11->field_48) & 1)) != 0)
            {
                v12 = __errno_location();
                v1 = ((long long)v12->field_0);
                if (((int)v1) == 2)
                {
                    v3 = __fxstatat(0x1);
                    if (v3 >= 0)
                    {
                        v12->field_0 = 0;
                        return 13;
                    }
                    v1 = ((long long)v12->field_0);
                    /* goto 4210499; */
                }
            }
        }
    }
    if (...)
    {
        v4 = ((int)(v7->field_88 & 0xf000));
        if (!((((short)v7->field_88) & 0xf000) != 0x4000))
        {
            v2 = 1;
            if (v7->field_100 != 46)
            {
                return v2;
            }
            if (v7->field_101 != 0)
            {
                if ((((int)v7->field_100) & 0xffff00) != 0x2e00)
                {
                    return v2;
                }
                else
                {
                    v2 = ((long long)((0 - ((int)(v7->field_58 < 1)) & -0x4) + 5));
                    return v2;
                }
            }
            else
            {
                v2 = ((long long)((0 - ((int)(v7->field_58 < 1)) & -0x4) + 5));
                return v2;
            }
        }
        else if ((((short)v9->field_88) & 0xf000) != 0xa000)
        {
            v2 = ((long long)(v4 == 0x8000)) * 5 + 3;
            return v2;
        }
        else
        {
            v2 = 12;
            return v2;
        }
    }
    if (...)
    {
        v7->field_40 = v1;
        v10 = v8 + 8 & 18446744069414584312;
        v7->field_70 = 0;
        v8->field_88 = 0;
        for (v5 = v9 + 112 - (v9 + 112 + 8 & 18446744069414584312) + 144 >> 3; v5 != 0; v10 += v13 * 8)
        {
            v5 -= 1;
            v10->field_0 = 0;
        }
        return 10;
    }
}
