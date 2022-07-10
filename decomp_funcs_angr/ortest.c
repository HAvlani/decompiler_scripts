typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern struct_0 argc;
extern struct_2 argv;
extern unsigned int g_40a0d2;
extern unsigned int g_40a0de;
extern struct_0 pos;

int or()
{
    struct_2 *v0;  // [bp-0x50]
    unsigned long|char *[3] v1;  // [bp-0x48]
    struct_2 *|unsigned long long v10;  // rbx
    unsigned long v11;  // rbp
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rbp
    char *[2]|unsigned int v14;  // rsi
    unsigned long long|unsigned int v15;  // edi
    unsigned long|unsigned int v16;  // r12
    unsigned long long v17;  // r12
    unsigned int v18;  // r13d
    char v19[3];  // r14
    char v2;  // [bp-0x39]
    unsigned long long v20;  // r15
    unsigned long long v21;  // cc_dep1
    char [3]|unsigned long long|unsigned int v4;  // rax
    unsigned long long|char *[3]|char [2]|unsigned int v9;  // rdx

    v9 = ((long long)pos);
    v16 = ((long long)argc);
    v2 = 0;
    while (true)
    {
        while (true)
        {
            v4 = 0;
            v18 = 0;
            while (true)
            {
                v19 = v1[v9];
                v15 = ((int)v9);
                v10 = v9;
                v20 = ((long long)v1[v9][0]);
                if (v1[v9][0] != 33)
                {
                    if (((long long)v4) != 0)
                    {
                        pos = ((int)v9);
                    }
                    if (v19[1] == 0 && v20 == 40)
                    {
                        pos = ((int)v10) + 1;
                        if (((int)(v10 + 1)) < ((int)argc))
                        {
                            v10 = ((long long)(((int)v10) + 2));
                            if (((int)v10) < ((int)argc))
                            {
                                v15 = 1;
                                v14 = v1 + ((long long)v10) * 8;
                                v4 = ((int)(((long long)argc) - 1 - v9));
                                while (true)
                                {
                                    v9 = v14[0];
                                    if (v9[1] == 0 && v14[0][0] == 41)
                                    {
                                        break;
                                    }
                                    if (v15 != 4)
                                    {
                                        v15 = ((long long)v15) + 1;
                                        v14 += 8;
                                        break;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            v4 = posixtest();
                            if (*(argv + (((long long)pos) << 3)) == 0)
                            {
                                v13 = (long long)quote();
                                dcgettext(0x0, &g_40a0d2, 0x5);
                                test_syntax_error(); /* do not return */
                            }
                            else if (*(*(argv + (((long long)pos) << 3))) != 41)
                            {
                                v17 = (long long)quote_n();
                                v12 = (long long)quote_n();
                                dcgettext(0x0, &g_40a0de, 0x5);
                                test_syntax_error(); /* do not return */
                            }
                            else if (*(*(argv + (((long long)pos) << 3)) + 1) == 0)
                            {
                                v9 = ((int)(((int)pos) + 1));
                                v16 = ((int)argc);
                                pos = pos + 1;
                                /* goto 4209262; */
                            }
                            else
                            {
                                v17 = (long long)quote_n();
                                v12 = (long long)quote_n();
                                dcgettext(0x0, &g_40a0de, 0x5);
                                test_syntax_error(); /* do not return */
                            }
                        }
                        else
                        {
                            beyond(); /* do not return */
                        }
                    }
                }
                else if (v19[1] == 0)
                {
                    v9 += 1;
                    v15 = ((int)v15) + 1;
                    if (((int)argc) > ((int)v9))
                    {
                        ((unsigned int)v18) = ((long long)(v18 ^ 1));
                        v4 = 1;
                    }
                    else
                    {
                        pos = v15;
                        beyond(); /* do not return */
                    }
                }
                else if (((long long)v4) != 0)
                {
                    pos = ((int)v9);
                }
                if (v1[v9][0] == 33 && v19[1] != 0 || v19[1] != 0 && v1[v9][0] != 33 || v1[v9][0] != 33 && v20 != 40)
                {
                    v4 = ((int)(v16 - v10));
                    v21 = ((long long)(v16 - v10));
                }
                if (v19[2] == 0 && v19[0] == 45 && v19[1] == 108 && ((int)(v16 - v10)) > 3 && (v1[v9][0] != 33 || v19[1] != 0) && (v1[v9][0] == 33 || v19[1] != 0 || v20 != 40))
                {
                    v1 = argv;
                    v0 = v9;
                    v4 = binop();
                    if (((long long)v4) != 0)
                    {
                        v4 = binary_operator();
                        v9 = ((long long)pos);
                        v16 = ((long long)argc);
                        /* goto 4209262; */
                    }
                }
                if (...)
                {
                    v4 = binop();
                    if (((long long)v4) != 0)
                    {
                        v4 = binary_operator();
                        v9 = ((long long)pos);
                        v16 = ((long long)argc);
                        /* goto 4209262; */
                    }
                }
                if (...)
                {
                    v4 = unary_operator();
                    v9 = ((long long)pos);
                    v16 = ((long long)argc);
                    /* goto 4209262; */
                }
                if (...)
                {
                    v9 = v10 + 1;
                    pos = ((int)v10) + 1;
                    v4 = ((int)(((unsigned int)v4) ^ v18));
                    v11 = ((long long)(1 & v4));
                    if (((int)(v10 + 1)) >= ((int)v16))
                    {
                        v2 |= v11;
                        return ((long long)v2);
                    }
                }
                if (...)
                {
                    v4 = ((int)(v4 ^ v18));
                    v11 = ((long long)(1 & v4));
                    if (((int)v9) >= v16)
                    {
                        v2 |= v11;
                        return ((long long)v2);
                    }
                }
                if (...)
                {
                    v4 = *(argv + rdx<8> * 8);
                    v14 = ((int)*(*(argv + rdx<8> * 8)));
                    if (v4[1] == 97 && v4[2] == 0 && *(*(argv + (rdx<8> << 3))) == 45)
                    {
                        v9 = ((long long)(((int)rdx<8>) + 1));
                        pos = ((int)v9);
                        beyond(); /* do not return */
                    }
                    if (v4[1] != 97 || v4[2] != 0 || *(*(argv + (rdx<8> << 3))) != 45)
                    {
                        v2 |= v11;
                        if (v14 != 45)
                        {
                            return ((long long)v2);
                        }
                        else if (v4[1] != 111)
                        {
                            return ((long long)v2);
                        }
                        else if (v4[2] != 0)
                        {
                            return ((long long)v2);
                        }
                        else
                        {
                            v9 = ((int)(((int)v9) + 1));
                            pos = ((int)v9) + 1;
                            break;
                        }
                    }
                }
            }
            if (...)
            {
                v4 = 0;
                v18 = 0;
            }
        }
    }
    beyond(); /* do not return */
}
