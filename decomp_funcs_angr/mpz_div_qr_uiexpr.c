typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern char dummy_limb.5449;

int mpz_div_qr_ui()
{
    BOT tmp_19;  // tmp #19
    unsigned long long|unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned int v10;  // edx
    struct_0 *v11;  // rbx
    struct_1 * v12;  // rsi
    unsigned long long v13;  // r12
    unsigned long|struct_2 * v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long v4;  // [bp-0x40]
    unsigned long long v7;  // rax
    unsigned long v9;  // rcx

    v11 = v12;
    v0 = 0;
    v2 = &dummy_limb.5449;
    v3 = 0;
    v4 = &dummy_limb.5449;
    if (v9 != 0)
    {
        mpz_set_ui.part.0();
    }
    mpz_div_qr();
    if (((int)v3) != 0)
    {
        gmp_default_free();
    }
    v13 = 0;
    if (((int)*((int *)(((char *)&v0) + 4))) != 0)
    {
        v13 = v2->field_0;
    }
    if (v12 != 0)
    {
        v12 = ((long long)v12->field_0);
        v11->field_0 = 0;
        tmp_19 = v11->field_8;
        v0 = ((int)v12);
        v2 = tmp_19;
        v10 = ((int)v11->field_4);
        v11->field_8 = &dummy_limb.5449;
        v11->field_4 = 0;
        v1 = v10;
    }
    if (v12 != 0)
    {
        gmp_default_free();
        v7 = v13;
        return v7;
    }
    v7 = v13;
    return v7;
}
