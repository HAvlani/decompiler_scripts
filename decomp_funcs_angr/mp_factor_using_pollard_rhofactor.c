typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char dev_debug;
extern unsigned int g_41706a;
extern struct_0 stderr;

int mp_factor_using_pollard_rho()
{
    BOT tmp_8;  // tmp #8
    unsigned long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    unsigned long v10;  // [bp-0xb0]
    unsigned long v11;  // [bp-0x40]
    unsigned long long v18;  // rax
    unsigned long v2;  // [bp-0xf0]
    unsigned long long v27;  // rax
    unsigned long long v29;  // rax
    unsigned long|unsigned long long v3;  // [bp-0xe8]
    unsigned long v4;  // [bp-0xe0]
    unsigned long long v41;  // rax
    unsigned long v43;  // rdx
    unsigned long long v45;  // rbx
    unsigned long long v46;  // rsi
    unsigned long long v47;  // r13
    unsigned long long v48;  // r15
    struct_0 *v49;  // fs
    unsigned long long v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xd0]
    unsigned long v7;  // [bp-0xc8]
    unsigned long v8;  // [bp-0xc0]
    unsigned long v9;  // [bp-0xb8]

    v3 = v46;
    v9 = v43;
    if (dev_debug != 0)
    {
        __fprintf_chk(((int)stderr), 0x1, &g_41706a, ((int)v46));
    }
    1 = 1;
    mpz_va_init();
    v4 = &stack_base-136;
    mpz_init_set_si();
    mpz_init_set_si();
    v2 = &stack_base-152;
    mpz_init_set_si();
    mpz_init_set_ui();
    tmp_8 = v3;
    v5 = 1;
    v10 = tmp_8 + 1;
    while (true)
    {
        if (mpz_cmp_ui() == 0)
        {
            break;
        }
        v48 = 1;
        while (true)
        {
            mpz_mul();
            mpz_mod();
            mpz_add_ui();
            mpz_sub();
            mpz_mul();
            mpz_mod();
            if (((long long)(((int)v48) & 31)) != 1)
            {
                v48 -= 1;
            }
            else
            {
                mpz_gcd();
                v41 = mpz_cmp_ui();
                if (v41 == 0)
                {
                    mpz_set();
                    v48 -= 1;
                }
                else
                {
                    v6 = v48;
                    v45 = v3;
                    v7 = &stack_base-120;
                    v8 = &stack_base-88;
                    while (true)
                    {
                        mpz_mul();
                        mpz_mod();
                        mpz_add_ui();
                        mpz_sub();
                        mpz_gcd();
                        v41 = mpz_cmp_ui();
                        if (v41 != 0)
                        {
                            break;
                        }
                    }
                    v2 = &stack_base-152;
                    v3 = v45;
                    v4 = &stack_base-136;
                    1 = v6;
                    mpz_divexact();
                    v29 = mp_prime_p();
                    if (((long long)v29) == 0)
                    {
                        if (dev_debug != 0)
                        {
                            fwrite("[composite factor--restarting pollard-rho] ", 0x1, 0x2b, stderr);
                        }
                        mp_factor_using_pollard_rho();
                        v18 = mp_prime_p();
                        if (((long long)v18) != 0)
                        {
                            mp_factor_insert();
                            v1 = 0;
                            v0 = v4;
                            mpz_va_init();
                            return v11 ^ *(v49 + 0x28);
                        }
                    }
                    mp_factor_insert();
                    v18 = mp_prime_p();
                    if (((long long)v18) != 0)
                    {
                        mp_factor_insert();
                        v1 = 0;
                        v0 = v4;
                        mpz_va_init();
                        return v11 ^ *(v49 + 0x28);
                    }
                    if (((long long)v29) == 0 && ((long long)v18) == 0 || ((long long)v18) == 0 && ((long long)v29) != 0)
                    {
                        mpz_mod();
                        mpz_mod();
                        mpz_mod();
                    }
                }
            }
            if ((v48 == 1 || ((long long)(((int)v48) & 31)) == 1) && (v41 == 0 || ((long long)(((int)v48) & 31)) != 1) && (v48 == 1 || ((long long)(((int)v48) & 31)) != 1))
            {
                mpz_set();
                v27 = v5;
                v6 = v5 * 2;
                if (v27 != 0)
                {
                    v8 = &stack_base-88;
                    v7 = &stack_base-120;
                    v47 = v48;
                    while (true)
                    {
                        v47 += 1;
                        mpz_mul();
                        mpz_mod();
                        mpz_add_ui();
                        if (v47 == 1)
                        {
                            break;
                        }
                    }
                }
                mpz_set();
                v48 = v5;
                v5 = v6;
            }
        }
    }
    v1 = 0;
    v0 = v4;
    mpz_va_init();
    return v11 ^ *(v49 + 0x28);
}
