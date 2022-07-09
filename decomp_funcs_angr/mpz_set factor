typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_2;

int mpz_set()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v10;  // rbx
    struct_2 *v11;  // rbp
    unsigned long long v12;  // rsi
    struct_0 *v13;  // rsi
    struct_1 * v14;  // rdi
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    struct_1 *v17;  // r13d
    unsigned long long v18;  // r13
    unsigned long long v19;  // r13
    unsigned long long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    if (v14 != v13)
    {
        v3 = v18;
        v2 = v15;
        v1 = &stack_base+0;
        v11 = v14;
        v0 = v8;
        v17 = ((int)v13->field_4);
        v10 = ((long long)((((int)(((long long)v13->field_4) >> 31)) ^ v13->field_4) - ((int)(((long long)v13->field_4) >> 31))));
        if ((((int)(((long long)v13->field_4) >> 31)) ^ v13->field_4) - ((int)(((long long)v13->field_4) >> 31)) <= v14->field_0)
        {
            v6 = v14->field_8;
            v14 = ((int)v13->field_4);
        }
        else
        {
            v6 = mpz_realloc();
            v14 = ((long long)v13->field_4);
        }
        v12 = v13->field_8;
        v7 = 0;
        if (v17 != 0)
        {
            do
            {
                *(v6 + v7 * 8) = *(v12 + v7 * 8);
                v7 += 1;
            }
            while (v10 != v7);
            v11->field_4 = v14;
            v9 = v0;
            v16 = v2;
            v19 = v3;
            return v6;
        }
        v11->field_4 = v14;
        v9 = v0;
        v16 = v2;
        v19 = v3;
        return v6;
    }
    return v5;
}
