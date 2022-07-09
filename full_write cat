int full_write()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rsi
    unsigned long long v8;  // r13

    if (v4 != 0)
    {
        v6 = v7;
        v5 = v4;
        v8 = 0;
        while (true)
        {
            v3 = safe_write();
            if (v3 == 18446744069414584319)
            {
                v2 = v8;
                return v2;
            }
            else if (v3 != 0)
            {
                v8 += v3;
                v6 += v3;
                v5 -= v3;
                v2 = v8;
                return v2;
            }
            else
            {
                *(__errno_location() + None) = 28;
                v1 = v8;
                return v1;
            }
        }
    }
    v8 = 0;
    v2 = v8;
    return v2;
}
