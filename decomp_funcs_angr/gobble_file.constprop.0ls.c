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
extern <missing-type> g_40b0c1;
extern <missing-type> g_40b0cb;
extern char g_40b123;
extern <missing-type> g_40b14d;
extern <missing-type> g_40b155;
extern <missing-type> g_40b1a7;
extern <missing-type> g_40b1af;
extern <missing-type> g_40b1d8;
extern <missing-type> g_40b1e0;
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
extern <missing-type> g_40b462;
extern <missing-type> g_40b46c;
extern char g_40b548;
extern char g_40b5a1;
extern char g_40b5c4;
extern char g_40b5d8;
extern char g_40b5e2;
extern char g_40b606;
extern char g_40b611;
extern char g_40b640;
extern char g_40b68b;
extern <missing-type> g_40b722;
extern <missing-type> g_40b748;
extern <missing-type> g_40b768;
extern char g_40b805;
extern char g_40b821;
extern char g_40b834;
extern char g_40b89d;
extern char g_40b8b4;
extern char g_40b935;
extern <missing-type> g_40b948;
extern <missing-type> g_40b95b;
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
    unsigned long v1;  // [bp-0x428]
    unsigned long v10;  // [bp-0x3e0]
    unsigned long v11;  // [bp-0x3d8]
    unsigned long v12;  // [bp-0x3d0]
    unsigned long v13;  // [bp-0x3c8]
    unsigned long v14;  // [bp-0x3c0]
    unsigned long v15;  // [bp-0x3b8]
    unsigned long v16;  // [bp-0x3b0]
    char v17;  // [bp-0x399]
    unsigned long|unsigned int|struct_0 *|char|unsigned long long v18;  // [bp-0x398]
    char|unsigned int v19;  // [bp-0x390]
    unsigned long v2;  // [bp-0x420]
    unsigned int v20;  // [bp-0x38c]
    unsigned int v21;  // [bp-0x370]
    unsigned long v22;  // [bp-0x8]
    unsigned long|unsigned int|struct_0 *|unsigned long long|char * v24;  // rax
    unsigned long long v26;  // rax
    unsigned long v3;  // [bp-0x418]
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    struct_4 *|struct_0 *|unsigned long long|char * v34;  // rcx
    unsigned long long v35;  // rcx
    unsigned long long|unsigned int v37;  // edx
    struct_3 *v38;  // rbx
    unsigned long|struct_1 *|unsigned long long v39;  // rsi
    unsigned long v4;  // [bp-0x410]
    unsigned int v40;  // esi
    struct_1 *|unsigned long long|char * v41;  // rdi
    char *v42;  // rdi
    struct_1 * v43;  // rdi
    unsigned long long v44;  // r8
    unsigned long long|char * v46;  // r9
    char *v47;  // r12
    struct_0 *|char * v48;  // r13d
    unsigned long|unsigned long long v49;  // r14
    unsigned long v5;  // [bp-0x408]
    char *v50;  // r14
    unsigned long long v51;  // r14
    unsigned long|unsigned long long|unsigned int v52;  // r15d
    unsigned long v53;  // d
    unsigned long v6;  // [bp-0x400]
    unsigned long v7;  // [bp-0x3f8]
    unsigned long v8;  // [bp-0x3f0]
    unsigned long v9;  // [bp-0x3e8]

    v52 = v35;
    v48 = v40;
    v47 = v42;
    rsp<8> = &stack_base-936;
    v20 = ((int)v37);
    v39 = cwd_n_used;
    v43 = cwd_file;
    if (cwd_n_used == cwd_n_alloc)
    {
        rsp<8> = &stack_base-944;
        v24 = xreallocarray();
        v39 = cwd_n_used;
        cwd_n_alloc = cwd_n_alloc * 2;
        cwd_file = v24;
        v43 = v24;
    }
    v38 = v43 + v39 * 208;
    *(v43 + v39 * 208) = 0;
    *(v43 + v39 * 208 + 200) = 0;
    v41 = v43 + v39 * 208 + 8 & 18446744069414584312;
    for (v34 = ((long long)(((int)(v38 - v41)) + 208)) >> 3; v34 != 0; v41 += v53 * 8)
    {
        v34 -= 1;
        v41->field_0 = 0;
    }
    v38->field_20 = 0;
    v38->field_a8 = v48;
    v38->field_c4 = -1;
    if (cwd_some_quoted == 0)
    {
        if (align_variable_outer_quotes != 0)
        {
            rsp<8> = &stack_base-944;
            v24 = needs_quoting();
            v38->field_c4 = ((int)v24);
            if (((long long)v24) != 0)
            {
                cwd_some_quoted = 1;
            }
        }
    }
    v44 = ((long long)print_hyperlink);
    if (((char)v20) != 0)
    {
        v37 = ((long long)*(v50));
        v50 = v47;
        if (*(v47) != 47)
        {
            v39 = ((long long)*(v34));
        }
        if (...)
        {
            v18 = ((int)v18);
            rsp<8> = rsp<8> - 8;
            v15 = &g_40b2f6;
            v24 = do_statx();
            if (v18 != 2)
            {
                if (v24 >= 0)
                {
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v14 = &g_40b805;
                    v24 = __errno_location();
                    if (v24->field_0 != 2)
                    {
                        rsp<8> = rsp<8> - 8;
                        v14 = &g_40b821;
                        dcgettext(0x0, &g_418af9, 0x5);
                        v49 = 0;
                        rsp<8> = rsp<8> - 8;
                        v13 = &g_40b834;
                        file_failure();
                        v38->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
                        v32 = v49;
                        return v32;
                    }
                }
            }
        }
    }
    else if (!(((long long)print_hyperlink) == 0))
    {
        v37 = ((long long)*(v50));
        if (*(v50) == 47)
        {
            /* goto 4240201; */
        }
        else
        {
            v39 = ((long long)*(v34));
            if (((long long)*(v34)) != 0)
            {
                /* goto 4239401; */
            }
        }
    }
    else if (format_needs_stat == 0)
    {
        if (v48 == 3)
        {
            if (print_with_color != 0)
            {
                v18 = print_hyperlink;
                v24 = is_colored();
                if (((long long)v24) == 0)
                {
                    v24 = is_colored();
                    if (((long long)v24) == 0)
                    {
                        v24 = is_colored();
                        v44 = ((long long)v18);
                    }
                }
            }
        }
        if (print_with_color == 0 || v48 != 3 || ((long long)v24) == 0 && ((long long)v24) == 0 && ((long long)v24) == 0)
        {
            if (!(((long long)print_inode) == 0))
            {
                v37 = ((char)(v48 == 0));
            }
            else if (format_needs_type != 0)
            {
                v37 = v34;
            }
        }
    }
    if (...)
    {
        if (!(dereference != 4))
        {
            v37 = ((long long)*(v50));
            if (*(v50) == 47)
            {
                rsp<8> = &stack_base-944;
                v44 = (long long)calc_req_mask();
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
                        if (((long long)v37) == 0)
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
        v49 = 0;
        rsp<8> = rsp<8> - 8;
        v16 = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v38->field_0 = (long long)xstrdup();
        v32 = v49;
        return v32;
    }
    if (...)
    {
        v49 = 0;
        if (v48 != 5)
        {
            rsp<8> = rsp<8> - 8;
            v16 = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v38->field_0 = (long long)xstrdup();
            v32 = v49;
            return v32;
        }
        else if (indicator_style != 3)
        {
            v18 = v44;
            if (print_with_color == 0)
            {
                rsp<8> = rsp<8> - 8;
                v16 = &g_40aee2;
                cwd_n_used = cwd_n_used + 1;
                v38->field_0 = (long long)xstrdup();
                v32 = v49;
                return v32;
            }
            v24 = is_colored();
            if (((long long)v24) == 0)
            {
                v24 = is_colored();
                if (((long long)v24) == 0)
                {
                    v24 = is_colored();
                    if (((long long)v24) == 0)
                    {
                        v24 = is_colored();
                        if (((long long)v24) == 0)
                        {
                            rsp<8> = rsp<8> - 8;
                            v16 = &g_40aee2;
                            cwd_n_used = cwd_n_used + 1;
                            v38->field_0 = (long long)xstrdup();
                            v32 = v49;
                            return v32;
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        v37 = ((long long)*(NULL));
    }
    if (...)
    {
        v39 = ((long long)*(v34));
    }
    if (...)
    {
        v17 = v44;
        v19 = v37;
        v18 = v39;
        v51 = strlen(v50);
        rsp<8> = &stack_base-944;
        v31 = strlen(v34);
        v44 = ((long long)v17);
        v39 = ((long long)v18);
        v24 = &stack_base-936 - (v51 + v31 + 25 & 0xfffffffefffff000);
        for (v37 = ((long long)v19); rsp<8> != v24; v15 = v15)
        {
            rsp<8> = rsp<8> - 0x1000;
        }
        v34 = ((long long)(((int)(v51 + v31 + 25 & 0xfffffffefffffff0)) & 4095));
        rsp<8> = rsp<8> - v34;
        if (v34 != 0)
        {
            v22 = v22;
        }
        v41 = ((long long)*(v34 + 1));
        v46 = rsp<8> + 15 & 0xfffffffefffffff0;
        v49 = rsp<8> + 15 & 0xfffffffefffffff0;
        if (v18 == 46)
        {
            v24 = v46;
        }
        if (v18 != 46 || ((long long)v41) != 0)
        {
            v34 = v52;
            while (true)
            {
                v24 = v46 + 1;
                v34 += 1;
                *(v46 + 1 + 1) = v39;
                if (((long long)v41) == 0)
                {
                    break;
                }
                v39 = v41;
                v41 = ((long long)v34->field_1);
                v46 = v24;
            }
            if (v34 < v34)
            {
                if (v34->field_1 != 47)
                {
                    *(v24) = 47;
                    v24 = v46 + 2;
                }
            }
        }
        if (((long long)v19) != 0)
        {
            v34 = v50;
            do
            {
                v34 += 1;
                *(rax<8> + None) = v37;
                v24 = rax<8> + 1;
                v37 = ((long long)*(v34));
            }
            while (((char)v37) != 0);
        }
        *(v24) = 0;
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v16 = &g_40b356;
        v24 = canonicalize_filename_mode();
        v38->field_10 = v24;
        if (v24 == 0)
        {
            rsp<8> = rsp<8> - 8;
            v15 = &g_40b376;
            dcgettext(0x0, &g_418ae1, 0x5);
            rsp<8> = rsp<8> - 8;
            v14 = &g_40b38a;
            file_failure();
        }
    }
    if (...)
    {
        v18 = dereference;
        rsp<8> = rsp<8> - 8;
        v16 = &g_40ada9;
        v44 = (long long)calc_req_mask();
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v15 = &g_40b22c;
        v24 = do_statx();
    }
    if (...)
    {
        if (v24 != 0)
        {
            rsp<8> = rsp<8> - 8;
            v14 = &g_40b821;
            dcgettext(0x0, &g_418af9, 0x5);
            v49 = 0;
            rsp<8> = rsp<8> - 8;
            v13 = &g_40b834;
            file_failure();
            v38->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
            v32 = v49;
            return v32;
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v14 = &g_40b329;
        v44 = (long long)calc_req_mask();
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v13 = &g_40addc;
        v24 = do_statx();
    }
    if (...)
    {
        v38->field_b8 = 1;
        if (v48 == 5 || (((short)v38->field_30) & 0xf000) == 0x8000)
        {
            if (print_with_color != 0)
            {
                rsp<8> = rsp<8> - 8;
                v12 = &g_40b297;
                v24 = is_colored();
                if (((long long)v24) != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v11 = &g_40b2a4;
                    v48 = v38->field_18;
                    *(__errno_location() + None) = 95;
                    if (False)
                    {
                        unsupported_device.10764 = v48;
                    }
                    v38->field_c0 = 0;
                }
            }
        }
        if (format == 0 || print_scontext != 0)
        {
            v34 = v38->field_18;
            v19 = ((int)format);
            v18 = v34;
            rsp<8> = rsp<8> - 8;
            v11 = &g_40ae31;
            v48->field_0 = 95;
            v48 = __errno_location();
            if (v18 != unsupported_device.10752)
            {
                unsupported_device.10752 = v18;
            }
            v38->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
            if (((int)v19) != 0)
            {
                v38->field_bc = 0;
            }
            else if (v18 != unsupported_device.10758)
            {
                v48->field_0 = 0;
                rsp<8> = rsp<8> - 8;
                v10 = &g_40b548;
                v26 = file_has_acl();
                if (v26 > 0)
                {
                    v38->field_bc = 2;
                    any_has_acl = 1;
                }
                else
                {
                    v37 = ((int)v48->field_0);
                    if (v37 == 95 || (((int)(((long long)v48->field_0) - 22)) & -17) == 0)
                    {
                        unsupported_device.10758 = v38->field_18;
                    }
                    v38->field_bc = 0;
                    if (v26 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v9 = &g_40b89d;
                        quotearg_n_style_colon();
                        v39 = ((long long)v48->field_0);
                        rsp<8> = rsp<8> - 8;
                        v8 = &g_40b8b4;
                        error(0x0, v39, "%s");
                    }
                }
                v24 = ((long long)(v38->field_30 & 0xf000));
            }
            else
            {
                v48->field_0 = 95;
                tmp_13 = ((long long)v38->field_30);
                v38->field_bc = 0;
                v24 = ((long long)(((int)tmp_13) & 0xf000));
                if ((((short)((int)tmp_13)) & 0xf000) == 0xa000)
                {
                    /* goto 4240789; */
                }
            }
        }
        if (((int)v19) != 0 || print_scontext == 0 && format != 0)
        {
            v24 = ((long long)(v38->field_30 & 0xf000));
        }
        if (...)
        {
            rsp<8> = rsp<8> - 8;
            v9 = &g_40b5a1;
            v38->field_8 = r13<8>;
            r13<8> = (long long)areadlink_with_size();
            if (r13<8> == 0)
            {
                rsp<8> = rsp<8> - 8;
                v8 = &g_40b9e3;
                dcgettext(0x0, &g_418b0a, 0x5);
                rsp<8> = rsp<8> - 8;
                v7 = &g_40b9f5;
                file_failure();
                v48 = v38->field_8;
                if (v38->field_8 == 0)
                {
                    /* goto 4240952; */
                }
            }
            if (v38->field_8 != 0 || r13<8> != 0)
            {
                if (*(v48) != 47)
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40b5c4;
                    v52 = (long long)dir_len();
                    if (v52 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_40b5d8;
                        strlen(v41);
                        rsp<8> = rsp<8> - 8;
                        v4 = &g_40b5e2;
                        if (*(v49 + v52 + 1) != 47)
                        {
                            v52 = ((int)v52) + 1;
                        }
                        v18 = (long long)xmalloc();
                        rsp<8> = rsp<8> - 8;
                        v3 = &g_40b606;
                        rsp<8> = rsp<8> - 8;
                        v2 = &g_40b611;
                        strcpy(stpncpy(((int)v18), ((int)v49), v52), v48);
                        v46 = v18;
                    }
                    else
                    {
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_40b935;
                        v46 = (long long)xstrdup();
                    }
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40ba18;
                    v46 = (long long)xstrdup();
                }
                if (v38->field_c4 == 0)
                {
                    v18 = v46;
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_40b980;
                    v24 = needs_quoting();
                    v46 = v18;
                    if (((long long)v24) != 0)
                    {
                        v38->field_c4 = -1;
                    }
                }
                if (check_symlink_mode != 0 || indicator_style > 1)
                {
                    v18 = v46;
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_40b68b;
                    v24 = do_statx();
                    if (v24 == 0)
                    {
                        v38->field_b9 = 1;
                        v38->field_ac = v21;
                    }
                }
            }
            rsp<8> = rsp<8> - 8;
            v6 = &g_40b640;
            rpl_free();
            v24 = ((int)(v38->field_30 & 0xf000));
        }
        if (...)
        {
            v38->field_a8 = 6;
            /* goto 4239007; */
        }
        if (...)
        {
            if (v24 != 0x4000)
            {
                v38->field_a8 = 5;
            }
            else
            {
                if (((char)v20) != 0)
                {
                    if (immediate_dirs == 0)
                    {
                        v38->field_a8 = 9;
                        /* goto 4239007; */
                    }
                }
                if (((char)v20) == 0 || immediate_dirs != 0)
                {
                    v38->field_a8 = 3;
                }
            }
        }
        v49 = v38->field_58;
        if (format == 0 || print_block_size != 0)
        {
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_40b0c1;
            human_readable();
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_40b0cb;
            v24 = gnu_mbswidth();
            if (block_size_width > block_size_width)
            {
                block_size_width = v24;
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
                *(rsp<8> + None) = &g_40b748;
                v24 = format_user_width();
                if (owner_width > owner_width)
                {
                    owner_width = v24;
                }
            }
            if (print_group != 0)
            {
                if (numeric_ids == 0)
                {
                    rsp<8> = rsp<8> - 8;
                    *(rsp<8> + None) = &g_40b948;
                    v41 = (long long)getgroup();
                    if (v41 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40b95b;
                        v24 = ((long long)(gnu_mbswidth() < 0? 0 : ((int)rax<8>)));
                    }
                }
                if (v41 == 0 || numeric_ids != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    *(rsp<8> + None) = &g_40b722;
                    v24 = __snprintf_chk();
                }
                if (group_width < v24)
                {
                    group_width = v24;
                }
            }
            if (print_author != 0)
            {
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40b768;
                v24 = format_user_width();
                if (author_width > author_width)
                {
                    author_width = v24;
                }
            }
        }
        if (print_scontext != 0)
        {
            v41 = v38->field_b0;
            rsp<8> = rsp<8> - 8;
            v5 = &g_40b123;
            v24 = strlen(v41);
            if (scontext_width > scontext_width)
            {
                scontext_width = v24;
            }
        }
        if (format == 0 || print_scontext != 0)
        {
            if (format == 0)
            {
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40b14d;
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40b155;
                if (nlink_width > nlink_width)
                {
                    nlink_width = strlen((long long)umaxtostr());
                }
                if ((((short)v38->field_30) & 0xb000) == 0x2000)
                {
                    rsp<8> = rsp<8> - 8;
                    *(rsp<8> + None) = &g_40b1a7;
                    rsp<8> = rsp<8> - 8;
                    *(rsp<8> + None) = &g_40b1af;
                    if (major_device_number_width > major_device_number_width)
                    {
                        major_device_number_width = strlen((long long)umaxtostr());
                    }
                    rsp<8> = rsp<8> - 8;
                    *(rsp<8> + None) = &g_40b1d8;
                    rsp<8> = rsp<8> - 8;
                    *(rsp<8> + None) = &g_40b1e0;
                    v24 = strlen((long long)umaxtostr());
                    v37 = ((long long)minor_device_number_width);
                    if (((int)minor_device_number_width) > minor_device_number_width)
                    {
                        minor_device_number_width = v24;
                        v37 = ((long long)minor_device_number_width);
                    }
                    v24 = ((int)(v37 + ((long long)major_device_number_width) + 2));
                }
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40b462;
                human_readable();
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40b46c;
                v24 = gnu_mbswidth();
                if ((((short)v38->field_30) & 0xb000) == 0x2000 && ((int)(v37 + ((long long)major_device_number_width) + 2)) > file_size_width || (((short)v38->field_30) & 0xb000) != 0x2000 && ((int)v24) > file_size_width)
                {
                    file_size_width = v24;
                }
            }
        }
        if (((long long)print_inode) == 0)
        {
            rsp<8> = rsp<8> - 8;
            v16 = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v38->field_0 = (long long)xstrdup();
            v32 = v49;
            return v32;
        }
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40b3a0;
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40b3a8;
        v24 = strlen((long long)umaxtostr());
        rsp<8> = rsp<8> - 8;
        v16 = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v38->field_0 = (long long)xstrdup();
        v32 = v49;
        return v32;
        if (inode_number_width > inode_number_width)
        {
            inode_number_width = v24;
            rsp<8> = rsp<8> - 8;
            v16 = &g_40aee2;
            cwd_n_used = cwd_n_used + 1;
            v38->field_0 = (long long)xstrdup();
            v32 = v49;
            return v32;
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v12 = &g_40b247;
        dcgettext(0x0, &g_418af9, 0x5);
        v49 = 0;
        rsp<8> = rsp<8> - 8;
        v11 = &g_40b260;
        file_failure();
        v38->field_b0 = &UNKNOWN_SECURITY_CONTEXT;
        if (((long long)v20) != 0)
        {
            v32 = v49;
            return v32;
        }
        rsp<8> = rsp<8> - 8;
        v16 = &g_40aee2;
        cwd_n_used = cwd_n_used + 1;
        v38->field_0 = (long long)xstrdup();
        v32 = v49;
        return v32;
    }
}
