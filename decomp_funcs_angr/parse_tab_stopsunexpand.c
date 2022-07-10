typedef struct struct_0 {
    unsigned long long field_0;
    char field_1;
} struct_0;

extern unsigned int g_4074d0;
extern unsigned int g_407500;
extern unsigned int g_407530;
extern unsigned int g_40773d;
extern unsigned int g_407748;

int parse_tab_stops()
{
    BOT tmp_7;  // tmp #7
    char [2]|unsigned long long v0;  // [bp-0x48]
    char|unsigned long v1;  // [bp-0x40]
    unsigned long long v10;  // r15
    unsigned long long v11;  // r15
    struct_0 *|unsigned long long v3;  // rax
    unsigned long long v5;  // rbx
    char [2] v6;  // rbp
    char v7[2];  // rdi
    unsigned long long v8;  // r12
    unsigned long long v9;  // r14

    v10 = ((long long)v7[0]);
    if (((long long)v7[0]) != 0)
    {
        v1 = 1;
        v6 = v7;
        v9 = 0;
        v0 = 0;
        v8 = 0;
        v5 = 0;
        while (true)
        {
            if (v10 != 44)
            {
                v3 = __ctype_b_loc();
                if (((long long)(*(v3->field_0 + (((long long)v10) << 1)) & 1)) == 0)
                {
                    if (v10 != 47)
                    {
                        if (v10 != 43)
                        {
                            if (((int)v10) - 48 > 9)
                            {
                                v8 = (long long)quote();
                                error(0x0, 0x0, dcgettext(0x0, &g_407530, 0x5));
                                exit(0x1); /* do not return */
                            }
                            else if (((long long)v5) == 0)
                            {
                                v0 = v6;
                                v9 = ((long long)(((int)v10) - 48));
                                v5 = 1;
                                /* goto 4207328; */
                            }
                            else
                            {
                                if (v9 <= 1844674407370955161)
                                {
                                    v3 = v9 + v9 * 10;
                                    if (v9 + (v9 + (v9 << 2) << 1) >= v9)
                                    {
                                        v9 = v3;
                                        /* goto 4207520; */
                                    }
                                }
                                if (v9 + (v9 + (v9 << 2) << 1) < v9 || v9 > 1844674407370955161)
                                {
                                    v11 = v0;
                                    strspn(((int)v0), &g_40773d);
                                    v0 = v11;
                                    v10 = (long long)ximemdup0();
                                    v1 = (long long)quote();
                                    error(0x0, 0x0, dcgettext(0x0, &g_407748, 0x5));
                                    rpl_free();
                                    v1 = 0;
                                    /* goto 4207328; */
                                }
                            }
                        }
                    }
                    else
                    {
                        if (((long long)v5) == 0)
                        {
                            /* goto 4207328; */
                        }
                        else
                        {
                            v8 = (long long)quote();
                            error(0x0, 0x0, dcgettext(0x0, &g_4074d0, 0x5));
                            v1 = 0;
                            /* goto 4207328; */
                        }
                    }
                    if (v10 == 43)
                    {
                        if (((long long)v5) == 0)
                        {
                            /* goto 4207328; */
                        }
                        else
                        {
                            v8 = (long long)quote();
                            error(0x0, 0x0, dcgettext(0x0, &g_407500, 0x5));
                            v1 = 0;
                            /* goto 4207328; */
                        }
                    }
                }
            }
            if (((long long)v5) != 0 && (v10 == 44 || ((long long)(*(v3->field_0 + (((long long)v10) << 1)) & 1)) != 0))
            {
                if (((long long)v8) != 0)
                {
                    v3 = set_extend_size();
                    if (((long long)v3) != 0)
                    {
                        v5 = 0;
                        /* goto 4207328; */
                    }
                    else
                    {
                        exit(0x1); /* do not return */
                    }
                }
                else if (((long long)0) != 0)
                {
                    v3 = set_increment_size();
                    if (((long long)v3) != 0)
                    {
                        v5 = 0;
                        v10 = ((long long)v6[1]);
                        v6 += 1;
                        tmp_7 = v10;
                    }
                    else
                    {
                        exit(0x1); /* do not return */
                    }
                }
                else
                {
                    add_tab_stop();
                    v5 = 0;
                    /* goto 4207328; */
                }
            }
            if (...)
            {
                v10 = ((long long)*(rax<8> + 1));
                v6 = rax<8> + 1;
            }
            if (...)
            {
                if (((long long)v5) != 0)
                {
                    if (v1 == 0)
                    {
                        exit(0x1); /* do not return */
                    }
                    else if (((long long)v8) != 0)
                    {
                        v1 = (char)set_extend_size();
                        if (v1 != 0)
                        {
                            return ((long long)v1);
                        }
                        exit(0x1); /* do not return */
                    }
                    else if (((long long)0) != 0)
                    {
                        v1 = (char)set_increment_size();
                        if (v1 != 0)
                        {
                            return ((long long)v1);
                        }
                        exit(0x1); /* do not return */
                    }
                }
                if (v1 != 0)
                {
                    return ((long long)v1);
                }
                else
                {
                    exit(0x1); /* do not return */
                }
            }
        }
    }
    return ((long long)v1);
}
