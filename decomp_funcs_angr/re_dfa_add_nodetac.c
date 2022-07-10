typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[124];
    unsigned int field_b4;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned int field_8;
    char field_a;
} struct_4;

int re_dfa_add_node()
{
    BOT tmp_69;  // tmp #69
    BOT tmp_87;  // tmp #87
    BOT tmp_104;  // tmp #104
    unsigned int v0;  // [bp-0x40]
    unsigned long v10;  // rsi
    struct_5 * v11;  // rsi
    void *|struct_0 * v12;  // rdi
    void *v13;  // rdi
    unsigned long|unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r14
    unsigned long long v17;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    struct_4 *v4;  // rax
    unsigned long|unsigned long long v5;  // rdx
    unsigned long long v6;  // rdx
    char v7;  // dl
    struct_0 *v8;  // rbx
    unsigned long long v9;  // rbp

    v15 = v10;
    v9 = v5;
    v8 = v12;
    v11 = v12->field_10;
    v14 = v12->field_8;
    if (v12->field_10 >= v12->field_8)
    {
        v16 = v14 * 2;
        if (v14 << 1 <= 768614336404564650)
        {
            v12 = v12->field_0;
            v3 = realloc(v12, v14 * 32);
            if (v3 != 0)
            {
                v8->field_8 = v16;
                v13 = v8->field_18;
                v8->field_0 = v3;
                v16 = realloc(v13, v14 * 16);
                if (v16 != 0)
                {
                    v8->field_18 = v16;
                }
                v17 = realloc(v8->field_20, v14 * 16);
                if (v17 != 0)
                {
                    v8->field_20 = v17;
                }
                v12 = v8->field_28;
                ((unsigned int)v0) = v14 * 48;
                v14 = realloc(v12, v14 * 48);
                if (v14 != 0)
                {
                    v8->field_28 = v14;
                }
                v3 = realloc(v8->field_30, ((unsigned int)v0));
                if (v3 != 0)
                {
                    v8->field_30 = v3;
                    if (!(v16 != 0))
                    {
                        v2 = 18446744069414584319;
                        return v2;
                    }
                    else if (!(v17 != 0))
                    {
                        v2 = 18446744069414584319;
                        return v2;
                    }
                    else if (v14 != 0)
                    {
                        v11 = v8->field_10;
                    }
                    else
                    {
                        v2 = 18446744069414584319;
                        return v2;
                    }
                }
                else
                {
                    v2 = 18446744069414584319;
                    return v2;
                }
            }
            else
            {
                v2 = 18446744069414584319;
                return v2;
            }
        }
        else
        {
            v2 = 18446744069414584319;
            return v2;
        }
    }
    if (v12->field_10 < v12->field_8 || v14 << 1 <= 768614336404564650 && v14 != 0 && v3 != 0 && v3 != 0 && v16 != 0 && v17 != 0)
    {
        v6 = ((long long)(((int)v5) & -261889));
        v4 = v11 * 16 + v8->field_0;
        *(v11 * 16 + v8->field_0 + 8) = v9;
        v4->field_0 = v15;
        v4->field_8 = ((int)v9) & -261889;
        v7 = ((char)(v9 == 6));
        if (v9 == 5)
        {
            v7 = ((char)(1 < v8->field_b4));
            v5 = ((long long)(((int)*(v4 + 0xa)) & -17 | ((int)v7) * 16));
            tmp_69 = v5;
            *(v4 + 0xa) = tmp_69;
            *(v8->field_18 + v11 * 8) = 18446744069414584319;
            tmp_87 = v8->field_28 + v8->field_10 * 24;
            *(v8->field_28 + v8->field_10 * 24 + 16) = 0;
            *(tmp_87) = 0;
            tmp_104 = v8->field_30 + v8->field_10 * 24;
            *(v8->field_30 + v8->field_10 * 24 + 16) = 0;
            *(tmp_104) = 0;
            v2 = v8->field_10;
            v8->field_10 = v8->field_10 + 1;
            return v2;
        }
        v5 = ((long long)(((int)*(v4 + 0xa)) & -17 | ((int)v7) * 16));
        tmp_69 = v5;
        *(v4 + 0xa) = tmp_69;
        *(v8->field_18 + v11 * 8) = 18446744069414584319;
        tmp_87 = v8->field_28 + v8->field_10 * 24;
        *(v8->field_28 + v8->field_10 * 24 + 16) = 0;
        *(tmp_87) = 0;
        tmp_104 = v8->field_30 + v8->field_10 * 24;
        *(v8->field_30 + v8->field_10 * 24 + 16) = 0;
        *(tmp_104) = 0;
        v2 = v8->field_10;
        v8->field_10 = v8->field_10 + 1;
        return v2;
    }
}
