extern unsigned int g_420ae6;
extern unsigned long long mpz_add;
extern unsigned long long mpz_sub;

int eval3()
{
    unsigned long long v11;  // r13
    unsigned long|unsigned int v12;  // r14d
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi

    v11 = v9;
    while (true)
    {
        v3 = nextarg();
        if (((long long)v3) == 0)
        {
            v3 = nextarg();
            if (((long long)v3) != 0)
            {
                v12 = 1;
            }
            else
            {
                v2 = (long long)eval4();
                return v2;
            }
        }
        else
        {
            v12 = 0;
        }
        if (((long long)v3) != 0 || ((long long)v3) != 0)
        {
            if (((long long)v11) != 0)
            {
                v4 = toarith();
                if (((long long)v4) != 0)
                {
                    v4 = toarith();
                    if (((long long)v4) != 0)
                    {
                        if (v12 != 0)
                        {
                            v5 = &mpz_sub;
                        }
                        else
                        {
                            v5 = &mpz_add;
                        }
                        v9 = v2 + 8;
                        v6 = (long long)eval4() + 8;
                        v8 = v2 + 8;
                        rax<8>();
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
            if (((long long)v11) == 0 || ((long long)v4) != 0 && ((long long)v4) != 0)
            {
                freev();
            }
        }
    }
}
