typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_sizeinbase()
{
    BOT tmp_12;  // tmp #12
    unsigned long long v1;  // rax
    unsigned long long v10;  // r12
    unsigned long long v11;  // r12
    unsigned long long v12;  // r14
    unsigned long long v4;  // rax
    char|unsigned long long v5;  // al
    unsigned long long|unsigned int v6;  // rbx
    unsigned long v7;  // rbx
    unsigned long v8;  // rsi
    struct_0 *v9;  // rdi

    if (!(((int)v8) > 1))
    {
        __assert_fail(); /* do not return */
    }
    else if (((int)v8) <= 62)
    {
        v6 = ((int)v9->field_4);
        if (v9->field_4 != 0)
        {
            v6 = ((long long)((v9->field_4 ^ ((int)(v7 >> 31))) - ((int)(v7 >> 31))));
            v11 = (v6 - 1) * 64;
            v10 = v11 + (long long)mpn_limb_size_in_base_2();
            switch (((int)v8))
            {
            case 2:
                break;
                v1 = v10;
                return v1;
            case 4:
                break;
                v1 = v10;
                return v1;
            case 8:
                break;
                v1 = v10;
                return v1;
            case 16:
                break;
                v1 = v10;
                return v1;
            case 32:
                break;
                v1 = v10;
                return v1;
            default:
                v12 = (long long)gmp_default_alloc();
                v4 = 0;
                do
                {
                    *(v12 + v4 * 8) = *(v9->field_8 + v4 * 8);
                    v4 += 1;
                }
                while (v6 > v4);
                v10 = 0;
                mpn_div_qr_1_invert();
                while (true)
                {
                    mpn_div_qr_1_preinv();
                    v10 += 1;
                    v5 = 0;
                    v5 = ((char)(*(v12 + (v6 << 3) + 8) == 0));
                    tmp_12 = rax<8>;
                    v6 -= ((long long)(*(v12 + (v6 << 3) + 8) == 0));
                    if (v6 == tmp_12)
                    {
                        break;
                    }
                }
                gmp_default_free();
                break;
                v1 = v10;
                return v1;
            }
        }
        v1 = v10;
        return v1;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
