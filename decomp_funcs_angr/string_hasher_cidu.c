extern unsigned int is_basic_table[4];

int string_hasher_ci()
{
    char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x84]
    char *v10;  // rdx
    char *v11;  // rbx
    unsigned long v12;  // rsi
    char *v13;  // rdi
    unsigned long long v14;  // r13
    unsigned int|unsigned long long v15;  // r15
    char v2;  // [bp-0x7c]
    char * v3;  // [bp-0x78]
    unsigned long|unsigned long long v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x64]
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx

    v14 = 0;
    v3 = v13;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    while (true)
    {
        if (v0 == 0)
        {
            v10 = v3;
            if (...)
            {
                v4 = 1;
                v15 = ((int)*(v10));
                v5 = 1;
                v6 = v15;
                v2 = 1;
                if (v15 == 0)
                {
                    v9 = ((long long)((0 CONCAT v14) % v12 >> 64));
                    return v9;
                }
            }
            v8 = mbsinit(((int)&v1));
            if (v8 != 0)
            {
                v0 = 1;
            }
            else
            {
                __assert_fail(); /* do not return */
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
            if (v4 == 18446744069414584319)
            {
                v4 = 1;
                v15 = ((long long)v6);
                v5 = 0;
                v2 = 1;
            }
            else if (v4 != 18446744069414584318)
            {
                if (v4 != 0)
                {
                    v15 = ((long long)v6);
                }
                else if (*(v3) == 0)
                {
                    v15 = ((long long)v6);
                    if (v6 != 0)
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
                if (v4 != 0 || v6 == 0 && *(v3) == 0)
                {
                    v5 = 1;
                    v8 = mbsinit(((int)&v1));
                    if (v8 != 0)
                    {
                        v0 = 0;
                    }
                    v2 = 1;
                    if (((int)v15) == 0)
                    {
                        v9 = ((long long)((0 CONCAT v14) % v12 >> 64));
                        return v9;
                    }
                }
            }
            if (v4 == 18446744069414584318)
            {
                v5 = 0;
                v15 = ((long long)v6);
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
            if (v5 != 0)
            {
                v8 = towlower(reg_136<4>);
            }
            else
            {
                v8 = ((long long)*(v3));
            }
            v11 = v3 + v4;
            v2 = 0;
            v3 = v11;
            v14 = v14 * 31 + ((long long)rax<8>);
        }
    }
}
