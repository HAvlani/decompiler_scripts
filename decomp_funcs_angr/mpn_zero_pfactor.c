int mpn_zero_p()
{
    char v1;  // al
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi
    unsigned long v4;  // rdi

    if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v2 = 0;
        v1 = ((char)(v3 == 0));
        return rax<8>;
    }
    while (true)
    {
        if (*(v4 + (rsi<8> << 3) + 8) == 0)
        {
            v3 = rsi<8> - 1;
            v2 = 0;
            v1 = ((char)(v3 == 0));
            return rax<8>;
        }
        else
        {
            v2 = 0;
            v1 = ((char)(v3 == 0));
            return rax<8>;
        }
    }
}
