typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    unsigned long long field_28;
    unsigned long long field_30;
    char field_38;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    char padding_70[8];
    unsigned long long field_78;
    unsigned int field_80;
    char padding_84[4];
    unsigned long long field_88;
    unsigned long long field_90;
    unsigned long long field_98;
    char padding_a0[16];
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
    char padding_b8[80];
    unsigned long long field_108;
} struct_5;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_12 {
    char padding_0[216];
    unsigned long long field_d8;
} struct_12;

typedef struct struct_9 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    struct struct_10 *field_20;
    char padding_28[8];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_9;

typedef struct struct_11 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_11;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    struct struct_7 *field_68;
    char padding_70[8];
    unsigned long long field_78;
    unsigned int field_80;
    char padding_84[4];
    unsigned long long field_88;
    unsigned long long field_90;
    unsigned long long field_98;
    char padding_a0[16];
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
    char padding_b8[80];
    unsigned long long field_108;
} struct_6;

typedef struct struct_13 {
    char padding_0[104];
    char field_68;
} struct_13;

typedef struct struct_8 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[64];
    unsigned long long field_68;
    unsigned long long field_70;
    char padding_78[8];
    unsigned int field_80;
} struct_8;

extern <missing-type> g_400000;
extern char g_b0;
extern <missing-type> utf8_sb_map;

