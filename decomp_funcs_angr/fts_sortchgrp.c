typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    char padding_18[32];
    unsigned long long field_38;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int fts_sort()
{
    unsigned long v10;  // rsi
    struct_0 * v11;  // rsi
    void *|unsigned long long v12;  // rdi
    unsigned long long v13[8];  // rdi
    unsigned long long v14[2];  // r8
    unsigned long long v15;  // r12
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rdx
    struct_3 * v5;  // rdx
    struct_0 * v6;  // rdx
    unsigned long long [2] v7;  // rdx
    struct_0 * v8;  // rbx
    struct_1 *v9;  // rbp

    v15 = v4;
    v9 = v13;
    v8 = v10;
    v12 = v13[2];
    if (v9->field_38 < v4)
    {
        v9->field_38 = v4 + 40;
        if (v4 + 40 <= 2305843009213693951)
        {
            v12 = realloc(v12, (v4 + 40) * 8);
            if (v12 != 0)
            {
                v9->field_10 = v12;
            }
            else
            {
                rpl_free();
                v9->field_10 = 0;
                v9->field_38 = 0;
                return v10;
            }
        }
        else
        {
            rpl_free();
            v9->field_10 = 0;
            v9->field_38 = 0;
            return v10;
        }
    }
    if (v9->field_38 >= v4 || v4 + 40 <= 2305843009213693951 && v12 != 0)
    {
        v5 = v12;
        if (v10 != 0)
        {
            do
            {
                v5->field_0 = v8;
                v8 = v8->field_10;
                v5 += 8;
            }
            while (v8 != 0);
        }
        qsort();
        v14 = v9->field_10;
        v2 = v9->field_10->field_0;
        v7 = v9->field_10;
        v11 = v9->field_10->field_0;
        v3 = v15 - 1;
        if (v15 == 1)
        {
            v6 = v2;
            v6->field_10 = 0;
            return v6;
        }
        while (true)
        {
            v12 = v7[1];
            v7 += 8;
            v11->field_10 = v12;
            v3 -= 1;
            if (v3 == 1)
            {
                break;
            }
            v11 = v7[0];
        }
        v6 = v14 + v15 * 8[1];
        v6->field_10 = 0;
        return v6;
    }
}