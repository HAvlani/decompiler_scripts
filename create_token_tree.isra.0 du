typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_10 {
    uint128_t field_0;
} struct_10;

int create_token_tree.isra.0()
{
    BOT tmp_7;  // tmp #7
    struct_10 *v0;  // [bp-0x30]
    unsigned long long v11;  // rdi
    unsigned long long v12;  // rdi
    unsigned long v13;  // r8
    struct_9 *v15;  // r14
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    struct_9 * v5;  // rdx
    unsigned long long v6;  // rdx
    struct_9 *v7;  // rbx
    struct_9 *v8;  // rbp
    struct_3 *|unsigned long long v9;  // rsi

    v15 = v11;
    v8 = v6;
    v7 = v4;
    v12 = ((long long)v9->field_0);
    if (v9->field_0 != 15)
    {
        v5 = v15->field_0;
        v4 = ((int)v12) + 1;
        v3 = v12 * 64 + 8;
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
            0 = 0;
            v5->field_0 = tmp_7;
            v3 = 8;
        }
        else
        {
            v2 = 0;
            return v2;
        }
    }
    if (v9->field_0 != 15 || v5 != 0)
    {
        v9 = 0 * 64;
        v9->field_0 = v4;
        v2 = v3 + v5;
        *(v5 + v9 + 8) = 0;
        *(v5 + v9 + 16) = v8;
        *(v5 + v9 + 24) = v7;
        *(v5 + v9 + 48) = v0->field_0;
        *(v5 + v9 + 58) = *(v5 + v9 + 58) & 243;
        *(v5 + v9 + 32) = 0;
        *(v5 + v9 + 40) = 0;
        *(v5 + v9 + 64) = 18446744069414584319;
        if (v8 != 0)
        {
            v8->field_0 = v2;
        }
        if (v7 != 0)
        {
            v7->field_0 = v2;
            return v2;
        }
        return v2;
    }
}
