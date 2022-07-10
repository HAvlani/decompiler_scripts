typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

extern unsigned int is_basic_table[4];

int trim2()
{
    BOT tmp_12;  // tmp #12
    BOT tmp_9;  // tmp #9
    BOT tmp_6;  // tmp #6
    char *v0;  // [bp-0x90]
    unsigned long|unsigned long long v1;  // [bp-0x88]
    char v10;  // [bp+0x4]
    char v12;  // [bp+0x100008]
    char v13;  // [bp+0x100009]
    char v15;  // [bp+0x10000c]
    char v16;  // [bp+0x10000d]
    unsigned long|unsigned long long|unsigned int v17;  // rax
    struct_2 *v19;  // rax
    char v2;  // [bp-0x80]
    unsigned long long v21;  // rcx
    struct_3 *|struct_2 *|unsigned long long v22;  // rdx
    struct_2 *|unsigned long long|char * v23;  // rbx
    unsigned long long|struct_2 *|void * v24;  // rbp
    unsigned int v25;  // esi
    char *v26;  // rdi
    unsigned long v27;  // r12
    struct_2 *v28;  // r12
    struct_2 * v29;  // r13
    unsigned long long v3;  // [bp-0x7c]
    unsigned long long v30;  // r15
    char v4;  // [bp-0x74]
    struct_2 * v5;  // [bp-0x70]
    unsigned long|unsigned long long v6;  // [bp-0x68]
    char v7;  // [bp-0x60]
    unsigned int v8;  // [bp-0x5c]
    char v9;  // [bp+0x0]

    v19 = strdup(v26);
    if (v27 != 0)
    {
        v27 = v19;
        v17 = __ctype_get_mb_cur_max();
        if (v17 > 1)
        {
            if (v25 != 0)
            {
                v5 = &stack_base+0;
                v22 = &stack_base+0;
                do
                {
                    tmp_12 = ((long long)v9);
                    v22 = &v10;
                    v17 = ((int)(((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152));
                }
                while ((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152) == 0);
                v2 = 0;
                v4 = 0;
                v3 = 0;
                v17 = ((long long)((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152 & 32896) == 0? ((int)(rax<8> >> 16)) : ((int)rax<8>)));
                v21 = v22 + 2;
                v1 = ...;
                if (...)
                {
                }
                else
                {
                    while (true)
                    {
                        if (v2 == 0)
                        {
                            if (...)
                            {
                                v6 = 1;
                                v17 = ((int)v12);
                                v7 = 1;
                                v24 = v5;
                                v8 = v17;
                                v4 = 1;
                                /* goto 4270841; */
                            }
                            else
                            {
                                v17 = mbsinit(((int)&v3));
                                if (v17 != 0)
                                {
                                    __assert_fail(); /* do not return */
                                    v2 = 1;
                                }
                            }
                        }
                        if (...)
                        {
                            v6 = (long long)rpl_mbrtowc();
                        }
                        if (...)
                        {
                            v24 = v5;
                            if (v6 != 18446744069414584318)
                            {
                                if (v6 == 0)
                                {
                                    if (v24->field_0 != 0)
                                    {
                                        __assert_fail(); /* do not return */
                                    }
                                    else if (v8 != 0)
                                    {
                                        mbiter_multi_next.part.0(); /* do not return */
                                    }
                                }
                                if ((v8 == 0 || v6 != 0) && (v24->field_0 == 0 || v6 != 0))
                                {
                                    v7 = 1;
                                    v17 = mbsinit(((int)&v3));
                                    if (v17 != 0)
                                    {
                                        v2 = 0;
                                    }
                                    v4 = 1;
                                    /* goto 4270841; */
                                }
                            }
                            else
                            {
                                tmp_9 = v1;
                                v7 = 0;
                                v4 = 1;
                                v6 = tmp_9 - v24;
                            }
                            if (v6 == 0)
                            {
                                v6 = 1;
                            }
                        }
                        if (...)
                        {
                            v6 = 1;
                            v7 = 0;
                            v4 = 1;
                        }
                        if (...)
                        {
                            v17 = iswspace(v8);
                            v30 = v1;
                            v24 += v6;
                            v4 = 0;
                            v5 = v24;
                        }
                    }
                }
                memmove(rbp<8>, v24, strlen(v24) + 1);
            }
            if (v25 == 1)
            {
                return &stack_base+0;
            }
            if (v25 == 0 || v25 != 1)
            {
                v5 = rbp<8>;
                v23 = rbp<8>;
                do
                {
                    tmp_12 = ((long long)v12);
                    v23 = &v15;
                    v17 = ((int)(((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152));
                }
                while ((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152) == 0);
                v2 = 0;
                rbp<8> = v28;
                v4 = 0;
                v3 = 0;
                v17 = ((long long)((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152 & 32896) == 0? ((int)(v17 >> 16)) : ((int)v17)));
                v22 = v23 + 2;
                v1 = ...;
                if (...)
                {
                    return &stack_base+0;
                }
                while (true)
                {
                    if (v2 == 0)
                    {
                        if (...)
                        {
                            v6 = 1;
                            v17 = ((int)v24->field_0);
                            v24 = 1;
                            v23 = v1;
                            v29 = v5;
                            v7 = 1;
                            v8 = v17;
                            /* goto 4269950; */
                        }
                        else
                        {
                            v17 = mbsinit(((int)&v3));
                            if (v17 != 0)
                            {
                                v2 = 1;
                                /* goto 4270050; */
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    if (...)
                    {
                        v17 = rpl_mbrtowc();
                        v6 = v17;
                        v24 = v17;
                    }
                    if (...)
                    {
                        v29 = v5;
                        if (v17 != 18446744069414584318)
                        {
                            if (v17 == 0)
                            {
                                if (v29->field_0 != 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                else if (v8 == 0)
                                {
                                    v24 = 1;
                                }
                                else
                                {
                                    mbiter_multi_next.part.0(); /* do not return */
                                }
                            }
                            if ((v8 == 0 || v17 != 0) && (v29->field_0 == 0 || v17 != 0))
                            {
                                v7 = 1;
                                v17 = mbsinit(((int)&v3));
                                v23 = v1;
                                if (v17 != 0)
                                {
                                    v2 = 0;
                                    /* goto 4269950; */
                                }
                            }
                        }
                        else
                        {
                            v23 = v1;
                            v7 = 0;
                            v24 = v23 - v29;
                            v6 = v23 - v29;
                            /* goto 4269950; */
                        }
                        if (v17 == 0)
                        {
                            v6 = 1;
                        }
                    }
                    if (...)
                    {
                        v7 = 0;
                        v23 = v1;
                        v24 = 1;
                        v6 = 1;
                        v29 = v5;
                    }
                    if (...)
                    {
                        v4 = 1;
                        if (v7 != 0)
                        {
                            iswspace(v8);
                            /* goto 4269847; */
                        }
                        if (False)
                        {
                            if (False)
                            {
                                v0 = (iswspace(v8) != 0? v29 : *(&stack_base-144));
                                /* goto 4269847; */
                            }
                            if (False)
                            {
                                iswspace(v8);
                                /* goto 4269847; */
                            }
                        }
                        v24 = rbp<8> + v29;
                        v4 = 0;
                        v5 = v24;
                        return &stack_base+0;
                        if (False)
                        {
                            *(v0) = 0;
                            break;
                        }
                    }
                }
                return &stack_base+0;
            }
        }
        if (v25 != 0)
        {
            v23 = ((long long)v9);
            if (((long long)v9) != 0)
            {
                v17 = *(__ctype_b_loc());
                while (((long long)(*(v17 + (v23 << 1) + 1) & 32)) != 0)
                {
                    v23 = ((long long)v13);
                    v24 += 1;
                    tmp_6 = v23;
                    if (((long long)tmp_6) == 0)
                    {
                        break;
                    }
                }
            }
            memmove(rbp<8>, v24, strlen(v24) + 1);
            if (v25 == 1)
            {
                return &stack_base+0;
            }
        }
        if (v25 == 0 || v25 != 1)
        {
            v22 = rbp<8>;
            do
            {
                tmp_12 = ((long long)v13);
                v22 = &v16;
                v17 = ((int)(((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152));
            }
            while ((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152) == 0);
            v17 = ((long long)((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152 & 32896) == 0? ((int)(v17 >> 16)) : ((int)v17)));
            v21 = v22 + 2;
            v23 = ...;
            if (...)
            {
                return &stack_base+0;
            }
            else
            {
                v22 = *(__ctype_b_loc());
                while (true)
                {
                    if (((long long)(*(v22 + (((long long)*(v23)) << 1) + 1) & 32)) != 0)
                    {
                        *(v23) = 0;
                        v23 -= 1;
                        return &stack_base+0;
                    }
                    else
                    {
                        break;
                    }
                }
                return &stack_base+0;
            }
        }
    }
    xalloc_die(); /* do not return */
}
