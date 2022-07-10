typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_9 {
    uint128_t field_0;
} struct_9;

int create_token_tree.isra.0()
{
    BOT tmp_7;  // tmp #7
    struct_9 *v0;  // [bp-0x30]
    struct_4 *|unsigned long long v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned long v12;  // rdi
    unsigned long v13;  // r8
    struct_10 *v15;  // r14
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // ecx
    struct_10 * v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbx
    struct_10 *v8;  // rbp

    v15 = v12;
    v8 = v6;
    v7 = v4;
    v11 = ((long long)v10->field_0);
    if (v10->field_0 != 15)
    {
        0 = ((long long)v10->field_0);
        v5 = v15->field_0;
        v4 = ((int)v11) + 1;
        v3 = v11 * 64 + 8;
    }
    else
    {
        v0 = v13;
        v5 = malloc(0x3c8);
        if (v5 != 0)
        {
            tmp_7 = v15->field_0;
            v15->field_0 = v5;
            v4 = 1;
            v5->field_0 = tmp_7;
            v3 = 8;
        }
        else
        {
            v2 = 0;
            return v2;
        }
    }
    if (v10->field_0 != 15 || v5 != 0)
    {
        v10 = 0 * 64;
        v10->field_0 = v4;
        v2 = v3 + v5;
        *(v5 + v10 + 8) = 0;
        *(v5 + v10 + 16) = v8;
        *(v5 + v10 + 24) = v7;
        *(v5 + v10 + 48) = v0->field_0;
        *(v5 + v10 + 58) = *(v5 + v10 + 58) & 243;
        *(v5 + v10 + 32) = 0;
        *(v5 + v10 + 40) = 0;
        *(v5 + v10 + 64) = 18446744069414584319;
        if (v8 != 0)
        {
            v8->field_0 = v2;
        }
        if (v7 != 0)
        {
            *(v7) = v2;
            return v2;
        }
        return v2;
    }
}
