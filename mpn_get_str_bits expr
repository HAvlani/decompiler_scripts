int mpn_get_str_bits()
{
    BOT tmp_35;  // tmp #35
    BOT tmp_20;  // tmp #20
    unsigned long v1;  // rax
    unsigned long|unsigned long long v10;  // rdi
    unsigned int v11;  // r8d
    char *|unsigned long long v12;  // r9
    unsigned long long v14;  // r11
    char *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // edx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rsi
    unsigned long v9;  // rsi

    v16 = v3;
    v15 = v10;
    v7 = v5;
    v6 = v9;
    v2 = mpn_limb_size_in_base_2();
    v8 = v9 + (v16 - 1) * 64 - 1 + v2;
    v1 = ((long long)((0 CONCAT v6 + (v16 - 1) * 64 - 1 + v2) % v6));
    if (v6 <= v8)
    {
        v12 = v1 - 1;
        v10 = 0;
        v8 = 0;
        do
        {
            v3 = v10;
            v10 = ((long long)(v10 + v6));
            v14 = v8 * 8;
            tmp_35 = v3;
            v11 = ((int)(*(v7 + v8 * 8) >> (tmp_35 & 63)));
            v4 = *(v7 + v8 * 8) >> (tmp_35 & 63);
            if (((int)v10) > 63)
            {
                v8 += 1;
                if (v16 > v8)
                {
                    v10 = ((long long)(((int)v10) - 64));
                    v4 = ((int)(((int)(*(v7 + v14 + 8) << (((char)(v6 - v10)) & 63))) | v11));
                }
            }
            v5 = ((long long)(v4 & ((int)(((int)(1 << (((char)v6) & 31))) - 1))));
            tmp_20 = v5;
            *(v15 + v12) = tmp_20;
            v12 -= 1;
        }
        while (v12 != 18446744069414584319);
        return v1;
    }
    return v1;
}
