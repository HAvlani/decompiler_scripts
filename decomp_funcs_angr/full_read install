int full_read()
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
            v1 = safe_read();
            if (v1 == 18446744069414584319)
            {
                v3 = v8;
                return v3;
            }
            else if (v1 != 0)
            {
                v8 += v1;
                v6 += v1;
                v5 -= v1;
                v3 = v8;
                return v3;
            }
            else
            {
                *(__errno_location() + None) = 0;
                v2 = v8;
                return v2;
            }
        }
    }
    v8 = 0;
    v3 = v8;
    return v3;
}
