typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int is_basic_table[4];

int mbschr()
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x74]
    char *v10;  // rax
    unsigned long long|unsigned int v11;  // rdx
    unsigned long long v12;  // rbx
    char v13;  // sil
    char *v14;  // rdi
    struct_0 *v15;  // fs
    char v2;  // [bp-0x6c]
    unsigned long long v3;  // [bp-0x68]
    unsigned long|unsigned long long v4;  // [bp-0x60]
    char v5;  // [bp-0x58]
    unsigned int v6;  // [bp-0x54]
    unsigned long v7;  // [bp-0x30]
    unsigned long long|unsigned int v9;  // rax

    v7 = *(v15 + 0x28);
    v9 = __ctype_get_mb_cur_max();
    if (v9 > 1)
    {
        if (!(((long long)v13) <= 47))
        {
            v3 = v14;
            v0 = 0;
            v1 = 0;
            v2 = 0;
            while (true)
            {
                if (v0 == 0)
                {
                    v9 = v3;
                    if (...)
                    {
                        v4 = 1;
                        v11 = ((int)*(v9));
                        v5 = 1;
                        v6 = v11;
                        v2 = 1;
                        if (v6 != 0)
                        {
                            v11 = 1;
                            v12 = v3;
                        }
                    }
                    else
                    {
                        v9 = mbsinit(((int)&v1));
                        if (v9 != 0)
                        {
                            v0 = 1;
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
                    v4 = (long long)rpl_mbrtowc();
                }
                if (v4 != 18446744069414584319)
                {
                    if (...)
                    {
                        if (v9 != 0 || v0 != 0)
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
                                        __assert_fail(); /* do not return */
                                    }
                                }
                                if (v4 != 0 || v6 == 0 && *(v3) == 0)
                                {
                                    v5 = 1;
                                    v9 = mbsinit(((int)&v1));
                                    if (v9 != 0)
                                    {
                                        v0 = 0;
                                    }
                                    v9 = ((int)v6);
                                    v2 = 1;
                                    if (v9 != 0)
                                    {
                                        v12 = v3;
                                        /* goto 4251813; */
                                    }
                                }
                            }
                            else
                            {
                                v12 = v3;
                                v5 = 0;
                                v4 = strlen(v3);
                                v2 = 1;
                                /* goto 4251813; */
                            }
                            if (v4 == 0)
                            {
                                v4 = 1;
                            }
                        }
                    }
                }
                else
                {
                    if (...)
                    {
                        if (v9 != 0 || v0 != 0)
                        {
                            v12 = v3;
                            v5 = 0;
                            v11 = 1;
                            v4 = 1;
                            v2 = 1;
                            if (*(v12) == v13)
                            {
                                if ((v7 ^ *(v15 + 0x28)) == 0)
                                {
                                    v10 = v12;
                                    return v10;
                                }
                                __stack_chk_fail(); /* do not return */
                            }
                        }
                    }
                }
                if (...)
                {
                    v12 = 0;
                    if ((v7 ^ *(v15 + 0x28)) == 0)
                    {
                        v10 = v12;
                        return v10;
                    }
                    __stack_chk_fail(); /* do not return */
                }
                if (...)
                {
                    v11 = v4;
                }
                if (...)
                {
                    if ((v7 ^ *(v15 + 0x28)) == 0)
                    {
                        v10 = v12;
                        return v10;
                    }
                    else
                    {
                        __stack_chk_fail(); /* do not return */
                    }
                }
                if (...)
                {
                    v2 = 0;
                    v3 = rbx<8> + rdx<8>;
                }
            }
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
    else
    {
        if ((v7 ^ *(v15 + 0x28)) == 0)
        {
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
}
