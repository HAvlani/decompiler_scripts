typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int mpz_abs()
{
    BOT tmp_38;  // tmp #38
    unsigned long long v1;  // rax
    struct_0 *v3;  // rbx
    unsigned long long v4;  // rdi

    v3 = v4;
    mpz_set();
    tmp_38 = ((long long)(((long long)v3->field_4) >> 31));
    v1 = ((long long)v3->field_4) >> 31;
    v3->field_4 = v3->field_4 ^ ((int)(((long long)v3->field_4) >> 31));
    v3->field_4 = v3->field_4 - ((int)tmp_38);
    return v1;
}
