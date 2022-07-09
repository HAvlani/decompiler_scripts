extern unsigned int is_basic_table[4];

int mbsstr_trimmed_wordbounded()
{
    char v0;  // [bp-0xc9]
    char v1;  // [bp-0xc8]
    char v10;  // [bp-0x7c]
    unsigned long|char * v11;  // [bp-0x78]
    unsigned long|unsigned long long v12;  // [bp-0x70]
    char v13;  // [bp-0x68]
    unsigned int v14;  // [bp-0x64]
    unsigned long long|char *|unsigned int v16;  // rax
    unsigned int v19;  // ecx
    unsigned long long v2;  // [bp-0xc4]
    char * v20;  // rdx
    char *|unsigned int v21;  // rbx
    char * v22;  // rbx
    char *v23;  // rbp
    char *v24;  // rdi
    char *v25;  // r12
    char *v26;  // r14
    unsigned long|unsigned int v27;  // r15
    unsigned long long v28;  // cc_dep1
    char v3;  // [bp-0xbc]
    unsigned long|unsigned long long|char * v4;  // [bp-0xb8]
    unsigned long|unsigned long long v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    unsigned int v7;  // [bp-0xa4]
    char v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x84]

    v21 = v24;
    v26 = (long long)trim2();
    if (*(v24) != 0)
    {
        while (true)
        {
            v23 = (long long)mbsstr();
            if (v4 != 0)
            {
                v0 = 0;
                rpl_free();
                return ((long long)v0);
                v16 = __ctype_get_mb_cur_max();
                if (v16 <= 1)
                {
                    v25 = v4 + strlen(v11);
                    if (v4 > v21)
                    {
                        v16 = *(__ctype_b_loc());
                        v28 = ((long long)(*(v16 + ((long long)*(v4 + 1)) * 2) & 8));
                    }
                    if (((char)v28) == 0 || v4 <= v21)
                    {
                        v21 = ((long long)*(v25));
                        if (((long long)*(v25)) != 0)
                        {
                            v16 = *(__ctype_b_loc());
                            v28 = ((long long)(*(v16 + v21 * 2) & 8));
                            if (((char)v28) == 0)
                            {
                                v0 = 1;
                                rpl_free();
                                return ((long long)v0);
                            }
                        }
                        v0 = 1;
                        rpl_free();
                        return ((long long)v0);
                    }
                    if (*(v4) != 0 && (((char)v28) != 0 || ((long long)*(v25)) != 0) && (((char)v28) != 0 || ((char)v28) != 0) && (v4 > v21 || ((long long)*(v25)) != 0) && (v4 > v21 || ((char)v28) != 0))
                    {
                        v0 = 0;
                        rpl_free();
                        return ((long long)v0);
                        v21 = v4 + 1;
                        v0 = 0;
                        rpl_free();
                        return ((long long)v0);
                    }
                }
                v4 = v21;
                v1 = 0;
                v2 = 0;
                v3 = 0;
                if (v4 <= v21)
                {
                }
                else
                {
                    while (true)
                    {
                        if (v1 == 0)
                        {
                            v21 = v4;
                            if (...)
                            {
                                v5 = 1;
                                v27 = ((long long)*(v21));
                                v6 = 1;
                                v7 = ((int)v27);
                                v3 = 1;
                            }
                            else
                            {
                                v16 = mbsinit(((int)&v2));
                                if (v16 != 0)
                                {
                                    v1 = 1;
                                    /* goto 4225109; */
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                        if (...)
                        {
                            __ctype_get_mb_cur_max();
                            strnlen1();
                            v5 = (long long)rpl_mbrtowc();
                        }
                        if (...)
                        {
                            if (v5 != 18446744069414584318)
                            {
                                if (v5 != 0)
                                {
                                    v27 = ((int)v7);
                                    /* goto 4225216; */
                                }
                                if (*(v4) == 0 && v5 == 0)
                                {
                                    v27 = ((long long)v7);
                                    if (v7 != 0)
                                    {
                                        __assert_fail(); /* do not return */
                                    }
                                }
                                if (v5 == 0 && *(v4) != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                if ((v7 == 0 || v5 != 0) && (*(v4) == 0 || v5 != 0))
                                {
                                    v6 = 1;
                                    v16 = mbsinit(((int)&v2));
                                    if (v16 != 0)
                                    {
                                        v1 = 0;
                                    }
                                    v3 = 1;
                                }
                            }
                            else
                            {
                                v22 = v4;
                                v6 = 0;
                                v5 = strlen(v4);
                                /* goto 4225073; */
                            }
                            if (v5 == 0)
                            {
                                v5 = 1;
                            }
                        }
                        if (...)
                        {
                            v22 = v4;
                            v6 = 0;
                            v5 = 1;
                            /* goto 4225073; */
                        }
                        if (...)
                        {
                            v22 = v4;
                        }
                        if (...)
                        {
                            v21 = v22 + v5;
                            v3 = 0;
                            v4 = v21;
                            v0 = ((char)(iswalnum(v27) == 0));
                            break;
                        }
                    }
                    if (v4 >= v4)
                    {
                        v0 = 1;
                    }
                    else if (v4 >= v4 && ((long long)v6) != 0)
                    {
                        v4 = v23;
                        v1 = 0;
                        v2 = 0;
                        v3 = 0;
                        v11 = v26;
                        v8 = 0;
                        v9 = 0;
                        v10 = 0;
                    }
                }
                v0 = 1;
                v4 = v23;
                v1 = 0;
                v2 = 0;
                v3 = 0;
                v11 = v26;
                v8 = 0;
                v9 = 0;
                v10 = 0;
                while (true)
                {
                    if (v8 == 0)
                    {
                        v20 = v11;
                        if (...)
                        {
                            v12 = 1;
                            v16 = ((int)*(v20));
                            v13 = 1;
                            v14 = v16;
                            v19 = ((int)v14);
                            v10 = 1;
                        }
                        else
                        {
                            v16 = mbsinit(((int)&v9));
                            if (v16 != 0)
                            {
                                __assert_fail(); /* do not return */
                                v8 = 1;
                            }
                        }
                    }
                    if (...)
                    {
                        __ctype_get_mb_cur_max();
                        strnlen1();
                        v12 = (long long)rpl_mbrtowc();
                    }
                    if (...)
                    {
                        if (v12 == 18446744069414584319)
                        {
                            v12 = 1;
                            v13 = 0;
                            v10 = 1;
                        }
                        else if (v12 != 18446744069414584318)
                        {
                            if (v12 == 0)
                            {
                                if (*(v11) != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                else if (v14 != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                            }
                            if ((v14 == 0 || v12 != 0) && (*(v11) == 0 || v12 != 0))
                            {
                                v13 = 1;
                                v16 = mbsinit(((int)&v9));
                                if (v16 != 0)
                                {
                                    v8 = 0;
                                }
                                v19 = ((int)v14);
                                v10 = 1;
                            }
                        }
                        if (v12 == 18446744069414584318)
                        {
                            v13 = 0;
                            v12 = strlen(v11);
                            v10 = 1;
                        }
                        if (v12 == 0)
                        {
                            v12 = 1;
                        }
                    }
                    if (...)
                    {
                        if (v3 == 0)
                        {
                            if (v1 == 0)
                            {
                                v20 = v4;
                                if (...)
                                {
                                    v5 = 1;
                                    v21 = ((int)*(v20));
                                    v6 = 1;
                                    v7 = v21;
                                    v3 = 1;
                                }
                                else
                                {
                                    v16 = mbsinit(((int)&v2));
                                    if (v16 != 0)
                                    {
                                        v1 = 1;
                                        /* goto 4226445; */
                                        __assert_fail(); /* do not return */
                                    }
                                }
                            }
                            if (...)
                            {
                                __ctype_get_mb_cur_max();
                                strnlen1();
                                v5 = (long long)rpl_mbrtowc();
                                if (v5 == 18446744069414584319)
                                {
                                    v5 = 1;
                                    v6 = 0;
                                    v3 = 1;
                                }
                                else if (v5 != 18446744069414584318)
                                {
                                    if (v5 != 0)
                                    {
                                        /* goto 4226554; */
                                    }
                                    else if (*(v4) == 0)
                                    {
                                        if (v7 != 0)
                                        {
                                            mbuiter_multi_next.part.0(); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        __assert_fail(); /* do not return */
                                    }
                                }
                                if (v5 == 18446744069414584318)
                                {
                                    v6 = 0;
                                    v5 = strlen(v4);
                                    v3 = 1;
                                }
                                if (v5 == 0)
                                {
                                    v5 = 1;
                                }
                            }
                        }
                        if (...)
                        {
                            v6 = 1;
                            v16 = mbsinit(((int)&v2));
                            if (v16 != 0)
                            {
                                v1 = 0;
                            }
                            v3 = 1;
                        }
                        if (...)
                        {
                            v16 = iswalnum(((unsigned int)v21));
                        }
                        if (...)
                        {
                            rpl_free();
                            return ((long long)v0);
                        }
                        if (...)
                        {
                            v4 = v4;
                            v1 = 0;
                            v2 = 0;
                            v3 = 0;
                            if (...)
                            {
                                v5 = 1;
                                v16 = ((int)*(v4));
                                v6 = 1;
                                v7 = v16;
                            }
                            else
                            {
                                v16 = mbsinit(((int)&v2));
                                if (v16 != 0)
                                {
                                    __assert_fail(); /* do not return */
                                    v1 = 1;
                                    __ctype_get_mb_cur_max();
                                    strnlen1();
                                    v5 = (long long)rpl_mbrtowc();
                                    if (v5 == 18446744069414584319)
                                    {
                                        v5 = 1;
                                        /* goto 4225925; */
                                    }
                                    else if (v5 != 18446744069414584318)
                                    {
                                        if (v5 == 0)
                                        {
                                            if (*(v4) != 0)
                                            {
                                                __assert_fail(); /* do not return */
                                            }
                                            else if (v7 != 0)
                                            {
                                                mbuiter_multi_next.part.0(); /* do not return */
                                            }
                                        }
                                        if ((v7 == 0 || v5 != 0) && (*(v4) == 0 || v5 != 0))
                                        {
                                            v6 = 1;
                                        }
                                    }
                                    if (v5 == 18446744069414584318)
                                    {
                                        v5 = strlen(v4);
                                        /* goto 4225925; */
                                    }
                                    if (v5 == 0)
                                    {
                                        v5 = 1;
                                    }
                                }
                            }
                            if (...)
                            {
                                if (...)
                                {
                                    v0 = 0;
                                    rpl_free();
                                    return ((long long)v0);
                                }
                                if (...)
                                {
                                    v21 = v5 + v4;
                                    v0 = 0;
                                    rpl_free();
                                    return ((long long)v0);
                                }
                            }
                        }
                    }
                    if (...)
                    {
                        if (v3 == 0)
                        {
                            if (v1 == 0)
                            {
                                v20 = v4;
                                if (...)
                                {
                                    v5 = 1;
                                    v16 = ((int)*(v20));
                                    v6 = 1;
                                    v7 = v16;
                                    v3 = 1;
                                }
                                else
                                {
                                    v16 = mbsinit(((int)&v2));
                                    if (v16 != 0)
                                    {
                                        v1 = 1;
                                        /* goto 4226029; */
                                        __assert_fail(); /* do not return */
                                    }
                                }
                            }
                            if (...)
                            {
                                __ctype_get_mb_cur_max();
                                strnlen1();
                                v5 = (long long)rpl_mbrtowc();
                                if (v5 == 18446744069414584319)
                                {
                                    v5 = 1;
                                    v6 = 0;
                                    /* goto 4225552; */
                                }
                                else if (v5 != 18446744069414584318)
                                {
                                    if (v5 == 0)
                                    {
                                        if (*(v4) != 0)
                                        {
                                            __assert_fail(); /* do not return */
                                        }
                                        else if (v7 != 0)
                                        {
                                            __assert_fail(); /* do not return */
                                        }
                                    }
                                }
                                if (v5 == 18446744069414584318)
                                {
                                    v6 = 0;
                                    v5 = strlen(v4);
                                    /* goto 4225552; */
                                }
                                if (v5 == 0)
                                {
                                    v5 = 1;
                                }
                            }
                        }
                        if (...)
                        {
                            v6 = 1;
                            v16 = mbsinit(((int)&v2));
                            if (v16 != 0)
                            {
                                v1 = 0;
                            }
                            v3 = 1;
                        }
                        if (...)
                        {
                            v4 += v5;
                            v11 += v12;
                            v3 = 0;
                            v10 = 0;
                        }
                    }
                }
            }
        }
    }
    else
    {
        v0 = 0;
        rpl_free();
        return ((long long)v0);
    }
}
