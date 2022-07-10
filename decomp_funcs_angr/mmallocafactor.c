int mmalloca()
{
    BOT tmp_24;  // tmp #24
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v4;  // rdi
    unsigned long v5;  // rdi

    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, rdi<8>, 0x20<64>, cc_ndep<8>)))))
    {
        return 0;
    }
    else if (v4 + 32 >= v4)
    {
        v5 = v4 + 32;
        v2 = malloc(v5);
        if (v2 != 0)
        {
            v1 = v2 + (v2 + 16 & 0xfffffffeffffffe0) - v2 + 16;
            tmp_24 = (v2 + 16 & 0xfffffffeffffffe0) - v2 + 16;
            *(v1 + 1) = tmp_24;
            return v1;
        }
        return 0;
    }
    else
    {
        return 0;
    }
}
