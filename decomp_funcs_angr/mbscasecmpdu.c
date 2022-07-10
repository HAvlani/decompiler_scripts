extern unsigned int is_basic_table[4];

int mbscasecmp()
{
    char v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb4]
    unsigned long|char *|void * v10;  // [bp-0x68]
    unsigned long|unsigned long long v11;  // [bp-0x60]
    char v12;  // [bp-0x58]
    unsigned int v13;  // [bp-0x54]
    unsigned long|char *|unsigned long long|unsigned int v15;  // rax
    char *|unsigned long long v17;  // rdx
    unsigned long long|unsigned int v18;  // rbx
    char * v19;  // rbp
    char v2;  // [bp-0xac]
    unsigned long long v20;  // rsi
    void *v21;  // rdi
    char *|unsigned long long v22;  // r12
    char *v23;  // r13
    char *v24;  // r13
    unsigned long long v25;  // r14
    char * v3;  // [bp-0xa8]
    unsigned long|unsigned long long v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    unsigned int v6;  // [bp-0x94]
    char v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x74]
    char v9;  // [bp-0x6c]

    if (v21 != v20)
    {
        v19 = v21;
        v22 = v20;
        v15 = __ctype_get_mb_cur_max();
        if (v15 > 1)
        {
            v3 = v21;
            v0 = 0;
            v1 = 0;
            v2 = 0;
            v10 = v20;
            v7 = 0;
            v8 = 0;
            v9 = 0;
            while (true)
            {
                if (v0 == 0)
                {
                    v17 = v3;
                    if (...)
                    {
                        v4 = 1;
                        v15 = ((int)*(v17));
                        v5 = 1;
                        v6 = v15;
                        v2 = 1;
                    }
                    else
                    {
                        v15 = mbsinit(((int)&v1));
                        if (v15 != 0)
                        {
                            v0 = 1;
                            /* goto 4251292; */
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    if (...)
                    {
                        v17 = v3;
                        if (...)
                        {
                            v15 = mbsinit(((int)&v1));
                            if (v15 != 0)
                            {
                                v0 = 1;
                                /* goto 4252131; */
                            }
                            else
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                        else
                        {
                            v4 = 1;
                            v15 = ((int)*(v17));
                            v5 = 1;
                            v6 = v15;
                            v2 = 1;
                        }
                    }
                }
                if (...)
                {
                    __ctype_get_mb_cur_max();
                    strnlen1();
                    v4 = (long long)rpl_mbrtowc();
                }
                if (v4 != 18446744069414584319)
                {
                    if (...)
                    {
                        if (v4 != 18446744069414584318)
                        {
                            if (v4 == 0)
                            {
                                if (*(v3) != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                else if (v6 != 0)
                                {
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                            if ((*(v3) == 0 || v4 != 0) && (v6 == 0 || v4 != 0))
                            {
                                v5 = 1;
                                v15 = mbsinit(((int)&v1));
                                if (v15 != 0)
                                {
                                    v0 = 0;
                                }
                                v2 = 1;
                            }
                        }
                        else
                        {
                            v5 = 0;
                            v4 = strlen(v3);
                            v2 = 1;
                        }
                        if (v4 == 0)
                        {
                            v4 = 1;
                        }
                    }
                    if (...)
                    {
                        if (v4 == 18446744069414584318)
                        {
                            break;
                            return rax<8>;
                        }
                        else if (v4 == 0)
                        {
                            if (*(v3) != 0)
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if (v6 != 0)
                            {
                                mbuiter_multi_next.part.0(); /* do not return */
                            }
                        }
                        if (v4 == 0)
                        {
                            v4 = 1;
                        }
                    }
                }
                else
                {
                    if (...)
                    {
                        v4 = 1;
                        v5 = 0;
                        v2 = 1;
                    }
                    if (...)
                    {
                        break;
                        return rax<8>;
                    }
                }
                if (...)
                {
                    v17 = v10;
                    if (...)
                    {
                        v11 = 1;
                        v15 = ((int)*(v17));
                        v12 = 1;
                        v13 = v15;
                        v9 = 1;
                    }
                    else
                    {
                        v15 = mbsinit(((int)&v8));
                        if (v15 != 0)
                        {
                            v7 = 1;
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                }
                if (...)
                {
                    __ctype_get_mb_cur_max();
                    strnlen1();
                    v11 = (long long)rpl_mbrtowc();
                    if (v11 == 18446744069414584319)
                    {
                        v11 = 1;
                        v12 = 0;
                        v9 = 1;
                    }
                    else if (v11 != 18446744069414584318)
                    {
                        if (v11 == 0)
                        {
                            if (*(v10) != 0)
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if (v13 != 0)
                            {
                                mbuiter_multi_next.part.0(); /* do not return */
                            }
                        }
                    }
                    if (v11 == 18446744069414584318)
                    {
                        v12 = 0;
                        v11 = strlen(v10);
                        v9 = 1;
                    }
                    if (v11 == 0)
                    {
                        v11 = 1;
                    }
                }
                if (...)
                {
                    if (v5 != 0)
                    {
                        break;
                        return rax<8>;
                    }
                    else if (v4 == v11)
                    {
                        v15 = memcmp(v3, v10, v4);
                    }
                    else if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, Load(addr=stack_base-160, size=8, endness=Iend_LE), Load(addr=stack_base-96, size=8, endness=Iend_LE), cc_ndep<8>)))
                    {
                        v15 = memcmp(v3, v10, v4);
                        if (v15 > 0)
                        {
                            break;
                            return rax<8>;
                        }
                        break;
                        return rax<8>;
                    }
                    else
                    {
                        v15 = memcmp(v3, v10, v11);
                        if (v15 >= 0)
                        {
                            break;
                            return rax<8>;
                        }
                        break;
                        return rax<8>;
                    }
                }
                if (...)
                {
                    v12 = 1;
                    v15 = mbsinit(((int)&v8));
                    if (v15 != 0)
                    {
                        v7 = 0;
                    }
                    v9 = 1;
                }
                if (...)
                {
                    if (v13 != 0)
                    {
                        if (v5 != 0)
                        {
                            v18 = ((int)(towlower(v6) - towlower(v13)));
                            v15 = v18;
                        }
                        else
                        {
                            break;
                            return rax<8>;
                        }
                    }
                    else
                    {
                        if (v2 != 0)
                        {
                            if (v5 == 0)
                            {
                                break;
                                return rax<8>;
                            }
                        }
                    }
                }
                if (...)
                {
                    if (reg_16<4> != 0)
                    {
                        break;
                    }
                    if (reg_16<4> == 0)
                    {
                        v3 += v4;
                        v10 += v11;
                        v2 = 0;
                        v9 = 0;
                    }
                    else
                    {
                        return rax<8>;
                    }
                }
                if (...)
                {
                    __ctype_get_mb_cur_max();
                    strnlen1();
                    v4 = (long long)rpl_mbrtowc();
                }
                if (...)
                {
                    v5 = 1;
                    v15 = mbsinit(((int)&v1));
                    if (v15 != 0)
                    {
                        v0 = 0;
                    }
                    v2 = 1;
                }
                if (...)
                {
                    break;
                    return rax<8>;
                }
                if (...)
                {
                    if (v9 == 0)
                    {
                        if (v7 == 0)
                        {
                            v17 = v10;
                            if (...)
                            {
                                v11 = 1;
                                v15 = ((int)*(v17));
                                v12 = 1;
                                v13 = v15;
                            }
                            else
                            {
                                v15 = mbsinit(((int)&v8));
                                if (v15 != 0)
                                {
                                    v7 = 1;
                                }
                                else
                                {
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                        if (...)
                        {
                            __ctype_get_mb_cur_max();
                            strnlen1();
                            v11 = (long long)rpl_mbrtowc();
                            if (v11 > 18446744069414584317)
                            {
                                break;
                                return rax<8>;
                            }
                            if (v11 == 0)
                            {
                                v11 = 1;
                                if (*(v10) != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                else if (v13 != 0)
                                {
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                            if ((*(v10) == 0 || v11 != 0) && (v13 == 0 || v11 != 0))
                            {
                                v12 = 1;
                            }
                        }
                    }
                    else if (v12 == 0)
                    {
                        break;
                        return rax<8>;
                    }
                    if (...)
                    {
                        if (v13 == 0)
                        {
                            break;
                        }
                        if (v13 == 0)
                        {
                            return rax<8>;
                        }
                        break;
                    }
                }
            }
            return rax<8>;
        }
        v25 = *(__ctype_b_loc());
        while (true)
        {
            v24 = ((long long)*(v19));
            v18 = ((long long)*(v19));
            if (((long long)(*(v25 + (((long long)*(v19)) << 1) + 1) & 1)) != 0)
            {
                v15 = *(__ctype_tolower_loc());
                v18 = ((long long)*(v15 + v24 * 4));
            }
            v23 = ((long long)*(v22));
            v17 = ((long long)*(v22));
            if (((long long)(*(v25 + (((long long)*(v22)) << 1) + 1) & 1)) != 0)
            {
                v15 = *(__ctype_tolower_loc());
                v17 = ((long long)*(v15 + v23 * 4));
            }
            if (((long long)v18) != 0)
            {
                v19 += 1;
                v22 += 1;
                return rax<8>;
            }
            else
            {
                return rax<8>;
            }
        }
    }
    return rax<8>;
}
