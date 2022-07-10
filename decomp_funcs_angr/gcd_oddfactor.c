int gcd_odd()
{
    unsigned long|unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi

    v1 = v5;
    if (((long long)(v5 & 1)) == 0)
    {
        v1 = v6;
        v7 = v5;
    }
    if (v5 != 0)
    {
        v1 = v1 % 2;
        while (true)
        {
            v3 = v7 % 2;
            if (((long long)(v7 & 1)) != 0)
            {
                v2 = v7 - rax<8>;
                if (v7 == rax<8>)
                {
                    break;
                }
                v1 = rax<8> + (v2 & v2 >> 63);
                v3 = (v2 ^ v2 >> 63) - (v2 >> 63);
            }
            v7 = v3;
        }
        return v7 | 1;
    }
    return v1;
}
