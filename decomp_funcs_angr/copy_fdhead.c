int copy_fd()
{
    unsigned long v0;  // [bp-0x2020]
    unsigned long v1;  // [bp-0x1020]
    unsigned long long v3;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rsi

    v1 = v1;
    v0 = v0;
    if (v6 != 0)
    {
        v5 = v6;
        while (true)
        {
            v6 = (long long)safe_read();
            if (v6 != 18446744069414584319)
            {
                v5 -= v6;
                if (v6 != 0)
                {
                    xwrite_stdout.part.0();
                    v3 = 0;
                    return v3;
                }
                else if (v5 == 0)
                {
                    v3 = 0;
                    return v3;
                }
                else
                {
                    v3 = 2;
                    return v3;
                }
            }
            v3 = 1;
            return v3;
        }
    }
    v3 = 0;
    return v3;
}
