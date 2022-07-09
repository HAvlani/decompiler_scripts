typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

extern unsigned long long frp;
extern unsigned int g_408a70;
extern unsigned int g_408a90;
extern unsigned int g_408ae8;
extern unsigned int g_408b10;
extern unsigned int g_408b38;
extern unsigned int g_408b61;
extern unsigned int g_408b75;
extern unsigned int g_408ba9;
extern unsigned int g_408bb4;
extern unsigned int g_408bd1;
extern unsigned long long n_frp;
extern unsigned long long n_frp_allocated;
extern struct_0 num_start.7180;

int set_fields()
{
    unsigned long|unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v12[2];  // rax
    struct_1 *v13;  // rcx
    unsigned long|unsigned long long v14;  // rdx
    unsigned long long v15;  // rdx
    char * v16;  // rdx
    char * v17;  // rdx
    unsigned long long v19;  // rbx
    unsigned int v2;  // [bp-0x40]
    struct_0 *|unsigned long long v20;  // rbx
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rbp
    unsigned long v23;  // rsi
    struct_1 *|unsigned long long v24;  // rdi
    char v25[2];  // rdi
    unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    unsigned long long v28;  // r13
    char [2] v29;  // r14
    unsigned int v3;  // [bp-0x3c]
    unsigned long long [3] v30;  // r15
    unsigned long|unsigned long long v31;  // r15
    struct_0 *|unsigned long long|unsigned int v5;  // rax
    unsigned long long v6;  // rax

    v29 = v25;
    v3 = ((int)v23);
    v2 = ((int)v23) & 1;
    if ((((char)((int)v23)) & 1) != 0)
    {
        if (v25[0] == 45)
        {
            if (v25[1] == 0)
            {
                v29 = v25 + 1;
                v24 = 1;
                v14 = 1;
                /* goto 4209073; */
            }
        }
    }
    if ((((char)((int)v23)) & 1) == 0 || v25[1] != 0 || v25[0] != 45)
    {
        v24 = 0;
        v14 = 0;
    }
    v21 = v14;
    v31 = 0;
    v19 = 1;
    while (true)
    {
        v28 = ((long long)*(r14<8>));
        if (*(r14<8>) != 45)
        {
            if (v28 != 44)
            {
                v1 = rdi<8>;
                v0 = dl<1>;
                v5 = __ctype_b_loc();
                v14 = ((long long)v0);
                v24 = v1;
                if (((long long)(*(v5->field_0 + (((long long)v28) << 1)) & 1)) == 0 && ((long long)v28) != 0)
                {
                    v5 = ((int)v28);
                    if (((int)(((long long)v28) - 48)) <= 9)
                    {
                        if (((long long)0) == 0 || num_start.7180 == 0)
                        {
                            num_start.7180 = r14<8>;
                        }
                        v14 = ((long long)(((long long)v21) == 0? 1 : ((int)v0)));
                        v31 = ((long long)(((long long)v21) != 0? ((int)v21) : ((int)0)));
                        if (v1 <= 1844674407370955161)
                        {
                            v5 = ((long long)v5) - 48 + v24 * 10;
                            if (v5 != 18446744069414584319 && v5 >= v24)
                            {
                                /* goto 4209228; */
                            }
                        }
                        if (v5 == 18446744069414584319 || v5 < v24 || v1 > 1844674407370955161)
                        {
                            strspn(((int)num_start.7180), &g_408ba9);
                            v22 = (long long)ximemdup0();
                            v26 = (long long)quote();
                            if (((long long)(((char)v3) & 4)) != 0)
                            {
                                v17 = dcgettext(0x0, &g_408ae8, 0x5);
                                error(0x0, 0x0, v17);
                                rpl_free();
                                usage(); /* do not return */
                            }
                            v17 = dcgettext(0x0, &g_408bb4, 0x5);
                            error(0x0, 0x0, v17);
                            rpl_free();
                            usage(); /* do not return */
                        }
                    }
                    v27 = (long long)quote();
                    if (((long long)(((char)v3) & 4)) != 0)
                    {
                        v16 = dcgettext(0x0, &g_408b10, 0x5);
                        error(0x0, 0x0, v16);
                        usage(); /* do not return */
                    }
                    else
                    {
                        v16 = dcgettext(0x0, &g_408bd1, 0x5);
                        error(0x0, 0x0, v16);
                        usage(); /* do not return */
                    }
                }
            }
            if (v28 == 44 || ((long long)v28) == 0 || ((long long)(*(v5->field_0 + (((long long)v28) << 1)) & 1)) != 0)
            {
                if (((long long)v21) != 0)
                {
                    if (((long long)v31) == 0 && ((long long)dl<1>) == 0)
                    {
                        if (v2 != 0)
                        {
                            v19 = 1;
                            /* goto 4209195; */
                        }
                        else
                        {
                            v23 = "invalid range with no endpoint: -";
                            dcgettext(0x0, v23, 0x5);
                            error(0x0, 0x0, 0x5);
                            usage(); /* do not return */
                        }
                    }
                    if (((long long)v31) != 0)
                    {
                        if (v19 <= v24)
                        {
                            add_range_pair();
                        }
                        else
                        {
                            v23 = "invalid decreasing range";
                            dcgettext(0x0, v23, 0x5);
                            error(0x0, 0x0, 0x5);
                            usage(); /* do not return */
                        }
                    }
                    if (((long long)v31) == 0 && (v2 != 0 || ((long long)dl<1>) != 0))
                    {
                        add_range_pair();
                    }
                }
                else if (v24 != 0)
                {
                    add_range_pair();
                }
                else if (((long long)(((char)v3) & 4)) == 0)
                {
                    dcgettext(0x0, &g_408b75, 0x5);
                    error(0x0, 0x0, 0x5);
                    usage(); /* do not return */
                }
                else
                {
                    dcgettext(v24, &g_408a90, 0x5);
                    error(0x0, 0x0, 0x5);
                    usage(); /* do not return */
                }
            }
        }
        else if (((long long)v21) == 0)
        {
            if (((long long)(((char)(rdi<8> == 0)) & dl<1>)) == 0)
            {
                if (((long long)dl<1>) != 0)
                {
                    v19 = rdi<8>;
                    /* goto 4209228; */
                }
                else
                {
                    v19 = 1;
                    /* goto 4209228; */
                }
            }
            else
            {
                if (((long long)(((char)v3) & 4)) != 0)
                {
                    dcgettext(0x0, &g_408a90, 0x5);
                    error(0x0, 0x0, 0x5);
                    usage(); /* do not return */
                }
                dcgettext(0x0, &g_408b75, 0x5);
                error(0x0, 0x0, 0x5);
                usage(); /* do not return */
            }
            dcgettext(0x0, &g_408b61, 0x5);
            error(0x0, 0x0, 0x5);
            usage(); /* do not return */
        }
        else
        {
            if (((long long)(((char)v3) & 4)) != 0)
            {
                dcgettext(0x0, &g_408a70, 0x5);
                error(0x0, 0x0, 0x5);
                usage(); /* do not return */
            }
        }
        if (...)
        {
            v31 = 0;
            v14 = 0;
            /* goto 4209228; */
        }
        if (...)
        {
            if (n_frp != 0)
            {
                v20 = 0;
                qsort(((int)frp));
                v15 = n_frp;
                v30 = frp;
                if (n_frp != 0)
                {
                    while (true)
                    {
                        v20 += 1;
                        if (v20 >= v15)
                        {
                            break;
                        }
                        v21 = v20 * 16;
                        v28 = v20 * 16 - 16;
                        while (true)
                        {
                            v13 = v30 + v28;
                            v24 = v30 + v21;
                            v5 = v30 + v28[1];
                            if (*(v30 + v21) <= v30 + v28[1])
                            {
                                v13->field_8 = (v5 <= v24->field_8? v24->field_8 : v5);
                                memmove(v24, v30 + 1 * 16 + 16, (v15 + 18446744069414584318) * 16);
                                v30 = frp;
                                v15 = n_frp - 1;
                                n_frp = n_frp - 1;
                            }
                            else
                            {
                                v15 = n_frp;
                                break;
                            }
                        }
                    }
                }
                frp = 0;
                v6 = v30[0];
                n_frp = 0;
                n_frp_allocated = 0;
                if (v6 > 1)
                {
                    v0 = v15;
                    add_range_pair();
                }
                v20 = v30 + 16;
                v21 = v15 * 16 + v30;
                if (v15 <= 1)
                {
                    break;
                }
                do
                {
                    if (*(v20 + 0x8) + 1 != v20->field_0)
                    {
                        v0 = v15;
                        add_range_pair();
                    }
                    v20 += 16;
                }
                while (v21 != v20);
                n_frp = n_frp + 1;
                frp = (long long)xrealloc();
                v12 = frp + n_frp * 16 - 16;
                v12[1] = 18446744069414584319;
                v12[0] = 18446744069414584319;
                return v12;
            }
            else if (((long long)(((char)v3) & 4)) != 0)
            {
                dcgettext(0x0, &g_408b38, 0x5);
                error(0x0, 0x0, 0x5);
                usage(); /* do not return */
            }
            else
            {
                v23 = "missing list of fields";
                dcgettext(0x0, v23, 0x5);
                error(0x0, 0x0, 0x5);
                usage(); /* do not return */
            }
        }
        if (...)
        {
            v29 = r14<8> + 1;
        }
    }
    v15 *= 16;
    if (v30 + v15[1] == 18446744069414584319)
    {
        rpl_free();
        n_frp = n_frp + 1;
        frp = (long long)xrealloc();
        v12 = frp + n_frp * 16 - 16;
        v12[1] = 18446744069414584319;
        v12[0] = 18446744069414584319;
        return v12;
    }
    add_range_pair();
    rpl_free();
    n_frp = n_frp + 1;
    frp = (long long)xrealloc();
    v12 = frp + n_frp * 16 - 16;
    v12[1] = 18446744069414584319;
    v12[0] = 18446744069414584319;
    return v12;
}
