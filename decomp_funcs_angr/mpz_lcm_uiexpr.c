typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int mpz_lcm_ui()
{
    BOT tmp_42;  // tmp #42
    unsigned long long v1;  // rax
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx
    struct_0 *v7;  // rbx
    struct_0 *v8;  // rsi
    struct_0 *v9;  // rdi

    v7 = v9;
    if (v6 != 0)
    {
        v1 = ((long long)v8->field_4);
        if (v8->field_4 == 0)
        {
            v9->field_4 = 0;
            return v1;
        }
        mpz_gcd_ui();
        mpz_mul_ui();
        mpz_set();
        tmp_42 = ((long long)(((long long)v7->field_4) >> 31));
        v5 = ((long long)v7->field_4) >> 31;
        v7->field_4 = v7->field_4 ^ ((int)(((long long)v7->field_4) >> 31));
        v7->field_4 = v7->field_4 - ((int)tmp_42);
        return v5;
    }
    v9->field_4 = 0;
    return v1;
}
