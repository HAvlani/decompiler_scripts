typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[32];
    unsigned long long field_38;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int fts_sort()
{
    unsigned long long v1;  // rax
    struct_3 * v10;  // rsi
    unsigned long long v11;  // rsi
    unsigned long long|void * v12;  // rdi
    unsigned long long v13[8];  // rdi
    struct_2 *v14;  // r8
    unsigned long long v15;  // r12
    unsigned long long v3;  // rcx
    struct_3 * v4;  // rdx
    struct_2 * v5;  // rdx
    unsigned long long [2] v6;  // rdx
    unsigned long v7;  // rdx
    struct_3 * v8;  // rbx
    struct_0 *v9;  // rbp

    v15 = v7;
    v9 = v13;
    v8 = v11;
    v12 = v13[2];
    if (v9->field_38 < v7)
    {
        v9->field_38 = v7 + 40;
        if (v7 + 40 <= 2305843009213693951)
        {
            v12 = realloc(v12, (v7 + 40) * 8);
            if (v12 != 0)
            {
                v9->field_10 = v12;
            }
            else
            {
                rpl_free();
                v9->field_10 = 0;
                v9->field_38 = 0;
                return v11;
            }
        }
        else
        {
            rpl_free();
            v9->field_10 = 0;
            v9->field_38 = 0;
            return v11;
        }
    }
    if (v9->field_38 >= v7 || v7 + 40 <= 2305843009213693951 && v12 != 0)
    {
        v5 = v12;
        if (v11 != 0)
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
        v1 = v9->field_10->field_0;
        v6 = v9->field_10;
        v10 = v9->field_10->field_0;
        v3 = v15 - 1;
        if (v15 == 1)
        {
            v4 = v1;
            v4->field_10 = 0;
            return v4;
        }
        while (true)
        {
            v12 = v6[1];
            v6 += 8;
            v10->field_10 = v12;
            v3 -= 1;
            if (v3 == 1)
            {
                break;
            }
            v10 = v6[0];
        }
        v4 = *(v14 + v15 * 8 + 8);
        v4->field_10 = 0;
        return v4;
    }
}
