extern unsigned int g_40807f;

int head_bytes()
{
    unsigned long v0;  // [bp-0x2030]
    unsigned long v1;  // [bp-0x1030]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // r13
    unsigned long long v9;  // r15

    v1 = v1;
    v0 = v0;
    if (v5 != 0)
    {
        v7 = v5;
        v9 = 0x2000;
        while (true)
        {
            v9 = (!(r15<8> <= v7)? v7 : r15<8>);
            v6 = (long long)safe_read();
            if (v6 == 18446744069414584319)
            {
                v8 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40807f, 0x5));
                v4 = 0;
                return v4;
            }
            else if (v6 != 0)
            {
                xwrite_stdout.part.0();
                v7 -= v6;
                v4 = 1;
                return v4;
                v4 = 1;
                return v4;
            }
        }
    }
    v4 = 1;
    return v4;
}
