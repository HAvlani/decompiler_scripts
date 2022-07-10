typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mp_factor_insert()
{
    unsigned long|unsigned long long|struct_1 * v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    struct_1 * v13;  // rbx
    unsigned long long|unsigned long long [3] v14;  // rdi
    unsigned long long v15[3];  // r12
    unsigned long long v16;  // r13
    struct_1 * v17;  // r14
    unsigned long long v18;  // r15
    unsigned long long v19;  // r15
    unsigned long|unsigned long long|struct_1 * v2;  // [bp-0x50]
    struct_1 * v20;  // r15
    unsigned long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v6;  // rax
    unsigned long long v9;  // rax

    v15 = v14;
    v12 = v14[0];
    v11 = v14[1];
    v16 = v14[2] - 1;
    v0 = v14[2];
    v1 = v12;
    v2 = v11;
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r13<8>, 0x0<64>, cc_ndep<8>))))
    {
        v17 = v16;
        v13 = v16;
        v18 = v14[0] + v16 * 16;
        while (true)
        {
            v6 = mpz_cmp();
            if (v6 > 0)
            {
                v13 -= 1;
                v18 -= 16;
                v3 = v0 + 1;
                v1 = (long long)xrealloc();
                v20 = (long long)xrealloc();
                v4 = v1 + (v0 + 1) * 16 - 16;
                mpz_init();
                v14 = v4;
                v2 = 0;
                v0 = 0;
            }
            else
            {
                v9 = mpz_cmp();
                if (v9 == 0)
                {
                    *(v2 + v13 * 8) = *(v2 + v13 * 8) + 1;
                    return v2;
                }
                v19 = v0 + 1;
                v3 = v0 + 1;
                v0 = v19 * 16;
                v1 = (long long)xrealloc();
                v20 = (long long)xrealloc();
                v4 = v1 + v0 - 16;
                mpz_init();
                v14 = v4;
                v0 = v13 + 1;
                v2 = (v13 + 1) * 16;
                if (v16 <= v13)
                {
                    mpz_set();
                    *(v20 + v0 * 8) = 1;
                    v15[1] = v20;
                    v15[0] = v1;
                    v15[2] = v3;
                    return v3;
                }
            }
            if (v6 > 0 || v9 != 0 && v16 > v13)
            {
                while (true)
                {
                    v16 = v14 - 16;
                    mpz_set();
                    v14 = v16;
                    *(v20 + v17 * 8 + 8) = *(v20 + v17 * 8);
                    v17 -= 1;
                    if (v17 <= v13)
                    {
                        break;
                    }
                }
                mpz_set();
                *(v20 + v0 * 8) = 1;
                v15[1] = v20;
                v15[0] = v1;
                v15[2] = v3;
                return v3;
            }
        }
    }
    v3 = v0 + 1;
    v10 = xrealloc();
    v16 = v10;
    v1 = v10;
    v2 = v16 + (v0 + 1) * 16 - 16;
    v20 = (long long)xrealloc();
    mpz_init();
    mpz_set();
    *(v20 + v0 * 8) = 1;
    v15[1] = v20;
    v15[0] = v1;
    v15[2] = v3;
    return v3;
}
