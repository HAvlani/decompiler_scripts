typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[18];
    char field_16;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_3 {
    char padding_0[160];
    unsigned long long field_a0;
} struct_3;

extern char g_405810;
extern char g_40581b;
extern char g_40587b;
extern char g_405886;
extern char g_4058bf;
extern <missing-type> g_4058ef;
extern <missing-type> g_40590d;
extern char g_405a30;
extern char g_405a45;
extern char g_405aa5;
extern char g_405ab0;
extern char g_405ac6;
extern char g_405b07;
extern <missing-type> g_405b73;
extern <missing-type> g_405ba3;
extern unsigned int g_413127;
extern unsigned int g_41313b;
extern unsigned int g_414898;
extern char parents_option;
extern char remove_trailing_slashes;
extern unsigned int x_tmp.7704;

int do_copy()
{
    unsigned long v0;  // [bp-0x1130]
    unsigned long v1;  // [bp-0x138]
    char v10;  // [bp-0xea]
    unsigned long long v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    char v13;  // [bp-0xd8]
    unsigned int v14;  // [bp-0xc0]
    unsigned long v15;  // [bp-0x30]
    struct_2 *v16;  // [bp-0x28]
    unsigned long v17;  // [bp-0x20]
    unsigned long v18;  // [bp-0x18]
    unsigned long v19;  // [bp-0x10]
    unsigned long v2;  // [bp-0x130]
    unsigned long v20;  // [bp-0x8]
    unsigned long long v22;  // rax
    struct_0 *|unsigned long long v24;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long v3;  // [bp-0x128]
    unsigned long long v30;  // rax
    unsigned long long|char v34;  // rcx
    unsigned long|unsigned long long v35;  // rdx
    unsigned long long v38;  // rbx
    unsigned long|unsigned long long|struct_2 *|unsigned int v39;  // rsi
    unsigned long long v4;  // [bp-0x120]
    char *|void *|struct_3 *|struct_0 *|unsigned int v40;  // rdi
    unsigned long|struct_2 * v41;  // r8
    unsigned long long|unsigned int v42;  // r12
    void *v43;  // r12
    unsigned long long v44;  // r12
    char v45[2];  // r12
    char *v46;  // r13
    unsigned long long v47;  // r13
    unsigned long long v48;  // r13
    unsigned long long|unsigned int v49;  // r14d
    unsigned long v5;  // [bp-0x118]
    struct_2 *v50;  // r15
    unsigned long v51;  // d
    unsigned long v6;  // [bp-0x110]
    unsigned long long v7[2];  // [bp-0x108]
    unsigned int v8;  // [bp-0x100]
    unsigned int v9;  // [bp-0xfc]

    v9 = v40;
    v7 = ((unsigned int)v39);
    v6 = v35;
    v10 = 0;
    if (((int)(v35 == 0)) < v40)
    {
        v14 = 0;
        v50 = v41;
        if (((long long)v34) == 0)
        {
            if (v6 != 0)
            {
                rsp<8> = &stack_base-288;
                v8 = target_directory_operand();
                if (!(((char)(v8 + 1 == 0))))
                {
                }
                else
                {
                    v47 = (long long)quotearg_style();
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_413127, 0x5));
                }
            }
            else
            {
                v38 = v7 + ((long long)v9) * 8[1];
                v6 = v7 + ((long long)v9) * 8[1];
                rsp<8> = &stack_base-288;
                v8 = target_directory_operand();
                if (!(((char)(v8 + 1 == 0))))
                {
                    v9 -= 1;
                    if (v38 != 0)
                    {
                        if (v9 <= 1)
                        {
                            if (!(((char)(((long long)v9) == 1))))
                            {
                                v30 = v49;
                                return v30;
                            }
                        }
                    }
                }
                v24 = __errno_location();
                v42 = ((int)v24->field_0);
                if (v24->field_0 == 2)
                {
                    v10 = 1;
                }
                if (v9 > 2)
                {
                    v48 = (long long)quotearg_style();
                    error(0x1, v42, dcgettext(0x0, &g_41313b, 0x5));
                }
            }
            if (!(((char)(v8 + 1 == 0))) && (v38 != 0 || v6 != 0))
            {
                if ((v6 == 0 || v9 != 1) && (v9 > 1 || v6 != 0))
                {
                    dest_info_init();
                    rsp<8> = &stack_base-288;
                    src_info_init();
                }
                if (((char)(((long long)v9) == 1)) || v9 > 1 || v6 != 0)
                {
                    v38 = 0;
                    v49 = 1;
                    v5 = &stack_base-224;
                    while (true)
                    {
                        v28 = v7;
                        v12 = 0;
                        v46 = *(v28 + v38 * 8);
                        if (remove_trailing_slashes == 0)
                        {
                            v40 = v46;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            v3 = &g_405a30;
                            strip_trailing_slashes();
                        }
                        if (parents_option == 0)
                        {
                            rsp<8> = rsp<8> - 8;
                            v3 = &g_405810;
                            v43 = (long long)last_component();
                            rsp<8> = rsp<8> - 8;
                            v2 = &g_40581b;
                            v27 = strlen(v43);
                            v41 = v27 + 1;
                            v34 = rsp<8> - (v27 + 24 & 0xfffffffefffff000);
                            if (rsp<8> != v34)
                            {
                                do
                                {
                                    rsp<8> = rsp<8> - 0x1000;
                                    v1 = v1;
                                }
                                while (rsp<8> != rsp<8> - (v27 + 24 & 0xfffffffefffff000));
                            }
                            v35 = ((long long)(((int)(v27 + 24 & 0xfffffffefffffff0)) & 4095));
                            rsp<8> = rsp<8> - v35;
                            if (v35 != 0)
                            {
                                v20 = v20;
                            }
                            v40 = rsp<8> + 15 & 0xfffffffefffffff0;
                            rsp<8> = rsp<8> - 8;
                            v20 = &g_40587b;
                            v45 = memcpy(v40, v43, v41);
                            rsp<8> = rsp<8> - 8;
                            v19 = &g_405886;
                            strip_trailing_slashes();
                            rsp<8> = rsp<8> - 8;
                            v18 = &g_4058bf;
                            v42 = (long long)file_name_concat();
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            v3 = &g_405a45;
                            v29 = strlen(rdi<8>);
                            v41 = v29 + 1;
                            v39 = rsp<8> - (v29 + 24 & 0xfffffffefffff000);
                            if (rsp<8> != v39)
                            {
                                do
                                {
                                    rsp<8> = rsp<8> - 0x1000;
                                    v2 = v0;
                                }
                                while (rsp<8> != rsp<8> - (v29 + 24 & 0xfffffffefffff000));
                            }
                            v35 = ((long long)(((int)(v29 + 24 & 0xfffffffefffffff0)) & 4095));
                            rsp<8> = rsp<8> - v35;
                            if (v35 != 0)
                            {
                                v20 = v20;
                            }
                            v40 = rsp<8> + 15 & 0xfffffffefffffff0;
                            rsp<8> = rsp<8> - 8;
                            v20 = &g_405aa5;
                            v44 = memcpy(v40, v40, v41);
                            rsp<8> = rsp<8> - 8;
                            v19 = &g_405ab0;
                            strip_trailing_slashes();
                            rsp<8> = rsp<8> - 8;
                            v18 = &g_405ac6;
                            v42 = (long long)file_name_concat();
                            v17 = v6;
                            v16 = v50;
                            rsp<8> = rsp<8> - 8 - 8 - 8;
                            v15 = &g_405b07;
                            v22 = make_dir_parents_private();
                            rsp<8> = rsp<8> + 8 + 8;
                            if (*(v12) == 47)
                            {
                                v35 = 1;
                                do
                                {
                                    v12 = v35;
                                    v35 += 1;
                                }
                                while (*(v35 + 1) == 47);
                            }
                            if (((long long)v22) == 0)
                            {
                                v22 = ((long long)parents_option);
                                v49 = 0;
                            }
                            else
                            {
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_405ba3;
                                v49 = ((long long)(((int)v49) & re_protect()));
                                v22 = ((long long)parents_option);
                            }
                            if (((long long)al<1>) != 0)
                            {
                                v40 = v11;
                                if (v11 != 0)
                                {
                                    while (true)
                                    {
                                        v11 = v40->field_a0;
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_405b73;
                                        rpl_free();
                                        v40 = v11;
                                        if (v11 == 0)
                                        {
                                            break;
                                        }
                                    }
                                    /* goto 4217089; */
                                }
                            }
                        }
                        if (parents_option == 0 || ((long long)v22) != 0)
                        {
                            *(rsp<8> + 8) = 0;
                            *(rsp<8> - 8 + 8) = &stack_base-233;
                            rsp<8> = rsp<8> - 8 - 8 - 8;
                            *(rsp<8> + None) = &g_4058ef;
                            rsp<8> = rsp<8> + 8 + 8;
                            v49 = ((long long)(v49 & copy()));
                        }
                        v38 = 1;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40590d;
                        rpl_free();
                        if (v9 <= ((int)1))
                        {
                            break;
                        }
                    }
                    v30 = v49;
                    return v30;
                }
            }
        }
        if (v6 == 0)
        {
            if (v9 > 2)
            {
                v42 = (long long)quotearg_style();
                error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v39), 0x5));
                usage(); /* do not return */
            }
        }
        else
        {
            error(0x1, 0x0, dcgettext(0x0, &g_414898, 0x5));
        }
        if (v6 == 0 && (((long long)v34) == 0 || v9 <= 2) && (v9 <= 2 || !(((char)(v8 + 1 == 0)))) && (((char)(v8 + 1 == 0)) || v38 == 0 || ((long long)v34) != 0))
        {
            if (parents_option == 0)
            {
                if (v41->field_16 != 0)
                {
                    if (v41->field_0 != 0)
                    {
                        v24 = strcmp(v7[0], v7[1]);
                        if (v24 == 0)
                        {
                            if (v10 == 0)
                            {
                                if (v14 == 0)
                                {
                                    v24 = __xstat(0x1, ((int)v7[1]), ((int)&v13));
                                    if (v24 != 0)
                                    {
                                        v4 = 0;
                                        v3 = &stack_base-224;
                                        copy();
                                        rsp<8> = &stack_base-280;
                                        v30 = v49;
                                        return v30;
                                    }
                                }
                                if (v24 == 0 || v14 != 0)
                                {
                                    if ((((short)v14) & 0xf000) == 0x8000)
                                    {
                                        find_backup_file_name();
                                        v39 = v41;
                                        v34 = 22;
                                        for (v40 = &x_tmp.7704; v34 != 0; v39 += v51 * 4)
                                        {
                                            v34 -= 1;
                                            v40->field_0 = v39->field_0;
                                            v40 += v51 * 4;
                                        }
                                        x_tmp.7704 = 0;
                                        v4 = 0;
                                        v3 = &stack_base-224;
                                        copy();
                                        rsp<8> = &stack_base-280;
                                        v30 = v49;
                                        return v30;
                                    }
                                    v4 = 0;
                                    v3 = &stack_base-224;
                                    copy();
                                    rsp<8> = &stack_base-280;
                                    v30 = v49;
                                    return v30;
                                }
                            }
                            v4 = 0;
                            v3 = &stack_base-224;
                            copy();
                            rsp<8> = &stack_base-280;
                            v30 = v49;
                            return v30;
                        }
                        v4 = 0;
                        v3 = &stack_base-224;
                        copy();
                        rsp<8> = &stack_base-280;
                        v30 = v49;
                        return v30;
                    }
                    v4 = 0;
                    v3 = &stack_base-224;
                    copy();
                    rsp<8> = &stack_base-280;
                    v30 = v49;
                    return v30;
                }
                v4 = 0;
                v3 = &stack_base-224;
                copy();
                rsp<8> = &stack_base-280;
                v30 = v49;
                return v30;
            }
            v39 = "with --parents, the destination must be a directory";
            error(0x0, 0x0, dcgettext(0x0, v39, 0x5));
            usage(); /* do not return */
        }
    }
    else if (v40 != 1)
    {
        v39 = "missing file operand";
        error(0x0, 0x0, dcgettext(0x0, v39, 0x5));
        usage(); /* do not return */
    }
    else
    {
        v42 = (long long)quotearg_style();
        error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v39), 0x5));
        usage(); /* do not return */
    }
}
