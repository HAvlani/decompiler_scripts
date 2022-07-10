typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[36];
    unsigned long long field_58;
    char padding_60[72];
    unsigned int field_a8;
    unsigned int field_ac;
    unsigned long long field_b0;
    char field_b8;
    char field_b9;
    char padding_ba[2];
    unsigned int field_bc;
    char field_c0;
    char padding_c1[3];
    unsigned int field_c4;
} struct_3;

typedef struct struct_4 {
    char padding_0[1];
    char field_1;
} struct_4;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char UNKNOWN_SECURITY_CONTEXT;
extern char align_variable_outer_quotes;
extern char any_has_acl;
extern struct_1 author_width;
extern struct_1 block_size_width;
extern char check_symlink_mode;
extern char color_symlink_as_referent;
extern struct_0 cwd_file;
extern struct_0 cwd_n_alloc;
extern struct_0 cwd_n_used;
extern char cwd_some_quoted;
extern struct_1 dereference;
extern struct_1 file_size_width;
extern struct_1 format;
extern char format_needs_stat;
extern char format_needs_type;
extern char g_40ada9;
extern char g_40addc;
extern char g_40ae31;
extern <missing-type> g_40aee2;
extern char g_40b0c1;
extern char g_40b0cb;
extern char g_40b123;
extern char g_40b14d;
extern char g_40b155;
extern char g_40b1a7;
extern char g_40b1af;
extern char g_40b1d8;
extern char g_40b1e0;
extern char g_40b22c;
extern char g_40b247;
extern char g_40b260;
extern char g_40b297;
extern char g_40b2a4;
extern char g_40b2f6;
extern char g_40b329;
extern char g_40b356;
extern char g_40b376;
extern char g_40b38a;
extern <missing-type> g_40b3a0;
extern <missing-type> g_40b3a8;
extern char g_40b462;
extern char g_40b46c;
extern char g_40b548;
extern char g_40b5a1;
extern char g_40b5c4;
extern char g_40b5d8;
extern char g_40b5e2;
extern char g_40b606;
extern char g_40b611;
extern char g_40b640;
extern char g_40b68b;
extern char g_40b722;
extern char g_40b748;
extern char g_40b768;
extern char g_40b805;
extern char g_40b821;
extern char g_40b834;
extern char g_40b89d;
extern char g_40b8b4;
extern char g_40b935;
extern char g_40b948;
extern char g_40b95b;
extern char g_40b980;
extern char g_40b9e3;
extern char g_40b9f5;
extern char g_40ba18;
extern unsigned int g_418ae1;
extern unsigned int g_418af9;
extern unsigned int g_418b0a;
extern struct_1 group_width;
extern char immediate_dirs;
extern struct_1 indicator_style;
extern struct_1 inode_number_width;
extern struct_1 major_device_number_width;
extern struct_1 minor_device_number_width;
extern struct_1 nlink_width;
extern char numeric_ids;
extern struct_1 owner_width;
extern char print_author;
extern char print_block_size;
extern char print_group;
extern char print_hyperlink;
extern char print_inode;
extern char print_owner;
extern char print_scontext;
extern char print_with_color;
extern struct_1 scontext_width;
extern struct_0 unsupported_device.10752;
extern struct_1 *unsupported_device.10758;
extern struct_1 *unsupported_device.10764;

