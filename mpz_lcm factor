typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char dummy_limb.5449;

int mpz_lcm()
{
    BOT tmp_33;  // tmp #33
    unsigned long long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    struct_0 *v10;  // rbx
    struct_0 *v11;  // rsi
    struct_0 *v12;  // rdi
    struct_1 *v13;  // fs
    unsigned long v2;  // [bp-0x30]
    unsigned int v8;  // ecx
    struct_0 *v9;  // rdx

    v10 = v12;
    v8 = ((int)v11->field_4);
    if (!(v8 != 0))
    {
        v12->field_4 = 0;
        return v2 ^ *(v13 + 0x28);
    }
    else if (v9->field_4 == 0)
    {
        v12->field_4 = 0;
        return v2 ^ *(v13 + 0x28);
    }
    else
    {
        v0 = 0;
        v1 = &dummy_limb.5449;
        mpz_gcd();
        mpz_divexact();
        mpz_mul();
        if (((int)v0) != 0)
        {
            gmp_default_free();
            mpz_set();
            tmp_33 = ((long long)(((long long)v10->field_4) >> 31));
            v10->field_4 = v10->field_4 ^ ((int)(((long long)v10->field_4) >> 31));
            v10->field_4 = v10->field_4 - ((int)tmp_33);
            return v2 ^ *(v13 + 0x28);
        }
        mpz_set();
        tmp_33 = ((long long)(((long long)v10->field_4) >> 31));
        v10->field_4 = v10->field_4 ^ ((int)(((long long)v10->field_4) >> 31));
        v10->field_4 = v10->field_4 - ((int)tmp_33);
        return v2 ^ *(v13 + 0x28);
    }
}
