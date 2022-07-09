typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int heap_insert()
{
    struct_0 *|unsigned long long v1;  // rax
    unsigned long long v10;  // r8
    unsigned long long v11;  // r12
    struct_0 *v12;  // r13
    unsigned long long v13;  // r14
    struct_0 *v14;  // r15
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rbx
    unsigned long|struct_0 * v4;  // rbx
    unsigned long long v5[4];  // rbp
    struct_0 *v6;  // rbp
    unsigned long|unsigned long long v7;  // rsi
    struct_0 *|unsigned long long v8;  // rdi
    unsigned long long v9[4];  // rdi

    v5 = v9;
    v1 = v9[1];
    v3 = v9[2];
    v8 = v9[0];
    v2 = v1 - 1;
    if (v1 - 1 <= v3)
    {
        v3 = v5[2];
        v5[0] = v8;
        v8 = (long long)x2nrealloc();
    }
    v4 = v3 + 1;
    v5[2] = v4;
    *(v8 + v4 * 8) = v7;
    v13 = v5[3];
    v6 = v5[0];
    v11 = *(v6 + v4 * 8);
    if (v4 == 1)
    {
        v1 = v6 + 8;
        v1->field_0 = v7;
        return 0;
    }
    while (true)
    {
        v14 = v4;
        v4 = v4 % 2;
        v7 = v11;
        v12 = v6 + v4 * 8;
        v8 = *(v6 + v4 * 8);
        v10 = r14<8>();
        v1 = v6 + v14 * 8;
        v2 = v12->field_0;
        v1->field_0 = v12->field_0;
        v1 = v6 + 8;
        break;
    }
    v1->field_0 = v7;
    return 0;
}
