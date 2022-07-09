typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_1;

extern struct_0 delim_end;
extern struct_0 delims;
extern char have_read_stdin;
extern char line_delim;
extern struct_0 stdin;
extern unsigned long long stdout[7];

int paste_serial()
{
    struct_2 *v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x40]
    unsigned int|unsigned long long v10;  // rbx
    char *[2] v11;  // rbp
    unsigned long v12;  // rsi
    char [2]|unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    char *|unsigned long long v15;  // r13
    struct_1 * v16;  // r14
    unsigned int|unsigned long v17;  // r15
    char v2;  // [bp-0x39]
    char *|unsigned long long v4;  // rax
    char * v6;  // rax
    unsigned long long v7;  // rcx
    unsigned int|char *|unsigned long v8;  // edx
    char *v9;  // rdx

    if (v13 != 0)
    {
        v14 = v13;
        v11 = v12;
        v2 = 1;
        v0 = __errno_location();
        while (true)
        {
            v13 = v11[0];
            v10 = ((int)(((int)v11[0][0]) - 45));
            if (v11[0][0] == 45)
            {
                v10 = ((long long)v13[1]);
                if (v13[1] == 0)
                {
                    have_read_stdin = 1;
                    v16 = stdin;
                    /* goto 4206565; */
                }
            }
            if (v13[1] != 0 || v11[0][0] != 45)
            {
                v16 = fopen(v13, "r");
                if (v16 != 0)
                {
                    fadvise();
                }
                else
                {
                    quotearg_n_style_colon();
                    error(0x0, v0->field_0, "%s");
                    v2 = 0;
                    /* goto 4206810; */
                }
            }
            if (v16 != 0 || v13[1] == 0 && v11[0][0] == 45)
            {
                v9 = *(r14<8> + 8);
                v7 = *(r14<8> + 16);
                v15 = delims;
            }
            if (v16 != 0 || v13[1] == 0 && v11[0][0] == 45)
            {
                if (*(r14<8> + 8) < *(r14<8> + 16))
                {
                    v6 = v9 + 1;
                    *(r14<8> + 8) = v9 + 1;
                    v8 = ((long long)*(v9));
                }
                else
                {
                    v8 = __uflow(((int)r14<8>));
                    v17 = ((int)v0->field_0);
                    if (((int)v8) == -1)
                    {
                        v4 = ((long long)line_delim);
                        /* goto 4206753; */
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v8) = v4;
                        }
                    }
                    else
                    {
                        v6 = *(r14<8> + 8);
                        v7 = *(r14<8> + 16);
                    }
                }
                if (*(r14<8> + 8) < *(r14<8> + 16) || ((int)v8) != -1)
                {
                    while (true)
                    {
                        if (v7 > v6)
                        {
                            v16->field_8 = v6 + 1;
                            v17 = ((int)*(v6));
                        }
                        else
                        {
                            v1 = reg_32<4>;
                            v17 = __uflow(((int)v16));
                            if (((int)v17) == -1)
                            {
                                v17 = ((long long)v0->field_0);
                                v4 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v4) = ((char)v1);
                                }
                                else
                                {
                                    v1 = ((int)v1);
                                    v4 = __overflow();
                                    if (v4 < 0)
                                    {
                                        write_error(); /* do not return */
                                    }
                                }
                                if (*(stdout + 40) < *(stdout + 48) || v4 >= 0)
                                {
                                    v4 = ((long long)line_delim);
                                    break;
                                }
                            }
                        }
                        if (v7 > v6 || ((int)v17) != -1)
                        {
                            if (((int)line_delim) == ((int)rdx<8>))
                            {
                                v4 = ((long long)*(v15));
                                if (((long long)*(v15)) != 0)
                                {
                                    v8 = *(stdout + 40);
                                    if (*(stdout + 40) < *(stdout + 48))
                                    {
                                        v15 += 1;
                                        *(stdout + 40) = *(stdout + 40) + 1;
                                        *(v8) = v4;
                                    }
                                    else
                                    {
                                        v4 = __overflow();
                                        if (v4 < 0)
                                        {
                                            write_error(); /* do not return */
                                        }
                                    }
                                }
                                if ((((long long)*(v15)) == 0 || v4 >= 0) && (((long long)*(v15)) == 0 || *(stdout + 40) >= *(stdout + 48)))
                                {
                                    v15 += 1;
                                }
                            }
                            else
                            {
                                v4 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v4) = dl<1>;
                                    /* goto 4206638; */
                                }
                                else
                                {
                                    v4 = __overflow();
                                    if (v4 >= 0)
                                    {
                                        write_error(); /* do not return */
                                    }
                                }
                            }
                            if (((int)line_delim) == ((int)rdx<8>) && *(stdout + 40) < *(stdout + 48) && ((long long)*(v15)) != 0 && delim_end == v15 || ((int)line_delim) == ((int)rdx<8>) && (((long long)*(v15)) == 0 || v4 >= 0) && (((long long)*(v15)) == 0 || *(stdout + 40) >= *(stdout + 48)) && delim_end == v15)
                            {
                                v15 = delims;
                            }
                            if (...)
                            {
                                v6 = v16->field_8;
                                v7 = v16->field_10;
                                v8 = v17;
                            }
                        }
                    }
                    if (v7 <= v6 && ((int)v17) == -1 && ((int)line_delim) != v1 && (*(stdout + 40) < *(stdout + 48) || v4 >= 0))
                    {
                        v8 = *(stdout + 40);
                    }
                }
                if ((((int)v8) == -1 || *(stdout + 40) >= *(stdout + 48)) && (*(stdout + 40) >= *(stdout + 48) || *(r14<8> + 8) >= *(r14<8> + 16)))
                {
                    v8 = *(stdout + 40);
                }
                if (*(stdout + 40) >= *(stdout + 48))
                {
                    v4 = __overflow();
                    if (v4 < 0)
                    {
                        break;
                    }
                }
            }
            if (((int)v8) == -1 && *(stdout + 40) < *(stdout + 48) && *(r14<8> + 8) >= *(r14<8> + 16) && (v13[1] == 0 || v16 != 0) && (v11[0][0] == 45 || v16 != 0) || *(stdout + 40) >= *(stdout + 48) && (v13[1] == 0 || v16 != 0) && (v11[0][0] == 45 || v16 != 0) && v4 >= 0 || (v13[1] == 0 || v16 != 0) && (v11[0][0] == 45 || v16 != 0) && (*(r14<8> + 8) < *(r14<8> + 16) || ((int)v8) != -1) && *(stdout + 40) >= *(stdout + 48))
            {
                if (((long long)(*(r14<8>) & 32)) == 0)
                {
                    if (reg_40<4> == 0)
                    {
                        clearerr_unlocked();
                    }
                    else
                    {
                        v4 = rpl_fclose();
                        if (v4 != 0)
                        {
                            v17 = ((long long)v0->field_0);
                        }
                    }
                }
                else
                {
                    if (reg_40<4> == 0)
                    {
                        clearerr_unlocked();
                    }
                    else
                    {
                        v4 = rpl_fclose();
                        if (reg_136<4> == 0 && v4 != 0)
                        {
                            v17 = ((long long)v0->field_0);
                        }
                    }
                }
                if ((reg_40<4> != 0 || ((long long)(*(r14<8>) & 32)) != 0) && (v4 != 0 || v17 != 0) && (((long long)(*(r14<8>) & 32)) != 0 || v17 != 0) && (((long long)(*(r14<8>) & 32)) != 0 || v4 != 0) && (reg_40<4> != 0 || v17 != 0) && (v17 != 0 || reg_136<4> != 0))
                {
                    quotearg_n_style_colon();
                    error(0x0, v17, "%s");
                    v2 = 0;
                }
            }
            if (...)
            {
                v11 += 8;
                v14 -= 1;
                return ((long long)v2);
            }
        }
        write_error(); /* do not return */
    }
    v2 = 1;
    return ((long long)v2);
}
