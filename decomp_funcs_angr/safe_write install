int safe_write()
{
    unsigned int v1;  // eax
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // rbx
    void *v5;  // rsi
    unsigned int v6;  // edi
    unsigned long long v7;  // r12

    v4 = v3;
    while (true)
    {
        v7 = write(v6, v5, v4);
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v1 = ((int)*(__errno_location()));
            if (v1 != 22)
            {
                v2 = v7;
                return v2;
            }
            else if (v4 > 0x7ff00000)
            {
                v4 = 0x7ff00000;
            }
            else
            {
                v2 = v7;
                return v2;
            }
        }
        else
        {
            v2 = v7;
            return v2;
        }
    }
}
