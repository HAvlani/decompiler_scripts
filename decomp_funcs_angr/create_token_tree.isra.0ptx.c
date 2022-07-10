typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_6 {
    unsigned int field_0;
} struct_6;

typedef struct struct_10 {
    uint128_t field_0;
} struct_10;

int create_token_tree.isra.0()
{
    BOT tmp_7;  // tmp #7
    struct_10 *v0;  // [bp-0x30]
    struct_6 *|unsigned long long v10;  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // rdi
    unsigned long v13;  // r8
    struct_9 *v15;  // r14
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // ecx
    unsigned long v5;  // rdx
    struct_9 * v6;  // rdx
    struct_9 *v7;  // rbx
    struct_9 *v8;  // rbp

    v15 = v11;
    v8 = v5;
    v7 = v4;
    v12 = ((long long)v10->field_0);
    if (v10->field_0 != 15)
    {
        v6 = v15->field_0;
        v4 = ((int)v12) + 1;
        v2 = v12 * 64 + 8;
    }
    else
    {
        v0 = v13;
        v6 = malloc(0x3c8);
        if (v6 != 0)
        {
            tmp_7 = v15->field_0;
            v15->field_0 = v6;
            v4 = 1;
            0 = 0;
            v6->field_0 = tmp_7;
            v2 = 8;
        }
        else
        {
            v3 = 0;
            return v3;
        }
    }
    if (v10->field_0 != 15 || v6 != 0)
    {
        v10 = 0 * 64;
        v10->field_0 = v4;
        v3 = v2 + v6;
        *(v6 + v10 + 8) = 0;
        *(v6 + v10 + 16) = v8;
        *(v6 + v10 + 24) = v7;
        *(v6 + v10 + 48) = v0->field_0;
        *(v6 + v10 + 58) = *(v6 + v10 + 58) & 243;
        *(v6 + v10 + 32) = 0;
        *(v6 + v10 + 40) = 0;
        *(v6 + v10 + 64) = 18446744069414584319;
        if (v8 != 0)
        {
            v8->field_0 = v3;
        }
        if (v7 != 0)
        {
            v7->field_0 = v3;
            return v3;
        }
        return v3;
    }
}
