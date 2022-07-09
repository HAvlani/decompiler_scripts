typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

int mpz_abs_add()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    struct_1 *v4;  // rdx
    struct_2 * v5;  // rbx
    struct_1 *v6;  // rsi
    struct_0 *v7;  // rdi
    unsigned long long v8;  // r8
    struct_2 * v9;  // r13

    v5 = ((long long)((v6->field_4 ^ ((int)(((long long)v6->field_4) >> 31))) - ((int)(((long long)v6->field_4) >> 31))));
    v8 = ((long long)((v4->field_4 ^ ((int)(((long long)v4->field_4) >> 31))) - ((int)(((long long)v4->field_4) >> 31))));
    if (((long long)((v6->field_4 ^ ((int)(((long long)v6->field_4) >> 31))) - ((int)(((long long)v6->field_4) >> 31)))) < ((long long)((v4->field_4 ^ ((int)(((long long)v4->field_4) >> 31))) - ((int)(((long long)v4->field_4) >> 31)))))
    {
        v5 = ((long long)((v4->field_4 ^ ((int)(((long long)v4->field_4) >> 31))) - ((int)(((long long)v4->field_4) >> 31))));
        v8 = ((long long)((v6->field_4 ^ ((int)(((long long)v6->field_4) >> 31))) - ((int)(((long long)v6->field_4) >> 31))));
    }
    if (((long long)v7->field_0) > v5)
    {
        v9 = v7->field_8;
        v3 = mpn_add();
        *(v9 + v5 * 8) = v3;
        v2 = v3 + v5;
        return v2;
    }
    v0 = v8;
    v9 = (long long)mpz_realloc();
    v3 = mpn_add();
    *(v9 + v5 * 8) = v3;
    v2 = v3 + v5;
    return v2;
}
