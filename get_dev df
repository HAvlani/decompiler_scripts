typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
    char field_20;
    char padding_21[15];
    unsigned long long field_30;
    char field_38;
} struct_2;

typedef struct struct_5 {
    char padding_0[24];
    unsigned long long field_18;
    char field_20;
} struct_5;

typedef struct struct_1 {
    char padding_0[48];
    unsigned long long field_30;
    char field_38;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_6 {
    uint128_t field_0;
    uint128_t field_10;
    uint128_t field_20;
    unsigned long long field_30;
} struct_6;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_7 {
    unsigned int field_0;
} struct_7;

typedef struct struct_9 {
    char padding_0[8];
    unsigned long long field_8;
} struct_9;

typedef struct struct_8 {
    char padding_0[40];
    char field_28;
} struct_8;

extern struct_0 columns;
extern unsigned int exit_status;
extern char file_systems_processed;
extern char g_405ba2;
extern char g_405bbd;
extern char g_405bc9;
extern char g_405c50;
extern char g_405c58;
extern char g_405ca7;
extern char g_405cb8;
extern char g_405cd1;
extern char g_405cf8;
extern char g_405e3d;
extern char g_405e5e;
extern unsigned int g_411028;
extern char g_412dbe;
extern struct_0 g_4183a8;
extern struct_0 g_4183b0;
extern struct_0 g_4183b8;
extern char g_4183c0;
extern struct_0 g_4183c8;
extern struct_0 g_4183d0;
extern struct_0 ncolumns;
extern struct_0 nrows;
extern struct_0 output_block_size;
extern char print_grand_total;
extern char show_all_fs;
extern char show_listed_fs;
extern char show_local_fs;
extern struct_0 table;

int get_dev()
{
    BOT tmp_46;  // tmp #46
    BOT tmp_27;  // tmp #27
    unsigned long|struct_0 *|struct_8 * v0;  // [bp-0x448]
    unsigned int v1;  // [bp-0x440]
    unsigned long long v10;  // [bp-0x3e8]
    unsigned long v11;  // [bp-0x3e0]
    unsigned long long v12;  // [bp-0x3d8]
    unsigned long|unsigned long long v13;  // [bp-0x3d0]
    char v14;  // [bp-0x3c8]
    unsigned long long v15;  // [bp-0x3c0]
    unsigned long|unsigned long long v16;  // [bp-0x3b8]
    char v17;  // [bp-0x3b0]
    unsigned long long v18;  // [bp-0x3a8]
    unsigned long long v19;  // [bp-0x3a0]
    char v2;  // [bp-0x439]
    unsigned long long v20;  // [bp-0x398]
    unsigned long long v21;  // [bp-0x390]
    char v22;  // [bp-0x388]
    unsigned long long v23;  // [bp-0x380]
    unsigned long|unsigned long long v24;  // [bp-0x378]
    char v25;  // [bp-0x370]
    char v26;  // [bp-0x368]
    unsigned long v27;  // [bp-0x40]
    BOT|unsigned long long v3;  // [bp-0x428]
    unsigned long v30;  // [bp+0x0]
    unsigned long v31;  // [bp+0x8]
    unsigned long long v32;  // [bp+0x10]
    unsigned long|unsigned int v33;  // [bp+0x18]
    unsigned long long v34;  // rax
    unsigned long long|struct_9 *|unsigned int v35;  // eax
    unsigned long|unsigned long long v36;  // rax
    char *|unsigned long long v37;  // rax
    unsigned long long v4;  // [bp-0x420]
    struct_5 *|struct_1 *|unsigned long long|struct_3 *|unsigned long v41;  // rcx
    unsigned long long v42;  // rcx
    unsigned long long|char v43;  // rdx
    struct_7 *v45;  // rbx
    char *v46;  // rbp
    char *|unsigned long long v47;  // rsi
    unsigned long|char *|unsigned long long v48;  // rdi
    unsigned long|unsigned long long v49;  // r8
    unsigned long long v5;  // [bp-0x418]
    unsigned long long|char v50;  // r9
    char *|unsigned long long v51;  // r13
    unsigned long long|struct_6 * v53;  // r14
    unsigned long long v54;  // r15
    unsigned long long|char v55;  // cc_dep1
    struct_0 *v56;  // fs
    unsigned long long v6;  // [bp-0x410]
    BOT|char v7;  // [bp-0x408]
    uint128_t v72;  // xmm4
    unsigned long long v73;  // xmm7
    unsigned long|unsigned long long v8;  // [bp-0x400]
    unsigned long long v9;  // [bp-0x3f8]

    /* goto 4217939; */
    v34 = ((long long)v41->field_20);
    v34 = ((long long)v41->field_38);
    v51 = v48;
    v46 = v47;
    tmp_46 = ((long long)v33);
    v0 = v41;
    v54 = ((long long)((int)v31));
    v53 = v32;
    v1 = ((int)tmp_46);
    tmp_27 = v54;
    rsp<8> = rsp<8> - 8;
    v30 = &g_405cb8;
    v33 = (long long)xstrdup();
    rsp<8> = rsp<8> - 8;
    v30 = &g_405cd1;
    v33 = (long long)xstrdup();
    rsp<8> = rsp<8> - 8;
    v30 = &g_405cf8;
    v33 = (long long)xstrdup();
    if (v41->field_30 <= 18446744069414584317)
    {
        /* goto 4217913; */
    }
    if (v41->field_10 <= 18446744069414584317)
    {
        rsp<8> = rsp<8> - 8;
        v30 = &g_405ca7;
        v48 = (long long)df_readable.part.0();
        /* goto 4217939; */
    }
    if (((long long)tmp_27) != 0)
    {
        if (show_local_fs != 0)
        {
            return v27 ^ *(v56 + 0x28);
        }
    }
    if (v41->field_30 <= 18446744069414584317 || v41->field_18 <= 18446744069414584317 || ((long long)v34) != 0)
    {
        rsp<8> = rsp<8> - 8;
        v30 = &g_405c50;
        v48 = (long long)df_readable.part.0();
        /* goto 4217939; */
    }
    if (show_local_fs == 0 || ((long long)tmp_27) == 0)
    {
        if (((long long)v50) != 0)
        {
            if (show_all_fs == 0)
            {
                if (show_listed_fs != 0)
                {
                    /* goto 4216928; */
                }
                else
                {
                    return v27 ^ *(v56 + 0x28);
                }
            }
        }
        if (((long long)v35) != 0)
        {
            if (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0)
            {
                v35 = excluded_fstype();
                if (((long long)v35) == 0)
                {
                    v2 = ((char)(v32 == 0));
                    if (v47 != 0)
                    {
                        if (((long long)v2) != 0)
                        {
                            if (*(v47) == 47)
                            {
                                v0 = (v0 == 0? v47 : v0);
                                /* goto 4217015; */
                            }
                            else
                            {
                                return v27 ^ *(v56 + 0x28);
                            }
                        }
                    }
                }
                else
                {
                    return v27 ^ *(v56 + 0x28);
                }
            }
        }
        else
        {
            if (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0)
            {
                return v27 ^ *(v56 + 0x28);
            }
        }
    }
    rsp<8> = rsp<8> - 8;
    v30 = &g_405c58;
    v33 = (long long)xstrdup();
    if (show_local_fs == 0 && ((long long)v50) == 0 || ((long long)v50) == 0 && ((long long)tmp_27) == 0 || show_local_fs == 0 && show_listed_fs != 0 || show_local_fs == 0 && show_all_fs != 0 || ((long long)tmp_27) == 0 && show_listed_fs != 0 || ((long long)tmp_27) == 0 && show_all_fs != 0)
    {
        v35 = selected_fstype();
    }
    if (((long long)v35) == 0 && ((long long)v35) != 0 && (show_local_fs == 0 || ((long long)tmp_27) == 0) && (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0) && v47 == 0 || ((long long)v35) == 0 && ((long long)v35) != 0 && v47 != 0 && (show_local_fs == 0 || ((long long)tmp_27) == 0) && (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0) && ((long long)v2) == 0)
    {
        if (v0 == 0)
        {
            v0 = (v46 == 0? v48 : v46);
        }
    }
    if ((((long long)v35) == 0 && ((long long)v35) != 0 && (show_local_fs == 0 || ((long long)tmp_27) == 0) && (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0) && v47 == 0 || ((long long)v35) == 0 && ((long long)v35) != 0 && v47 != 0 && (show_local_fs == 0 || ((long long)tmp_27) == 0) && (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0) && ((long long)v2) == 0) && v0 == 0 || (((long long)v35) == 0 && ((long long)v35) != 0 && (show_local_fs == 0 || ((long long)tmp_27) == 0) && (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0) && v47 == 0 || ((long long)v35) == 0 && ((long long)v35) != 0 && v47 != 0 && (show_local_fs == 0 || ((long long)tmp_27) == 0) && (((long long)v50) == 0 || show_listed_fs != 0 || show_all_fs != 0) && ((long long)v2) == 0) && v0 != 0)
    {
        if (v32 != 0)
        {
            ((unsigned long long)v73) = v53->field_10;
            v72 = v53->field_20;
            v35 = v53->field_30;
            v3 = v53->field_0;
            v55 = ((long long)*((long long *)(((char *)&v3) + 8)));
            v9 = v35;
            ((unsigned long long)v5) = ((unsigned long long)v73);
            v7 = v72;
            if (v55 == 0)
            {
                if (show_all_fs == 0)
                {
                    if (show_listed_fs == 0)
                    {
                        return v27 ^ *(v56 + 0x28);
                    }
                }
            }
        }
    }
    if (...)
    {
        v35 = get_fs_usage();
        if (!(v35 == 0))
        {
            v45 = __errno_location();
            if (((char)v1) != 0)
            {
                v35 = ((int)v45->field_0);
                if (v45->field_0 != 13)
                {
                    if (v35 != 2)
                    {
                        quotearg_n_style_colon();
                        error(0x0, v45->field_0, "%s");
                        exit_status = 1;
                        return v27 ^ *(v56 + 0x28);
                    }
                }
            }
            quotearg_n_style_colon();
            error(0x0, v45->field_0, "%s");
            exit_status = 1;
            return v27 ^ *(v56 + 0x28);
        }
        else if (((char)v1) != 0)
        {
            if (show_all_fs == 0)
            {
            }
            else
            {
                v35 = __xstat(0x1, ((int)v0), ((int)&v26));
                if (v35 == 0)
                {
                    v35 = devlist_for_dev();
                    if (v35 != 0)
                    {
                        v43 = v35->field_8;
                        if (v35->field_8 != 0)
                        {
                            v48 = v0->field_0;
                            v0 = v43;
                            v35 = strcmp(v48, v51);
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        if (show_all_fs == 0)
        {
            return v27 ^ *(v56 + 0x28);
        }
        v7 = 0;
        v9 = 18446744069414584319;
        v8 = 18446744069414584319;
        v6 = 18446744069414584319;
        v5 = 18446744069414584319;
        v4 = 18446744069414584319;
        v3 = 18446744069414584319;
        /* goto 4217090; */
    }
    if (...)
    {
        v7 = 0;
        v9 = 18446744069414584319;
        v8 = 18446744069414584319;
        v6 = 18446744069414584319;
        v5 = 18446744069414584319;
        v4 = 18446744069414584319;
        v3 = 18446744069414584319;
    }
    if (...)
    {
        if (show_listed_fs != 0)
        {
        }
        else
        {
            return v27 ^ *(v56 + 0x28);
        }
    }
    if (...)
    {
        file_systems_processed = 1;
    }
    if (...)
    {
        alloc_table_row();
        v37 = xstrdup();
        v55 = ((char)((char)v1));
        v0 = v37;
        v54 = v37;
        if (v55 != 0)
        {
            v37 = strlen(v37);
            if (v37 > 36)
            {
                v37 = strspn(((int)(v54 + v37 - 36)), &g_411028);
                if (v37 != 36)
                {
                }
                else
                {
                    v53 = (long long)canonicalize_filename_mode();
                    if (v0 != 0)
                    {
                        rpl_free();
                        v0 = v53;
                    }
                }
            }
        }
    }
    if (...)
    {
        v48 = *((long long *)(((char *)&v7) + 8));
        v19 = 1;
        v36 = v9;
        v18 = 1;
        v20 = v48;
        v23 = v36;
        v21 = v36;
        v22 = 0;
        v24 = 18446744069414584319;
        v25 = 0;
        if (v36 <= 18446744069414584317)
        {
            if (*((long long *)(((char *)&v7) + 8)) <= 18446744069414584317)
            {
                v24 = *((long long *)(((char *)&v7) + 8)) - v9;
                v25 = ((char)(v20 < v36));
            }
        }
    }
    if (...)
    {
        v49 = *((long long *)(((char *)&v5) + 8));
        v43 = output_block_size;
        v16 = 18446744069414584319;
        v50 = ((long long)v3);
        v42 = ((long long)*((long long *)(((char *)&v3) + 8)));
        v17 = 0;
        v47 = v5;
        v11 = output_block_size;
        v43 = ((char)(v13 <= 18446744069414584317)) & v7;
        v10 = v50;
        v12 = v42;
        v13 = v49;
        v15 = v47;
        v14 = v43;
        if (v12 <= 18446744069414584317)
        {
            if (v5 <= 18446744069414584317)
            {
                v16 = ((long long)*((long long *)(((char *)&v3) + 8))) - v5;
                v17 = ((char)(v12 < v15));
            }
        }
    }
    if (...)
    {
        if (print_grand_total != 0)
        {
            if (v2 != 0)
            {
                if (*((long long *)(((char *)&v7) + 8)) <= 18446744069414584317)
                {
                    g_4183c8 = g_4183c8 + *((long long *)(((char *)&v7) + 8));
                }
            }
        }
    }
    if (...)
    {
        if (v9 <= 18446744069414584317)
        {
            g_4183d0 = g_4183d0 + v9;
        }
    }
    if (...)
    {
        if (((long long)*((long long *)(((char *)&v3) + 8))) <= 18446744069414584317)
        {
            g_4183a8 = g_4183a8 + ((long long)v3) * ((long long)*((long long *)(((char *)&v3) + 8)));
        }
    }
    if (...)
    {
        if (v5 <= 18446744069414584317)
        {
            g_4183b0 = g_4183b0 + ((long long)v3) * v5;
        }
    }
    if (...)
    {
        if (*((long long *)(((char *)&v5) + 8)) <= 18446744069414584317)
        {
            v42 = ((long long)g_4183c0);
            v49 = ((long long)v3) * *((long long *)(((char *)&v5) + 8));
            v36 = g_4183b8;
            if (g_4183c0 != (((char)(*((long long *)(((char *)&v5) + 8)) <= 18446744069414584317)) & v7))
            {
                v36 = (((long long)v42) != 0? 0 - v36 : v36);
                v49 = (((long long)v43) != 0? 0 - v49 : v49);
                if ((((long long)v43) != 0? 0 - ((long long)v3) * *((long long *)(((char *)&v5) + 8)) : ((long long)v3) * *((long long *)(((char *)&v5) + 8))) < (((long long)v42) != 0? 0 - g_4183b8 : g_4183b8))
                {
                    v36 -= v49;
                    g_4183b8 = v36;
                }
                else
                {
                    v49 -= v36;
                    g_4183c0 = v43;
                    v42 = rdx<8>;
                    g_4183b8 = v49;
                }
            }
            else
            {
                g_4183b8 = ((long long)v3) * *((long long *)(((char *)&v5) + 8)) + g_4183b8;
                /* goto 4217479; */
            }
        }
    }
    if (...)
    {
        if (((long long)v42) != 0)
        {
            g_4183b8 = 0 - g_4183b8;
        }
    }
    if (...)
    {
        v51 = 0;
        v41 = columns;
        if (ncolumns != 0)
        {
        }
        else
        {
            rpl_free();
            return v27 ^ *(v56 + 0x28);
        }
    }
}
