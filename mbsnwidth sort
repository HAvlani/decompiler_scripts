typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

int mbsnwidth()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_7;  // tmp #7
    unsigned int v0;  // [bp-0x5c]
    char v1;  // [bp-0x4c]
    unsigned long long v10;  // rdi
    unsigned long long|unsigned int v11;  // r12
    char * v12;  // r15
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    struct_1 *v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long v8;  // rbx
    unsigned long v9;  // rsi

    v12 = v10;
    v0 = ((int)v7);
    v4 = __ctype_get_mb_cur_max();
    if (v4 > 1)
    {
        v11 = 0;
        if (v10 < v10 + v9)
        {
            while (true)
            {
                v4 = ((long long)*(v12));
                if (!(((char)(((long long)*(v12)) <= 95))))
                {
                    v4 = ((long long)(((int)v4) - 97));
                    tmp_3 = v4;
                }
                else if (((char)(((long long)v4) <= 64)))
                {
                    if (!(((char)(((long long)v4) <= 35))))
                    {
                        v4 = ((long long)(((int)v4) - 37));
                        tmp_3 = v4;
                    }
                }
                if ((((char)(((long long)*(v12)) <= 95)) || ((long long)tmp_3) > 29) && (((char)(((long long)v4) <= 64)) || !(((char)(((long long)*(v12)) <= 95)))) && (((char)(((long long)v4) <= 35)) || !(((char)(((long long)*(v12)) <= 95))) || ((long long)tmp_3) > 26) && (((char)(((long long)v4) <= 31)) || !(((char)(((long long)*(v12)) <= 95))) || !(((char)(((long long)v4) <= 35)))))
                {
                    v2 = 0;
                    while (true)
                    {
                        v4 = rpl_mbrtowc();
                        if (v4 == 18446744069414584319)
                        {
                            v5 = r12<8>;
                            return v5;
                        }
                        else if (v4 != 18446744069414584318)
                        {
                            v8 = (v4 != 0? v4 : 1);
                            v4 = wcwidth(v1);
                            if (((int)v4) >= 0)
                            {
                                if (2147483647 - ((int)v11) >= ((int)v4))
                                {
                                    v11 = ((long long)(v11 + v4));
                                }
                                else
                                {
                                    v5 = r12<8>;
                                    return v5;
                                }
                            }
                            else
                            {
                                if (((long long)(((char)v0) & 2)) == 0)
                                {
                                    v4 = iswcntrl(v1);
                                    if (v4 == 0)
                                    {
                                        if (((int)v11) != 2147483647)
                                        {
                                            v11 = ((long long)(((int)v11) + 1));
                                        }
                                        else
                                        {
                                            v5 = r12<8>;
                                            return v5;
                                        }
                                    }
                                }
                                else
                                {
                                    v5 = r12<8>;
                                    return v5;
                                }
                            }
                            if ((((int)v4) < 0 || 2147483647 - ((int)v11) >= ((int)v4)) && (((long long)(((char)v0) & 2)) == 0 || ((int)v4) >= 0) && (((int)v11) != 2147483647 || ((int)v4) >= 0 || v4 != 0))
                            {
                                v12 += v8;
                                v4 = mbsinit(((int)&v2));
                            }
                        }
                        else if (((long long)(((char)v0) & 1)) != 0)
                        {
                            v5 = r12<8>;
                            return v5;
                        }
                        else
                        {
                            v12 = v10 + v9;
                            break;
                        }
                    }
                    if (v4 == 18446744069414584319)
                    {
                        v12 = r15<8> + 1;
                    }
                    else
                    {
                        if (r15<8> >= v10 + v9)
                        {
                            break;
                        }
                    }
                }
                v12 = r15<8> + 1;
            }
            v5 = r12<8>;
            return v5;
        }
        v5 = r12<8>;
        return v5;
    }
    else if (v10 >= v10 + v9)
    {
        v5 = r12<8>;
        return v5;
    }
    else
    {
        v11 = 0;
        v6 = *(__ctype_b_loc());
        while (true)
        {
            tmp_7 = ((long long)*(v12));
            v12 += 1;
            v4 = ((long long)*(v6 + tmp_7 * 2));
            if (((long long)(((char)(*(v6 + (tmp_7 << 1)) >> 8)) & 64)) == 0 && ((int)(v0 & 2)) != 0)
            {
                v5 = r12<8>;
                return v5;
            }
            if (((int)(v0 & 2)) == 0 || ((long long)(((char)(*(v6 + (tmp_7 << 1)) >> 8)) & 64)) != 0)
            {
                if (v11 != 2147483647 && (((long long)(v4 & 2)) == 0 || ((long long)(((char)(*(v6 + (tmp_7 << 1)) >> 8)) & 64)) != 0))
                {
                    v11 = ((int)v11) + 1;
                    v5 = r12<8>;
                    return v5;
                }
                if ((((long long)(((char)(*(v6 + (tmp_7 << 1)) >> 8)) & 64)) == 0 || v11 != 2147483647) && (((long long)(v4 & 2)) != 0 || v11 != 2147483647))
                {
                    v5 = r12<8>;
                    return v5;
                }
            }
        }
    }
}
