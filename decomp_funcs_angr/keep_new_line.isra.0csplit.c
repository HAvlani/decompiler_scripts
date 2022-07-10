typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
} struct_2;

int keep_new_line.isra.0()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // rsi
    struct_2 *v11;  // rdi
    struct_1 *v12;  // rdi
    unsigned long long v2[164];  // rax
    unsigned long long v3[164];  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long [164] v7;  // rbx
    unsigned long long *v8[164];  // rbp
    struct_1 *v9;  // rsi

    v8 = v9;
    if (v12->field_0 == 0)
    {
        v3 = xmalloc();
        v9->field_0 = v3;
        v3[163] = 0;
        v3[0] = 0;
        v3[1] = 0;
        v3[2] = 0;
        v12->field_0 = v3;
    }
    v7 = v8[0];
    v1 = v8[0][0];
    if (v8[0][0] != 80)
    {
        v4 = v1 + 1;
        v10 = v7[1] + 1;
        v11 = v7[1] * 16 + v7;
        *(v7[1] * 16 + v7 + 32) = v6;
        v11->field_18 = v5;
        v7[0] = v4;
        v7[1] = v10;
        return v4;
    }
    v2 = xmalloc();
    v2[163] = 0;
    v2[0] = 0;
    v2[1] = 0;
    v2[2] = 0;
    v7[163] = v2;
    v7 = v8[0][163];
    v8[0] = v8[0][163];
    v1 = v7[0];
    v4 = v1 + 1;
    v10 = v7[1] + 1;
    v11 = v7[1] * 16 + v7;
    *(v7[1] * 16 + v7 + 32) = v6;
    v11->field_18 = v5;
    v7[0] = v4;
    v7[1] = v10;
    return v4;
}
