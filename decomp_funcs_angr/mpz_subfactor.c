typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int mpz_sub()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long|unsigned int v3;  // rdx
    struct_0 *v4;  // rdx
    struct_0 *v5;  // rbx
    struct_0 *v6;  // rsi
    unsigned int v7;  // esi
    struct_0 *v8;  // rdi

    v5 = v6;
    v7 = ((int)v6->field_4);
    if ((v6->field_4 ^ v4->field_4) >= 0)
    {
        v1 = mpz_abs_sub.isra.0();
    }
    else
    {
        v1 = mpz_abs_add();
    }
    v3 = v1;
    v2 = ((long long)v5->field_4);
    if (((int)v5->field_4) < 0)
    {
        v3 = ((int)(0 - ((int)v3)));
        v8->field_4 = v3;
        return v2;
    }
    v8->field_4 = v3;
    return v2;
}
