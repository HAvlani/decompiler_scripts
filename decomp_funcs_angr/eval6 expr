typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

extern struct_0 *args;
extern unsigned int g_420908;
extern unsigned int g_420930;
extern unsigned int g_420ac3;
extern unsigned int is_basic_table[4];

int eval6()
{
    unsigned long|unsigned long long v0;  // [bp-0x128]
    unsigned long|char * v1;  // [bp-0x120]
    unsigned int v10;  // [bp-0xe4]
    char v11;  // [bp-0xc8]
    unsigned long long v12;  // [bp-0xc4]
    char v13;  // [bp-0xbc]
    char * v14;  // [bp-0xb8]
    unsigned long|unsigned long long v15;  // [bp-0xb0]
    char v16;  // [bp-0xa8]
    unsigned int v17;  // [bp-0xa4]
    char v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x84]
    unsigned long long|char * v2;  // [bp-0x118]
    char v20;  // [bp-0x7c]
    char * v21;  // [bp-0x78]
    unsigned long|unsigned long long v22;  // [bp-0x70]
    char v23;  // [bp-0x68]
    unsigned int v24;  // [bp-0x64]
    unsigned long v3;  // [bp-0x110]
    unsigned long long|char *|unsigned int v30;  // rax
    unsigned long long v34;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    char v4;  // [bp-0x108]
    unsigned long long v44;  // rax
    unsigned int v49;  // ecx
    unsigned long long v5;  // [bp-0x104]
    char * v50;  // rdx
    unsigned long long|char * v51;  // rbx
    unsigned long long|struct_2 * v52;  // rbp
    char|unsigned long long v53;  // dil
    unsigned long v55;  // r8
    struct_1 *|unsigned long long v56;  // r12
    unsigned long long v57;  // r12
    unsigned long long v58;  // r12
    unsigned long long|char * v59;  // r13
    char v6;  // [bp-0xfc]
    unsigned long|unsigned long long v60;  // r14
    struct_1 *|char * v61;  // r15
    char v62;  // cc_dep1
    char|unsigned long long v7;  // [bp-0xf8]
    unsigned long|unsigned long long v8;  // [bp-0xf0]
    char v9;  // [bp-0xe8]

    if ((long long)nextarg() == 0)
    {
        v59 = ((long long)v53);
        if (!((long long)nextarg() == 0))
        {
            v52 = (long long)eval6();
            tostring();
            v56 = (long long)mbslen();
            *(xmalloc() + None) = 0;
            mpz_init_set_ui();
            freev();
            v39 = v60;
            return v39;
        }
        else if ((long long)nextarg() == 0)
        {
            v44 = nextarg();
            if (((long long)v44) == 0)
            {
                v34 = nextarg();
                if (((long long)v34) != 0)
                {
                    v56 = (long long)eval6();
                    v52 = (long long)eval6();
                    v59 = (long long)eval6();
                    tostring();
                    v38 = toarith();
                    if (((long long)v38) != 0)
                    {
                        v38 = toarith();
                        if (((long long)v38) != 0)
                        {
                            v0 = (long long)getsize();
                            v51 = v56->field_8;
                            v60 = (long long)getsize();
                            v30 = strlen(v56->field_8);
                            if (v55 > 1)
                            {
                                v30 = mbslen();
                            }
                            if (v0 <= v30)
                            {
                                if (v0 != 0)
                                {
                                    if (v60 - 1 <= 18446744069414584317)
                                    {
                                        v60 = (v30 - v0 + 1 <= v60? v30 - v0 + 1 : v60);
                                        v30 = __ctype_get_mb_cur_max();
                                        if (v30 != 1)
                                        {
                                            v30 = xmalloc();
                                            v21 = v51;
                                            v51 = 1;
                                            v3 = v30;
                                            v18 = 0;
                                            v19 = 0;
                                            v20 = 0;
                                            v1 = v30;
                                            while (true)
                                            {
                                                if (v18 == 0)
                                                {
                                                    v50 = v21;
                                                    if (...)
                                                    {
                                                        v22 = 1;
                                                        v30 = ((int)*(v50));
                                                        v23 = 1;
                                                        v24 = v30;
                                                        v20 = 1;
                                                    }
                                                    else
                                                    {
                                                        v30 = mbsinit(((int)&v19));
                                                        if (v30 != 0)
                                                        {
                                                            __assert_fail(); /* do not return */
                                                            v18 = 1;
                                                        }
                                                    }
                                                }
                                                if (...)
                                                {
                                                    __ctype_get_mb_cur_max();
                                                    v2 = v21;
                                                    strnlen1();
                                                    v22 = (long long)rpl_mbrtowc();
                                                }
                                                if (...)
                                                {
                                                    if (v22 == 18446744069414584319)
                                                    {
                                                        v22 = 1;
                                                        v23 = 0;
                                                        v20 = 1;
                                                    }
                                                    else if (v22 != 18446744069414584318)
                                                    {
                                                        if (v22 == 0)
                                                        {
                                                            if (*(v30) != 0)
                                                            {
                                                                __assert_fail(); /* do not return */
                                                            }
                                                            else if (v24 != 0)
                                                            {
                                                                mbuiter_multi_next.part.0(); /* do not return */
                                                            }
                                                        }
                                                        if ((v24 == 0 || v22 != 0) && (*(v30) == 0 || v22 != 0))
                                                        {
                                                            v23 = 1;
                                                            v30 = mbsinit(((int)&v19));
                                                            if (v30 != 0)
                                                            {
                                                                v18 = 0;
                                                            }
                                                            v20 = 1;
                                                        }
                                                    }
                                                    if (v22 == 18446744069414584318)
                                                    {
                                                        v23 = 0;
                                                        v22 = strlen(v21);
                                                        v20 = 1;
                                                    }
                                                    if (v22 == 0)
                                                    {
                                                        v30 = v21;
                                                        v22 = 1;
                                                    }
                                                }
                                                if (...)
                                                {
                                                    if (v0 <= v51)
                                                    {
                                                        v2 = v22;
                                                        v60 -= 1;
                                                        v1 = mempcpy(((int)v1), ((int)v21));
                                                    }
                                                    v61 = v21 + v22;
                                                    v20 = 0;
                                                    v51 = 2;
                                                    v21 = v61;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v3 = (long long)xmalloc();
                                            v1 = mempcpy(((int)v3), ((int)(v21 + v0 - 1)));
                                        }
                                        *(v1) = 0;
                                        /* goto 4210950; */
                                    }
                                }
                            }
                            if (v0 == 0 || v60 - 1 > 18446744069414584317 || v0 > v30)
                            {
                                v3 = (long long)xstrdup();
                            }
                            str_value();
                            rpl_free();
                            freev();
                            freev();
                            freev();
                            v39 = v60;
                            return v39;
                        }
                    }
                    if (((long long)v38) == 0 || ((long long)v38) == 0)
                    {
                        str_value();
                        freev();
                        freev();
                        freev();
                        v39 = v60;
                        return v39;
                    }
                }
                require_more_args();
                v37 = nextarg();
                if (((long long)v37) != 0)
                {
                    eval();
                    if (!(*(args) != 0))
                    {
                        v57 = (long long)quotearg_n_style();
                        error(0x2, 0x0, dcgettext(0x0, &g_420908, 0x5));
                    }
                    else if ((long long)nextarg() != 0)
                    {
                        v39 = v60;
                        return v39;
                    }
                    else
                    {
                        v58 = (long long)quotearg_n_style();
                        error(0x2, 0x0, dcgettext(0x0, &g_420930, 0x5));
                    }
                }
                else
                {
                    v30 = nextarg();
                    if (((long long)v30) == 0)
                    {
                        args = args + 8;
                        str_value();
                        v39 = v60;
                        return v39;
                    }
                    else
                    {
                        error(0x2, 0x0, dcgettext(0x0, &g_420ac3, 0x5));
                        while (true)
                        {
                            v14 = v59;
                            v11 = 0;
                            v12 = 0;
                            v13 = 0;
                            break;
                            while (true)
                            {
                                if (v11 == 0)
                                {
                                    v50 = v14;
                                    if (...)
                                    {
                                        v15 = 1;
                                        v30 = ((int)*(v50));
                                        v16 = 1;
                                        v17 = v30;
                                        v13 = 1;
                                    }
                                    else
                                    {
                                        v30 = mbsinit(((int)&v12));
                                        if (v30 != 0)
                                        {
                                            v11 = 1;
                                            /* goto 4210446; */
                                            __assert_fail(); /* do not return */
                                        }
                                    }
                                }
                                if (...)
                                {
                                    __ctype_get_mb_cur_max();
                                    strnlen1();
                                    v15 = (long long)rpl_mbrtowc();
                                }
                                if (...)
                                {
                                    if (v15 != 18446744069414584318)
                                    {
                                        if (v15 == 0)
                                        {
                                            if (*(v14) != 0)
                                            {
                                                __assert_fail(); /* do not return */
                                            }
                                            else if (v17 != 0)
                                            {
                                                mbuiter_multi_next.part.0(); /* do not return */
                                            }
                                        }
                                        if ((*(v14) == 0 || v15 != 0) && (v17 == 0 || v15 != 0))
                                        {
                                            v16 = 1;
                                            v30 = mbsinit(((int)&v12));
                                            if (v30 != 0)
                                            {
                                                v11 = 0;
                                            }
                                            v13 = 1;
                                        }
                                    }
                                    else
                                    {
                                        v16 = 0;
                                        v15 = strlen(v14);
                                        v13 = 1;
                                        /* goto 4210614; */
                                    }
                                    if (v15 == 0)
                                    {
                                        v15 = 1;
                                    }
                                }
                                if (...)
                                {
                                    v15 = 1;
                                    v16 = 0;
                                    v13 = 1;
                                    /* goto 4210614; */
                                }
                                if (...)
                                {
                                    if (...)
                                    {
                                        v51 = v7;
                                        break;
                                    }
                                    if (...)
                                    {
                                        v60 = v15;
                                        /* goto 4210429; */
                                    }
                                }
                                if (...)
                                {
                                    v60 = v15;
                                    if (v15 == v8)
                                    {
                                        v30 = memcmp(v14, v7, v15);
                                    }
                                }
                                if (*(v14) == 0 || v30 == 0 || v17 != 0 || v17 == 0)
                                {
                                    v14 += v60;
                                    v13 = 0;
                                }
                            }
                            if (v17 != 0 && (v15 == v8 || v9 != 0))
                            {
                                *(xmalloc() + None) = 0;
                                mpz_init_set_ui();
                                freev();
                            }
                            while (true)
                            {
                                v53 = 1 + v51;
                                v62 = ((char)v4);
                                v6 = 0;
                                v7 = v53;
                                if (v62 == 0)
                                {
                                    v53 = v7;
                                    if (...)
                                    {
                                        v8 = 1;
                                        v30 = ((int)*(v53));
                                        v9 = 1;
                                        v10 = v30;
                                        v6 = 1;
                                        v56 += 1;
                                        /* goto 4209996; */
                                    }
                                    else
                                    {
                                        v30 = mbsinit(((int)&v5));
                                        v4 = 1;
                                    }
                                }
                                if (...)
                                {
                                    __ctype_get_mb_cur_max();
                                    v0 = v7;
                                    strnlen1();
                                    v8 = (long long)rpl_mbrtowc();
                                    if (v8 != 18446744069414584319)
                                    {
                                        if (v8 != 18446744069414584318)
                                        {
                                            if (v8 == 0)
                                            {
                                                v8 = 1;
                                            }
                                            v9 = 1;
                                            v30 = mbsinit(((int)&v5));
                                            if (v30 != 0)
                                            {
                                                v4 = 0;
                                            }
                                            v49 = ((int)v10);
                                            v6 = 1;
                                        }
                                        else
                                        {
                                            v9 = 0;
                                            v8 = strlen(v7);
                                            v6 = 1;
                                        }
                                        v56 += 1;
                                        v53 = v7;
                                    }
                                    else
                                    {
                                        v9 = 0;
                                        v53 = v7;
                                        v56 += 1;
                                        v8 = 1;
                                        v6 = 1;
                                    }
                                }
                                v51 = v53;
                                v30 = mbschr();
                                1 = 1;
                            }
                            if (...)
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if (...)
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if (...)
                            {
                                break;
                            }
                            else if (...)
                            {
                                mbuiter_multi_next.part.0(); /* do not return */
                            }
                            else
                            {
                                *(xmalloc() + None) = 0;
                                mpz_init_set_ui();
                                freev();
                            }
                        }
                        if (True)
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (True)
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (True)
                        {
                            mbuiter_multi_next.part.0(); /* do not return */
                        }
                        else if (False)
                        {
                            *(xmalloc() + None) = 0;
                            mpz_init_set_ui();
                            freev();
                        }
                        mbuiter_multi_next.part.0(); /* do not return */
                        __assert_fail(); /* do not return */
                        __assert_fail(); /* do not return */
                    }
                }
            }
            else
            {
                v61 = (long long)eval6();
                v52 = (long long)eval6();
                tostring();
                tostring();
                v59 = v52->field_8;
                if (v52->field_8->field_0 != 0)
                {
                    v51 = v61->field_8;
                    v30 = __ctype_get_mb_cur_max();
                    if (v30 > 1)
                    {
                        v4 = 0;
                        v56 = 0;
                        v7 = v51;
                        v5 = 0;
                        v6 = 0;
                    }
                    else
                    {
                        v30 = strcspn(((int)v7), ((int)v59));
                    }
                }
            }
            if ((((long long)v37) == 0 || ((long long)v44) != 0) && (((long long)v34) == 0 || ((long long)v44) != 0) && (v30 <= 1 || v52->field_8->field_0 == 0 || ((long long)v44) == 0) && (((long long)v30) != 0 || ((long long)v44) != 0))
            {
                *(xmalloc() + None) = 0;
                mpz_init_set_ui();
                freev();
                freev();
                v39 = v60;
                return v39;
            }
        }
        else
        {
            v60 = (long long)eval6();
            v52 = (long long)eval6();
            if (((long long)v53) == 0)
            {
                freev();
                v39 = v60;
                return v39;
            }
            docolon();
            freev();
            freev();
            v39 = v60;
            return v39;
        }
    }
    require_more_args();
    args = args + 8;
    str_value();
    v39 = v60;
    return v39;
}
