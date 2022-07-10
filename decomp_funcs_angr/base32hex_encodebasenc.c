int base32hex_encode()
{
    BOT tmp_28;  // tmp #28
    unsigned long long v1;  // rax
    unsigned int v2;  // eax
    unsigned long v3;  // rcx
    char * v4;  // rdx
    unsigned long long v5;  // rsi

    v1 = base32_encode();
    if (v3 != 0)
    {
        v5 = v4 + v3;
        while (true)
        {
            v2 = ((int)*(v4));
            if ((((long long)*(v4)) - 50 & 255) <= 40)
            {
                v4 += 1;
                v1 = ((long long)*(base32_norm_to_hex + ((long long)v2) - 50));
                tmp_28 = v1;
                *(v4 + 0x1) = tmp_28;
                return v1;
            }
            __assert_fail(); /* do not return */
        }
    }
    return v1;
}
