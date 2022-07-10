typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char g_0;

int mkancesdirs()
{
    unsigned long v0;  // [bp-0x50]
    char|unsigned long long v1;  // [bp-0x3d]
    char v10[2];  // rsi
    char [2] v11;  // rdi
    char|unsigned long long v12;  // r8
    char [2] v13;  // r12
    unsigned long|unsigned long long v14;  // r13
    unsigned long long v15;  // r14
    unsigned long v17;  // cc_dep1
    unsigned int v2;  // [bp-0x3c]
    struct_0 *|unsigned long|unsigned int v4;  // rax
    unsigned long long v5;  // rax
    unsigned long v6;  // rcx
    char|unsigned long long v7;  // rdx
    unsigned long v8;  // rdx
    char [2] v9;  // rbx

    v0 = v8;
    v7 = ((long long)v11[0]);
    if (((long long)v11[0]) != 0)
    {
        v9 = v11 + 1;
        v13 = v11;
        v14 = &g_0;
        while (true)
        {
            v4 = ((long long)v9[0]);
            if (v9[0] != 47)
            {
                v7 = ((char)(v7 == 47));
                v17 = ((long long)(((char)(((long long)v4) != &g_0)) & v7));
                v12 = ((char)(((long long)v4) != &g_0)) & v7;
                if (((char)v17) == 0)
                {
                    if (((long long)v4) == 0)
                    {
                        v5 = v13 - v11;
                        return v5;
                    }
                }
                if (v14 != 0)
                {
                    v7 = v14 - v13;
                    if (v14 - v13 != 1)
                    {
                        *(v14) = &g_0;
                        if (v13[0] == 46 && v7 == 2 && v13[1] == 46)
                        {
                            v2 = &g_0;
                            v12 = &g_0;
                            /* goto 4252217; */
                        }
                    }
                    else if (v13[0] != 46)
                    {
                        *(v14) = &g_0;
                    }
                    else
                    {
                        v13 = v9;
                        /* goto 4252089; */
                    }
                    if (v13[0] != 46 || v14 - v13 != 1)
                    {
                        if (v14 - v13 == 1 || v13[0] != 46 || v7 != 2 || v13[1] != 46)
                        {
                            v1 = v12;
                            v7 = v6;
                            v10 = v13;
                            v11 = v11;
                            v4 = *(&stack_base-80)();
                            v2 = &g_0;
                            v12 = ((long long)v1);
                            if (v4 < 0)
                            {
                                v4 = ((int)*(__errno_location()));
                                v2 = v4;
                            }
                        }
                        v1 = v12;
                        v15 = (long long)savewd_chdir();
                        if (reg_16<4> != -1)
                        {
                            *(v14) = 47;
                            if (reg_16<4> == 0)
                            {
                                v12 = ((long long)v1);
                                v4 = ((long long)v9[0]);
                                v13 = v9;
                                if (((long long)v9[0]) == 0)
                                {
                                    v5 = v13 - v11;
                                    return v5;
                                }
                            }
                        }
                        if (reg_16<4> == -1 || reg_16<4> != 0)
                        {
                            if (v2 != 0)
                            {
                                v4 = __errno_location();
                                if (v4->field_0 == 2)
                                {
                                    v4->field_0 = v2;
                                    v5 = v15;
                                    break;
                                }
                                else
                                {
                                    v5 = v15;
                                    return v5;
                                }
                            }
                            else
                            {
                                v5 = v15;
                                return v5;
                            }
                        }
                    }
                }
            }
            else
            {
                v14 = (v7 != 47? v9 : r13<8>);
            }
            if (...)
            {
                v9 += 1;
                v7 = rax<8>;
            }
        }
        return v5;
    }
    v5 = &g_0;
    return v5;
}
