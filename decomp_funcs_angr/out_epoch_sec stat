extern struct_0 decimal_point;
extern struct_0 decimal_point_len;
extern unsigned int g_411cf8;

int out_epoch_sec()
{
    BOT tmp_12;  // tmp #12
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    char [2] v10;  // rcx
    unsigned long|unsigned long long v11;  // rdx
    char [2]|unsigned long long|unsigned int v12;  // rbp
    unsigned int v13;  // esi
    unsigned long|unsigned long long v14;  // rsi
    unsigned long v15;  // rsi
    char * v16;  // rdi
    unsigned long|unsigned int v17;  // r8d
    unsigned long long v18;  // r9
    unsigned long long v19;  // r10
    unsigned long|unsigned long long|char *|unsigned int v2;  // [bp-0x48]
    unsigned long long|unsigned int v20;  // r14
    unsigned long long v21;  // r15
    char [2] v3;  // [bp-0x40]
    unsigned long long v5;  // rax
    char [2]|unsigned long long|char * v6;  // rax
    unsigned long|unsigned int v9;  // rcx

    v21 = v11;
    v2 = v14;
    v6 = memchr();
    if (v6 != 0)
    {
        *(v16 + v2) = 0;
        v12 = v6;
        v10 = v6;
        v19 = v6 - v16;
        if (((int)v6[1]) - 48 > 9)
        {
            v20 = 9;
            if (((int)v3[1]) - 48 > 9)
            {
                v15 = 1;
                v12 = 0;
                v9 = 1;
            }
        }
        else
        {
            v2 = v19;
            v3 = v12;
            v6 = strtol(v12 + 1, NULL, 0xa);
            v19 = v2;
            v20 = (2147483647 < v6? 2147483647 : v6);
            if (((int)(2147483647 < v6? 2147483647 : v6)) != 0)
            {
                v10 = v3;
                if (((int)v3[1]) - 48 > 9)
                {
                    v12 = 0;
                }
            }
            else
            {
                v12 = 0;
                /* goto 4212131; */
            }
        }
        if (((int)v6[1]) - 48 <= 9 && ((int)(2147483647 < v6? 2147483647 : v6)) != 0 || ((int)v3[1]) - 48 <= 9 && ((int)v6[1]) - 48 > 9)
        {
            if (((int)v3[1]) - 48 <= 9 || ((int)v6[1]) - 48 > 9)
            {
                v3[0] = 0;
                do
                {
                    tmp_12 = ((long long)*(rcx<8> + 2));
                    v10 = rcx<8> - 1;
                }
                while (((int)tmp_12) - 48 <= 9);
                v2 = v19;
                v3 = v10;
                v6 = strtol(v10, NULL, 0xa);
                v17 = (v6 <= 2147483647? v6 : 2147483647);
                v12 = ((int)(v6 <= 2147483647? v6 : 2147483647));
                if (((int)(v6 <= 2147483647? v6 : 2147483647)) > 1)
                {
                    if (v17 > decimal_point_len)
                    {
                        v17 = ((long long)(v17 - decimal_point_len));
                        if (((int)v17) > 1)
                        {
                            v17 = ((long long)(v17 - v20));
                            if (((int)v17) > 1)
                            {
                                if (v16 < v3 + ((long long)(v3[0] == 48)))
                                {
                                    v6 = v16;
                                    v14 = 0;
                                    do
                                    {
                                        v11 = ((long long)*(v6));
                                        if (*(v6) != 45)
                                        {
                                            *(v16) = v11;
                                            v16 += 1;
                                        }
                                        else
                                        {
                                            v14 = 1;
                                        }
                                        v6 += 1;
                                    }
                                    while (v3 + ((long long)(v3[0] == 48)) != v6);
                                    v18 = v16 - v16;
                                }
                                else
                                {
                                    v18 = 0;
                                }
                                if (((long long)v14) == 0 || v16 >= v3 + ((long long)(v3[0] == 48)))
                                {
                                    v2 = v18;
                                    __sprintf_chk(v16, 0x1, 0xffffffff, &g_411cf8, v17, v18);
                                }
                            }
                        }
                    }
                }
            }
            if (((int)v20) > 8)
            {
                v15 = 1;
                v9 = 1;
            }
        }
    }
    else
    {
        v20 = 0;
        v12 = 0;
    }
    if (v6 == 0 || ((int)v6[1]) - 48 <= 9 && ((int)v20) <= 8 || ((int)v6[1]) - 48 <= 9 && ((int)(2147483647 < v6? 2147483647 : v6)) == 0 || ((int)v3[1]) - 48 <= 9 && ((int)v20) <= 8)
    {
        v13 = v20;
        v9 = 1;
        do
        {
            ((unsigned int)v13) = ((long long)v13) + 1;
            v9 = ((long long)(((int)v9) * 10));
        }
        while (((int)((unsigned int)v13)) != 9);
        v15 = v9;
    }
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)))
    {
        if (v17 != 0)
        {
            v17 = ((int)(((int)(0x3b9aca00 % v9 - v17)) - ((int)(((long long)((v17 >> 63 CONCAT v17) % v15 >> 64)) != 0))));
            if (...)
            {
                v2 = ((int)v2);
                make_format();
                v5 = __printf_chk(0x1, v16);
            }
        }
    }
    if (...)
    {
        v2 = v17;
        v5 = out_int();
    }
    if (((unsigned int)v20) != 0)
    {
        v9 = ((long long)(((unsigned int)v20) <= 9? ((int)r14<8>) : 9));
        v20 = ((long long)(((unsigned int)v20) - (((int)r14<8>) <= 9? ((int)r14<8>) : 9)));
        if ((((int)v5) < 0? 0 : ((int)v5)) < v12)
        {
            v1 = 0;
            v0 = v20;
            __printf_chk(0x1, "%s%.*d%-*.*d", ((int)decimal_point), v9);
            v5 = v0;
            return v5;
        }
        v1 = 0;
        v0 = v20;
        __printf_chk(0x1, "%s%.*d%-*.*d", ((int)decimal_point), v9);
        v5 = v0;
        return v5;
    }
    return v5;
}
