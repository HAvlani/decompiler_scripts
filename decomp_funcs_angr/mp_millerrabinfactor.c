int mp_millerrabin()
{
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp
    unsigned long v5;  // r9

    mpz_powm();
    v3 = mpz_cmp_ui();
    if (v3 == 0)
    {
        return 1;
    }
    v3 = mpz_cmp();
    if (v3 == 0)
    {
        return 1;
    }
    else
    {
        v4 = 1;
        if (v5 <= 1)
        {
            return 0;
        }
        else
        {
            while (true)
            {
                mpz_powm_ui();
                v3 = mpz_cmp();
                if (v3 != 0)
                {
                    return 1;
                    v3 = mpz_cmp_ui();
                    if (v3 != 0)
                    {
                        return 0;
                        v4 += 1;
                        return 0;
                    }
                }
            }
        }
    }
}
