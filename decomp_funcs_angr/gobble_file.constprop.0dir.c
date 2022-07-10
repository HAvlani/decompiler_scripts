typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

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

extern char UNKNOWN_SECURITY_CONTEXT;
extern char align_variable_outer_quotes;
extern char any_has_acl;
extern struct_0 author_width;
extern struct_0 block_size_width;
extern char check_symlink_mode;
extern char color_symlink_as_referent;
extern struct_1 cwd_file;
extern struct_1 cwd_n_alloc;
extern struct_1 cwd_n_used;
extern char cwd_some_quoted;
extern struct_0 dereference;
extern struct_0 file_size_width;
extern struct_0 format;
extern char format_needs_stat;
extern char format_needs_type;
extern char g_40ada9;
extern char g_40addc;
extern char g_40ae31;
extern char g_40aee2;
extern char g_40b0c1;
extern char g_40b0cb;
extern <missing-type> g_40b123;
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
extern struct_0 group_width;
extern char immediate_dirs;
extern struct_0 indicator_style;
extern struct_0 inode_number_width;
extern struct_0 major_device_number_width;
extern struct_0 minor_device_number_width;
extern struct_0 nlink_width;
extern char numeric_ids;
extern struct_0 owner_width;
extern char print_author;
extern char print_block_size;
extern char print_group;
extern char print_hyperlink;
extern char print_inode;
extern char print_owner;
extern char print_scontext;
extern char print_with_color;
extern struct_0 scontext_width;
extern struct_0 *unsupported_device.10752;
extern struct_0 *unsupported_device.10758;
extern struct_0 *unsupported_device.10764;

