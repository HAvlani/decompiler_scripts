typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_swap()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_23;  // tmp #23
    BOT tmp_28;  // tmp #28
    unsigned long long v1;  // rax
    unsigned int v2;  // edx
    struct_0 *v3;  // rsi
    struct_0 *v4;  // rdi

    tmp_15 = ((long long)v4->field_0);
    v4->field_0 = v3->field_0;
    tmp_23 = v3->field_8;
    v3->field_0 = ((int)tmp_15);
    tmp_28 = v4->field_8;
    v4->field_8 = tmp_23;
    v2 = ((int)v3->field_4);
    v3->field_8 = tmp_28;
    v1 = ((long long)v4->field_4);
    v4->field_4 = v2;
    v3->field_4 = ((int)v1);
    return v1;
}
