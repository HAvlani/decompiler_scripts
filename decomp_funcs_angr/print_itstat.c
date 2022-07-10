extern unsigned int g_410230;
extern unsigned int g_410258;
extern unsigned int g_411656;
extern char interpret_backslash_escapes;
extern <missing-type> print_stat;
extern unsigned long long stdout[7];
extern struct_0 trailing_delim;

int print_it()
{
    BOT tmp_7;  // tmp #7
    BOT tmp_11;  // tmp #11
    BOT tmp_9;  // tmp #9
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x58]
    unsigned long long v11;  // rax
    unsigned long|unsigned long long|char *|unsigned int v13;  // rcx
    unsigned long|unsigned long long|char * v14;  // rdx
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rbx
    char [4]|unsigned long long v17;  // rsi
    char [4] v18;  // rdi
    unsigned long|unsigned long long v19;  // r8
    char v2;  // [bp-0x4d]
    unsigned long long v20;  // r9
    unsigned long long v21;  // r12
    char [4]|unsigned long long v23;  // r14
    char [4] v25;  // r15
    unsigned long long v26;  // cc_dep1
    unsigned long v3;  // [bp-0x48]
    unsigned long v4;  // [bp-0x40]
    unsigned long long|char * v6;  // rax
    unsigned long long v7;  // rax

    v3 = v14;
    v1 = v13;
    v4 = v19;
    strlen(v18);
    v2 = 0;
    v6 = ((long long)v25[0]);
    if (((long long)v25[0]) != 0)
    {
        while (true)
        {
            if (v6 == 37)
            {
                v25 += v23;
                v23 = (long long)format_code_offset();
                v16 = ((long long)*(v25 + v23));
                memcpy(v18, v25, v23);
                v26 = ((long long)v16);
                if (v16 != 37)
                {
                    if (((char)(((int)v16) & -5)) == 72)
                    {
                        v13 = ((long long)v16);
                        v6 = ((long long)v25[1]);
                        v14 = 0;
                        if (v1 == 4212592 && (v6 == 114 || v6 == 100))
                        {
                            v14 = v13;
                            v13 = ((long long)v6);
                            /* goto 4214898; */
                        }
                    }
                    if (!(((char)(v26 <= 37))) || ((long long)v16) != 0)
                    {
                        if (((char)(v26 <= 37)) || ((char)(((int)v16) & -5)) != 72)
                        {
                            v13 = ((long long)v16);
                            v14 = 0;
                        }
                        v17 = v23;
                        v18 = (long long)xmalloc();
                        v0 = v4;
                        v20 = v3;
                        v19 = ((long long)v23);
                        v2 |= (char)*(&stack_base-88)();
                        /* goto 4214569; */
                    }
                }
                if (v16 == 37 || ((char)(v26 <= 37)) && ((long long)v16) == 0)
                {
                    if (v17 <= 1)
                    {
                        v6 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v6) = 37;
                            /* goto 4214569; */
                        }
                        else
                        {
                            __overflow();
                            /* goto 4214569; */
                        }
                    }
                    else
                    {
                        *(v18 + v17) = v16;
                        v18 + v17[1] = 0;
                        v21 = (long long)quote();
                        error(0x1, 0x0, dcgettext(0x0, &g_411656, 0x5));
                    }
                }
            }
            else if (v6 != 92)
            {
                v13 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v13) = v6;
                    /* goto 4214569; */
                }
                else
                {
                    __overflow();
                    /* goto 4214569; */
                }
            }
            if (v6 == 92)
            {
                v25 += 1;
                if (interpret_backslash_escapes != 0)
                {
                    v16 = ((long long)v25[1]);
                    if ((((long long)v25[1]) - 48 & 255) > 7)
                    {
                        if (v16 == 120)
                        {
                            v14 = *(__ctype_b_loc());
                            v6 = ((long long)v25[2]);
                            v26 = ((long long)(*(v14 + ((long long)v25[2]) * 2 + 1) & 16));
                            if (((char)v26) != 0)
                            {
                                v13 = ((long long)v13);
                                if ((v6 - 97 & 255) > 5)
                                {
                                    v7 = ((long long)(((int)v6) - 65));
                                    v13 = ((int)(((int)v13) - 48));
                                    tmp_7 = v7;
                                    v6 = ((long long)(((char)(((long long)tmp_7) > 5))? ((int)rcx<8>) : ((int)(v13 - 55))));
                                }
                                else
                                {
                                    v6 = v13 - 87;
                                }
                                v17 = ((long long)v25[3]);
                                v13 = ((int)v25[3]);
                                if (((long long)(*(v14 + (((long long)v25[3]) << 1) + 1) & 16)) != 0)
                                {
                                    v15 = ((long long)v17);
                                    v17 -= 97;
                                    tmp_11 = v17;
                                    if (((long long)tmp_11) <= 5)
                                    {
                                        v14 = ((long long)(((int)v15) - 87));
                                    }
                                    else
                                    {
                                        v13 = ((long long)v13) - 65;
                                        tmp_9 = v13;
                                        v14 = ((long long)(((long long)tmp_9) <= 5? ((int)(v15 - 55)) : ((int)v15) - 48));
                                    }
                                    v6 = ((long long)(rax<8> * 16 + v14));
                                }
                                v14 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v14) = al<1>;
                                    /* goto 4214569; */
                                }
                                else
                                {
                                    __overflow();
                                    /* goto 4214569; */
                                }
                            }
                            else
                            {
                                v23 = 120;
                            }
                        }
                        else if (((long long)v16) == 0)
                        {
                            error(0x0, 0x0, dcgettext(0x0, &g_410230, 0x5));
                        }
                        else
                        {
                            v23 = ((long long)v16);
                            if (v16 == 34)
                            {
                                v23 = 34;
                                /* goto 4215329; */
                            }
                        }
                        if (((char)v26) == 0 || v16 != 120)
                        {
                            if (v16 == 120 || v16 != 34 && ((long long)v16) != 0)
                            {
                                v6 = v16 - 92;
                                if ((v16 - 92 & 255) <= 26)
                                {
                                    /* goto ((long long)*(4266320 + ((long long)al<1>) * 4)) + 4266320; */
                                }
                                else
                                {
                                    error(0x0, 0x0, dcgettext(0x0, &g_410258, 0x5));
                                }
                            }
                            if ((v16 == 34 || (v16 - 92 & 255) > 26) && (v16 == 120 || ((long long)v16) != 0) && ((v16 - 92 & 255) > 26 || v16 != 120))
                            {
                                v6 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v6) = v16;
                                    /* goto 4214569; */
                                }
                                else
                                {
                                    __overflow();
                                    /* goto 4214569; */
                                }
                            }
                        }
                    }
                    else
                    {
                        v11 = ((long long)v25[2]);
                        v19 = ((long long)(((int)v16) - 48));
                        if ((((long long)v25[2]) - 48 & 255) <= 7)
                        {
                            v19 = v11 + v19 * 8 - 48;
                            v11 = ((long long)v25[3]);
                            if ((((long long)v25[3]) - 48 & 255) <= 7)
                            {
                                v19 = v11 + v19 * 8 - 48;
                            }
                        }
                        v6 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v6) = r8b<1>;
                        }
                        else
                        {
                            __overflow();
                        }
                        /* goto 4214569; */
                    }
                }
                if (interpret_backslash_escapes == 0 || ((long long)v16) == 0 && (((long long)v25[1]) - 48 & 255) > 7 && v16 != 120)
                {
                    v6 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v6) = 92;
                        v25 = v18;
                        v6 = ((long long)v18[1]);
                        rpl_free();
                        fputs_unlocked(trailing_delim, stdout);
                        return ((long long)v2);
                    }
                    __overflow();
                }
            }
            if (...)
            {
                v6 = ((long long)v25[1]);
                rpl_free();
                fputs_unlocked(trailing_delim, stdout);
                return ((long long)v2);
            }
        }
    }
    rpl_free();
    fputs_unlocked(trailing_delim, stdout);
    return ((long long)v2);
}
