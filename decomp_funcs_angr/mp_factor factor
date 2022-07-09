typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char dev_debug;
extern unsigned long long primes_diff;
extern struct_0 stderr;

int mp_factor()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long v15[3];  // rsi
    unsigned long long v16;  // r13
    struct_0 *v18;  // fs
    unsigned long long v2;  // rax

    v15[0] = 0;
    v15[1] = 0;
    v15[2] = 0;
    v2 = mpz_sgn();
    if (v2 == 0)
    {
        return v0 ^ *(v18 + 0x28);
    }
    if (dev_debug != 0)
    {
        fwrite("[trial division] ", 0x1, 0x11, stderr);
    }
    mpz_init();
    v13 = (long long)mpz_scan1();
    mpz_fdiv_q_2exp();
    if (v13 != 0)
    {
        while (true)
        {
            mpz_init_set_ui();
            mp_factor_insert();
            mpz_clear();
            v13 -= 1;
            if (v13 == 1)
            {
                break;
            }
        }
    }
    v14 = 1;
    3 = 3;
    while (true)
    {
        if (mpz_divisible_ui_p() == 0)
        {
            v16 = v14 + 1;
            3 = 3 + ((long long)*(v14 + 0x41a300));
            if (mpz_cmp_ui() < 0)
            {
                break;
            }
            v14 = v16;
            if (((int)v16) == 669)
            {
                break;
            }
        }
        else
        {
            mpz_tdiv_q_ui();
            mpz_init_set_ui();
            mp_factor_insert();
            mpz_clear();
            if (((int)v14) == 669)
            {
                break;
            }
        }
    }
    mpz_clear();
    v2 = mpz_cmp_ui();
    if (v2 == 0)
    {
        return v0 ^ *(v18 + 0x28);
    }
    else
    {
        if (dev_debug != 0)
        {
            fwrite("[is number prime?] ", 0x1, 0x13, stderr);
        }
        if ((long long)mp_prime_p() != 0)
        {
            mp_factor_insert();
            return v0 ^ *(v18 + 0x28);
        }
        else
        {
            mp_factor_using_pollard_rho();
            return v0 ^ *(v18 + 0x28);
        }
    }
}
