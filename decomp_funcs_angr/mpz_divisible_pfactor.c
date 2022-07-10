int mpz_divisible_p()
{
    return ((long long)(mpz_div_qr() == 0));
}
