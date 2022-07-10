extern unsigned long long fallback.7884;
extern unsigned long long nz.7883;
extern struct_0 zeros.7882;

int write_zeros()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rbx
    unsigned long v3;  // rbp
    unsigned long long v4;  // rsi

    v2 = v4;
    if (zeros.7882 == 0)
    {
        zeros.7882 = calloc(nz.7883, 0x1);
        if (zeros.7882 == 0)
        {
            nz.7883 = 0x400;
            zeros.7882 = &fallback.7884;
        }
    }
    if (v4 == 0)
    {
        return 1;
    }
    while (true)
    {
        v3 = (nz.7883 <= v2? nz.7883 : v2);
        v1 = full_write();
        if (v1 == v3)
        {
            v2 -= v1;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