int gobble_file.constprop.0()
{
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x13b8]
    unsigned long v1;  // [bp-0x410]
    unsigned long v10;  // [bp-0x3c8]
    unsigned long v11;  // [bp-0x3c0]
    unsigned long v12;  // [bp-0x3b8]
    unsigned long v13;  // [bp-0x3b0]
    char v14;  // [bp-0x399]
    unsigned int|char|unsigned long|unsigned long long v15;  // [bp-0x398]
    unsigned int|char v16;  // [bp-0x390]
    unsigned int v17;  // [bp-0x38c]
    unsigned int v18;  // [bp-0x370]
    unsigned long v19;  // [bp-0x18]
    unsigned long v2;  // [bp-0x408]
    unsigned long v20;  // [bp-0x10]
    unsigned long v21;  // [bp-0x8]
    unsigned long long|unsigned long|unsigned int|char *|struct_1 * v23;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v29;  // rax
    unsigned long v3;  // [bp-0x400]
    char *|struct_4 *|unsigned long long v32;  // rcx
    unsigned long long v34;  // rcx
    unsigned int|unsigned long long v35;  // edx
    struct_3 *v36;  // rbx
    unsigned long|struct_0 *|unsigned long long v37;  // rsi
    unsigned int v38;  // esi
    char *|struct_0 *|unsigned long long v39;  // rdi
    unsigned long v4;  // [bp-0x3f8]
    struct_0 * v40;  // rdi
    char *v41;  // rdi
    unsigned long long v42;  // r8
    char *|unsigned long long v43;  // r9
    char *v45;  // r12
    unsigned int|char *|unsigned long|struct_1 * v46;  // r13
    char *v47;  // r14
    unsigned long|unsigned long long v48;  // r14
    unsigned long long v49;  // r14
    unsigned long v5;  // [bp-0x3f0]
    unsigned int|unsigned long|unsigned long long v50;  // r15d
    unsigned long v51;  // d
    unsigned long v6;  // [bp-0x3e8]
    unsigned long v7;  // [bp-0x3e0]
    unsigned long v8;  // [bp-0x3d8]
    unsigned long v9;  // [bp-0x3d0]

    v50 = v34;
    v46 = v38;
    v45 = v41;
    rsp<8> = &stack_base-936;
    v17 = ((int)v35);
    v37 = cwd_n_used;
    v40 = cwd_file;
    if (cwd_n_used == cwd_n_alloc)
    {
        rsp<8> = &stack_base-944;
        v23 = xreallocarray();
        v37 = cwd_n_used;
        cwd_n_alloc = cwd_n_alloc * 2;
        cwd_file = v23;
        v40 = v23;
    }
    v36 = v40 + v37 * 208;
    *(v40 + v37 * 208) = 0;
    *(v40 + v37 * 208 + 200) = 0;
    v39 = v40 + v37 * 208 + 8 & 18446744069414584312;
    for (v32 = ((long long)(((int)(v36 - v39)) + 208)) >> 3; v32 != 0; v39 += v51 * 8)
    {
        v32 -= 1;
        v39->field_0 = 0;
    }
    v36->field_20 = 0;
    v36->field_a8 = v46;
    v36->field_c4 = -1;
    if (cwd_some_quoted == 0)
    {
        if (align_variable_outer_quotes != 0)
        {
            rsp<8> = &stack_base-944;
            v23 = needs_quoting();
            v36->field_c4 = ((int)v23);
            if (((long long)v23) != 0)
            {
                cwd_some_quoted = 1;
            }
        }
    }
    v42 = ((long long)print_hyperlink);
    if (((char)v17) != 0)
    {
        v35 = ((long long)*(v47));
        v47 = v45;
        if (*(v45) != 47)
        {
            v37 = ((long long)*(v32));
        }
        if (...)
        {
            v15 = ((int)v15);
            rsp<8> = rsp<8> - 8;
            v12 = &g_40b2f6;
            v23 = do_statx();
            if (v15 != 2)
            {
                if (v23 >= 0)
                {
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v11 = &g_40b805;
                    v23 = __errno_location();
                    if (v23->field_0 != 2)
                    {
                        rsp<8> = rsp<8> - 8;
                        v11 = &g_40b821;
                        dcgettext(0x0, &g_418af9, 0x5);
                        v48 = 0;
                        rsp<8> = rsp<8> - 8;
                        v10 = &g_40b834;
                        file_failure();
                        v36->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
                        v25 = v48;
                        return v25;
                    }
                }
            }
        }
    }
    else if (!(((long long)print_hyperlink) == 0))
    {
        v35 = ((long long)*(v47));
        if (*(v47) == 47)
        {
            /* goto 4240201; */
        }
        else
        {
            v37 = ((long long)*(v32));
            if (((long long)*(v32)) != 0)
            {
                /* goto 4239401; */
            }
        }
    }
    else if (format_needs_stat == 0)
    {
        if (v46 == 3)
        {
            if (print_with_color != 0)
            {
                v15 = print_hyperlink;
                v23 = is_colored();
                if (((long long)v23) == 0)
                {
                    v23 = is_colored();
                    if (((long long)v23) == 0)
                    {
                        v23 = is_colored();
                        v42 = ((long long)v15);
                    }
                }
            }
        }
        if (print_with_color == 0 || v46 != 3 || ((long long)v23) == 0 && ((long long)v23) == 0 && ((long long)v23) == 0)
        {
            if (!(((long long)print_inode) == 0))
            {
                v35 = ((char)(v46 == 0));
            }
            else if (format_needs_type != 0)
            {
                v35 = v32;
            }
        }
    }
    if (...)
    {
        if (!(dereference != 4))
        {
            v35 = ((long long)*(v47));
            if (*(v47) == 47)
            {
                rsp<8> = &stack_base-944;
                v42 = (long long)calc_req_mask();
                /* goto 4239898; */
            }
        }
        else if (color_symlink_as_referent == 0)
        {
            if (check_symlink_mode == 0)
            {
                if (((long long)print_inode) == 0)
                {
                    if (format_needs_type != 0)
                    {
                        if (((long long)v35) == 0)
                        {
                            /* goto 4239227; */
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        v48 = 0;
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v36->field_0 = (long long)xstrdup();
        v25 = v48;
        return v25;
    }
    if (...)
    {
        v48 = 0;
        if (v46 != 5)
        {
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v36->field_0 = (long long)xstrdup();
            v25 = v48;
            return v25;
        }
        else if (indicator_style != 3)
        {
            v15 = v42;
            if (print_with_color == 0)
            {
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40aee2;
                cwd_n_used = cwd_n_used + 1;
                v36->field_0 = (long long)xstrdup();
                v25 = v48;
                return v25;
            }
            v23 = is_colored();
            if (((long long)v23) == 0)
            {
                v23 = is_colored();
                if (((long long)v23) == 0)
                {
                    v23 = is_colored();
                    if (((long long)v23) == 0)
                    {
                        v23 = is_colored();
                        if (((long long)v23) == 0)
                        {
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_40aee2;
                            cwd_n_used = cwd_n_used + 1;
                            v36->field_0 = (long long)xstrdup();
                            v25 = v48;
                            return v25;
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        v35 = ((long long)*(NULL));
    }
    if (...)
    {
        v37 = ((long long)*(v32));
    }
    if (...)
    {
        v14 = v42;
        v16 = v35;
        v15 = v37;
        v49 = strlen(v47);
        rsp<8> = &stack_base-944;
        v26 = strlen(v32);
        v42 = ((long long)v14);
        v37 = ((long long)v15);
        v23 = &stack_base-936 - (v49 + v26 + 25 & 0xfffffffefffff000);
        for (v35 = ((long long)v16); rsp<8> != v23; v12 = v0)
        {
            rsp<8> = rsp<8> - 0x1000;
        }
        v32 = ((long long)(((int)(v49 + v26 + 25 & 0xfffffffefffffff0)) & 4095));
        rsp<8> = rsp<8> - v32;
        if (v32 != 0)
        {
            v21 = v21;
        }
        v39 = ((long long)*(v32 + 1));
        v43 = rsp<8> + 15 & 0xfffffffefffffff0;
        v48 = rsp<8> + 15 & 0xfffffffefffffff0;
        if (v15 == 46)
        {
            v23 = v43;
        }
        if (v15 != 46 || ((long long)v39) != 0)
        {
            v32 = v50;
            while (true)
            {
                v23 = v43 + 1;
                v32 += 1;
                *(v43 + 1 + 1) = v37;
                if (((long long)v39) == 0)
                {
                    break;
                }
                v37 = v39;
                v39 = ((long long)v32->field_1);
                v43 = v23;
            }
            if (v32 < v32)
            {
                if (v32->field_1 != 47)
                {
                    *(v23) = 47;
                    v23 = v43 + 2;
                }
            }
        }
        if (((long long)v16) != 0)
        {
            v32 = v47;
            do
            {
                v32 += 1;
                *(rax<8> + None) = v35;
                v23 = rax<8> + 1;
                v35 = ((long long)*(v32));
            }
            while (((char)v35) != 0);
        }
        *(v23) = 0;
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v21 = &g_40b356;
        v23 = canonicalize_filename_mode();
        v36->field_10 = v23;
        if (v23 == 0)
        {
            rsp<8> = rsp<8> - 8;
            v20 = &g_40b376;
            dcgettext(0x0, &g_418ae1, 0x5);
            rsp<8> = rsp<8> - 8;
            v19 = &g_40b38a;
            file_failure();
        }
    }
    if (...)
    {
        v15 = dereference;
        rsp<8> = rsp<8> - 8;
        v13 = &g_40ada9;
        v42 = (long long)calc_req_mask();
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v12 = &g_40b22c;
        v23 = do_statx();
    }
    if (...)
    {
        if (v23 != 0)
        {
            rsp<8> = rsp<8> - 8;
            v11 = &g_40b821;
            dcgettext(0x0, &g_418af9, 0x5);
            v48 = 0;
            rsp<8> = rsp<8> - 8;
            v10 = &g_40b834;
            file_failure();
            v36->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
            v25 = v48;
            return v25;
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v11 = &g_40b329;
        v42 = (long long)calc_req_mask();
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v10 = &g_40addc;
        v23 = do_statx();
    }
    if (...)
    {
        v36->field_b8 = 1;
        if ((((short)v36->field_30) & 0xf000) == 0x8000 || v46 == 5)
        {
            if (print_with_color != 0)
            {
                rsp<8> = rsp<8> - 8;
                v11 = &g_40b297;
                v23 = is_colored();
                if (((long long)v23) != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v10 = &g_40b2a4;
                    v46 = v36->field_18;
                    *(__errno_location() + None) = 95;
                    if (False)
                    {
                        unsupported_device.10764 = v46;
                    }
                    v36->field_c0 = 0;
                }
            }
        }
        if (format == 0 || print_scontext != 0)
        {
            v32 = v36->field_18;
            v16 = ((int)format);
            v15 = v32;
            rsp<8> = rsp<8> - 8;
            v11 = &g_40ae31;
            *(v46) = 95;
            v46 = __errno_location();
            if (v15 != unsupported_device.10752)
            {
                unsupported_device.10752 = v15;
            }
            v36->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
            if (((int)v16) != 0)
            {
                v36->field_bc = 0;
            }
            else if (v15 != unsupported_device.10758)
            {
                v46->field_0 = 0;
                rsp<8> = rsp<8> - 8;
                v10 = &g_40b548;
                v29 = file_has_acl();
                if (v29 > 0)
                {
                    v36->field_bc = 2;
                    any_has_acl = 1;
                }
                else
                {
                    v35 = ((int)v46->field_0);
                    if ((((int)(((long long)v46->field_0) - 22)) & -17) == 0 || v35 == 95)
                    {
                        unsupported_device.10758 = v36->field_18;
                    }
                    v36->field_bc = 0;
                    if (v29 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v9 = &g_40b89d;
                        quotearg_n_style_colon();
                        v37 = ((long long)v46->field_0);
                        rsp<8> = rsp<8> - 8;
                        v8 = &g_40b8b4;
                        error(0x0, v37, "%s");
                    }
                }
                v23 = ((long long)(v36->field_30 & 0xf000));
            }
            else
            {
                v46->field_0 = 95;
                tmp_13 = ((long long)v36->field_30);
                v36->field_bc = 0;
                v23 = ((long long)(((int)tmp_13) & 0xf000));
                if ((((short)((int)tmp_13)) & 0xf000) == 0xa000)
                {
                    /* goto 4240789; */
                }
            }
        }
        if (((int)v16) != 0 || print_scontext == 0 && format != 0)
        {
            v23 = ((long long)(v36->field_30 & 0xf000));
        }
        if (...)
        {
            rsp<8> = rsp<8> - 8;
            v11 = &g_40b5a1;
            v36->field_8 = r13<8>;
            r13<8> = (long long)areadlink_with_size();
            if (r13<8> == 0)
            {
                rsp<8> = rsp<8> - 8;
                v10 = &g_40b9e3;
                dcgettext(0x0, &g_418b0a, 0x5);
                rsp<8> = rsp<8> - 8;
                v9 = &g_40b9f5;
                file_failure();
                v46 = v36->field_8;
                if (v36->field_8 == 0)
                {
                    /* goto 4240952; */
                }
            }
            if (v36->field_8 != 0 || r13<8> != 0)
            {
                if (*(v46) != 47)
                {
                    rsp<8> = rsp<8> - 8;
                    v10 = &g_40b5c4;
                    v50 = (long long)dir_len();
                    if (v50 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v9 = &g_40b5d8;
                        strlen(v39);
                        rsp<8> = rsp<8> - 8;
                        v8 = &g_40b5e2;
                        if (*(v48 + v50 + 1) != 47)
                        {
                            v50 = ((int)v50) + 1;
                        }
                        v15 = (long long)xmalloc();
                        rsp<8> = rsp<8> - 8;
                        v7 = &g_40b606;
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_40b611;
                        strcpy(stpncpy(((int)v15), ((int)v48), v50), v46);
                        v43 = v15;
                    }
                    else
                    {
                        rsp<8> = rsp<8> - 8;
                        v9 = &g_40b935;
                        v43 = (long long)xstrdup();
                    }
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v10 = &g_40ba18;
                    v43 = (long long)xstrdup();
                }
                if (v36->field_c4 == 0)
                {
                    v15 = v43;
                    rsp<8> = rsp<8> - 8;
                    v9 = &g_40b980;
                    v23 = needs_quoting();
                    v43 = v15;
                    if (((long long)v23) != 0)
                    {
                        v36->field_c4 = -1;
                    }
                }
                if (indicator_style > 1 || check_symlink_mode != 0)
                {
                    v15 = v43;
                    rsp<8> = rsp<8> - 8;
                    v9 = &g_40b68b;
                    v23 = do_statx();
                    if (v23 == 0)
                    {
                        v36->field_b9 = 1;
                        v36->field_ac = v18;
                    }
                }
            }
            rsp<8> = rsp<8> - 8;
            v9 = &g_40b640;
            rpl_free();
            v23 = ((int)(v36->field_30 & 0xf000));
        }
        if (...)
        {
            v36->field_a8 = 6;
            /* goto 4239007; */
        }
        if (...)
        {
            if (v23 != 0x4000)
            {
                v36->field_a8 = 5;
            }
            else
            {
                if (((char)v17) != 0)
                {
                    if (immediate_dirs == 0)
                    {
                        v36->field_a8 = 9;
                        /* goto 4239007; */
                    }
                }
                if (((char)v17) == 0 || immediate_dirs != 0)
                {
                    v36->field_a8 = 3;
                }
            }
        }
        v48 = v36->field_58;
        if (format == 0 || print_block_size != 0)
        {
            rsp<8> = rsp<8> - 8;
            v8 = &g_40b0c1;
            human_readable();
            rsp<8> = rsp<8> - 8;
            v7 = &g_40b0cb;
            v23 = gnu_mbswidth();
            if (block_size_width > block_size_width)
            {
                block_size_width = v23;
            }
        }
        if (format != 0)
        {
        }
        else
        {
            if (print_owner != 0)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_40b748;
                v23 = format_user_width();
                if (owner_width > owner_width)
                {
                    owner_width = v23;
                }
            }
            if (print_group != 0)
            {
                if (numeric_ids == 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40b948;
                    v39 = (long long)getgroup();
                    if (v39 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_40b95b;
                        v23 = gnu_mbswidth();
                        v23 = ((int)(v23 < 0? 0 : ((int)rax<8>)));
                    }
                }
                if (v39 == 0 || numeric_ids != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40b722;
                    v23 = __snprintf_chk();
                }
                if (group_width < v23)
                {
                    group_width = v23;
                }
            }
            if (print_author != 0)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_40b768;
                v23 = format_user_width();
                if (author_width > author_width)
                {
                    author_width = v23;
                }
            }
        }
        if (print_scontext != 0)
        {
            v39 = v36->field_b0;
            rsp<8> = rsp<8> - 8;
            v6 = &g_40b123;
            v23 = strlen(v39);
            if (scontext_width > scontext_width)
            {
                scontext_width = v23;
            }
        }
        if (format == 0 || print_scontext != 0)
        {
            if (format == 0)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_40b14d;
                rsp<8> = rsp<8> - 8;
                v5 = &g_40b155;
                if (nlink_width > nlink_width)
                {
                    nlink_width = strlen((long long)umaxtostr());
                }
                if ((((short)v36->field_30) & 0xb000) == 0x2000)
                {
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_40b1a7;
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_40b1af;
                    if (major_device_number_width > major_device_number_width)
                    {
                        major_device_number_width = strlen((long long)umaxtostr());
                    }
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_40b1d8;
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_40b1e0;
                    v23 = strlen((long long)umaxtostr());
                    v35 = ((long long)minor_device_number_width);
                    if (((int)minor_device_number_width) > minor_device_number_width)
                    {
                        minor_device_number_width = v23;
                        v35 = ((long long)minor_device_number_width);
                    }
                    v23 = ((int)(v35 + ((long long)major_device_number_width) + 2));
                }
                rsp<8> = rsp<8> - 8;
                v4 = &g_40b462;
                human_readable();
                rsp<8> = rsp<8> - 8;
                v3 = &g_40b46c;
                v23 = gnu_mbswidth();
                if ((((short)v36->field_30) & 0xb000) == 0x2000 && ((int)(v35 + ((long long)major_device_number_width) + 2)) > file_size_width || (((short)v36->field_30) & 0xb000) != 0x2000 && ((int)v23) > file_size_width)
                {
                    file_size_width = v23;
                }
            }
        }
        if (((long long)print_inode) == 0)
        {
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v36->field_0 = (long long)xstrdup();
            v25 = v48;
            return v25;
        }
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40b3a0;
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40b3a8;
        v23 = strlen((long long)umaxtostr());
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v36->field_0 = (long long)xstrdup();
        v25 = v48;
        return v25;
        if (inode_number_width > inode_number_width)
        {
            inode_number_width = v23;
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v36->field_0 = (long long)xstrdup();
            v25 = v48;
            return v25;
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v11 = &g_40b247;
        dcgettext(0x0, &g_418af9, 0x5);
        v48 = 0;
        rsp<8> = rsp<8> - 8;
        v10 = &g_40b260;
        file_failure();
        v36->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
        if (((long long)v17) != 0)
        {
            v25 = v48;
            return v25;
        }
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v36->field_0 = (long long)xstrdup();
        v25 = v48;
        return v25;
    }
}
