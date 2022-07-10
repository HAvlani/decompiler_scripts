int base2msbf_encode()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_42;  // tmp #42
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    char|unsigned long|unsigned long long v3;  // rdx
    unsigned long|unsigned long long v4;  // rsi
    char * v5;  // rdi
    unsigned long long v6;  // r8

    if (v4 != 0)
    {
        v6 = v3 + 8;
        v4 += v5;
        do
        {
            v2 = ((long long)*(v5));
            v1 = v6 - 8;
            do
            {
                v3 = v2;
                v1 += 1;
                v2 = ((long long)(((int)v2) * 2));
                tmp_6 = v3;
                v3 = ((char)(((long long)tmp_6) >> 7));
                tmp_42 = rdx<8>;
                *(v1 + 1) = ((char)(((int)tmp_42) + 48));
            }
            while (v1 != v6);
            v5 += 1;
            v6 += 8;
        }
        while (v5 != v4);
        return v1;
    }
    return v1;
}
