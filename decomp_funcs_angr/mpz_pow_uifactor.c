typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char dummy_limb.5449;

int mpz_pow_ui()
{
    unsigned long long|unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r12d
    struct_1 *v13;  // r15
    unsigned long long v14;  // cc_dep1
    struct_0 *v15;  // fs
    unsigned long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x40]
    unsigned int v6;  // eax
    unsigned int v7;  // edx
    unsigned long v8;  // rdx
    unsigned long|unsigned long long v9;  // rbp

    v13 = v10;
    v12 = 64;
    v9 = 0x8000000000000000;
    v0 = 0;
    v2 = &dummy_limb.5449;
    mpz_set_ui.part.0();
    while (true)
    {
        mpz_mul();
        if ((v8 & v9) == 0)
        {
            v9 = v9 % 2;
            v14 = v12;
            v12 = ((int)v12) - 1;
            if (v14 == 1)
            {
                break;
            }
        }
        else
        {
            v9 = v9 % 2;
            mpz_mul();
            v14 = v12;
            v12 = ((long long)v12) - 1;
            if (v14 == 1)
            {
                break;
            }
        }
    }
    v6 = ((int)v13->field_0);
    v11 = v13->field_8;
    v13->field_0 = ((int)v0);
    v0 = v6;
    v13->field_8 = &dummy_limb.5449;
    v7 = ((int)v13->field_4);
    v2 = v11;
    v13->field_4 = 0;
    v1 = v7;
    if (v0 != 0)
    {
        gmp_default_free();
        return v3 ^ *(v15 + 0x28);
    }
    return v3 ^ *(v15 + 0x28);
}
