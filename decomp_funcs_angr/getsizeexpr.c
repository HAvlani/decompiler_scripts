int getsize()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12

    v3 = 18446744069414584319;
    v1 = mpz_sgn();
    if (v1 >= 0)
    {
        v3 = 18446744069414584318;
        v1 = mpz_fits_ulong_p();
        if (v1 == 0)
        {
            v2 = v3;
            return v2;
        }
        return ((long long)mpz_get_ui() <= 18446744069414584318? (long long)mpz_get_ui() : 18446744069414584318);
    }
    v2 = v3;
    return v2;
}
