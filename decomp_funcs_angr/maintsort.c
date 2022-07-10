typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
} struct_5;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char field_18;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[17];
    char field_19;
    char padding_1a[14];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_2;

typedef struct struct_6 {
    struct struct_7 *field_0;
    unsigned long long field_8;
} struct_6;

typedef struct struct_3 {
    char padding_0[25];
    char field_19;
    char padding_1a[14];
    unsigned long long field_28;
} struct_3;

extern unsigned int g_407084;
extern unsigned int g_4070bd;
extern unsigned int g_4070fa;
extern unsigned int g_407115;
extern unsigned int g_407308;
extern unsigned int g_407390;
extern struct_2 *head;
extern struct_1 loop;
extern struct_1 n_strings;
extern struct_0 optind;
extern char usage;
extern unsigned long long zeros[6];

int main()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_14;  // tmp #14
    BOT tmp_12;  // tmp #12
    BOT tmp_3;  // tmp #3
    BOT tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x40]
    unsigned long v11;  // [bp-0x30]
    unsigned long v12;  // [bp-0x20]
    unsigned long v13;  // [bp-0x18]
    unsigned long v14;  // [bp-0x10]
    unsigned long v15;  // [bp-0x8]
    struct_2 *|unsigned long long [2]|unsigned long long|unsigned int v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19[6];  // rax
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v22;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdx
    unsigned long|char *|struct_6 *|unsigned long long [3] v29;  // rbx
    struct_5 * v3;  // [bp-0x80]
    char *|unsigned long long|unsigned int|unsigned long long [6]|struct_1 * v30;  // rsi
    char *|struct_3 *|unsigned int v31;  // rdi
    unsigned long|unsigned long long v32;  // r8
    unsigned long long v33;  // r9
    unsigned long long v34;  // r9
    unsigned long|struct_4 * v35;  // r12
    unsigned long long|unsigned int v36;  // r12
    unsigned long long v37;  // r12
    unsigned long long v38;  // r12
    unsigned long long v39;  // r12
    unsigned long long|unsigned int v4;  // [bp-0x78]
    unsigned long long v40;  // r12
    unsigned long long v41;  // r12
    unsigned long|unsigned long long v42;  // r13
    unsigned long|struct_1 *|unsigned int v43;  // r14
    unsigned long|unsigned long long|struct_4 *|struct_1 * v44;  // r15
    unsigned long long v45;  // cc_dep1
    struct_1 *v46;  // fs
    unsigned long v5;  // [bp-0x70]
    unsigned long v6;  // [bp-0x68]
    unsigned int v7;  // [bp-0x60]
    unsigned int v8;  // [bp-0x5c]
    char *v9;  // [bp-0x50]

    v15 = v44;
    v14 = v43;
    v13 = v42;
    v12 = v35;
    v11 = v29;
    v10 = *(v46 + 0x28);
    set_program_name();
    setlocale();
    bindtextdomain(&g_407084, &g_407308);
    textdomain(&g_407084);
    atexit();
    v2 = 0;
    v1 = "Mark Kettenis";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (v31 - optind <= 1)
    {
        if (((int)optind) != v31)
        {
            v29 = *(v30 + ((long long)optind) * 8);
            v31 = v29;
            v6 = v29;
            v8 = strcmp(v31, "-");
            v43 = v8;
            v3 = (long long)xzalloc();
            if (v43 != 0)
            {
                v22 = freopen_safer();
                if (v22 == 0)
                {
                    v39 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            v8 = 0;
            v3 = (long long)xzalloc();
            v6 = "-";
        }
        if (((int)optind) == v31 || v43 == 0 || v22 != 0)
        {
            fadvise();
            v5 = &stack_base-88;
            init_tokenbuffer();
            while (true)
            {
                v42 = 0;
                while (true)
                {
                    v17 = readtoken();
                    if (v17 != 18446744069414584319)
                    {
                        if (v17 != 0)
                        {
                            v44 = v3->field_10;
                            if (v3->field_10 == 0)
                            {
                                v44 = (long long)xzalloc();
                                if (v9 != 0)
                                {
                                    v44->field_0 = (long long)xstrdup();
                                }
                                v3->field_10 = v44;
                            }
                            else if (v9 != 0)
                            {
                                v29 = v3;
                                v35 = v3->field_10;
                                while (true)
                                {
                                    v30 = v44->field_0;
                                    if (v44->field_0 != 0)
                                    {
                                        __assert_fail(); /* do not return */
                                        v17 = strcmp(v9, v30);
                                        v30 = ((int)v17);
                                        tmp_15 = v17;
                                        v17 = (((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))? v44->field_8 : v44->field_10);
                                        if ((((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, t15, 0x0<64>, cc_ndep<8>))? v44->field_8 : v44->field_10) != 0)
                                        {
                                            v35 = (v44->field_18 != 0? v44 : r12<8>);
                                            v29 = (v44->field_18 != 0? v44 : rbx<8>);
                                            v44 = v17;
                                        }
                                        else
                                        {
                                            v4 = v30;
                                            v43 = (long long)xzalloc();
                                            v43->field_0 = (long long)xstrdup();
                                            if (((int)v4) >= 0)
                                            {
                                                v44->field_10 = v43;
                                            }
                                            else
                                            {
                                                v44->field_8 = v43;
                                            }
                                            v30 = v35->field_0;
                                            if (v35->field_0 != 0)
                                            {
                                                v17 = strcmp(v9, v30);
                                                v28 = v17;
                                                v45 = v17;
                                                if (((int)v17) != 0)
                                                {
                                                    v32 = (((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))? v35->field_8 : v35->field_10);
                                                    v27 = ((long long)(((int)(v28 >> 31)) | 1));
                                                    v44 = (((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))? v35->field_8 : v35->field_10);
                                                    if ((((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))? v35->field_8 : v35->field_10) != v43)
                                                    {
                                                        if (v32 != 0)
                                                        {
                                                            v33 = v44;
                                                            while (true)
                                                            {
                                                                v30 = *(v33);
                                                                v7 = ((int)v27);
                                                                v4 = v33;
                                                                if (v30 != 0)
                                                                {
                                                                    __assert_fail(); /* do not return */
                                                                    v17 = strcmp(v9, v30);
                                                                    if (((int)v17) != 0)
                                                                    {
                                                                        __assert_fail(); /* do not return */
                                                                        v34 = v4;
                                                                        v27 = ((long long)v7);
                                                                        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                                                                        {
                                                                            *(v34 + 24) = 1;
                                                                            v33 = *(v34 + 16);
                                                                        }
                                                                        else
                                                                        {
                                                                            *(v34 + 24) = 255;
                                                                            v33 = *(v34 + 8);
                                                                        }
                                                                        __assert_fail(); /* do not return */
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        __assert_fail(); /* do not return */
                                                    }
                                                    if ((((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))? v35->field_8 : v35->field_10) == v43 || v32 != 0)
                                                    {
                                                        v17 = ((long long)v35->field_18);
                                                        if (((long long)v35->field_18) != 0)
                                                        {
                                                            v31 = ((int)(0 - ((int)v27)));
                                                            if (((int)v17) != 0 - ((int)v27))
                                                            {
                                                                if (((int)v27) != ((int)*(v44 + 24)))
                                                                {
                                                                    v18 = *(v44 + 8);
                                                                    v30 = *(v44 + 16);
                                                                    if (((int)v27) != -1)
                                                                    {
                                                                        *(v44 + 8) = *(v30 + 16);
                                                                        tmp_14 = *(v30 + 8);
                                                                        *(v30 + 16) = v44;
                                                                        v35->field_10 = tmp_14;
                                                                        v30 = v18;
                                                                        *(v18 + 8) = v35;
                                                                    }
                                                                    else
                                                                    {
                                                                        *(v44 + 16) = *(v30 + 8);
                                                                        v18 = *(v30 + 16);
                                                                        *(v30 + 8) = v44;
                                                                        v35->field_8 = v18;
                                                                        *(v30 + 16) = v35;
                                                                    }
                                                                    v35->field_18 = 0;
                                                                    *(v44 + 24) = 0;
                                                                    v17 = ((int)*(v30 + 24));
                                                                    if (((int)v27) == ((int)*(v30 + 24)))
                                                                    {
                                                                        v27 = ((long long)(0 - ((int)v27)));
                                                                        tmp_12 = v27;
                                                                        v35->field_18 = tmp_12;
                                                                    }
                                                                    else if (v31 == v17)
                                                                    {
                                                                        *(v44 + 24) = v27;
                                                                    }
                                                                    *(v30 + 24) = 0;
                                                                }
                                                                else
                                                                {
                                                                    if (!(((char)(((int)v27) + 1 == 0))))
                                                                    {
                                                                        v35->field_10 = *(v44 + 8);
                                                                        *(v44 + 8) = v35;
                                                                    }
                                                                    else
                                                                    {
                                                                        v35->field_8 = *(v44 + 16);
                                                                        *(v44 + 16) = v35;
                                                                    }
                                                                    *(v44 + 24) = 0;
                                                                    v30 = v44;
                                                                    v35->field_18 = 0;
                                                                }
                                                                if (v35 != v29[2])
                                                                {
                                                                    v29[1] = v30;
                                                                }
                                                                else
                                                                {
                                                                    v29[2] = v30;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        if (((long long)v35->field_18) == 0 || ((int)v17) == 0 - ((int)v27))
                                                        {
                                                            v27 = ((long long)(v27 + v17));
                                                            tmp_14 = v27;
                                                            v35->field_18 = tmp_14;
                                                            break;
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    __assert_fail(); /* do not return */
                                                }
                                            }
                                            else
                                            {
                                                __assert_fail(); /* do not return */
                                            }
                                        }
                                    }
                                }
                                if (...)
                                {
                                    v17 = strcmp(*(v42), *(v44));
                                    if (v17 == 0)
                                    {
                                        break;
                                    }
                                }
                                else if (...)
                                {
                                    v42 = r15<8>;
                                }
                            }
                            else
                            {
                                __assert_fail(); /* do not return */
                            }
                            if (v3->field_10 == 0 || v9 != 0)
                            {
                                if (v42 == 0)
                                {
                                    v42 = r15<8>;
                                }
                                else
                                {
                                    v17 = strcmp(*(v42), *(v44));
                                    *(v44 + 32) = *(v44 + 32) + 1;
                                    v17 = xmalloc();
                                    v27 = *(v42 + 48);
                                    v17[0] = v44;
                                    v17[1] = v27;
                                    *(v42 + 48) = v17;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    else
                    {
                        if (v42 == 0)
                        {
                            if (v3->field_10 != 0)
                            {
                                recurse_tree();
                            }
                            v36 = 1;
                            while (n_strings != 0)
                            {
                                if (v3->field_10 != 0)
                                {
                                    recurse_tree();
                                    v17 = head;
                                    if (head == 0)
                                    {
                                        v27 = n_strings;
                                    }
                                }
                                else
                                {
                                    v17 = head;
                                }
                                if (head != 0)
                                {
                                    do
                                    {
                                        v29 = v17->field_30;
                                        puts(v17->field_0);
                                        v31 = head;
                                        v32 = 0;
                                        v30 = zeros;
                                        v27 = n_strings - 1;
                                        *(head + 25) = 1;
                                        n_strings = n_strings - 1;
                                        if (v29 != 0)
                                        {
                                            do
                                            {
                                                v19 = v29->field_0;
                                                tmp_3 = v29->field_0->field_20;
                                                v29->field_0->field_20 = v29->field_0->field_20 - 1;
                                                if (tmp_3 == 1)
                                                {
                                                    v30[5] = v30;
                                                    v32 = 1;
                                                    v30 = v19;
                                                }
                                                v29 = v29->field_8;
                                            }
                                            while (v29 != 0);
                                            if (((long long)v32) != 0)
                                            {
                                                zeros = v30;
                                            }
                                        }
                                        v17 = v31->field_28;
                                        head = v31->field_28;
                                    }
                                    while (v17 != 0);
                                }
                                if (rdx<8> == 0 && (head != 0 || v3->field_10 != 0))
                                {
                                    break;
                                }
                                v36 = (long long)quotearg_n_style_colon();
                                v36 = 0;
                                error(0x0, 0x0, dcgettext(0x0, &g_4070fa, 0x5));
                                do
                                {
                                    if (v3->field_10 != 0)
                                    {
                                        recurse_tree();
                                    }
                                }
                                while (loop != 0);
                            }
                            if (rpl_fclose() == 0)
                            {
                                v41 = ((long long)(v36 ^ 1));
                                tmp_11 = v41;
                                exit(((int)tmp_11)); /* do not return */
                            }
                            else if (v8 == 0)
                            {
                                v37 = dcgettext(0x0, &g_407115, 0x5);
                                error(0x1, *(__errno_location()), "%s");
                            }
                            else
                            {
                                v37 = (long long)quotearg_n_style_colon();
                                error(0x1, *(__errno_location()), "%s");
                            }
                        }
                        else
                        {
                            v38 = (long long)quotearg_n_style_colon();
                            error(0x1, 0x0, dcgettext(0x0, &g_407390, 0x5));
                        }
                    }
                }
            }
        }
    }
    else
    {
        v40 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_4070bd, 0x5));
        usage(); /* do not return */
    }
}
