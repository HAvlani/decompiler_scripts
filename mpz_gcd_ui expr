typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char dummy_limb.5449;

int mpz_gcd_ui()
{
    BOT tmp_13;  // tmp #13
    unsigned long long|unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long v10;  // rdi
    unsigned long long v11;  // r12
    struct_0 *|unsigned long v2;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned long|unsigned int v7;  // rdx
    struct_1 *v8;  // rbx
    unsigned long|unsigned int v9;  // rsi

    v8 = v10;
    v0 = 0;
    v2 = &dummy_limb.5449;
    if (v7 != 0)
    {
        mpz_set_ui.part.0();
        mpz_gcd();
        v11 = 0;
        if (((int)*((int *)(((char *)&v0) + 4))) != 0)
        {
            v11 = v2->field_0;
        }
    }
    else
    {
        v11 = 0;
        mpz_gcd();
    }
    v9 = ((int)((int)v0));
    if (v10 != 0)
    {
        tmp_13 = v8->field_8;
        v9 = ((long long)v8->field_0);
        v8->field_0 = 0;
        v2 = tmp_13;
        v7 = ((int)v8->field_4);
        v8->field_8 = &dummy_limb.5449;
        v0 = ((int)v9);
        v1 = v7;
        v8->field_4 = 0;
    }
    if (v9 != 0)
    {
        gmp_default_free();
        v5 = v11;
        return v5;
    }
    v5 = v11;
    return v5;
}
