int mpz_get_str()
{
    BOT tmp_9;  // tmp #9
    unsigned long|unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rdx
    char * v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdi
    unsigned int v17;  // r8d
    unsigned long long v18;  // r9
    unsigned long long|unsigned int v19;  // r9d
    unsigned long long v2;  // [bp-0x60]
    unsigned long v20;  // r9
    unsigned long long v21;  // r10
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15
    unsigned int v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax
    char * v9;  // rcx

    v25 = v11;
    v24 = v14;
    v22 = v15;
    if (((int)v14) > 1)
    {
        if (!(((int)v14) > 36))
        {
            v12 = "0123456789abcdefghijklmnopqrstuvwxyz";
            /* goto 4254829; */
        }
        else if (((int)v14) > 62)
        {
            v22 = 0;
            v6 = v22;
            return v6;
        }
    }
    else
    {
        if (((int)v14) >= -1)
        {
            v12 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
            v24 = 10;
            /* goto 4254829; */
        }
        else if (((int)v14) >= -36)
        {
            v24 = ((long long)(0 - ((int)v14)));
        }
        else
        {
            v22 = 0;
            v6 = v22;
            return v6;
        }
    }
    if ((((int)v14) <= 1 || ((int)v14) <= 62) && (((int)v14) <= 1 || ((int)v14) > 36) && (((int)v14) < -1 || ((int)v14) > 1) && (((int)v14) > 1 || ((int)v14) >= -36))
    {
        v12 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    }
    if (((int)v14) <= 1 && ((int)v14) >= -1 || ((int)v14) <= 1 && ((int)v14) >= -36 || ((int)v14) <= 36 && ((int)v14) > 1 || ((int)v14) <= 62 && ((int)v14) > 1)
    {
        v23 = 0;
        v8 = mpz_sizeinbase();
        if (v15 == 0)
        {
            v23 = v8 + 2;
            v22 = (long long)gmp_default_alloc();
        }
        v19 = ((int)*(v25 + 4));
        if (*(v25 + 4) != 0)
        {
            v21 = v22;
            v13 = 0;
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rdi<8>, rcx<8>, cc_ndep<8>)))
            {
                *(v22) = 45;
                v21 = v22 + 1;
                v13 = 1;
            }
            v1 = v21;
            v18 = ((long long)((v19 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31))));
            v0 = v18;
            v19 = v0;
            if (mpn_base_power_of_two_p() == 0)
            {
                v10 = v24;
                v17 = 1;
                v15 = v24;
                do
                {
                    v15 = v10 * v15;
                    ((unsigned int)v17) = ((long long)v17) + 1;
                }
                while (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rdi<8>, rcx<8>, cc_ndep<8>))));
                v2 = v1;
                v3 = ((int)((unsigned int)v17));
                v4 = v15;
                v0 = v19;
                v1 = v0 * 8;
                do
                {
                    *(v0 + v11 * 8) = *(v10 + v11 * 8);
                    v11 += 1;
                }
                while (v0 > v11);
                v0 = (long long)gmp_default_alloc();
                v25 = (long long)mpn_get_str_other.isra.0() + v13;
                gmp_default_free();
            }
            else
            {
                v25 = (long long)mpn_get_str_bits() + v13;
            }
            v9 = v22 + v13;
            v8 = v22 + v25;
            if (v13 < v25)
            {
                do
                {
                    tmp_9 = ((long long)*(v9));
                    v9 += 1;
                    *(v9 + 0x1) = *(v12 + tmp_9);
                }
                while (v8 != v9);
            }
        }
        else
        {
            *(v22) = 48;
            v25 = 1;
        }
        *(v22 + v25) = 0;
        if (!(v23 != 0))
        {
            v6 = v22;
            return v6;
        }
        else if (v25 + 1 != v23)
        {
            v22 = (long long)gmp_default_realloc();
            v6 = v22;
            return v6;
        }
        else
        {
            v6 = v22;
            return v6;
        }
    }
}
