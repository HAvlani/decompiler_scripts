typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_1 argc;
extern struct_0 argv;
extern unsigned int g_40a0d2;
extern unsigned int g_40a0de;
extern struct_1 pos;

int or()
{
    struct_0 *v0;  // [bp-0x50]
    char *[3]|unsigned long v1;  // [bp-0x48]
    char *[3] v10;  // rdx
    struct_0 *|unsigned long long v11;  // rbx
    unsigned long v12;  // rbp
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rbp
    char *[2]|unsigned int v15;  // rsi
    unsigned long long|unsigned int v16;  // edi
    unsigned long long v17;  // r12
    unsigned long|unsigned int v18;  // r12
    unsigned int v19;  // r13d
    char v2;  // [bp-0x39]
    char v20[3];  // r14
    unsigned long long v21;  // r15
    unsigned long long v22;  // cc_dep1
    char [3]|unsigned long long|unsigned int v4;  // rax
    char *[3]|unsigned long long|char [2] v9;  // edx

    v9 = ((long long)pos);
    v18 = ((long long)argc);
    v2 = 0;
    while (true)
    {
        while (true)
        {
            v4 = 0;
            v19 = 0;
            while (true)
            {
                v20 = v1[v9];
                v16 = ((int)v9);
                v11 = v9;
                v21 = ((long long)v1[v9][0]);
                if (v1[v9][0] != 33)
                {
                    if (((long long)v4) != 0)
                    {
                        pos = ((int)v9);
                    }
                    if (v20[1] == 0 && v21 == 40)
                    {
                        pos = ((int)v11) + 1;
                        if (((int)(v11 + 1)) < ((int)argc))
                        {
                            v11 = ((long long)(((int)v11) + 2));
                            if (((int)v11) < ((int)argc))
                            {
                                v16 = 1;
                                v15 = v1 + ((long long)v11) * 8;
                                v4 = ((int)(((long long)argc) - 1 - v9));
                                while (true)
                                {
                                    v9 = v15[0];
                                    if (v15[0][0] == 41 && v9[1] == 0)
                                    {
                                        break;
                                    }
                                    if (v16 != 4)
                                    {
                                        v16 = ((int)v16) + 1;
                                        v15 += 8;
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
                                v14 = (long long)quote();
                                dcgettext(0x0, &g_40a0d2, 0x5);
                                test_syntax_error(); /* do not return */
                            }
                            else if (*(*(argv + (((long long)pos) << 3))) != 41)
                            {
                                v17 = (long long)quote_n();
                                v13 = (long long)quote_n();
                                dcgettext(0x0, &g_40a0de, 0x5);
                                test_syntax_error(); /* do not return */
                            }
                            else if (*(*(argv + (((long long)pos) << 3)) + 1) == 0)
                            {
                                v10 = ((int)(((int)pos) + 1));
                                v18 = ((int)argc);
                                pos = pos + 1;
                                /* goto 4209518; */
                            }
                            else
                            {
                                v17 = (long long)quote_n();
                                v13 = (long long)quote_n();
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
                else if (v20[1] == 0)
                {
                    v9 += 1;
                    v16 = ((int)v16) + 1;
                    if (((int)argc) > ((int)v9))
                    {
                        ((unsigned int)v19) = ((long long)(v19 ^ 1));
                        v4 = 1;
                    }
                    else
                    {
                        pos = v16;
                        beyond(); /* do not return */
                    }
                }
                else if (((long long)v4) != 0)
                {
                    pos = ((int)v9);
                }
                if (v1[v9][0] == 33 && v20[1] != 0 || v1[v9][0] != 33 && v20[1] != 0 || v1[v9][0] != 33 && v21 != 40)
                {
                    v4 = ((int)(v18 - v11));
                    v22 = ((long long)(v18 - v11));
                }
                if (v20[1] == 108 && v20[2] == 0 && v20[0] == 45 && ((int)(v18 - v11)) > 3 && (v1[v9][0] != 33 || v20[1] != 0) && (v1[v9][0] == 33 || v20[1] != 0 || v21 != 40))
                {
                    v1 = argv;
                    v0 = v9;
                    v4 = binop();
                    if (((long long)v4) != 0)
                    {
                        v4 = binary_operator();
                        v10 = ((long long)pos);
                        v18 = ((long long)argc);
                        /* goto 4209518; */
                    }
                }
                if (...)
                {
                    v4 = binop();
                    if (((long long)v4) != 0)
                    {
                        v4 = binary_operator();
                        v10 = ((long long)pos);
                        v18 = ((long long)argc);
                        /* goto 4209518; */
                    }
                }
                if (...)
                {
                    v4 = unary_operator();
                    v10 = ((long long)pos);
                    v18 = ((long long)argc);
                    /* goto 4209518; */
                }
                if (...)
                {
                    v10 = v11 + 1;
                    pos = ((int)v11) + 1;
                    v4 = ((int)(v4 ^ v19));
                    v12 = ((long long)(1 & v4));
                    if (((int)(v11 + 1)) >= ((int)v18))
                    {
                        v2 |= v12;
                        return ((long long)v2);
                    }
                }
                if (...)
                {
                    v4 = ((int)(v4 ^ v19));
                    v12 = ((long long)(1 & v4));
                    if (((int)v10) >= v18)
                    {
                        v2 |= v12;
                        return ((long long)v2);
                    }
                }
                if (...)
                {
                    v4 = *(argv + rdx<8> * 8);
                    v15 = ((int)*(*(argv + rdx<8> * 8)));
                    if (v4[2] == 0 && v4[1] == 97 && *(*(argv + (rdx<8> << 3))) == 45)
                    {
                        v9 = ((long long)(((int)rdx<8>) + 1));
                        pos = ((int)v9);
                        beyond(); /* do not return */
                    }
                    if (v4[2] != 0 || v4[1] != 97 || *(*(argv + (rdx<8> << 3))) != 45)
                    {
                        v2 |= v12;
                        if (v15 != 45)
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
                            v9 = ((int)(((int)v10) + 1));
                            pos = ((int)v10) + 1;
                            break;
                        }
                    }
                }
            }
            if (...)
            {
                v4 = 0;
                v19 = 0;
            }
        }
    }
    beyond(); /* do not return */
}
