extern unsigned int g_417208;
extern <missing-type> g_41a301;
extern <missing-type> g_41a59c;

int mp_prime_p()
{
    unsigned long v0;  // [bp-0xc8]
    unsigned long v1;  // [bp-0xc0]
    unsigned long long v15;  // rax
    unsigned long long v16;  // r15
    char v2;  // [bp-0xb1]
    unsigned long v3;  // [bp-0xb0]
    unsigned long v4;  // [bp-0x98]
    unsigned long long v6;  // rax

    v15 = mpz_cmp_ui();
    if (v15 > 0)
    {
        v15 = mpz_cmp_ui();
        if (v15 >= 0)
        {
            v0 = &stack_base-136;
            mpz_va_init();
            mpz_sub_ui();
            v1 = (long long)mpz_scan1();
            mpz_tdiv_q_2exp();
            mpz_set_ui();
            v2 = (char)mp_millerrabin();
            if (((long long)v2) != 0)
            {
                mpz_set();
                v3 = &stack_base-168;
                mp_factor();
                while (v4 != 0)
                {
                    v16 = 0;
                    while (true)
                    {
                        v16 += 1;
                        mpz_divexact();
                        mpz_powm();
                        v6 = mpz_cmp_ui();
                        if (v6 != 0)
                        {
                            break;
                        }
                        if (v6 == 0 || v16 < v4)
                        {
                            mpz_add_ui();
                            v6 = mp_millerrabin();
                            if (((long long)v6) != 0)
                            {
                                error(0x0, 0x0, dcgettext(0x0, &g_417208, 0x5));
                                abort(); /* do not return */
                            }
                            v2 = 0;
                            break;
                        }
                    }
                    if (((long long)v6) == 0 && v6 == 0 || v6 != 0 && v16 >= v4)
                    {
                        mp_factor_clear();
                    }
                }
                mp_factor_clear();
                mpz_va_init();
                return ((long long)v2);
            }
            mpz_va_init();
            return ((long long)v2);
        }
        v2 = 1;
        return ((long long)v2);
    }
    v2 = 0;
    return ((long long)v2);
}
