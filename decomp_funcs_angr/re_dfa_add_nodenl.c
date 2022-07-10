typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[124];
    unsigned int field_b4;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned int field_8;
    char field_a;
} struct_5;

int re_dfa_add_node()
{
    BOT tmp_69;  // tmp #69
    BOT tmp_87;  // tmp #87
    BOT tmp_104;  // tmp #104
    unsigned int v0;  // [bp-0x40]
    struct_4 * v10;  // rsi
    unsigned long long v11;  // rsi
    void *|struct_2 * v12;  // rdi
    void *v13;  // rdi
    unsigned long|unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r14
    unsigned long long v18;  // r15
    unsigned long long v2;  // rax
    struct_5 *v3;  // rax
    unsigned long long v4;  // rax
    unsigned long|unsigned long long v5;  // rdx
    unsigned long long v6;  // rdx
    char v7;  // dl
    struct_2 *v8;  // rbx
    unsigned long long v9;  // rbp

    v15 = v11;
    v9 = v5;
    v8 = v12;
    v10 = v12->field_10;
    v14 = v12->field_8;
    if (v12->field_10 >= v12->field_8)
    {
        v16 = v14 * 2;
        if (v14 << 1 <= 768614336404564650)
        {
            v12 = v12->field_0;
            v2 = realloc(v12, v14 * 32);
            if (v2 != 0)
            {
                v8->field_8 = v16;
                v13 = v8->field_18;
                v8->field_0 = v2;
                v16 = realloc(v13, v14 * 16);
                if (v16 != 0)
                {
                    v8->field_18 = v16;
                }
                v18 = realloc(v8->field_20, v14 * 16);
                if (v18 != 0)
                {
                    v8->field_20 = v18;
                }
                v12 = v8->field_28;
                ((unsigned int)v0) = v14 * 48;
                v14 = realloc(v12, v14 * 48);
                if (v14 != 0)
                {
                    v8->field_28 = v14;
                }
                v2 = realloc(v8->field_30, ((unsigned int)v0));
                if (v2 != 0)
                {
                    v8->field_30 = v2;
                    if (!(v16 != 0))
                    {
                        v4 = 18446744069414584319;
                        return v4;
                    }
                    else if (!(v18 != 0))
                    {
                        v4 = 18446744069414584319;
                        return v4;
                    }
                    else if (v14 != 0)
                    {
                        v10 = v8->field_10;
                    }
                    else
                    {
                        v4 = 18446744069414584319;
                        return v4;
                    }
                }
                else
                {
                    v4 = 18446744069414584319;
                    return v4;
                }
            }
            else
            {
                v4 = 18446744069414584319;
                return v4;
            }
        }
        else
        {
            v4 = 18446744069414584319;
            return v4;
        }
    }
    if (v12->field_10 < v12->field_8 || v14 << 1 <= 768614336404564650 && v18 != 0 && v14 != 0 && v2 != 0 && v16 != 0 && v2 != 0)
    {
        v6 = ((long long)(((int)v5) & -261889));
        v3 = v10 * 16 + v8->field_0;
        *(v10 * 16 + v8->field_0 + 8) = v9;
        v3->field_0 = v15;
        v3->field_8 = ((int)v9) & -261889;
        v7 = ((char)(v9 == 6));
        if (v9 == 5)
        {
            v7 = ((char)(1 < v8->field_b4));
            v5 = ((long long)(((int)*(v3 + 0xa)) & -17 | ((int)v7) * 16));
            tmp_69 = v5;
            *(v3 + 0xa) = tmp_69;
            *(v8->field_18 + v10 * 8) = 18446744069414584319;
            tmp_87 = v8->field_28 + v8->field_10 * 24;
            *(v8->field_28 + v8->field_10 * 24 + 16) = 0;
            *(tmp_87) = 0;
            tmp_104 = v8->field_30 + v8->field_10 * 24;
            *(v8->field_30 + v8->field_10 * 24 + 16) = 0;
            *(tmp_104) = 0;
            v4 = v8->field_10;
            v8->field_10 = v8->field_10 + 1;
            return v4;
        }
        v5 = ((long long)(((int)*(v3 + 0xa)) & -17 | ((int)v7) * 16));
        tmp_69 = v5;
        *(v3 + 0xa) = tmp_69;
        *(v8->field_18 + v10 * 8) = 18446744069414584319;
        tmp_87 = v8->field_28 + v8->field_10 * 24;
        *(v8->field_28 + v8->field_10 * 24 + 16) = 0;
        *(tmp_87) = 0;
        tmp_104 = v8->field_30 + v8->field_10 * 24;
        *(v8->field_30 + v8->field_10 * 24 + 16) = 0;
        *(tmp_104) = 0;
        v4 = v8->field_10;
        v8->field_10 = v8->field_10 + 1;
        return v4;
    }
}
