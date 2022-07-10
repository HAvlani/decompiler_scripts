int safe_write()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // eax
    unsigned int v3;  // rdx
    unsigned long long v4;  // rbx
    void *v5;  // rsi
    unsigned int v6;  // edi
    unsigned long long v7;  // r12

    v4 = ((unsigned int)v3);
    while (true)
    {
        v7 = write(v6, v5, v4);
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v2 = ((int)*(__errno_location()));
            if (v2 != 22)
            {
                v1 = v7;
                return v1;
            }
            else if (v4 > 0x7ff00000)
            {
                v4 = 0x7ff00000;
            }
            else
            {
                v1 = v7;
                return v1;
            }
        }
        else
        {
            v1 = v7;
            return v1;
        }
    }
}