int gobble_file.constprop.0()
{
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x400]
    unsigned long v1;  // [bp-0x3f8]
    char v10;  // [bp-0x399]
    unsigned long|struct_0 *|unsigned int|char|unsigned long long v11;  // [bp-0x398]
    char|unsigned int v12;  // [bp-0x390]
    unsigned int v13;  // [bp-0x38c]
    unsigned int v14;  // [bp-0x370]
    unsigned long v15;  // [bp-0x8]
    unsigned long|struct_0 *|unsigned int|unsigned long long|char * v17;  // rax
    unsigned long long v19;  // rax
    unsigned long v2;  // [bp-0x3f0]
    unsigned long long v23;  // rax
    unsigned long long v27;  // rax
    char *|struct_0 *|unsigned long long|struct_4 * v28;  // rcx
    unsigned long v3;  // [bp-0x3e8]
    unsigned long long v30;  // rcx
    unsigned long long|unsigned int v31;  // rdx
    struct_3 *v32;  // rbx
    struct_1 *|unsigned long|unsigned long long v33;  // rsi
    unsigned int v34;  // esi
    struct_1 *|unsigned long long|char * v35;  // rdi
    struct_1 * v36;  // rdi
    char *v37;  // rdi
    unsigned long long v38;  // r8
    unsigned long long|char * v39;  // r9
    unsigned long v4;  // [bp-0x3e0]
    char *v41;  // r12
    struct_0 *|char * v42;  // r13
    char *v43;  // r14
    unsigned long|unsigned long long v44;  // r14
    unsigned long long v45;  // r14
    unsigned long|unsigned long long|unsigned int v46;  // r15d
    unsigned long v47;  // d
    unsigned long v5;  // [bp-0x3d8]
    unsigned long v6;  // [bp-0x3d0]
    unsigned long v7;  // [bp-0x3c8]
    unsigned long v8;  // [bp-0x3c0]
    unsigned long v9;  // [bp-0x3b8]

    v46 = v30;
    v42 = v34;
    v41 = v37;
    rsp<8> = &stack_base-936;
    v13 = ((int)v31);
    v33 = cwd_n_used;
    v36 = cwd_file;
    if (cwd_n_used == cwd_n_alloc)
    {
        rsp<8> = &stack_base-944;
        v17 = xreallocarray();
        v33 = cwd_n_used;
        cwd_n_alloc = cwd_n_alloc * 2;
        cwd_file = v17;
        v36 = v17;
    }
    v32 = v36 + v33 * 208;
    *(v36 + v33 * 208) = 0;
    *(v36 + v33 * 208 + 200) = 0;
    v35 = v36 + v33 * 208 + 8 & 18446744069414584312;
    for (v28 = ((long long)(((int)(v32 - v35)) + 208)) >> 3; v28 != 0; v35 += v47 * 8)
    {
        v28 -= 1;
        v35->field_0 = 0;
    }
    v32->field_20 = 0;
    v32->field_a8 = v42;
    v32->field_c4 = -1;
    if (cwd_some_quoted == 0)
    {
        if (align_variable_outer_quotes != 0)
        {
            rsp<8> = &stack_base-944;
            v17 = needs_quoting();
            v32->field_c4 = ((int)v17);
            if (((long long)v17) != 0)
            {
                cwd_some_quoted = 1;
            }
        }
    }
    v38 = ((long long)print_hyperlink);
    if (((char)v13) != 0)
    {
        v31 = ((long long)*(v43));
        v43 = v41;
        if (*(v41) != 47)
        {
            v33 = ((long long)*(v28));
        }
        if (...)
        {
            v11 = ((int)v11);
            rsp<8> = rsp<8> - 8;
            v7 = &g_40b2f6;
            v17 = do_statx();
            if (v11 != 2)
            {
                if (v17 >= 0)
                {
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40b805;
                    v17 = __errno_location();
                    if (v17->field_0 != 2)
                    {
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_40b821;
                        dcgettext(0x0, &g_418af9, 0x5);
                        v44 = 0;
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_40b834;
                        file_failure();
                        v32->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
                        v19 = v44;
                        return v19;
                    }
                }
            }
        }
    }
    else if (!(((long long)print_hyperlink) == 0))
    {
        v31 = ((long long)*(v43));
        if (*(v43) == 47)
        {
            /* goto 4240201; */
        }
        else
        {
            v33 = ((long long)*(v28));
            if (((long long)*(v28)) != 0)
            {
                /* goto 4239401; */
            }
        }
    }
    else if (format_needs_stat == 0)
    {
        if (v42 == 3)
        {
            if (print_with_color != 0)
            {
                v11 = print_hyperlink;
                v17 = is_colored();
                if (((long long)v17) == 0)
                {
                    v17 = is_colored();
                    if (((long long)v17) == 0)
                    {
                        v17 = is_colored();
                        v38 = ((long long)v11);
                    }
                }
            }
        }
        if (print_with_color == 0 || v42 != 3 || ((long long)v17) == 0 && ((long long)v17) == 0 && ((long long)v17) == 0)
        {
            if (!(((long long)print_inode) == 0))
            {
                v31 = ((char)(v42 == 0));
            }
            else if (format_needs_type != 0)
            {
                v31 = v28;
            }
        }
    }
    if (...)
    {
        if (!(dereference != 4))
        {
            v31 = ((long long)*(v43));
            if (*(v43) == 47)
            {
                rsp<8> = &stack_base-944;
                v38 = (long long)calc_req_mask();
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
                        if (((long long)v31) == 0)
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
        v44 = 0;
        rsp<8> = rsp<8> - 8;
        v6 = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v32->field_0 = (long long)xstrdup();
        v19 = v44;
        return v19;
    }
    if (...)
    {
        v44 = 0;
        if (v42 != 5)
        {
            rsp<8> = rsp<8> - 8;
            v6 = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v32->field_0 = (long long)xstrdup();
            v19 = v44;
            return v19;
        }
        else if (indicator_style != 3)
        {
            v11 = v38;
            if (print_with_color == 0)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_40aee2;
                cwd_n_used = cwd_n_used + 1;
                v32->field_0 = (long long)xstrdup();
                v19 = v44;
                return v19;
            }
            v17 = is_colored();
            if (((long long)v17) == 0)
            {
                v17 = is_colored();
                if (((long long)v17) == 0)
                {
                    v17 = is_colored();
                    if (((long long)v17) == 0)
                    {
                        v17 = is_colored();
                        if (((long long)v17) == 0)
                        {
                            rsp<8> = rsp<8> - 8;
                            v6 = &g_40aee2;
                            cwd_n_used = cwd_n_used + 1;
                            v32->field_0 = (long long)xstrdup();
                            v19 = v44;
                            return v19;
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        v31 = ((long long)*(NULL));
    }
    if (...)
    {
        v33 = ((long long)*(v28));
    }
    if (...)
    {
        v10 = v38;
        v12 = v31;
        v11 = v33;
        v45 = strlen(v43);
        rsp<8> = &stack_base-944;
        v23 = strlen(v28);
        v38 = ((long long)v10);
        v33 = ((long long)v11);
        v17 = &stack_base-936 - (v45 + v23 + 25 & 0xfffffffefffff000);
        for (v31 = ((long long)v12); rsp<8> != v17; v9 = v9)
        {
            rsp<8> = rsp<8> - 0x1000;
        }
        v28 = ((long long)(((int)(v45 + v23 + 25 & 0xfffffffefffffff0)) & 4095));
        rsp<8> = rsp<8> - v28;
        if (v28 != 0)
        {
            v15 = v15;
        }
        v35 = ((long long)*(v28 + 1));
        v39 = rsp<8> + 15 & 0xfffffffefffffff0;
        v44 = rsp<8> + 15 & 0xfffffffefffffff0;
        if (v11 == 46)
        {
            v17 = v39;
        }
        if (((long long)v35) != 0 || v11 != 46)
        {
            v28 = v46;
            while (true)
            {
                v17 = v39 + 1;
                v28 += 1;
                *(v39 + 1 + 1) = v33;
                if (((long long)v35) == 0)
                {
                    break;
                }
                v33 = v35;
                v35 = ((long long)v28->field_1);
                v39 = v17;
            }
            if (v28 < v28)
            {
                if (v28->field_1 != 47)
                {
                    *(v17) = 47;
                    v17 = v39 + 2;
                }
            }
        }
        if (((long long)v12) != 0)
        {
            v28 = v43;
            do
            {
                v28 += 1;
                *(rax<8> + None) = v31;
                v17 = rax<8> + 1;
                v31 = ((long long)*(v28));
            }
            while (((char)v31) != 0);
        }
        *(v17) = 0;
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v9 = &g_40b356;
        v17 = canonicalize_filename_mode();
        v32->field_10 = v17;
        if (v17 == 0)
        {
            rsp<8> = rsp<8> - 8;
            v8 = &g_40b376;
            dcgettext(0x0, &g_418ae1, 0x5);
            rsp<8> = rsp<8> - 8;
            v7 = &g_40b38a;
            file_failure();
        }
    }
    if (...)
    {
        v11 = dereference;
        rsp<8> = rsp<8> - 8;
        v8 = &g_40ada9;
        v38 = (long long)calc_req_mask();
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v9 = &g_40b22c;
        v17 = do_statx();
    }
    if (...)
    {
        if (v17 != 0)
        {
            rsp<8> = rsp<8> - 8;
            v6 = &g_40b821;
            dcgettext(0x0, &g_418af9, 0x5);
            v44 = 0;
            rsp<8> = rsp<8> - 8;
            v5 = &g_40b834;
            file_failure();
            v32->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
            v19 = v44;
            return v19;
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_40b329;
        v38 = (long long)calc_req_mask();
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v7 = &g_40addc;
        v17 = do_statx();
    }
    if (...)
    {
        v32->field_b8 = 1;
        if ((((short)v32->field_30) & 0xf000) == 0x8000 || v42 == 5)
        {
            if (print_with_color != 0)
            {
                rsp<8> = rsp<8> - 8;
                v8 = &g_40b297;
                v17 = is_colored();
                if (((long long)v17) != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v7 = &g_40b2a4;
                    v42 = v32->field_18;
                    *(__errno_location() + None) = 95;
                    if (False)
                    {
                        unsupported_device.10764 = v42;
                    }
                    v32->field_c0 = 0;
                }
            }
        }
        if (format == 0 || print_scontext != 0)
        {
            v28 = v32->field_18;
            v12 = ((int)format);
            v11 = v28;
            rsp<8> = rsp<8> - 8;
            v8 = &g_40ae31;
            v42->field_0 = 95;
            v42 = __errno_location();
            if (v11 != unsupported_device.10752)
            {
                unsupported_device.10752 = v11;
            }
            v32->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
            if (((int)v12) != 0)
            {
                v32->field_bc = 0;
            }
            else if (v11 != unsupported_device.10758)
            {
                v42->field_0 = 0;
                rsp<8> = rsp<8> - 8;
                v7 = &g_40b548;
                v27 = file_has_acl();
                if (v27 > 0)
                {
                    v32->field_bc = 2;
                    any_has_acl = 1;
                }
                else
                {
                    v31 = ((int)v42->field_0);
                    if ((((int)(((long long)v42->field_0) - 22)) & -17) == 0 || v31 == 95)
                    {
                        unsupported_device.10758 = v32->field_18;
                    }
                    v32->field_bc = 0;
                    if (v27 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_40b89d;
                        quotearg_n_style_colon();
                        v33 = ((long long)v42->field_0);
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_40b8b4;
                        error(0x0, v33, "%s");
                    }
                }
                v17 = ((long long)(v32->field_30 & 0xf000));
            }
            else
            {
                v42->field_0 = 95;
                tmp_13 = ((long long)v32->field_30);
                v32->field_bc = 0;
                v17 = ((long long)(((int)tmp_13) & 0xf000));
                if ((((short)((int)tmp_13)) & 0xf000) == 0xa000)
                {
                    /* goto 4240789; */
                }
            }
        }
        if (((int)v12) != 0 || print_scontext == 0 && format != 0)
        {
            v17 = ((int)(v32->field_30 & 0xf000));
        }
        if (...)
        {
            rsp<8> = rsp<8> - 8;
            v8 = &g_40b5a1;
            v32->field_8 = r13<8>;
            r13<8> = (long long)areadlink_with_size();
            if (r13<8> == 0)
            {
                rsp<8> = rsp<8> - 8;
                v7 = &g_40b9e3;
                dcgettext(0x0, &g_418b0a, 0x5);
                rsp<8> = rsp<8> - 8;
                v6 = &g_40b9f5;
                file_failure();
                v42 = v32->field_8;
                if (v32->field_8 == 0)
                {
                    /* goto 4240952; */
                }
            }
            if (v32->field_8 != 0 || r13<8> != 0)
            {
                if (*(v42) != 47)
                {
                    rsp<8> = rsp<8> - 8;
                    v7 = &g_40b5c4;
                    v46 = (long long)dir_len();
                    if (v46 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_40b5d8;
                        strlen(v35);
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_40b5e2;
                        if (*(v44 + v46 + 1) != 47)
                        {
                            v46 = ((int)v46) + 1;
                        }
                        v11 = (long long)xmalloc();
                        rsp<8> = rsp<8> - 8;
                        v4 = &g_40b606;
                        rsp<8> = rsp<8> - 8;
                        v3 = &g_40b611;
                        strcpy(stpncpy(((int)v11), ((int)v44), v46), v42);
                        v39 = v11;
                    }
                    else
                    {
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_40b935;
                        v39 = (long long)xstrdup();
                    }
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v7 = &g_40ba18;
                    v39 = (long long)xstrdup();
                }
                if (v32->field_c4 == 0)
                {
                    v11 = v39;
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_40b980;
                    v17 = needs_quoting();
                    v39 = v11;
                    if (((long long)v17) != 0)
                    {
                        v32->field_c4 = -1;
                    }
                }
                if (check_symlink_mode != 0 || indicator_style > 1)
                {
                    v11 = v39;
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_40b68b;
                    v17 = do_statx();
                    if (v17 == 0)
                    {
                        v32->field_b9 = 1;
                        v32->field_ac = v14;
                    }
                }
            }
            rsp<8> = rsp<8> - 8;
            v2 = &g_40b640;
            rpl_free();
            v17 = ((long long)(v32->field_30 & 0xf000));
        }
        if (...)
        {
            v32->field_a8 = 6;
            /* goto 4239007; */
        }
        if (...)
        {
            if (((unsigned int)v17) != 0x4000)
            {
                v32->field_a8 = 5;
            }
            else
            {
                if (((char)v13) != 0)
                {
                    if (immediate_dirs == 0)
                    {
                        v32->field_a8 = 9;
                        /* goto 4239007; */
                    }
                }
                if (((char)v13) == 0 || immediate_dirs != 0)
                {
                    v32->field_a8 = 3;
                }
            }
        }
        v44 = v32->field_58;
        if (format == 0 || print_block_size != 0)
        {
            rsp<8> = rsp<8> - 8;
            v8 = &g_40b0c1;
            human_readable();
            rsp<8> = rsp<8> - 8;
            v7 = &g_40b0cb;
            v17 = gnu_mbswidth();
            if (block_size_width > block_size_width)
            {
                block_size_width = v17;
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
                v17 = format_user_width();
                if (owner_width > owner_width)
                {
                    owner_width = v17;
                }
            }
            if (print_group != 0)
            {
                if (numeric_ids == 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40b948;
                    v35 = (long long)getgroup();
                    if (v35 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_40b95b;
                        v17 = ((long long)(gnu_mbswidth() < 0? 0 : ((int)rax<8>)));
                    }
                }
                if (v35 == 0 || numeric_ids != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40b722;
                    v17 = __snprintf_chk();
                }
                if (group_width < v17)
                {
                    group_width = v17;
                }
            }
            if (print_author != 0)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_40b768;
                v17 = format_user_width();
                if (author_width > author_width)
                {
                    author_width = v17;
                }
            }
        }
        if (print_scontext != 0)
        {
            v35 = v32->field_b0;
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_40b123;
            v17 = strlen(v35);
            if (scontext_width > scontext_width)
            {
                scontext_width = v17;
            }
        }
        if (format == 0 || print_scontext != 0)
        {
            if (format == 0)
            {
                rsp<8> = rsp<8> - 8;
                v5 = &g_40b14d;
                rsp<8> = rsp<8> - 8;
                v4 = &g_40b155;
                if (nlink_width > nlink_width)
                {
                    nlink_width = strlen((long long)umaxtostr());
                }
                if ((((short)v32->field_30) & 0xb000) == 0x2000)
                {
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_40b1a7;
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_40b1af;
                    if (major_device_number_width > major_device_number_width)
                    {
                        major_device_number_width = strlen((long long)umaxtostr());
                    }
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_40b1d8;
                    rsp<8> = rsp<8> - 8;
                    v0 = &g_40b1e0;
                    v17 = strlen((long long)umaxtostr());
                    v31 = ((long long)minor_device_number_width);
                    if (((int)minor_device_number_width) > minor_device_number_width)
                    {
                        minor_device_number_width = v17;
                        v31 = ((long long)minor_device_number_width);
                    }
                    v17 = ((int)(v31 + ((long long)major_device_number_width) + 2));
                }
                rsp<8> = rsp<8> - 8;
                v3 = &g_40b462;
                human_readable();
                rsp<8> = rsp<8> - 8;
                v2 = &g_40b46c;
                v17 = gnu_mbswidth();
                if ((((short)v32->field_30) & 0xb000) == 0x2000 && ((int)(v31 + ((long long)major_device_number_width) + 2)) > file_size_width || ((int)v17) > file_size_width && (((short)v32->field_30) & 0xb000) != 0x2000)
                {
                    file_size_width = v17;
                }
            }
        }
        if (((long long)print_inode) == 0)
        {
            rsp<8> = rsp<8> - 8;
            v6 = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v32->field_0 = (long long)xstrdup();
            v19 = v44;
            return v19;
        }
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40b3a0;
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40b3a8;
        v17 = strlen((long long)umaxtostr());
        rsp<8> = rsp<8> - 8;
        v6 = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v32->field_0 = (long long)xstrdup();
        v19 = v44;
        return v19;
        if (inode_number_width > inode_number_width)
        {
            inode_number_width = v17;
            rsp<8> = rsp<8> - 8;
            v6 = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v32->field_0 = (long long)xstrdup();
            v19 = v44;
            return v19;
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v8 = &g_40b247;
        dcgettext(0x0, &g_418af9, 0x5);
        v44 = 0;
        rsp<8> = rsp<8> - 8;
        v7 = &g_40b260;
        file_failure();
        v32->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
        if (((long long)v13) != 0)
        {
            v19 = v44;
            return v19;
        }
        rsp<8> = rsp<8> - 8;
        v6 = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v32->field_0 = (long long)xstrdup();
        v19 = v44;
        return v19;
    }
}
