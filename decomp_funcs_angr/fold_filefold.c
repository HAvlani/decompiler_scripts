typedef struct struct_2 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_0 allocated_out.7203;
extern char break_spaces;
extern char have_read_stdin;
extern unsigned long long line_out.7202;
extern struct_0 stdin;
extern unsigned long long stdout[7];

int fold_file()
{
    unsigned int v0;  // [bp-0x50]
    char v1;  // [bp-0x49]
    unsigned long v10;  // rcx
    unsigned long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long v13;  // rbp
    unsigned int v14;  // rbp
    unsigned long v15;  // rsi
    char v16[2];  // rdi
    unsigned long long v17;  // r12
    struct_2 * v18;  // r13
    unsigned long long v19;  // r14
    char v2[2];  // [bp-0x48]
    unsigned long long v20;  // r15
    char|unsigned long long v21;  // cc_dep1
    struct_1 * v3;  // [bp-0x40]
    unsigned long long|char * v6;  // rax
    char *v8;  // rax

    v21 = ((char)v16[0]);
    v2 = v16;
    if (v21 == 45)
    {
        if (v16[1] == 0)
        {
            v18 = stdin;
            have_read_stdin = 1;
            v3 = __errno_location();
            if (stdin == 0)
            {
                quotearg_n_style_colon();
                error(0x0, v3->field_0, "%s");
                return 0;
            }
        }
    }
    if (v16[1] != 0 || v21 != 45)
    {
        v18 = fopen(v16, "r");
        v3 = __errno_location();
        if (v18 == 0)
        {
            quotearg_n_style_colon();
            error(0x0, v3->field_0, "%s");
            return 0;
        }
    }
    if (v16[1] != 0 && v18 != 0 || v21 != 45 && v18 != 0 || v16[1] == 0 && v21 == 45 && stdin != 0)
    {
        v17 = 0;
        fadvise();
        while (true)
        {
            v6 = v18->field_8;
            v13 = v17 + 1;
            v20 = line_out.7202;
            if (v17 + 1 >= allocated_out.7203)
            {
                v6 = x2realloc();
                line_out.7202 = v6;
                v20 = v6;
            }
            if (v1 != 10)
            {
                v1 = v12;
                v0 = ((int)v1);
                while (true)
                {
                    v19 = (long long)adjust_column();
                    if (v19 > v15)
                    {
                        if (break_spaces != 0)
                        {
                            v12 = v17;
                            while (true)
                            {
                                v13 = v12 - 1;
                                v6 = *(__ctype_b_loc());
                                v21 = ((long long)(*(v6 + ((long long)*(v20 + v12 + 1)) * 2) & 1));
                                if (((char)v21) == 0)
                                {
                                    v12 = v13;
                                }
                                else
                                {
                                    fwrite_unlocked(v20, 0x1, v12, stdout);
                                    v8 = *(stdout + 40);
                                    if (*(stdout + 40) < *(stdout + 48))
                                    {
                                        *(stdout + 40) = *(stdout + 40) + 1;
                                        *(v8) = 10;
                                    }
                                    else
                                    {
                                        __overflow();
                                    }
                                    v20 = line_out.7202;
                                    v17 = 0 - v12;
                                    memmove(line_out.7202, line_out.7202 + v12, 0 - v12);
                                    if (v17 != 0)
                                    {
                                        do
                                        {
                                            v19 = (long long)adjust_column();
                                        }
                                        while (v11 != v10);
                                        break;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            if (v12 != 0 && ((char)v21) != 0)
                            {
                                v19 = (long long)adjust_column();
                            }
                        }
                        if (v17 == 0)
                        {
                            v17 = 1;
                            *(v20) = v1;
                            v6 = v18->field_8;
                        }
                        else
                        {
                            *(r15<8> + v17) = 10;
                            v11 = v17 + 1;
                            v17 = 0;
                            fwrite_unlocked(r15<8>, 0x1, v11, stdout);
                        }
                    }
                    else
                    {
                        *(v20 + v17) = v1;
                        v17 += 1;
                        break;
                    }
                }
                if (v19 <= v15)
                {
                    v6 = v18->field_8;
                }
                else if (v17 == 0 && break_spaces == 0 && v19 > v15)
                {
                    v6 = __uflow(((int)v18));
                    if (v6 == -1)
                    {
                        break;
                    }
                }
                else if (v17 == 0 && break_spaces == 0 && v19 > v15)
                {
                    v18->field_8 = v6 + 1;
                    v12 = ((long long)*(v6));
                    /* goto 4205327; */
                }
            }
            if (v18->field_8 < v18->field_10)
            {
                v18->field_8 = v6 + 1;
                v12 = ((long long)*(v6));
                /* goto 4205327; */
            }
            else
            {
                v6 = __uflow(((int)v18));
            }
            *(v20 + v17) = 10;
            v17 = 0;
            fwrite_unlocked(v20, 0x1, v13, stdout);
        }
        ((unsigned int)v14) = ((long long)(((long long)(v18->field_0 & 32)) == 0? 0 : *(*(&stack_base-64))));
        if (v17 != 0)
        {
            fwrite_unlocked(line_out.7202, 0x1, v17, stdout);
        }
        if (v2[0] == 45)
        {
            if (v16[1] == 0)
            {
                clearerr_unlocked();
            }
        }
        if (v16[1] != 0 || v2[0] != 45)
        {
            v6 = rpl_fclose();
            if (v6 != 0)
            {
                if (((int)((unsigned int)v14)) == 0)
                {
                    v14 = ((int)v3->field_0);
                }
                else
                {
                    quotearg_n_style_colon();
                    error(0x0, ((unsigned int)v14), "%s");
                    return 0;
                }
            }
        }
        if (v6 == 0 || ((int)((unsigned int)v14)) == 0 || v16[1] == 0 && v2[0] == 45)
        {
            if (reg_56<4> == 0)
            {
                return 1;
            }
            quotearg_n_style_colon();
            error(0x0, ((unsigned int)v14), "%s");
            return 0;
        }
    }
}
