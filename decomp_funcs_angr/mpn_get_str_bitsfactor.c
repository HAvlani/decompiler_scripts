int mpn_get_str_bits()
{
    BOT tmp_35;  // tmp #35
    BOT tmp_20;  // tmp #20
    unsigned long long v1;  // rax
    unsigned int v10;  // r8d
    char *|unsigned long long v11;  // r9
    unsigned long long v13;  // r11
    char *v14;  // r12
    unsigned long long v15;  // r13
    unsigned long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long|unsigned long long|unsigned int v4;  // rdx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi

    v15 = v3;
    v14 = v9;
    v6 = v4;
    v5 = v8;
    v1 = mpn_limb_size_in_base_2();
    v7 = v8 + (v15 - 1) * 64 - 1 + v1;
    v2 = ((long long)((0 CONCAT v5 + (v15 - 1) * 64 - 1 + v1) % v5));
    if (v5 <= v7)
    {
        v11 = v2 - 1;
        v9 = 0;
        v7 = 0;
        do
        {
            v3 = v9;
            v9 = ((long long)(v9 + v5));
            v13 = v7 * 8;
            tmp_35 = v3;
            v10 = ((int)(*(v6 + v7 * 8) >> (tmp_35 & 63)));
            v4 = ((int)(*(v6 + v7 * 8) >> (tmp_35 & 63)));
            if (((int)v9) > 63)
            {
                v7 += 1;
                if (v15 > v7)
                {
                    v9 = ((long long)(((int)v9) - 64));
                    v4 = ((long long)(((int)(*(v6 + v13 + 8) << (((char)(v5 - v9)) & 63))) | v10));
                }
            }
            v4 = ((long long)(v4 & ((int)(((int)(1 << (((char)v5) & 31))) - 1))));
            tmp_20 = v4;
            *(v14 + v11) = tmp_20;
            v11 -= 1;
        }
        while (v11 != 18446744069414584319);
        return v2;
    }
    return v2;
}
