typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char dummy_limb.5449;

int mpz_bin_uiui()
{
    unsigned long|unsigned long long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    struct_0 *v10;  // rdi
    unsigned long long v11;  // r12
    unsigned long long v12;  // r13
    struct_1 *v13;  // fs
    unsigned long v2;  // [bp-0x30]
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi

    v12 = v7;
    v8 = v9;
    if (v7 <= v9)
    {
        mpz_set_ui.part.0();
        v12 = (v9 >> 1 < v12? v9 - v12 : v12);
    }
    else
    {
        v10->field_4 = 0;
        if (v9 >> 1 < v7)
        {
            v0 = 0;
            v1 = &dummy_limb.5449;
            mpz_mfac_uiui();
            /* goto 4235615; */
        }
    }
    if (v7 <= v9 || v9 >> 1 >= v7)
    {
        v0 = 0;
        v1 = &dummy_limb.5449;
        mpz_mfac_uiui();
        v11 = v9 - v12;
        if (v12 != 0)
        {
            while (true)
            {
                v8 -= 1;
                mpz_mul_ui();
                if (v8 == v11)
                {
                    break;
                }
            }
        }
    }
    mpz_divexact();
    if (((int)v0) != 0)
    {
        gmp_default_free();
        return v2 ^ *(v13 + 0x28);
    }
    return v2 ^ *(v13 + 0x28);
}