int re_compile_internal()
{
    BOT tmp_14;  // tmp #14
    BOT tmp_4;  // tmp #4
    BOT tmp_16;  // tmp #16
    BOT tmp_2;  // tmp #2
    unsigned long v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x150]
    uint128_t v10;  // [bp-0xf8]
    char v11;  // [bp-0xf0]
    unsigned long v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xd0]
    char *v15;  // [bp-0xb0]
    unsigned long|unsigned long long v16;  // [bp-0xa8]
    unsigned long v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    unsigned long v19;  // [bp-0x90]
    char *|unsigned long long|unsigned long|char|struct_5 * v2;  // [bp-0x148]
    unsigned long v20;  // [bp-0x88]
    unsigned long v21;  // [bp-0x80]
    unsigned long v22;  // [bp-0x78]
    unsigned long v23;  // [bp-0x70]
    char *v24;  // [bp-0x60]
    char v25;  // [bp-0x50]
    char v26;  // [bp-0x4f]
    char v27;  // [bp-0x4e]
    char v28;  // [bp-0x4d]
    unsigned int v29;  // [bp-0x48]
    unsigned long v3;  // [bp-0x140]
    char *|unsigned long long|char v31;  // rax
    unsigned long|unsigned long long|char v32;  // rax
    unsigned long long v35;  // rax
    unsigned long|struct_0 *|char v4;  // [bp-0x138]
    unsigned long long v41;  // rax
    char [4]|char [2] v42;  // rax
    unsigned long long v43;  // rcx
    char *|unsigned long long|struct_4 * v44;  // rdx
    char *v45;  // rdx
    unsigned long long v46;  // rdx
    struct_12 *|struct_4 *|unsigned long long|struct_11 * v47;  // rbx
    struct_5 *v48;  // rbx
    struct_5 *|unsigned long long|struct_6 * v49;  // rbp
    char v5;  // [bp-0x129]
    unsigned long|unsigned long long|unsigned int v50;  // esi
    unsigned long long|struct_1 *|struct_4 *|unsigned long long *[4]|unsigned long|struct_0 *|unsigned int|char|struct_5 * v51;  // rdi
    char *|unsigned long long v58;  // r12
    unsigned long long v59;  // r12
    struct_0 *|char v6;  // [bp-0x128]
    unsigned long|unsigned long long v60;  // r13
    struct_9 * v61;  // r13
    struct_0 * v63;  // r14
    unsigned long long v64;  // r15d
    unsigned long long|unsigned int v65;  // cc_dep1
    unsigned long v66;  // d
    unsigned long v7;  // [bp-0x120]
    unsigned int v8;  // [bp-0x10c]

    v63 = v51;
    v60 = v43;
    v58 = v50;
    v47 = v44;
    v49 = v51->field_0;
    v51->field_38 = v51->field_38 & 144;
    v65 = v51->field_8;
    v8 = 0;
    v51->field_18 = v43;
    v51->field_10 = 0;
    v51->field_30 = 0;
    v60 = ((long long)(((char)v51[0]) < 0? ((int)v32) : ((int)r13<8>)));
    if (v65 <= 271)
    {
        v51 = v51->field_0;
        v49 = realloc(v51, 0x110);
        if (v49 != 0)
        {
            v63->field_8 = 272;
            v63->field_0 = v49;
        }
        else
        {
            v41 = 12;
            return v41;
        }
    }
    if (v49 != 0 || v65 > 271)
    {
        v63->field_10 = 272;
        v51 = v49 + 8 & 18446744069414584312;
        v49->field_0 = 0;
        v49->field_108 = 0;
        v43 = ((long long)(((int)(v49 - (v49 + 8 & 18446744069414584312))) + 272)) >> 3;
    }
    v43 -= 1;
    v51->field_0 = 0;
    v51 += v66 * 8;
    v49->field_80 = 15;
    if (v44 <= 384307168202282324)
    {
        v49->field_8 = v47 + 1;
        v0 = v47 + 1;
        v49->field_0 = malloc((v47 + 1) * 16);
        if (v47 != 0)
        {
            v50 = 1;
            /* goto 4269680; */
            if (v47 < v50)
            {
                v64 = v50 - 1;
            }
        }
        else
        {
            v64 = 0;
            v50 = 1;
        }
        if (v47 == 0 || v47 < v50)
        {
            v49->field_88 = v64;
            v49->field_40 = calloc(0x18, v50);
            v49->field_b4 = __ctype_get_mb_cur_max();
            v42 = nl_langinfo(0xe);
            if (((char)(((int)v42[0]) & -33)) == 85)
            {
                if (((char)(((int)v42[1]) & -33)) == 84)
                {
                    if (((char)(((int)v42[2]) & -33)) == 70)
                    {
                        v42 = v42 + ((long long)(v42[3] == 45)) + 3;
                        if (v42[0] == 56)
                        {
                            if (v42[1] == 0)
                            {
                                v49->field_b0 = v49->field_b0 | 4;
                            }
                        }
                    }
                }
            }
            v41 = ((long long)v49->field_b0);
            v65 = ((int)v49->field_b4);
            v49->field_b0 = ((char)(((int)v49->field_b0) & -9));
            if (v65 > 1)
            {
                if (((long long)(v41 & 4)) != 0)
                {
                    v49->field_78 = &utf8_sb_map;
                }
                else
                {
                    v41 = calloc(0x20, 0x1);
                    v49->field_78 = v41;
                    if (v41 != 0)
                    {
                        v1 = v58;
                        v2 = v47;
                        v48 = v49;
                        /* goto 4271975; */
                    }
                }
            }
            if (v65 <= 1 || ((long long)(v41 & 4)) != 0)
            {
                if (v49->field_0 != 0)
                {
                    if (v49->field_40 != 0)
                    {
                        v8 = 0;
                        v5 = ((char)(0 != 0)) | ((char)(0 != 0));
                        if (((long long)(((char)(0 != 0)) | ((char)(0 != 0)))) != 0)
                        {
                            v41 = pthread_mutex_init();
                            if (v41 == 0)
                            {
                                if (v8 != 0)
                                {
                                    free_dfa_content();
                                    v63->field_0 = 0;
                                    v41 = ((long long)v8);
                                    v63->field_8 = 0;
                                    return v41;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (v47 >= v50 || v44 <= 384307168202282324 && v47 != 0)
    {
        v50 *= 2;
    }
    v64 = ((int)(0 * 8));
    v49 = 0;
    v41 = btowc(v64);
    v51 = ((int)(v64 & -128));
    if (v41 == -1)
    {
    }
    else
    {
        *(*(v49 + 120)) = *(*(v49 + 120)) | 1 << (((char)v49) & 63);
        if (v51 == 0)
        {
            if (v41 == v64)
            {
                v49 = ((long long)(((int)v49) + 1));
                v64 = ((long long)v64) + 1;
            }
        }
    }
    if (v51 == 0 && (v41 == -1 || v41 != v64))
    {
        *(v49 + 176) = *(v49 + 176) | 8;
    }
    if (v41 == -1 || v41 != v64 || v51 != 0)
    {
        v49 = ((long long)(((int)v49) + 1));
        v64 = ((long long)v64) + 1;
    }
    if (False)
    {
        v49 = v48;
        v58 = v1;
        v47 = v2;
    }
    if (...)
    {
        v8 = 12;
        free_dfa_content();
        v63->field_0 = 0;
        v41 = ((long long)v8);
        v63->field_8 = 0;
        return v41;
    }
    if (...)
    {
        v43 = 18;
        v45 = v63->field_28;
        v51 = &v14;
        v50 = ((long long)v49->field_b4);
        v13 = v58;
    }
    v43 -= 1;
    v14 = 0;
    v51 += v66 * 8;
    v24 = v45;
    v21 = v47;
    v1 = ((long long)(((int)v60) & &g_400000));
    v25 = ((char)((((int)v60) & &g_400000) != 0));
    v44 = v24 | ((long long)(((int)v60) & &g_400000));
    v31 = ((long long)v49->field_b0);
    v51 = ((char)((v24 | ((long long)(((int)v60) & &g_400000))) != 0));
    v20 = v47;
    tmp_14 = v31;
    v28 = ((char)(v44 != 0));
    v29 = ((int)v50);
    v27 = ((char)(((int)(((long long)tmp_14) >> 3)) & 1));
    v26 = ((char)(((int)v31) % 4 & 1));
    v23 = v47;
    v22 = v47;
    if (v47 != 0)
    {
        v2 = v44;
        v31 = re_string_realloc_buffers();
        if (v31 == 0)
        {
            v51 = ((long long)v28);
            v50 = ((int)v49->field_b4);
            v44 = v2;
        }
    }
    if (v47 == 0 || v31 == 0)
    {
        tmp_4 = v58;
        v58 = (((long long)v51) != 0? v14 : v58);
        v65 = v1;
        v14 = (((long long)v51) != 0? v14 : tmp_4);
        if (v65 != 0)
        {
            if (v50 <= 1)
            {
                build_upper_buffer();
                v8 = 0;
                /* goto 4270391; */
            }
        }
        else
        {
            if (v50 <= 1)
            {
                v43 = v18;
                if (v44 != 0)
                {
                    v31 = v16;
                    v43 = (v21 <= v43? v21 : v43);
                    if ((v21 <= v18? v21 : v18) <= v16)
                    {
                        v43 = v16;
                        /* goto 4270367; */
                    }
                }
            }
            else
            {
                build_wcs_buffer();
                v8 = 0;
                /* goto 4270391; */
            }
        }
    }
    if (v31 == 0 || v47 == 0 && v50 > 1 && v65 != 0 || v31 == 0 && v50 > 1 && v65 != 0)
    {
        v31 = build_wcs_upper_buffer();
    }
    if (v31 == 0)
    {
        if (v31 == 0 || v50 > 1)
        {
            if (v31 == 0 || v65 != 0)
            {
                if (v47 == 0 || v31 == 0 || v31 == 0)
                {
                    if (v47 > v17)
                    {
                        if (v18 <= ((long long)v49->field_b4) + v16)
                        {
                            v31 = re_string_realloc_buffers();
                        }
                    }
                }
            }
        }
    }
    if (v31 == 0 && v47 > v17 && (v31 == 0 || v50 > 1) && (v31 == 0 || v65 != 0) && (v47 == 0 || v31 == 0 || v31 == 0) && v18 > ((long long)v49->field_b4) + v16 || v31 == 0 && (v31 == 0 || v50 > 1) && (v31 == 0 || v65 != 0) && (v47 == 0 || v31 == 0 || v31 == 0) && v47 <= v17)
    {
        v8 = 0;
        /* goto 4270391; */
    }
    *(v58 + v31) = *(v24 + ((long long)*(v13 + v31 + v15)));
    v31 += 1;
    if (v43 != v31)
    {
        v58 = v14;
        /* goto 4270320; */
    }
    if (v43 == v31 || v50 <= 1 && v65 == 0 && (v47 == 0 || v31 == 0) && v44 == 0 || v50 <= 1 && (v21 <= v18? v21 : v18) <= v16 && v65 == 0 && v44 != 0 && (v47 == 0 || v31 == 0))
    {
        v16 = v43;
        v17 = v43;
        v8 = 0;
    }
    if (...)
    {
        v47 = v63->field_0;
        v63->field_30 = 0;
        v47->field_d8 = v60;
        v3 = &stack_base-264;
        v19 += (long long)peek_token();
        v60 = (long long)parse_reg_exp();
        if (v8 == 0)
        {
            v2 = v47 + 128;
            v10 = 0;
            v0 = &stack_base-248;
            v11 = 2;
            v47 = (long long)create_token_tree.isra.0();
        }
        else if (v60 != 0)
        {
            v2 = v47 + 128;
            v10 = 0;
            v0 = &stack_base-248;
            v11 = 2;
            v47 = (long long)create_token_tree.isra.0();
        }
        else
        {
            v49->field_68 = 0;
            v58 = v63->field_0;
            /* goto 4271808; */
        }
    }
    if (...)
    {
        v10 = 0;
        v11 = 16;
        v47 = (long long)create_token_tree.isra.0();
    }
    if (...)
    {
        v58 = v63->field_0;
        if (((long long)(((char)(v47 == 0)) | ((char)(v47 == 0)))) == 0)
        {
            tmp_16 = *(v58 + 8);
            v49->field_68 = v47;
            v2 = tmp_16 * 8;
            *(v58 + 24) = v47;
            v47 = malloc(tmp_16 * 8);
            *(v58 + 32) = v4;
            v4 = malloc(tmp_16 * 8);
            *(v58 + 40) = v2;
            v2 = malloc((tmp_16 + tmp_16 * 2) * 8);
            v31 = malloc((tmp_16 + tmp_16 * 2) * 8);
            *(v58 + 48) = v31;
            if (v47 != 0)
            {
                if (v4 != 0)
                {
                    if (v2 != 0)
                    {
                        if (v31 != 0)
                        {
                            v47 = v63->field_30;
                            v35 = malloc(v63->field_30 * 8);
                            *(v58 + 224) = v35;
                            if (v35 != 0)
                            {
                                v46 = 0;
                                if (v47 != 0)
                                {
                                    /* goto 4270800; */
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            v8 = 12;
            v49->field_68 = 0;
            /* goto 4271808; */
        }
    }
    if (...)
    {
        v8 = 12;
        /* goto 4271808; */
    }
    if (...)
    {
        *(v35 + v46 * 8) = v46;
        v46 += 1;
    }
    if (...)
    {
        preorder();
        v44 = v63->field_30;
        if (v63->field_30 != 0)
        {
            v51 = *(v58 + 224);
            v35 = 0;
        }
        else
        {
            /* goto 4273360; */
        }
    }
    if (...)
    {
        if (*(v51 + (v35 << 3)) == v35)
        {
            v35 += 1;
        }
    }
    if (...)
    {
        rpl_free();
        *(v58 + 224) = 0;
    }
    if (...)
    {
        v31 = postorder();
        if (v31 == 0)
        {
            v31 = postorder();
            if (v31 == 0)
            {
                preorder();
                v2 = v49;
                v61 = *(v58 + 104);
                v6 = v63;
                v7 = &stack_base-216;
            }
        }
    }
    v44 = v61->field_38;
    v44 = v61->field_10;
    v31 = ((char)(v61->field_10 == v47)) | ((char)(v61->field_10 == 0));
    if (((long long)(((char)(v61->field_10 == v47)) | ((char)(v61->field_10 == 0)))) != 0)
    {
        v44 = v61->field_0;
        v47 = v61;
        if (v61->field_0 != 0)
        {
            v61 = v44;
            /* goto 4271059; */
        }
        else
        {
            v4 = v31;
            v49 = v2;
            v47 = 0;
            v63 = v6;
            v60 = v58;
        }
    }
    else
    {
        v47 = v44;
    }
    if (((long long)(((char)(v61->field_10 == v47)) | ((char)(v61->field_10 == 0)))) == 0 || ((long long)v61->field_30) > 16 && v47 != 0)
    {
        v61 = rbx<8>;
        /* goto 4270992; */
    }
    if (((long long)v61->field_30) <= 16)
    {
        /* goto ((long long)*(4288680 + ((long long)*(r13<8> + 48)) * 4)) + 4288680; */
    }
    else
    {
        *(*(v58 + 24) + v44 * 8) = v61->field_20->field_38;
        v47 = v61->field_8;
    }
    if (*(v58 + 16) != 1 || *(v58 + 16) != v47 && *(*(v58 + 48) + 0 + 8) != 0 || v61->field_0 == 0 && ((long long)(((char)(v61->field_10 == v47)) | ((char)(v61->field_10 == 0)))) != 0 && *(v58 + 16) != v47)
    {
        v58 = 3 * 0;
    }
    if (*(*(v58 + 48) + v58 + 8) != 0 || *(*(v58 + 48) + 8) != 0)
    {
        v47 = 1;
    }
    if (*(v58 + 16) == 1 && *(*(v58 + 48) + v58 + 8) != 0 || *(v58 + 16) == 1 && *(*(v58 + 48) + 8) != 0 || *(v58 + 16) == v47 && *(*(v58 + 48) + 0 + 8) != 0 || v61->field_0 == 0 && *(v58 + 16) == v47 && ((long long)(((char)(v61->field_10 == v47)) | ((char)(v61->field_10 == 0)))) != 0)
    {
        if (((long long)0) != 0)
        {
        }
        else
        {
            v58 = v60;
        }
    }
    if (...)
    {
        v2 = 0;
        v31 = calc_eclosure_iter();
        if (v31 == 0)
        {
            v47 = 1;
            if (*(*(v58 + 48) + 0 + 8) == 0)
            {
                rpl_free();
                if (*(v58 + 16) != 1)
                {
                    v58 = 3 * 8;
                }
                else
                {
                    v58 = 0;
                }
            }
        }
    }
    if (...)
    {
        v8 = ((int)v31);
        v58 = v63->field_0;
        /* goto 4271808; */
    }
    if (...)
    {
        v31 = malloc(v47 * 24);
        v49->field_38 = v31;
        if (v31 != 0)
        {
            v43 = 0;
            if (v47 == 0)
            {
                /* goto 4272448; */
            }
        }
        else
        {
            v8 = 12;
            v58 = v63->field_0;
            /* goto 4271808; */
        }
    }
    v44 = v43 * 3;
    v43 += 1;
    *(v31 + v44 * 8 + 16) = 0;
    *(v31 + v44 * 8) = 0;
    if (v49->field_10 > v43)
    {
        v31 = v49->field_38;
        /* goto 4272229; */
    }
    else if (v2->field_10 != 0)
    {
        v4 = v6;
        v31 = v49->field_30;
        v2 = v49;
        v49 = v59;
        v6 = 0;
        v60 = 0;
    }
    if (*(v49 + 16) > v60 || v49->field_10 <= v43 && v2->field_10 != 0)
    {
        v47 = 0;
    }
    if (*(v31 + (v60 + (v60 << 1) << 3) + 8) <= 0 && (v49->field_10 <= v43 || *(v49 + 16) > v60) && (v2->field_10 != 0 || *(v49 + 16) > v60))
    {
        /* goto 4272416; */
    }
    if (v47 < *(*(v49 + 48) + (0 + (0 << 1) << 3) + 8) || *(v31 + (v60 + (v60 << 1) << 3) + 8) > 0 && *(v49 + 16) > v60 || v49->field_10 <= v43 && *(v31 + (v60 + (v60 << 1) << 3) + 8) > 0 && v2->field_10 != 0)
    {
        v31 = re_node_set_insert_last();
        if (((long long)v31) != 0)
        {
            v31 = *(v49 + 48);
            v47 += 1;
        }
        else
        {
            v63 = v4;
            v58 = v4->field_0;
            v8 = 12;
            /* goto 4271808; */
        }
    }
    if (...)
    {
        v60 += 1;
        if (*(v49 + 16) <= v60)
        {
            v49 = v2;
            v63 = v4;
        }
    }
    if (...)
    {
        v32 = ((long long)v49->field_b0);
        v8 = 0;
        tmp_2 = v32;
        v32 = ((char)(((long long)tmp_2) >> 2)) & ((char)(v1 == 0));
        if (((long long)(((char)(((long long)tmp_2) >> 2)) & ((char)(v1 == 0)))) != 0)
        {
            if (v63->field_28 == 0)
            {
                if (v49->field_10 != 0)
                {
                    v51 = v49->field_0;
                    if (((long long)v51->field_8) <= 12)
                    {
                        /* goto ((long long)*(4288748 + ((long long)*(rdi<8> + 8)) * 4)) + 4288748; */
                    }
                }
            }
        }
    }
    if (...)
    {
        v47 = *(v58 + 112);
    }
    if (...)
    {
        v47 = v47->field_0;
        rpl_free();
    }
    if (...)
    {
        *(v58 + 112) = 0;
        *(v58 + 128) = 15;
        *(v58 + 104) = 0;
        rpl_free();
        *(v58 + 32) = 0;
        re_string_destruct();
        if (v5 == 0)
        {
            free_dfa_content();
            v63->field_0 = 0;
            v41 = ((long long)v8);
            v63->field_8 = 0;
            return v41;
        }
    }
}
