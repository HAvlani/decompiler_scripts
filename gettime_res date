int gettime_res()
{
    char v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v3;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v8;  // r12

    clock_getres(0x0, ((int)&v0));
    v8 = v0 * 0x3b9aca00 + v1;
    if (v0 * 0x3b9aca00 + v1 > 1)
    {
        while (true)
        {
            current_timespec();
            v3 = v8;
            v6 = (rdx<8> == 0? 0x3b9aca00 : rdx<8>);
            do
            {
                v8 = v6;
                v6 = ((long long)((v3 >> 63 CONCAT v3) % v6 >> 64));
                v3 = v8;
            }
            while (v6 != 0);
            if (v8 > 1)
            {
                v5 = v8;
                return v5;
            }
            v5 = v8;
            return v5;
        }
    }
    v5 = v8;
    return v5;
}
