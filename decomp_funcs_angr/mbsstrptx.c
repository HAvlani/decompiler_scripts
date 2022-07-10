typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern unsigned int is_basic_table[4];

int mbsstr()
{
    BOT tmp_57;  // tmp #57
    BOT tmp_69;  // tmp #69
    BOT tmp_7;  // tmp #7
    BOT tmp_98;  // tmp #98
    BOT tmp_107;  // tmp #107
    BOT tmp_119;  // tmp #119
    unsigned long|char *|char [2]|char [3] v0;  // [bp-0x1c8]
    unsigned long|unsigned long long v1;  // [bp-0x1c0]
    char *v10;  // [bp-0x178]
    unsigned long|unsigned long long v11;  // [bp-0x170]
    char v12;  // [bp-0x168]
    unsigned int v13;  // [bp-0x164]
    char v14;  // [bp-0x148]
    unsigned long long v15;  // [bp-0x144]
    char v16;  // [bp-0x13c]
    unsigned long long v17;  // [bp-0x138]
    unsigned long|unsigned long long v18;  // [bp-0x130]
    char v19;  // [bp-0x128]
    unsigned long v2;  // [bp-0x1b8]
    unsigned int v20;  // [bp-0x124]
    char v21;  // [bp-0x108]
    unsigned long|unsigned long long v22;  // [bp-0x104]
    char v23;  // [bp-0xfc]
    unsigned long|unsigned long long v24;  // [bp-0xf8]
    unsigned long|unsigned long long|unsigned int v25;  // [bp-0xf0]
    char v26;  // [bp-0xe8]
    unsigned int v27;  // [bp-0xe4]
    uint128_t v28;  // [bp-0xd8]
    uint128_t|char v29;  // [bp-0xc8]
    unsigned long v3;  // [bp-0x1b0]
    char v30;  // [bp-0xbc]
    unsigned long|BOT|char * v31;  // [bp-0xb8]
    unsigned long|unsigned long long v32;  // [bp-0xb0]
    BOT|uint128_t|char v33;  // [bp-0xa8]
    unsigned int v34;  // [bp-0xa4]
    BOT v35;  // [bp-0x98]
    char v36;  // [bp-0x88]
    unsigned long long v37;  // [bp-0x84]
    char v38;  // [bp-0x7c]
    char * v39;  // [bp-0x78]
    unsigned long long|char v4;  // [bp-0x1a8]
    unsigned long|unsigned long long v40;  // [bp-0x70]
    char v41;  // [bp-0x68]
    unsigned int v42;  // [bp-0x64]
    char *|char|unsigned long long|char [2]|unsigned int v44;  // rax
    unsigned long long v48;  // rcx
    char *|unsigned long long|unsigned int v49;  // rdx
    unsigned long long v5;  // [bp-0x1a0]
    unsigned long long v50;  // rbx
    unsigned long long v51;  // rbp
    char *|unsigned long long v52;  // rsi
    unsigned long long|struct_0 * v53;  // rdi
    unsigned long long v54;  // r9
    unsigned long long v55;  // r10
    unsigned long long v56;  // r12
    unsigned long|unsigned long long v57;  // r13
    unsigned long long v58;  // r15
    uint128_t v59;  // xmm0
    unsigned long long v6;  // [bp-0x190]
    uint128_t v60;  // xmm1
    uint128_t v61;  // xmm2
    uint128_t v62;  // xmm3
    char v7;  // [bp-0x188]
    unsigned long long v8;  // [bp-0x184]
    char v9;  // [bp-0x17c]

    v51 = v53;
    if (__ctype_get_mb_cur_max() <= 1)
    {
        v56 = ((long long)*(v53));
        v44 = v53;
        if (((long long)*(v53)) != 0)
        {
            v49 = ((long long)*(v51));
            if (((long long)*(v51)) != 0)
            {
                v53 = v52;
                v57 = 0;
                v48 = 0;
                v1 = &stack_base-400;
                v54 = 0;
                v44 = 1;
                while (true)
                {
                    v57 += 1;
                    v50 = v48 + 1;
                    v58 = v51 + 1;
                    if (v56 == v49)
                    {
                        v49 = ((long long)*(v53 + 1));
                        if (((long long)*(v53 + 1)) != 0)
                        {
                            v44 = v51;
                            return v44;
                            v52 = v51 - v48;
                            v55 = v53 - v48;
                            while (true)
                            {
                                v48 = ((long long)*(v52 + v50));
                                if (((long long)*(v52 + v50)) != 0)
                                {
                                    v44 = 0;
                                    return v44;
                                    v50 += 1;
                                    v49 = ((long long)*(v55 + v50));
                                    v44 = v51;
                                    return v44;
                                }
                            }
                        }
                    }
                    if (*(v51) != 0 && (((long long)*(v53 + 1)) != 0 || v56 != v49))
                    {
                        v44 = 0;
                        return v44;
                        v51 = v49;
                        if (((long long)(((char)!(r13<8> <= 9)) & v44)) != 0)
                        {
                            if (v50 >= v57 + (v57 << 2))
                            {
                                if (v53 != 0)
                                {
                                    v0 = v53;
                                    v44 = strnlen(v53, v50 - v54);
                                    v54 = v50;
                                    v53 = v0 + v44;
                                }
                                if (v53 == 0 || *(v0 + v44) == 0)
                                {
                                    v0 = r9<8>;
                                    strlen(v53);
                                    v44 = knuth_morris_pratt();
                                    if (((long long)v44) == 0)
                                    {
                                        v53 = 0;
                                        /* goto 4305424; */
                                    }
                                    else
                                    {
                                        v44 = v6;
                                        return v44;
                                    }
                                }
                            }
                            if ((v50 < v57 + (v57 << 2) || v53 != 0) && (v50 < v57 + (v57 << 2) || *(v0 + v44) != 0))
                            {
                                v44 = v51;
                            }
                        }
                        if (((long long)v44) == 0 || ((long long)(((char)!(r13<8> <= 9)) & v44)) == 0 || v50 < v57 + (v57 << 2) || v53 != 0 && *(v0 + v44) != 0)
                        {
                            v49 = ((long long)*(v44));
                            v51 = v58;
                            v48 = v50;
                        }
                    }
                }
            }
            else
            {
                v44 = 0;
                return v44;
            }
        }
        else
        {
            return v44;
        }
    }
    else
    {
        v48 = ((long long)*(v53));
        v10 = v53;
        v7 = 0;
        v44 = v48;
        v9 = 0;
        v8 = 0;
        v44 = ((char)v48) % 32;
        tmp_57 = rax<8>;
        tmp_69 = v48;
        if (...)
        {
            v11 = 1;
            v13 = ((int)v48);
            v12 = 1;
            v9 = 1;
        }
        else
        {
            v44 = mbsinit(((int)&v8));
            if (v44 != 0)
            {
                v7 = 1;
                __ctype_get_mb_cur_max();
                strnlen1();
                v11 = (long long)rpl_mbrtowc();
                if (v11 == 18446744069414584319)
                {
                    v11 = 1;
                    v12 = 0;
                    v9 = 1;
                    /* goto 4305732; */
                }
                else if (v11 != 18446744069414584318)
                {
                    if (v11 == 0)
                    {
                        if (!(*(v10) == 0))
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (v13 != 0)
                        {
                            mbuiter_multi_next.part.0(); /* do not return */
                        }
                    }
                    if ((v13 == 0 || v11 != 0) && (*(v10) == 0 || v11 != 0))
                    {
                        v12 = 1;
                        v44 = mbsinit(((int)&v8));
                        if (v44 != 0)
                        {
                            v7 = 0;
                        }
                        v9 = 1;
                    }
                }
                if (v11 == 18446744069414584318)
                {
                    v12 = 0;
                    v11 = strlen(v10);
                    v9 = 1;
                    /* goto 4305732; */
                }
                if (v11 == 0)
                {
                    v11 = 1;
                }
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        if (...)
        {
            if (...)
            {
                v44 = v51;
                return v44;
            }
            if (...)
            {
                v50 = 0;
                v17 = v53;
                v2 = &stack_base-100;
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v24 = v53;
                v21 = 0;
                v22 = 0;
                v23 = 0;
                v1 = 0;
                v5 = 0;
                v4 = 1;
                v3 = &stack_base-164;
                while (true)
                {
                    if (v21 == 0)
                    {
                        v49 = v24;
                        if (...)
                        {
                            v25 = 1;
                            v44 = ((int)*(v49));
                            v26 = 1;
                            v27 = v44;
                            v23 = 1;
                        }
                        else
                        {
                            v44 = mbsinit(((int)&v22));
                            if (v44 != 0)
                            {
                                __assert_fail(); /* do not return */
                                v21 = 1;
                            }
                        }
                    }
                    if (...)
                    {
                        __ctype_get_mb_cur_max();
                        v0 = v24;
                        strnlen1();
                        v25 = (long long)rpl_mbrtowc();
                    }
                    if (...)
                    {
                        if (((unsigned int)v25) != 18446744069414584318)
                        {
                            if (((unsigned int)v25) == 0)
                            {
                                if (*(v44) != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                else if (v27 != 0)
                                {
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                            if ((*(v44) == 0 || ((unsigned int)v25) != 0) && (v27 == 0 || ((unsigned int)v25) != 0))
                            {
                                v26 = 1;
                                v44 = mbsinit(((int)&v22));
                                if (v44 != 0)
                                {
                                    v21 = 0;
                                }
                                v23 = 1;
                            }
                        }
                        else
                        {
                            v26 = 0;
                            v25 = strlen(v24);
                            v23 = 1;
                            /* goto 4307196; */
                        }
                        if (((unsigned int)v25) == 0)
                        {
                            v44 = v24;
                            v25 = 1;
                        }
                    }
                    if (...)
                    {
                        if (((unsigned int)v25) == 18446744069414584319)
                        {
                            v25 = 1;
                            v26 = 0;
                            v23 = 1;
                        }
                        if (((unsigned int)v25) == 18446744069414584319 || ((unsigned int)v25) == 18446744069414584318)
                        {
                            v44 = ((char)!(*(&stack_base-448) <= 9)) & v4;
                            if (((long long)(((char)!(*(&stack_base-448) <= 9)) & v4)) == 0)
                            {
                                v50 = v5 + 1;
                            }
                            else if (v5 < v1 + (v1 << 2))
                            {
                                v4 = v44;
                                v50 = v5 + 1;
                            }
                        }
                    }
                    if (...)
                    {
                        v44 = ((char)!(*(&stack_base-448) <= 9)) & v4;
                        v44 = 0;
                        return v44;
                        if (((long long)(((char)!(*(&stack_base-448) <= 9)) & v4)) != 0)
                        {
                            v53 = v1;
                            if (v5 < v1 + (v1 << 2))
                            {
                                v4 = v44;
                                v50 = v5 + 1;
                            }
                        }
                        else
                        {
                            v50 = v5 + 1;
                        }
                    }
                    if (...)
                    {
                        v53 = v5 - v5;
                        v44 = ((long long)v16);
                        v0 = v5 - v5;
                    }
                    v17 += v18;
                    tmp_7 = v0;
                    v0 -= 1;
                    v16 = 0;
                    if (...)
                    {
                        v49 = v17;
                        if (...)
                        {
                            v18 = 1;
                            v44 = ((int)*(v49));
                            v19 = 1;
                            v20 = v44;
                            v16 = 1;
                        }
                        else
                        {
                            v44 = mbsinit(((int)&v15));
                            if (v44 != 0)
                            {
                                v14 = 1;
                                /* goto 4307944; */
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    if (...)
                    {
                        __ctype_get_mb_cur_max();
                        v4 = v17;
                        strnlen1();
                        v18 = (long long)rpl_mbrtowc();
                        if (v18 == 18446744069414584319)
                        {
                            v18 = 1;
                            v19 = 0;
                            /* goto 0x41bb00; */
                        }
                        else if (v18 != 18446744069414584318)
                        {
                            if (v18 == 0)
                            {
                                if (*(v44) != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                else if (v20 != 0)
                                {
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                        }
                        if (v18 == 18446744069414584318)
                        {
                            v19 = 0;
                            v18 = strlen(v17);
                            /* goto 0x41bb00; */
                        }
                        if (v18 == 0)
                        {
                            v44 = v17;
                            v18 = 1;
                        }
                    }
                    if (...)
                    {
                        v19 = 1;
                        v44 = mbsinit(((int)&v15));
                        if (v44 != 0)
                        {
                            v14 = 0;
                        }
                        v16 = 1;
                    }
                    if (...)
                    {
                        v49 = v17;
                        if (...)
                        {
                            v18 = 1;
                            v44 = ((int)*(v49));
                            v19 = 1;
                            v20 = v44;
                            v16 = 1;
                        }
                        else
                        {
                            v44 = mbsinit(((int)&v15));
                            if (v44 != 0)
                            {
                                v14 = 1;
                                /* goto 4308601; */
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    if (...)
                    {
                        __ctype_get_mb_cur_max();
                        v0 = v17;
                        strnlen1();
                        v18 = (long long)rpl_mbrtowc();
                        if (v18 == 18446744069414584319)
                        {
                            v18 = 1;
                            v19 = 0;
                            v16 = 1;
                            /* goto 4308342; */
                        }
                        else if (v18 != 18446744069414584318)
                        {
                            if (v18 == 0)
                            {
                                if (*(v44) != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                else if (v20 != 0)
                                {
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                        }
                        if (v18 == 18446744069414584318)
                        {
                            v19 = 0;
                            v18 = strlen(v17);
                            v16 = 1;
                            /* goto 4308342; */
                        }
                        if (v18 == 0)
                        {
                            v44 = v17;
                            v18 = 1;
                        }
                    }
                    if (...)
                    {
                        v19 = 1;
                        v44 = mbsinit(((int)&v15));
                        if (v44 != 0)
                        {
                            v14 = 0;
                        }
                        v16 = 1;
                    }
                    if (...)
                    {
                        v4 = 1;
                        v49 = ((long long)v26);
                        /* goto 4308355; */
                    }
                    if (...)
                    {
                        v4 = (char)knuth_morris_pratt_multibyte();
                        if (((long long)v4) == 0)
                        {
                            v49 = ((long long)v26);
                        }
                        else
                        {
                            v44 = v6;
                            return v44;
                        }
                    }
                    if (...)
                    {
                        v5 = v50;
                        v50 = v5 + 1;
                    }
                    if (...)
                    {
                        v44 = memcmp(v24, v10, ((unsigned int)v25));
                    }
                    if (...)
                    {
                        v48 = ((long long)*(v53));
                        v37 = 0;
                        v60 = *((int128_t *)(((char *)&v25) + -8));
                        v59 = *((int128_t *)(((char *)&v22) + -4));
                        v39 = v53;
                        v61 = v26;
                        v36 = 0;
                        v31 = v60;
                        v62 = v28;
                        v31 = ((long long)v31) + ((long long)*((long long *)(((char *)&v31) + 8)));
                        v44 = v48;
                        v44 = ((char)v48) % 32;
                        v29 = v59;
                        tmp_98 = rax<8>;
                        v30 = 0;
                        tmp_107 = ((long long)is_basic_table[((long long)(((int)tmp_98) & 7))]);
                        v38 = 0;
                        v33 = v61;
                        tmp_119 = v48;
                        v35 = v62;
                        if (((long long)(((char)(tmp_107 >> (tmp_119 & 31))) & 1)) != 0)
                        {
                            v40 = 1;
                            v42 = ((int)v48);
                            v41 = 1;
                            v38 = 1;
                        }
                        else
                        {
                            v44 = mbsinit(((int)&v37));
                            if (v44 != 0)
                            {
                                __assert_fail(); /* do not return */
                                v36 = 1;
                                __ctype_get_mb_cur_max();
                                strnlen1();
                                v40 = (long long)rpl_mbrtowc();
                                if (v40 == 18446744069414584319)
                                {
                                    v40 = 1;
                                    v41 = 0;
                                    /* goto 4306254; */
                                }
                                else if (v40 != 18446744069414584318)
                                {
                                    if (v40 == 0)
                                    {
                                        if (*(v44) != 0)
                                        {
                                            __assert_fail(); /* do not return */
                                        }
                                        else if (v42 != 0)
                                        {
                                            mbuiter_multi_next.part.0(); /* do not return */
                                        }
                                    }
                                }
                                if (v40 == 18446744069414584318)
                                {
                                    v41 = 0;
                                    v40 = strlen(v39);
                                    /* goto 4306254; */
                                }
                                if (v40 == 0)
                                {
                                    v44 = v39;
                                    v40 = 1;
                                }
                            }
                        }
                    }
                    if (...)
                    {
                        v41 = 1;
                        v44 = mbsinit(((int)&v37));
                        if (v44 != 0)
                        {
                            v36 = 0;
                        }
                        v38 = 1;
                    }
                    if (...)
                    {
                        v44 = v40;
                        v38 = 0;
                        v50 = rbx<8> + 1;
                        v39 += v44;
                        while (true)
                        {
                            if (v36 == 0)
                            {
                                v49 = v39;
                                if (...)
                                {
                                    v40 = 1;
                                    v44 = ((int)*(v49));
                                    v41 = 1;
                                    v42 = v44;
                                    v49 = ((int)v42);
                                    v38 = 1;
                                    if (v49 == 0)
                                    {
                                        v44 = v24;
                                        return v44;
                                    }
                                }
                                v44 = mbsinit(((int)&v37));
                                if (v44 != 0)
                                {
                                    v36 = 1;
                                    /* goto 4306597; */
                                    __assert_fail(); /* do not return */
                                }
                            }
                            if (...)
                            {
                                __ctype_get_mb_cur_max();
                                strnlen1();
                                v40 = (long long)rpl_mbrtowc();
                            }
                            if (...)
                            {
                                if (v40 != 18446744069414584318)
                                {
                                    if (v40 == 0)
                                    {
                                        if (*(v44) != 0)
                                        {
                                            __assert_fail(); /* do not return */
                                        }
                                        else if (v42 != 0)
                                        {
                                            mbuiter_multi_next.part.0(); /* do not return */
                                        }
                                    }
                                    if (v40 != 0 || v42 == 0 && *(v44) == 0)
                                    {
                                        v41 = 1;
                                        v44 = mbsinit(((int)&v37));
                                        if (v44 != 0)
                                        {
                                            v36 = 0;
                                        }
                                        v49 = ((int)v42);
                                        v38 = 1;
                                        if (v49 == 0)
                                        {
                                            v44 = v24;
                                            return v44;
                                        }
                                    }
                                }
                                v41 = 0;
                                v40 = strlen(v39);
                                v38 = 1;
                                if (v40 == 0)
                                {
                                    v44 = v39;
                                    v40 = 1;
                                }
                            }
                            if (...)
                            {
                                v40 = 1;
                                v41 = 0;
                                v38 = 1;
                            }
                            if (...)
                            {
                                if (v30 == 0)
                                {
                                    if (((char)v29) == 0)
                                    {
                                        v49 = v31;
                                        if (...)
                                        {
                                            v32 = 1;
                                            v44 = ((int)*(v49));
                                            v33 = 1;
                                            v34 = v44;
                                            v30 = 1;
                                        }
                                        else
                                        {
                                            v44 = mbsinit(((int)&v29));
                                            if (v44 != 0)
                                            {
                                                v29 = 1;
                                                /* goto 4306904; */
                                                __assert_fail(); /* do not return */
                                            }
                                        }
                                    }
                                    if (...)
                                    {
                                        __ctype_get_mb_cur_max();
                                        v0 = v31;
                                        strnlen1();
                                        v32 = (long long)rpl_mbrtowc();
                                        if (v32 == 18446744069414584319)
                                        {
                                            v32 = 1;
                                            v33 = 0;
                                            v30 = 1;
                                        }
                                        else if (v32 != 18446744069414584318)
                                        {
                                            if (*(v44) == 0 && v32 == 0 && ((int)*((int *)(((char *)&v33) + 4))) != 0)
                                            {
                                                mbuiter_multi_next.part.0(); /* do not return */
                                            }
                                            if (v32 == 0 && *(v44) != 0)
                                            {
                                                __assert_fail(); /* do not return */
                                            }
                                        }
                                        if (v32 == 18446744069414584318)
                                        {
                                            v33 = 0;
                                            v32 = strlen(v31);
                                            v30 = 1;
                                        }
                                        if (v32 == 0)
                                        {
                                            v44 = v31;
                                            v32 = 1;
                                        }
                                    }
                                }
                                if (...)
                                {
                                    v33 = 1;
                                    v44 = mbsinit(((int)&v29));
                                    if (v44 != 0)
                                    {
                                        v29 = 0;
                                    }
                                    v30 = 1;
                                }
                                if (...)
                                {
                                    v44 = 0;
                                    return v44;
                                    if (v41 != 0)
                                    {
                                        v44 = ((char)(v42 != ((int)*((int *)(((char *)&v33) + 4)))));
                                        /* goto 4306520; */
                                    }
                                }
                                if (...)
                                {
                                    v44 = ((char)(memcmp(v31, v39, v32) != 0));
                                }
                                if (...)
                                {
                                    v49 = v50 + 1;
                                    v31 = ((long long)v31) + ((long long)*((long long *)(((char *)&v31) + 8)));
                                    v50 = v49;
                                    v39 += v40;
                                    v30 = 0;
                                    v38 = 0;
                                }
                            }
                        }
                    }
                    if (...)
                    {
                        v24 += v57;
                        v1 += 1;
                        v23 = 0;
                    }
                }
            }
        }
    }
}
