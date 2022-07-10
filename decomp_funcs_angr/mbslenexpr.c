extern unsigned int is_basic_table[4];

int mbslen()
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x74]
    char *v10;  // rdx
    char * v11;  // rdi
    unsigned long long v12;  // r12
    char v2;  // [bp-0x6c]
    char * v3;  // [bp-0x68]
    unsigned long|unsigned long long v4;  // [bp-0x60]
    char v5;  // [bp-0x58]
    unsigned int v6;  // [bp-0x54]
    unsigned long long v8;  // rax
    unsigned long long|unsigned int v9;  // rax

    v9 = __ctype_get_mb_cur_max();
    if (v9 <= 1)
    {
        v12 = strlen(v11);
        v8 = v12;
        return v8;
    }
    v3 = v11;
    v12 = 0;
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
                v9 = ((int)*(v10));
                v5 = 1;
                v6 = v9;
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
        if (...)
        {
            if (v4 == 18446744069414584319)
            {
                v4 = 1;
                v5 = 0;
                /* goto 4252294; */
            }
            else if (v4 != 18446744069414584318)
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
                if ((*(v3) == 0 || v4 != 0) && (v6 == 0 || v4 != 0))
                {
                    v5 = 1;
                    v9 = mbsinit(((int)&v1));
                    if (v9 != 0)
                    {
                        v0 = 0;
                    }
                }
            }
            if (v4 == 18446744069414584318)
            {
                v5 = 0;
                v4 = strlen(v3);
                /* goto 4252294; */
            }
            if (v4 == 0)
            {
                v4 = 1;
            }
        }
        if (...)
        {
            break;
        }
        if (...)
        {
            v3 += v4;
            v12 = 1;
            v2 = 0;
        }
    }
    v8 = v12;
    return v8;
}
