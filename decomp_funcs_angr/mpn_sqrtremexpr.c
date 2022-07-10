extern unsigned long long dummy_limb.5449;

int mpn_sqrtrem()
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long v10;  // rcx
    unsigned long v11;  // rdx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]
    unsigned long v6;  // [bp-0x40]
    unsigned long long v8;  // rax

    if (!(!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))))
    {
        __assert_fail(); /* do not return */
    }
    else if (*(v11 + (v10 << 3) + 8) != 0)
    {
        v6 = v11;
        v5 = ((int)v10);
        v2 = 0;
        v3 = &dummy_limb.5449;
        v1 = &dummy_limb.5449;
        v0 = 0;
        v4 = 0;
        mpz_rootrem();
        if (((long long)((int)*((int *)(((char *)&v0) + 4)))) == v10 + 1 >> 1)
        {
            v8 = 36893488147419103231;
            do
            {
                *(v13 + v8 * 8) = *(dummy_limb.5449 + v8 * 8);
                v8 -= 1;
            }
            while (v8 != 18446744069414584319);
            if (((int)v0) != 0)
            {
                gmp_default_free();
            }
            if (v12 != 0)
            {
                v8 = 36893488147419103231;
                if (!(((char)(36893488147419103231 >> 63))))
                {
                    do
                    {
                        *(v12 + v8 * 8) = *(dummy_limb.5449 + v8 * 8);
                        v8 -= 1;
                    }
                    while (v8 != 18446744069414584319);
                }
            }
            if (((int)v2) == 0)
            {
                return 0;
            }
            gmp_default_free();
            return 0;
        }
        __assert_fail(); /* do not return */
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
