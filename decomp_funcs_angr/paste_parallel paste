typedef struct struct_2 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_1 delim_end;
extern struct_1 delims;
extern unsigned int g_407010;
extern char have_read_stdin;
extern char line_delim;
extern struct_1 stdin;
extern unsigned long long stdout[7];

int paste_parallel()
{
    unsigned long long v0;  // [bp-0x68]
    unsigned int|char v1;  // [bp-0x60]
    unsigned long long [7] v13;  // rcx
    char *|char v14;  // rdx
    unsigned long long v15;  // rbx
    char *|unsigned long long v16;  // rbp
    unsigned long long v17;  // rsi
    struct_2 *|unsigned long long|char [2]|void * v18;  // rdi
    unsigned long|unsigned int v19;  // r9
    unsigned int v2;  // [bp-0x5c]
    char *[2]|unsigned long long v20;  // r12
    unsigned long long v21;  // r12
    unsigned long long v22;  // r13
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long v25;  // cc_dep1
    unsigned long long|char v3;  // [bp-0x55]
    unsigned int v4;  // [bp-0x54]
    unsigned long v5;  // [bp-0x50]
    struct_0 *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    char *|unsigned long long v9;  // rax

    v20 = v17;
    v15 = v18;
    v5 = v17;
    v0 = (long long)xmalloc();
    v7 = (long long)xnmalloc();
    if (v18 != 0)
    {
        v24 = 0;
        v22 = 0;
        while (true)
        {
            v18 = v20[0];
            if (v20[0][0] == 45 && v18[1] == 0)
            {
                have_read_stdin = 1;
                v20 += 8;
                *(v7 + v22 * 8) = stdin;
                v22 += 1;
            }
            if (v20[0][0] != 45 || v18[1] != 0)
            {
                *(v7 + v22 * 8) = v18;
                v18 = fopen(v18, "r");
                if (v18 != 0)
                {
                    v24 = ((long long)(fileno(v18) == 0? ((int)1) : ((int)r15<8>)));
                    v22 += 1;
                    v20 += 8;
                    fadvise();
                }
                else
                {
                    v21 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            if ((v20[0][0] == 45 || v15 == v22) && (v18[1] == 0 || v15 == v22) && (v20[0][0] == 45 || v18 != 0) && (v18[1] == 0 || v18 != 0) && (v15 == v22 || v20[0][0] != 45 || v18[1] != 0))
            {
                v3 = v24;
                if (((long long)v24) == 0)
                {
                    v3 = 1;
                    v23 = v22;
                    break;
                }
                else if (have_read_stdin == 0)
                {
                    v23 = v22;
                    break;
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_407010, 0x5));
                }
            }
        }
        while (true)
        {
            v24 = v7;
            v1 = 0;
            v15 = 1;
            v20 = 0;
            v16 = delims;
            v18 = *(v24);
            if (*(v24) != 0 || *(v24) != 0)
            {
                v9 = v18->field_8;
                if (v18->field_8 < v18->field_10)
                {
                    v18->field_8 = v9 + 1;
                    v19 = ((long long)*(v9));
                }
                else
                {
                    v4 = __uflow(v18);
                    v6 = __errno_location();
                    v2 = v6->field_0;
                    if (((int)v4) == -1 && ((long long)(((char)(v20 != 0)) & ((char)(v4 != -1)))) == 0)
                    {
                        v18 = *(v24);
                        if (*(v24) != 0)
                        {
                            if (((long long)(v18->field_0 & 32)) == 0)
                            {
                                if (v18 != stdin)
                                {
                                    v9 = rpl_fclose();
                                }
                                else
                                {
                                    clearerr_unlocked();
                                    /* goto 4206128; */
                                }
                            }
                            else
                            {
                                if (v18 != stdin)
                                {
                                    v9 = rpl_fclose();
                                }
                                else
                                {
                                    clearerr_unlocked();
                                }
                            }
                            if (v9 == -1 || ((long long)(v18->field_0 & 32)) != 0)
                            {
                                if (v18 != stdin && (v2 == 0 || ((long long)(v18->field_0 & 32)) == 0) && (v9 == -1 || ((long long)(v18->field_0 & 32)) == 0))
                                {
                                    v2 = v6->field_0;
                                }
                                if (v2 != 0 && (((long long)(v18->field_0 & 32)) != 0 || v18 != stdin))
                                {
                                    quotearg_n_style_colon();
                                    error(0x0, v2, "%s");
                                    v3 = 0;
                                }
                            }
                            *(v24) = 0;
                        }
                    }
                }
                if (v18->field_8 < v18->field_10 && v20 != 0 || ((long long)(((char)(v20 != 0)) & ((char)(v4 != -1)))) != 0 && v18->field_8 >= v18->field_10)
                {
                    v18 = v0;
                    v1 = ((int)r9<8>);
                    v9 = fwrite_unlocked(v18, 0x1, v20, stdout);
                    v19 = ((long long)v1);
                    if (v9 == v20)
                    {
                        v20 = 0;
                    }
                    else
                    {
                        write_error(); /* do not return */
                    }
                }
            }
            if (...)
            {
                while (true)
                {
                    if (((int)line_delim) != v19)
                    {
                        v14 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v14) = v19;
                        }
                        else
                        {
                            v9 = __overflow();
                            if (v9 >= 0)
                            {
                                write_error(); /* do not return */
                            }
                        }
                        if (*(stdout + 40) < *(stdout + 48) || v9 >= 0)
                        {
                            v9 = *(*(v24) + 8);
                            if (*(*(v24) + 8) < *(*(v24) + 16))
                            {
                                *(*(v7) + 8) = *(*(v7) + 8) + 1;
                                v19 = ((int)*(v9));
                            }
                            else
                            {
                                v19 = __uflow(((int)*(v7)));
                                if (((int)v19) == -1 && v22 == 1)
                                {
                                    /* goto 4205813; */
                                }
                            }
                        }
                    }
                    if (((int)v19) == -1 && *(*(v24) + 8) >= *(*(v24) + 16) && ((int)line_delim) != v19 && (*(stdout + 40) < *(stdout + 48) || v9 >= 0) && v22 != 1 || ((int)line_delim) == v19 && v22 != 1)
                    {
                        v9 = ((long long)*(v16));
                        if (((long long)*(v16)) != 0)
                        {
                            v14 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v14) = v9;
                            }
                            else
                            {
                                v9 = __overflow();
                                if (v9 < 0)
                                {
                                    write_error(); /* do not return */
                                }
                            }
                        }
                        if (((long long)*(v16)) == 0 || *(stdout + 40) < *(stdout + 48) || v9 >= 0)
                        {
                            v16 += 1;
                            v1 = 1;
                        }
                    }
                    if (((int)v19) == -1 && *(*(v24) + 8) >= *(*(v24) + 16) && ((int)line_delim) != v19 && (*(stdout + 40) < *(stdout + 48) || v9 >= 0) && v22 == 1 || ((int)line_delim) == v19 && v22 == 1)
                    {
                        v9 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v9) = v19;
                        }
                        else
                        {
                            v9 = __overflow();
                            if (v9 < 0)
                            {
                                write_error(); /* do not return */
                            }
                        }
                        if (*(stdout + 40) < *(stdout + 48) || v9 >= 0)
                        {
                            v1 = 1;
                            break;
                        }
                    }
                }
                if (...)
                {
                    v16 = delims;
                }
                else if (...)
                {
                    v14 = ((char)!(r13<8> <= v15));
                    v24 += 8;
                    v15 += 1;
                    v25 = ((long long)(((char)(v23 != 0)) & v14));
                }
            }
            v14 = ((char)!(r13<8> <= v15));
            v24 += 8;
            v15 += 1;
            v25 = ((long long)(((char)(v23 != 0)) & v14));
            if (((char)v25) != 0)
            {
                v18 = *(v24);
            }
            if (*(v24) == 0 || *(v24) == 0 && ((char)v25) != 0 || ((int)v4) == -1 && ((long long)(((char)(v20 != 0)) & ((char)(v4 != -1)))) == 0 && v18->field_8 >= v18->field_10)
            {
                if (v22 != v15)
                {
                    v9 = ((long long)*(v16));
                    if (((long long)*(v16)) != 0)
                    {
                        *(v0 + v20) = v9;
                        v20 += 1;
                    }
                    v16 += 1;
                }
                else if (v1 != 0)
                {
                    v13 = stdout;
                    if (v20 != 0)
                    {
                        v9 = fwrite_unlocked(v0, 0x1, v20, stdout);
                        if (v9 != v20)
                        {
                            write_error(); /* do not return */
                        }
                        v13 = stdout;
                        /* goto 4205907; */
                    }
                }
            }
            if (...)
            {
                v16 = delims;
            }
            if (...)
            {
                v9 = v13[5];
                if (v13[5] < v13[6])
                {
                    v13[5] = v9 + 1;
                    *(v9) = line_delim;
                }
                else
                {
                    v9 = __overflow();
                    if (v9 < 0)
                    {
                        write_error(); /* do not return */
                    }
                }
            }
            if (...)
            {
                rpl_free();
                rpl_free();
            }
        }
        return ((long long)v3);
    }
    v3 = 1;
    rpl_free();
    rpl_free();
    return ((long long)v3);
}
