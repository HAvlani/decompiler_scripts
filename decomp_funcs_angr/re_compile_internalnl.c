typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    unsigned long long field_28;
    unsigned long long field_30;
    char field_38;
} struct_2;

typedef struct struct_8 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[32];
    unsigned long long field_68;
    char padding_70[8];
    unsigned long long field_78;
    unsigned int field_80;
    char padding_84[4];
    unsigned long long field_88;
    char padding_90[8];
    unsigned long long field_98;
    char padding_a0[16];
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
    char padding_b8[80];
    unsigned long long field_108;
} struct_8;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
} struct_1;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_7 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    struct struct_5 *field_20;
    char padding_28[8];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_7;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_6;

typedef struct struct_4 {
    char padding_0[24];
    struct struct_5 *field_18;
} struct_4;

typedef struct struct_9 {
    char padding_0[104];
    char field_68;
} struct_9;

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
    char|unsigned long long v14;  // [bp-0xd0]
    char *v15;  // [bp-0xb0]
    unsigned long|unsigned long long v16;  // [bp-0xa8]
    unsigned long v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    unsigned long v19;  // [bp-0x90]
    unsigned long|char|struct_8 *|unsigned long long|char * v2;  // [bp-0x148]
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
    char|unsigned long|struct_2 * v4;  // [bp-0x138]
    char|unsigned long long v41;  // al
    char [2]|char [4] v42;  // rax
    char|unsigned long long|char * v46;  // rax
    unsigned long long v48;  // rax
    char v5;  // [bp-0x129]
    unsigned long long v50;  // rax
    unsigned long|unsigned long long v51;  // rcx
    struct_6 *|struct_10 *|unsigned long long|char * v52;  // rdx
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rdx
    struct_10 *|struct_6 *|unsigned long long v55;  // rbx
    struct_8 *v56;  // rbx
    unsigned long long|struct_8 * v58;  // rbp
    unsigned long|unsigned long long|unsigned int v59;  // rsi
    char|struct_2 * v6;  // [bp-0x128]
    unsigned long long *[4]|struct_1 *|unsigned int|char|struct_8 *|struct_10 *|unsigned long long|struct_2 * v60;  // rdi
    unsigned long long v67;  // r12
    unsigned long long|char * v68;  // r12
    unsigned long|unsigned long long v69;  // r13
    unsigned long v7;  // [bp-0x120]
    struct_7 * v71;  // r13
    struct_2 * v72;  // r14
    unsigned long long|unsigned int v73;  // r15
    unsigned long long|unsigned int v74;  // cc_dep1
    unsigned long v75;  // d
    unsigned int v8;  // [bp-0x10c]

    v72 = v60;
    v69 = v51;
    v68 = v59;
    v55 = v52;
    v58 = v60->field_0;
    v60->field_38 = v60->field_38 & 144;
    v74 = v60->field_8;
    v8 = 0;
    v60->field_18 = v51;
    v60->field_10 = 0;
    v60->field_30 = 0;
    v69 = ((long long)(((char)v60[0]) < 0? ((int)v41) : ((int)r13<8>)));
    if (v74 <= 271)
    {
        v60 = v60->field_0;
        v58 = realloc(v60, 0x110);
        if (v58 != 0)
        {
            v72->field_8 = 272;
            v72->field_0 = v58;
        }
        else
        {
            return v48;
        }
    }
    if (v58 != 0 || v74 > 271)
    {
        v72->field_10 = 272;
        v60 = v58 + 8 & 18446744069414584312;
        v58->field_0 = 0;
        v58->field_108 = 0;
        v51 = ((long long)(((int)(v58 - (v58 + 8 & 18446744069414584312))) + 272)) >> 3;
    }
    v51 -= 1;
    v60->field_0 = 0;
    v60 += v75 * 8;
    v58->field_80 = 15;
    if (v52 <= 384307168202282324)
    {
        v58->field_8 = v55 + 1;
        v0 = v55 + 1;
        v58->field_0 = malloc((v55 + 1) * 16);
        if (v55 != 0)
        {
            v59 = 1;
            /* goto 4269344; */
            if (v55 < v59)
            {
                v73 = v59 - 1;
            }
        }
        else
        {
            v73 = 0;
            v59 = 1;
        }
        if (v55 < v59 || v55 == 0)
        {
            v58->field_88 = v73;
            v58->field_40 = calloc(0x18, v59);
            v58->field_b4 = __ctype_get_mb_cur_max();
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
                                v58->field_b0 = v58->field_b0 | 4;
                            }
                        }
                    }
                }
            }
            v48 = ((long long)v58->field_b0);
            v74 = ((int)v58->field_b4);
            v58->field_b0 = ((char)(((int)v58->field_b0) & -9));
            if (v74 > 1)
            {
                if (((long long)(v48 & 4)) != 0)
                {
                    v58->field_78 = &utf8_sb_map;
                }
                else
                {
                    v48 = calloc(0x20, 0x1);
                    v58->field_78 = v48;
                    if (v48 != 0)
                    {
                        v1 = v68;
                        v2 = v55;
                        v56 = v58;
                        /* goto 4271639; */
                    }
                }
            }
            if (v74 <= 1 || ((long long)(v48 & 4)) != 0)
            {
                if (v58->field_0 != 0)
                {
                    if (v58->field_40 != 0)
                    {
                        v8 = 0;
                        v5 = ((char)(0 != 0)) | ((char)(0 != 0));
                        if (((long long)(((char)(0 != 0)) | ((char)(0 != 0)))) != 0)
                        {
                            v48 = pthread_mutex_init();
                            if (v48 == 0)
                            {
                                if (v8 != 0)
                                {
                                    free_dfa_content();
                                    v72->field_0 = 0;
                                    v72->field_8 = 0;
                                    return v48;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (v55 >= v59 || v52 <= 384307168202282324 && v55 != 0)
    {
        v59 *= 2;
    }
    v73 = 0 * 8;
    v58 = 0;
    v48 = btowc(v73);
    v60 = ((int)(v73 & -128));
    if (v48 == -1)
    {
    }
    else
    {
        *(*(v58 + 120)) = *(*(v58 + 120)) | 1 << (((char)v58) & 63);
        if (v60 == 0)
        {
            if (v48 == v73)
            {
                v58 = ((long long)(((int)v58) + 1));
                v73 = ((int)v73) + 1;
            }
        }
    }
    if (v60 == 0 && (v48 == -1 || v48 != v73))
    {
        *(v58 + 176) = *(v58 + 176) | 8;
    }
    if (v48 == -1 || v60 != 0 || v48 != v73)
    {
        v58 = ((long long)(((int)v58) + 1));
        v73 = ((long long)v73) + 1;
    }
    if (False)
    {
        v58 = v56;
        v68 = v1;
        v55 = v2;
    }
    if (...)
    {
        v8 = 12;
        free_dfa_content();
        v72->field_0 = 0;
        v72->field_8 = 0;
        return v48;
    }
    if (...)
    {
        v51 = 18;
        v53 = v72->field_28;
        v60 = &v14;
        v59 = ((long long)v58->field_b4);
        v13 = v68;
    }
    v51 -= 1;
    v14 = 0;
    v60 += v75 * 8;
    v24 = v53;
    v21 = v55;
    v1 = ((long long)(((int)v69) & &g_400000));
    v25 = ((char)((((int)v69) & &g_400000) != 0));
    v52 = v24 | ((long long)(((int)v69) & &g_400000));
    v46 = ((long long)v58->field_b0);
    v60 = ((char)((v24 | ((long long)(((int)v69) & &g_400000))) != 0));
    v20 = v55;
    tmp_14 = v46;
    v28 = ((char)(v52 != 0));
    v29 = ((int)v59);
    v27 = ((char)(((int)(((long long)tmp_14) >> 3)) & 1));
    v26 = ((char)(((int)v46) % 4 & 1));
    v23 = v55;
    v22 = v55;
    if (v55 != 0)
    {
        v2 = v52;
        v46 = re_string_realloc_buffers();
        if (v46 == 0)
        {
            v60 = ((long long)v28);
            v59 = ((int)v58->field_b4);
            v52 = v2;
        }
    }
    if (v55 == 0 || v46 == 0)
    {
        tmp_4 = v68;
        v68 = (((long long)v60) != 0? v14 : v68);
        v74 = v1;
        v14 = (((long long)v60) != 0? v14 : tmp_4);
        if (v74 != 0)
        {
            if (v59 <= 1)
            {
                build_upper_buffer();
                v8 = 0;
                /* goto 4270055; */
            }
        }
        else
        {
            if (v59 <= 1)
            {
                v51 = v18;
                if (v52 != 0)
                {
                    v46 = v16;
                    v51 = (v21 <= v51? v21 : v51);
                    if ((v21 <= v18? v21 : v18) <= v16)
                    {
                        v51 = v16;
                        /* goto 4270031; */
                    }
                }
            }
            else
            {
                build_wcs_buffer();
                v8 = 0;
                /* goto 4270055; */
            }
        }
    }
    if (v46 == 0 || v55 == 0 && v74 != 0 && v59 > 1 || v46 == 0 && v74 != 0 && v59 > 1)
    {
        v46 = build_wcs_upper_buffer();
    }
    if (v46 == 0)
    {
        if (v46 == 0 || v74 != 0)
        {
            if (v46 == 0 || v59 > 1)
            {
                if (v55 == 0 || v46 == 0 || v46 == 0)
                {
                    if (v55 > v17)
                    {
                        if (v18 <= ((long long)v58->field_b4) + v16)
                        {
                            v46 = re_string_realloc_buffers();
                        }
                    }
                }
            }
        }
    }
    if (v46 == 0 && v55 > v17 && (v46 == 0 || v74 != 0) && (v46 == 0 || v59 > 1) && (v55 == 0 || v46 == 0 || v46 == 0) && v18 > ((long long)v58->field_b4) + v16 || v46 == 0 && (v46 == 0 || v74 != 0) && (v46 == 0 || v59 > 1) && (v55 == 0 || v46 == 0 || v46 == 0) && v55 <= v17)
    {
        v8 = 0;
        /* goto 4270055; */
    }
    *(v68 + v46) = *(v24 + ((long long)*(v13 + v46 + v15)));
    v46 += 1;
    if (v51 != v46)
    {
        v68 = v14;
        /* goto 4269984; */
    }
    if (v51 == v46 || v74 == 0 && v59 <= 1 && (v55 == 0 || v46 == 0) && v52 == 0 || v74 == 0 && v59 <= 1 && (v21 <= v18? v21 : v18) <= v16 && v52 != 0 && (v55 == 0 || v46 == 0))
    {
        v16 = v51;
        v17 = v51;
        v8 = 0;
    }
    if (...)
    {
        v55 = v72->field_0;
        v72->field_30 = 0;
        *(v55 + 216) = v69;
        v3 = &stack_base-264;
        v19 += (long long)peek_token();
        v69 = (long long)parse_reg_exp();
        if (v8 == 0)
        {
            v2 = v55 + 128;
            v10 = 0;
            v0 = &stack_base-248;
            v11 = 2;
            v55 = (long long)create_token_tree.isra.0();
        }
        else if (v69 != 0)
        {
            v2 = v55 + 128;
            v10 = 0;
            v0 = &stack_base-248;
            v11 = 2;
            v55 = (long long)create_token_tree.isra.0();
        }
        else
        {
            v58->field_68 = 0;
            v68 = v72->field_0;
            /* goto 4271472; */
        }
    }
    if (...)
    {
        v10 = 0;
        v11 = 16;
        v55 = (long long)create_token_tree.isra.0();
    }
    if (...)
    {
        v68 = v72->field_0;
        if (((long long)(((char)(v55 == 0)) | ((char)(v55 == 0)))) == 0)
        {
            tmp_16 = *(v68 + 8);
            v58->field_68 = v55;
            v2 = tmp_16 * 8;
            *(v68 + 24) = v55;
            v55 = malloc(tmp_16 * 8);
            *(v68 + 32) = v4;
            v4 = malloc(tmp_16 * 8);
            *(v68 + 40) = v2;
            v2 = malloc((tmp_16 + tmp_16 * 2) * 8);
            v46 = malloc((tmp_16 + tmp_16 * 2) * 8);
            *(v68 + 48) = v46;
            if (v55 != 0)
            {
                if (v4 != 0)
                {
                    if (v2 != 0)
                    {
                        if (v46 != 0)
                        {
                            v55 = v72->field_30;
                            v50 = malloc(v72->field_30 * 8);
                            *(v68 + 224) = v50;
                            if (v50 != 0)
                            {
                                v54 = 0;
                                if (v55 != 0)
                                {
                                    /* goto 4270464; */
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
            v58->field_68 = 0;
            /* goto 4271472; */
        }
    }
    if (...)
    {
        v8 = 12;
        /* goto 4271472; */
    }
    if (...)
    {
        *(v50 + v54 * 8) = v54;
        v54 += 1;
    }
    if (...)
    {
        preorder();
        v52 = v72->field_30;
        if (v72->field_30 != 0)
        {
            v60 = *(v68 + 224);
            v50 = 0;
        }
        else
        {
            /* goto 4273024; */
        }
    }
    if (...)
    {
        if (*(v60 + (v50 << 3)) == v50)
        {
            v50 += 1;
        }
    }
    if (...)
    {
        rpl_free();
        *(v68 + 224) = 0;
    }
    if (...)
    {
        v46 = postorder();
        if (v46 == 0)
        {
            v46 = postorder();
            if (v46 == 0)
            {
                preorder();
                v2 = v58;
                v71 = *(v68 + 104);
                v6 = v72;
                v7 = &stack_base-216;
            }
        }
    }
    v52 = v71->field_38;
    v52 = v71->field_10;
    v46 = ((char)(v71->field_10 == v55)) | ((char)(v71->field_10 == 0));
    if (((long long)(((char)(v71->field_10 == v55)) | ((char)(v71->field_10 == 0)))) != 0)
    {
        v52 = v71->field_0;
        v55 = v71;
        if (v71->field_0 != 0)
        {
            v71 = v52;
            /* goto 4270723; */
        }
        else
        {
            v4 = v46;
            v58 = v2;
            v55 = 0;
            v72 = v6;
            v69 = v68;
        }
    }
    else
    {
        v55 = v52;
    }
    if (((long long)(((char)(v71->field_10 == v55)) | ((char)(v71->field_10 == 0)))) == 0 || ((long long)v71->field_30) > 16 && v55 != 0)
    {
        v71 = rbx<8>;
        /* goto 4270656; */
    }
    if (((long long)v71->field_30) <= 16)
    {
        /* goto ((long long)*(4290312 + ((long long)*(r13<8> + 48)) * 4)) + 4290312; */
    }
    else
    {
        *(*(v68 + 24) + v52 * 8) = v71->field_20->field_38;
        v55 = v71->field_8;
    }
    if (*(v68 + 16) != 1 || *(*(v68 + 48) + v68 + 8) != 0 && *(v68 + 16) != v55 || v71->field_0 == 0 && ((long long)(((char)(v71->field_10 == v55)) | ((char)(v71->field_10 == 0)))) != 0 && *(v68 + 16) != v55)
    {
        v68 = 3 * 0;
    }
    if (*(*(v68 + 48) + v68 + 8) != 0 || *(*(0x30) + 8) != 0)
    {
        v55 = 1;
    }
    if (*(v68 + 16) == 1 && *(*(v68 + 48) + v68 + 8) != 0 || *(v68 + 16) == 1 && *(*(0x30) + 8) != 0 || *(v68 + 16) == v55 && *(*(v68 + 48) + v68 + 8) != 0 || v71->field_0 == 0 && *(v68 + 16) == v55 && ((long long)(((char)(v71->field_10 == v55)) | ((char)(v71->field_10 == 0)))) != 0)
    {
        if (((long long)0) != 0)
        {
            v68 = 0;
        }
        else
        {
            v68 = v69;
        }
    }
    if (...)
    {
        v2 = 0;
        v46 = calc_eclosure_iter();
        if (v46 == 0)
        {
            v55 = 1;
            if (*(*(v68 + 48) + v68 + 8) == 0)
            {
                rpl_free();
                if (*(v68 + 16) != 1)
                {
                    v68 = 3 * 8;
                }
                else
                {
                    v68 = 0;
                }
            }
        }
    }
    if (...)
    {
        v8 = ((int)v46);
        v68 = v72->field_0;
        /* goto 4271472; */
    }
    if (...)
    {
        v46 = malloc(v55 * 24);
        v58->field_38 = v46;
        if (v46 != 0)
        {
            v51 = 0;
            if (v55 == 0)
            {
                /* goto 4272112; */
            }
        }
        else
        {
            v8 = 12;
            v68 = v72->field_0;
            /* goto 4271472; */
        }
    }
    v52 = v51 * 3;
    v51 += 1;
    *(v46 + v52 * 8 + 16) = 0;
    *(v46 + v52 * 8) = 0;
    if (v58->field_10 > v51)
    {
        v46 = v58->field_38;
        /* goto 4271893; */
    }
    else if (v2->field_10 != 0)
    {
        v4 = v6;
        v46 = v58->field_30;
        v2 = v58;
        v58 = v67;
        v6 = 0;
        v69 = 0;
    }
    if (*(v58 + 16) > v69 || v58->field_10 <= v51 && v2->field_10 != 0)
    {
        v55 = 0;
    }
    if (*(v46 + (v69 + (v69 << 1) << 3) + 8) <= 0 && (v58->field_10 <= v51 || *(v58 + 16) > v69) && (*(v58 + 16) > v69 || v2->field_10 != 0))
    {
        /* goto 4272080; */
    }
    if (v55 < *(*(v58 + 48) + (0 + (0 << 1) << 3) + 8) || *(v46 + (v69 + (v69 << 1) << 3) + 8) > 0 && *(v58 + 16) > v69 || v58->field_10 <= v51 && *(v46 + (v69 + (v69 << 1) << 3) + 8) > 0 && v2->field_10 != 0)
    {
        v46 = re_node_set_insert_last();
        if (((long long)v46) != 0)
        {
            v46 = *(v58 + 48);
            v55 += 1;
        }
        else
        {
            v72 = v4;
            v68 = v4->field_0;
            v8 = 12;
            /* goto 4271472; */
        }
    }
    if (...)
    {
        v69 += 1;
        if (*(v58 + 16) <= v69)
        {
            v58 = v2;
            v72 = v4;
        }
    }
    if (...)
    {
        v41 = ((long long)v58->field_b0);
        v8 = 0;
        tmp_2 = v41;
        v41 = ((char)(((long long)tmp_2) >> 2)) & ((char)(v1 == 0));
        if (((long long)(((char)(((long long)tmp_2) >> 2)) & ((char)(v1 == 0)))) != 0)
        {
            if (v72->field_28 == 0)
            {
                if (v58->field_10 != 0)
                {
                    v60 = v58->field_0;
                    if (((long long)v60->field_8) <= 12)
                    {
                        /* goto ((long long)*(4290380 + ((long long)*(rdi<8> + 8)) * 4)) + 4290380; */
                    }
                }
            }
        }
    }
    if (...)
    {
        v55 = *(v68 + 112);
    }
    if (...)
    {
        v55 = v55->field_0;
        rpl_free();
    }
    if (...)
    {
        *(v68 + 112) = 0;
        *(v68 + 128) = 15;
        *(v68 + 104) = 0;
        rpl_free();
        *(v68 + 32) = 0;
        re_string_destruct();
        if (v5 == 0)
        {
            free_dfa_content();
            v72->field_0 = 0;
            v72->field_8 = 0;
            return v48;
        }
    }
}
