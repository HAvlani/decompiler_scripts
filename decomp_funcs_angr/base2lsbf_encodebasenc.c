int base2lsbf_encode()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    unsigned long v3;  // rdx
    unsigned long|unsigned long long v4;  // rsi
    char * v5;  // rdi
    unsigned long long v6;  // r8

    if (v4 != 0)
    {
        v6 = v3 + 8;
        v4 += v5;
        do
        {
            v2 = ((int)*(v5));
            v1 = v6 - 8;
            do
            {
                v1 += 1;
                *(v1 + 1) = ((char)((v2 & 1) + 48));
            }
            while (v1 != v6);
            v5 += 1;
            v6 += 8;
        }
        while (v4 != v5);
        return v1;
    }
    return v1;
}
