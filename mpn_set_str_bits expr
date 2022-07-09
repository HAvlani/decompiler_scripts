int mpn_set_str_bits()
{
    BOT tmp_35;  // tmp #35
    unsigned long long v1;  // rax
    unsigned long|unsigned long long v2;  // rcx
    unsigned long v3;  // rdx
    char *v4;  // rsi
    unsigned long long v5;  // rdi
    char * v6;  // r8
    unsigned long long v7;  // r9
    unsigned long long v8;  // r10
    unsigned long long v9;  // r11

    v9 = v2;
    v6 = v3 - 1;
    v1 = 0;
    v7 = 0;
    v8 = 0;
    if (v3 != 0)
    {
        do
        {
            v2 = v1;
            v1 = ((long long)(v1 + v9));
            tmp_35 = v2;
            v7 |= ((long long)*(v4 + v6)) << (tmp_35 & 63);
            if (((int)v1) > 63)
            {
                *(v5 + v8 * 8) = v7;
                v1 = ((long long)(((int)v1) - 64));
                v8 += 1;
                v7 = ((long long)*(v4 + v6)) >> (((char)(v9 - v1)) & 31);
            }
            v6 -= 1;
        }
        while (v6 != 18446744069414584319);
        if (v7 != 0)
        {
            *(v5 + v8 * 8) = v7;
            return v8 + 1;
        }
        else if (v8 == 0)
        {
            return 0;
            return v8;
        }
        else
        {
            while (true)
            {
                if (*(v5 + (r10<8> << 3) + 8) == 0)
                {
                    v8 = r10<8> - 1;
                    return 0;
                }
            }
        }
    }
    return 0;
}
