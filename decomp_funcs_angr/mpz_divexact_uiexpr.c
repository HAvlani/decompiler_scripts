int mpz_divexact_ui()
{
    unsigned long long v1;  // rax

    v1 = mpz_div_qr_ui();
    if (v1 == 0)
    {
        return v1;
    }
    __assert_fail(); /* do not return */
}
