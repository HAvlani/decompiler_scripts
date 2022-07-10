typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern struct_2 argc;
extern struct_3 argv;
extern unsigned int g_40a09a;
extern struct_2 pos;

int binary_operator()
{
    BOT tmp_14;  // tmp #14
    char v0;  // [bp-0x188]
    char v1;  // [bp-0xf8]
    unsigned long long v10;  // rax
    struct_3 *|unsigned long long v12;  // rcx
    char [3]|unsigned long long v13;  // rdx
    char *v14[4];  // rbx
    unsigned long long v15;  // rbp
    char *[4]|unsigned long long v16;  // rbp
    unsigned long v17;  // rsi
    unsigned long long v18;  // rsi
    char|char * v19;  // rdi
    unsigned long v2;  // [bp-0xa0]
    char v20[4];  // r8
    unsigned long long v21;  // r12
    struct_3 *v22;  // r13
    unsigned long long v23;  // cc_dep1
    unsigned long v3;  // [bp-0x98]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    struct_3 * v8;  // rax

    v8 = ((long long)pos) + 1;
    if (((long long)v19) != 0)
    {
        pos = ((int)(((long long)pos) + 1));
        v8 = ((long long)pos) + 2;
    }
    v16 = argv;
    v14 = v8;
    v21 = 0;
    if (((int)(((long long)argc) - 2)) > ((int)v8))
    {
        v13 = v16 + v14 * 8[1];
        if (v16 + (v14 << 3)[1][0] == 45)
        {
            if (v13[1] == 108)
            {
                if (v13[2] == 0)
                {
                    pos = ((int)v8);
                    v21 = 1;
                    /* goto 4205924; */
                }
            }
        }
        if (v13[1] != 108 || v13[2] != 0 || v16 + (v14 << 3)[1][0] != 45)
        {
            v21 = 0;
        }
    }
    v20 = v16[v14];
    v22 = v14 * 8;
    v6 = ((long long)v16[v14][0]);
    if (!(v16[v14][0] != 45))
    {
        v10 = ((long long)v20[1]);
        if (v20[1] == 108 || v10 == 103)
        {
            v13 = ((long long)v20[2]);
        }
        if ((v20[1] != 108 || v13 != 116) && (v20[1] != 108 || v20[2] != 101) && (v13 != 116 || v10 != 103) && (v10 != 103 || v20[2] != 101))
        {
            if (v10 != 101)
            {
            }
            else
            {
                v10 = ((long long)v20[2]);
            }
            if (v10 == 110)
            {
                v10 = ((long long)v20[2]);
            }
            if ((v10 == 110 || v10 == 101) && (v10 == 101 || v20[2] == 101) && (v20[2] == 113 || v10 != 101))
            {
                if (v20[3] != 0)
                {
                    v15 = (long long)quote();
                    dcgettext(0x0, &g_40a09a, 0x5);
                    test_syntax_error(); /* do not return */
                }
            }
        }
        if (...)
        {
            v23 = ((long long)v10);
            if (v10 == 111)
            {
                if (v20[2] == 116)
                {
                    if (v20[3] == 0)
                    {
                        pos = pos + 3;
                        if (((long long)(v21 | v19)) == 0)
                        {
                            v5 = __xstat(0x1, ((int)v16 + v22[1]), ((int)&v1));
                            v12 = v16 + v22 + 8;
                            if (v5 == 0)
                            {
                                v5 = __xstat(0x1, ((int)v12->field_0), ((int)&v1));
                                if (v5 != 0)
                                {
                                    v7 = v21;
                                    return v7;
                                }
                                v21 = ((long long)((v3 < v3) - (v3 < v3))) + ((long long)((v2 < v2) - (v2 < v2))) * 2 >> 31;
                                v7 = v21;
                                return v7;
                            }
                            __xstat(0x1, ((int)v12->field_0), ((int)&v1));
                            v7 = v21;
                            return v7;
                        }
                        v17 = "-ot does not accept -l";
                        dcgettext(0x0, v17, 0x5);
                        test_syntax_error(); /* do not return */
                    }
                    v15 = (long long)quote();
                    dcgettext(0x0, &g_40a09a, 0x5);
                    test_syntax_error(); /* do not return */
                }
                v15 = (long long)quote();
                dcgettext(0x0, &g_40a09a, 0x5);
                test_syntax_error(); /* do not return */
            }
            if (((char)(v23 <= 111)))
            {
                if (v10 != 101)
                {
                    if (v10 != 110)
                    {
                        v15 = (long long)quote();
                        dcgettext(0x0, &g_40a09a, 0x5);
                        test_syntax_error(); /* do not return */
                    }
                }
                else
                {
                    v10 = ((long long)v20[2]);
                }
                if (v10 == 110)
                {
                    v10 = ((long long)v20[2]);
                }
            }
            else
            {
                v15 = (long long)quote();
                dcgettext(0x0, &g_40a09a, 0x5);
                test_syntax_error(); /* do not return */
            }
        }
        if (...)
        {
            v23 = ((long long)v19);
            v19 = v16 + v22[1];
            if (((char)v23) != 0)
            {
                strlen(v19);
                v16 = (long long)umaxtostr();
            }
            else
            {
                v16 = (long long)find_int();
            }
            if (((long long)v21) != 0)
            {
                strlen(*(argv + v22 + 16));
                v18 = (long long)umaxtostr();
            }
            else
            {
                v18 = (long long)find_int();
            }
            strintcmp();
            v12 = ((long long)*(*(argv + v14 * 8) + 1));
            pos = pos + 3;
            tmp_14 = v12;
            if (tmp_14 != 108)
            {
                if (v12 != 103)
                {
                    v7 = v21;
                    return v7;
                }
                v7 = v21;
                return v7;
            }
            v7 = v21;
            return v7;
        }
        if (...)
        {
            if (v10 == 102)
            {
                if (v20[3] == 0)
                {
                    pos = pos + 3;
                    if (((long long)(v21 | v19)) == 0)
                    {
                        v5 = __xstat(0x1, ((int)v16 + v22[1]), ((int)&v0));
                        if (v5 != 0)
                        {
                            v7 = v21;
                            return v7;
                        }
                        v5 = __xstat(0x1, ((int)v16 + v22[1]), ((int)&v1));
                        if (v5 != 0)
                        {
                            v7 = v21;
                            return v7;
                        }
                        else
                        {
                            if (v0 != v1)
                            {
                                v7 = v21;
                                return v7;
                            }
                            else
                            {
                                v7 = v21;
                                return v7;
                            }
                        }
                    }
                    v17 = "-ef does not accept -l";
                    dcgettext(0x0, v17, 0x5);
                    test_syntax_error(); /* do not return */
                }
                v15 = (long long)quote();
                dcgettext(0x0, &g_40a09a, 0x5);
                test_syntax_error(); /* do not return */
            }
            v15 = (long long)quote();
            dcgettext(0x0, &g_40a09a, 0x5);
            test_syntax_error(); /* do not return */
        }
        if (...)
        {
            if (v10 == 116)
            {
                if (v20[3] == 0)
                {
                    pos = pos + 3;
                    if (((long long)(v21 | v19)) == 0)
                    {
                        v5 = __xstat(0x1, ((int)v16 + v22[1]), ((int)&v1));
                        v12 = v16 + v22 + 8;
                        if (v5 == 0)
                        {
                            v21 = 1;
                            v5 = __xstat(0x1, ((int)v12->field_0), ((int)&v1));
                            if (v5 != 0)
                            {
                                v7 = v21;
                                return v7;
                            }
                            v7 = v21;
                            return v7;
                        }
                        __xstat(0x1, ((int)v12->field_0), ((int)&v1));
                        v7 = v21;
                        return v7;
                    }
                    v17 = "-nt does not accept -l";
                    dcgettext(0x0, v17, 0x5);
                    test_syntax_error(); /* do not return */
                }
                v15 = (long long)quote();
                dcgettext(0x0, &g_40a09a, 0x5);
                test_syntax_error(); /* do not return */
            }
            v15 = (long long)quote();
            dcgettext(0x0, &g_40a09a, 0x5);
            test_syntax_error(); /* do not return */
        }
    }
    else if (v6 == 61)
    {
        v6 = ((long long)v20[1]);
        if (!(((long long)v20[1]) != 0))
        {
            strcmp(v16 + (((long long)pos) + 2) * 8[2], v16[((long long)pos) + 2]);
            pos = pos + 3;
            v7 = v21;
            return v7;
        }
        else if (!(v6 == 61))
        {
            strcmp(v16 + (((long long)pos) + 2) * 8[2], v16[((long long)pos) + 2]);
            pos = pos + 3;
            v7 = v21;
            return v7;
        }
        else if (v20[2] == 0)
        {
            strcmp(v16 + (((long long)pos) + 2) * 8[2], v16[((long long)pos) + 2]);
            pos = pos + 3;
            v7 = v21;
            return v7;
        }
        else
        {
            strcmp(v16 + (((long long)pos) + 2) * 8[2], v16[((long long)pos) + 2]);
            pos = pos + 3;
            v7 = v21;
            return v7;
        }
    }
    else
    {
        strcmp(v16 + (((long long)pos) + 2) * 8[2], v16[((long long)pos) + 2]);
        pos = pos + 3;
        v7 = v21;
        return v7;
    }
}
