typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_412a9b;

int chdir_long()
{
    unsigned int v0;  // [bp-0x44]
    char * v10;  // r14
    unsigned long long v11;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long|unsigned long long|char *|unsigned int v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long|char * v7;  // rdi
    unsigned long long v8;  // r12
    struct_0 *v9;  // r13

    v11 = v7;
    v8 = chdir();
    if (((int)v8) != 0)
    {
        v9 = __errno_location();
        if (v9->field_0 == 36)
        {
            v0 = -100;
            v6 = strlen(v7);
            if (!(v6 != 0))
            {
                __assert_fail(); /* do not return */
            }
            else if (v6 > 4095)
            {
                v5 = strspn(((int)v7), &g_412a9b);
                if (v5 != 2)
                {
                    v10 = v7;
                    if (v5 != 0)
                    {
                        v2 = cdb_advance_fd();
                        if (v2 == 0)
                        {
                            v10 = v7 + v5;
                        }
                    }
                }
                else
                {
                    v5 = memchr(((int)v7) + 3, 0x2f, ((int)v6) - 3);
                    if (v5 == 0)
                    {
                        v8 = -1;
                        v4 = v8;
                        return v4;
                    }
                    *(v5) = 0;
                    v2 = cdb_advance_fd();
                    *(v5) = 47;
                    if (v2 == 0)
                    {
                        v5 += 1;
                        v7 = v5;
                        v10 = v7 + strspn(v7, &g_412a9b);
                    }
                }
                if (*(v10) != 47 && (v5 == 2 || v2 == 0 || v5 == 0) && (v2 == 0 || v5 == 0 || v5 != 2) && (v5 == 0 || v5 != 0 || v5 != 2))
                {
                    v6 += v11;
                    if (!(v10 <= v6))
                    {
                        __assert_fail(); /* do not return */
                    }
                    else
                    {
                        while (true)
                        {
                            v5 = memrchr(((int)r14<8>), 0x2f, 0x1000);
                            if (v5 != 0)
                            {
                                *(v5) = 0;
                                if (v5 - r14<8> <= 4095)
                                {
                                    v2 = cdb_advance_fd();
                                    *(v5) = 47;
                                    v5 += 1;
                                    v7 = v5;
                                    v3 = strspn(v7, &g_412a9b);
                                    v10 = v7 + v3;
                                    v2 = v6 - (v7 + v3);
                                }
                                else
                                {
                                    __assert_fail(); /* do not return */
                                }
                            }
                            else
                            {
                                v9->field_0 = 36;
                                v8 = -1;
                                v4 = v8;
                                return v4;
                            }
                        }
                        if (v5 - r14<8> <= 4095 && v5 != 0)
                        {
                            v5 = ((int)v9->field_0);
                            cdb_free.isra.0();
                            v9->field_0 = v5;
                        }
                    }
                }
                if (*(v10) == 47 && (v5 == 2 || v2 == 0 || v5 == 0) && (v2 == 0 || v5 == 0 || v5 != 2) && (v5 == 0 || v5 != 0 || v5 != 2))
                {
                    __assert_fail(); /* do not return */
                }
                if (v6 - v10 <= 4095 && v10 <= v6 && *(v10) != 47 && (v5 == 2 || v2 == 0 || v5 == 0) && (v2 == 0 || v5 == 0 || v5 != 2) && (v5 == 0 || v5 != 0 || v5 != 2) || v10 <= v6 && v6 > v10 && v6 - v10 > 4095 && *(v10) != 47 && (v5 == 2 || v2 == 0 || v5 == 0) && (v2 == 0 || v5 == 0 || v5 != 2) && (v5 == 0 || v5 != 0 || v5 != 2))
                {
                    if (v6 > v10)
                    {
                        v2 = cdb_advance_fd();
                    }
                }
                if (...)
                {
                    v8 = fchdir(0xffffff9c);
                    if (((int)v8) != 0)
                    {
                    }
                    else
                    {
                        cdb_free.isra.0();
                        v4 = v8;
                        return v4;
                    }
                }
                if (...)
                {
                    v5 = ((int)v9->field_0);
                    cdb_free.isra.0();
                    v9->field_0 = v5;
                    v8 = -1;
                    v4 = v8;
                    return v4;
                }
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        v4 = v8;
        return v4;
    }
    v4 = v8;
    return v4;
}
