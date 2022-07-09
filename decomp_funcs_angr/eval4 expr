extern unsigned int g_420ae6;
extern unsigned int g_420afb;
extern unsigned long long mpz_mul;
extern unsigned long long mpz_tdiv_q;
extern unsigned long long mpz_tdiv_r;

int eval4()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // rdi
    unsigned long long v12;  // r13
    unsigned long|unsigned int v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rsi

    v12 = v10;
    while (true)
    {
        v2 = nextarg();
        if (((long long)v2) == 0)
        {
            v13 = 1;
            v2 = nextarg();
            if (((long long)v2) == 0)
            {
                v2 = nextarg();
                if (((long long)v2) != 0)
                {
                    v13 = 2;
                }
                else
                {
                    v6 = (long long)eval5();
                    return v6;
                }
            }
        }
        else
        {
            v13 = 0;
        }
        if (((long long)v2) != 0 || ((long long)v2) != 0 || ((long long)v2) != 0)
        {
            if (((long long)v12) != 0)
            {
                v1 = toarith();
                if (((long long)v1) != 0)
                {
                    v1 = toarith();
                    if (((long long)v1) != 0)
                    {
                        v14 = (long long)eval5() + 8;
                        if (v13 == 0)
                        {
                            v3 = &mpz_mul;
                        }
                        else
                        {
                            v4 = mpz_sgn();
                            if (v4 == 0)
                            {
                                error(0x2, 0x0, dcgettext(0x0, &g_420afb, 0x5));
                            }
                            else if (v13 != 1)
                            {
                                v3 = &mpz_tdiv_r;
                            }
                            else
                            {
                                v3 = &mpz_tdiv_q;
                                /* goto 4211517; */
                            }
                        }
                        if (v13 == 0 || v4 != 0)
                        {
                            v10 = v6 + 8;
                            v7 = v14;
                            v9 = v6 + 8;
                            rax<8>();
                        }
                    }
                    else
                    {
                        error(0x2, 0x0, dcgettext(0x0, &g_420ae6, 0x5));
                    }
                }
                else
                {
                    error(0x2, 0x0, dcgettext(0x0, &g_420ae6, 0x5));
                }
            }
            if (((long long)v12) == 0 || v13 == 0 && ((long long)v1) != 0 && ((long long)v1) != 0 || v4 != 0 && ((long long)v1) != 0 && ((long long)v1) != 0)
            {
                freev();
            }
        }
    }
}
