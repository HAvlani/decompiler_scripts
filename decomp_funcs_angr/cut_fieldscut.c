typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_1;

typedef struct struct_3 {
    char field_0;
    char padding_1[7];
    struct struct_4 *field_8;
    unsigned long long field_10;
} struct_3;

extern struct_1 *current_rp;
extern char delim;
extern unsigned long long field_1_buffer;
extern struct_2 frp;
extern char line_delim;
extern struct_2 output_delimiter_length;
extern struct_2 output_delimiter_string;
extern unsigned long long stdout[7];
extern char suppress_non_delimited;

int cut_fields()
{
    BOT tmp_1;  // tmp #1
    struct_3 * v0;  // [bp-0x48]
    struct_0 *v10;  // rbp
    unsigned int|unsigned long v11;  // esi
    char|unsigned long|unsigned long long v12;  // rdi
    struct_0 *v13;  // rdi
    struct_1 *|unsigned long long v14;  // r13
    unsigned long|unsigned long long v15;  // r14
    unsigned long v16;  // r15
    unsigned long v17;  // cc_dep1
    char *v5;  // rax
    char *|struct_1 *|char|unsigned long long v6;  // rax
    unsigned int|unsigned long|unsigned long long v7;  // ecx
    unsigned int|char *|unsigned long|unsigned long long v8;  // rdx
    unsigned int|unsigned long|struct_1 *|unsigned long long v9;  // rbx

    v10 = v13;
    current_rp = frp;
    v6 = v13->field_8;
    if (v13->field_10 > v13->field_8)
    {
        v13->field_8 = v13->field_8 + 1;
        v12 = ((long long)v6->field_0);
    }
    else
    {
        v12 = __uflow();
        if (((int)v12) == -1)
        {
            return rax<8>;
        }
    }
    if (((int)v12) != -1 || v13->field_10 > v13->field_8)
    {
        v15 = 1;
        ungetc(v12, v0);
        v6 = current_rp;
        v14 = 0;
        while (true)
        {
            v9 = v6;
            v6 = current_rp;
            if (((long long)(((char)(v15 == 1)) & (((char)!(*(current_rp) <= 1)) ^ suppress_non_delimited))) != 0)
            {
                v0 = v10;
                v15 = (long long)getndelim2();
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v8 = v15 - 1;
                    v6 = ((long long)*(field_1_buffer + v15 + 1));
                    if (delim == *(field_1_buffer + v15 + 1))
                    {
                        v6 = current_rp;
                        if (*(current_rp) <= 1)
                        {
                            fwrite_unlocked(field_1_buffer, 0x1, v8, stdout);
                            if (delim == line_delim)
                            {
                                v5 = *(v0 + 8);
                                if (*(v0 + 8) < *(v0 + 16))
                                {
                                    *(v0 + 8) = *(v0 + 8) + 1;
                                    v12 = ((long long)*(v5));
                                }
                                else
                                {
                                    v12 = __uflow();
                                    if (((int)v12) == -1)
                                    {
                                        v6 = current_rp;
                                    }
                                }
                                if (*(v0 + 8) < *(v0 + 16) || ((int)v12) != -1)
                                {
                                    ungetc(v12, v0);
                                }
                            }
                            if (((int)v12) != -1)
                            {
                                v6 = current_rp;
                                v14 = v9;
                            }
                        }
                        if (*(rax<8> + 8) <= 1)
                        {
                            v6 = rax<8> + 16;
                            v15 = 2;
                            current_rp = v6;
                        }
                        else
                        {
                            v15 = 2;
                        }
                    }
                    else if (suppress_non_delimited == 0)
                    {
                        v6 = fwrite_unlocked(field_1_buffer, 0x1, v15, stdout);
                        if (((int)*(field_1_buffer + v15 + 1)) != ((int)line_delim))
                        {
                            v8 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v8) = line_delim;
                                /* goto 4206256; */
                            }
                            else
                            {
                                v6 = __overflow();
                                /* goto 4206256; */
                            }
                        }
                    }
                    else
                    {
                        v15 = 1;
                    }
                }
                else
                {
                    rpl_free();
                    field_1_buffer = 0;
                    if (((long long)(*(v0) & 48)) != 0)
                    {
                        return rax<8>;
                    }
                    xalloc_die(); /* do not return */
                }
            }
            if (False)
            {
                __assert_fail(); /* do not return */
                v6 = *(v0 + 8);
                *(v0 + 8) = *(v0 + 8) + 1;
                v12 = ((long long)*(v6));
                /* goto 4206617; */
                v12 = __uflow();
                ungetc(v12, v0);
                v8 = ((int)delim);
                v7 = v16;
                /* goto 4206296; */
            }
            if (*(rax<8>) <= v15)
            {
                if (...)
                {
                    if (((long long)r13b<1>) != 0)
                    {
                        fwrite_unlocked(output_delimiter_string, 0x1, output_delimiter_length, stdout);
                    }
                    while (true)
                    {
                        v6 = *(v0 + 8);
                        if (*(v0 + 8) < *(v0 + 16))
                        {
                            *(v0 + 8) = *(v0 + 8) + 1;
                            v9 = ((long long)*(v6));
                            v8 = ((long long)delim);
                        }
                        else
                        {
                            v9 = __uflow();
                            v8 = ((long long)delim);
                        }
                        if (*(v0 + 8) < *(v0 + 16) && ((int)delim) != ((int)*(*(v0 + 8))) || ((int)delim) != ((int)v9) && *(v0 + 8) >= *(v0 + 16))
                        {
                            v7 = ((int)line_delim);
                            if (((int)line_delim) == ((int)v9))
                            {
                                break;
                            }
                            else if (((int)v9) != -1)
                            {
                                v6 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v6) = v9;
                                }
                                else
                                {
                                    __overflow();
                                }
                            }
                            else
                            {
                                break;
                            }
                        }
                        if (*(v0 + 8) < *(v0 + 16) && ((int)delim) == ((int)*(*(v0 + 8))) || ((int)delim) == ((int)v9) && *(v0 + 8) >= *(v0 + 16))
                        {
                            break;
                        }
                    }
                    if (((int)v9) == -1 && ((int)line_delim) != ((int)v9))
                    {
                        v11 = ((int)line_delim);
                        v7 = v16;
                        v12 = 0;
                        v14 = 1;
                        v8 = ((long long)line_delim);
                    }
                    else if (((int)line_delim) == ((int)v9) && (*(v0 + 8) < *(v0 + 16) || ((int)delim) != ((int)v9)) && (*(v0 + 8) >= *(v0 + 16) || ((int)delim) != ((int)*(*(v0 + 8)))))
                    {
                        v8 = ((long long)v8);
                        tmp_1 = v8;
                    }
                }
            }
            else
            {
                if (...)
                {
                    while (true)
                    {
                        v6 = *(v0 + 8);
                        if (*(v0 + 8) < *(v0 + 16))
                        {
                            *(v0 + 8) = *(v0 + 8) + 1;
                            v9 = ((int)*(v6));
                        }
                        else
                        {
                            v9 = __uflow();
                        }
                        v8 = ((long long)delim);
                        v7 = ((long long)line_delim);
                        if (((int)line_delim) == v9)
                        {
                            break;
                        }
                    }
                    if (((int)line_delim) != v9 && ((int)delim) != v9)
                    {
                        v11 = ((int)line_delim);
                        v7 = v16;
                        v12 = 0;
                        v14 = 1;
                        v8 = ((long long)line_delim);
                    }
                    else if (((int)line_delim) == v9 && ((int)delim) != v9)
                    {
                        v8 = ((long long)v8);
                        tmp_1 = v8;
                    }
                }
            }
            if (...)
            {
                v8 = ((long long)v8);
                tmp_1 = v8;
                v7 = v16;
                v8 = ((long long)v8);
                v11 = ((int)line_delim);
                v7 = v16;
                v12 = 0;
                v14 = 1;
                v8 = ((long long)line_delim);
                if (v9 == ((unsigned int)v8))
                {
                    v15 += 1;
                    current_rp = current_rp + 16;
                }
            }
            if (...)
            {
                v11 = ((long long)line_delim);
                v8 = ((long long)line_delim);
                v12 = ((char)(((int)line_delim) == v9));
                v14 = 0;
            }
            if (...)
            {
                v6 = ((char)(v6 == v8));
                v17 = ((long long)(((char)(v7 != v11)) | v6));
                if (((char)v17) == 0 && ((long long)v12) == 0)
                {
                    return rax<8>;
                }
            }
            if (...)
            {
                v6 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v6) = v8;
                }
                else
                {
                    __overflow();
                }
            }
            if (...)
            {
                if (((long long)v14) == 0)
                {
                    v6 = frp;
                    current_rp = frp;
                }
                else
                {
                    return rax<8>;
                }
            }
            if (...)
            {
                v15 = 1;
            }
        }
    }
}
