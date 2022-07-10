typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_4;

typedef struct struct_2 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
    uint128_t field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_2;

typedef struct struct_10 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
    uint128_t field_20;
    unsigned long long field_28;
    struct struct_0 *field_30;
} struct_10;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_7 {
    char padding_0[152];
    struct struct_0 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[8];
    unsigned long long field_c8;
    char padding_d0[8];
    unsigned long long field_d8;
} struct_7;

typedef struct struct_8 {
    char padding_0[16];
    unsigned long long field_10;
    struct struct_0 *field_18;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
    char field_8;
} struct_9;

typedef struct struct_11 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    char field_28;
} struct_11;

int update_cur_sifted_state()
{
    BOT tmp_68;  // tmp #68
    BOT tmp_15;  // tmp #15
    BOT tmp_6;  // tmp #6
    BOT tmp_31;  // tmp #31
    unsigned long v0;  // [bp-0xe8]
    struct_7 *|unsigned int v1;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0x90]
    unsigned int v11;  // [bp-0x7c]
    BOT|unsigned long long|unsigned int v12;  // [bp-0x78]
    unsigned long|BOT v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x60]
    BOT v15;  // [bp-0x58]
    unsigned long v16;  // [bp-0x50]
    struct_0 *v17;  // [bp-0x48]
    unsigned long|unsigned int|unsigned long long [4]|struct_9 *|unsigned long long v19;  // rax
    unsigned long long [9]|unsigned long long|unsigned long long [10] v2;  // [bp-0xd0]
    unsigned long long [28]|struct_0 *|unsigned long long v20;  // rcx
    unsigned long long v21[3];  // rcx
    unsigned long long [4]|struct_0 *|unsigned long long v22;  // rdx
    unsigned long long v23;  // rdx
    unsigned long long|struct_10 * v24;  // rbx
    struct_0 * v25;  // rbp
    unsigned long long [4]|struct_2 *|unsigned long long|unsigned int v26;  // rsi
    unsigned long long [28]|unsigned long long v27;  // rdi
    unsigned long long v28;  // r8
    unsigned long long v29;  // r9
    struct_8 *v3;  // [bp-0xc8]
    unsigned long long v30;  // r11
    unsigned long long|struct_4 * v31;  // r12
    struct_0 *|unsigned long long v32;  // r13
    unsigned long|unsigned long long v33;  // r14
    struct_11 *|struct_0 *|unsigned long long v34;  // r15
    unsigned long long v35;  // cc_dep1
    uint128_t v36;  // xmm1
    uint128_t v37;  // xmm2
    unsigned long long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb8]
    unsigned long v6;  // [bp-0xb0]
    unsigned long|struct_2 * v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]

    v33 = v23;
    v31 = v21;
    v24 = v26;
    v25 = v27[19];
    v1 = v27;
    tmp_68 = v23 * 8;
    v22 = v21[1];
    v11 = 0;
    v4 = tmp_68;
    v20 = *(tmp_68 + v27[23]);
    v3 = *(tmp_68 + v27[23]);
    if (v20 != 0)
    {
        if (v22 == 0)
        {
            *(v26->field_0 + v33 * 8) = 0;
            if (((long long)(*(*(tmp_68 + v27[23]) + 104) & 64)) == 0)
            {
                return rax<8>;
            }
        }
        v12 = 0;
        v22 = (long long)re_acquire_state();
        if (v12 != 0)
        {
            return rax<8>;
        }
        else
        {
            v32 = v2[7];
            if (v2[7] == 0)
            {
                tmp_15 = v31->field_8;
                v2[8] = 0;
                v2 = v22;
                v2[7] = tmp_15;
                v19 = malloc(tmp_15 * 8);
                v2[9] = v19;
                if (v19 != 0)
                {
                    v35 = v31->field_8;
                    v12 = 0;
                    if (v35 <= 0)
                    {
                    }
                    else
                    {
                        while (true)
                        {
                            v12 = re_node_set_merge();
                            if (v12 == 0)
                            {
                                v32 += 1;
                            }
                            else
                            {
                                return rax<8>;
                            }
                        }
                    }
                }
                else
                {
                    return rax<8>;
                }
            }
            if (v2[7] != 0 || v19 != 0)
            {
                v6 = v3 + 8;
                v11 = re_node_set_add_intersect();
                if (v11 != 0)
                {
                    return rax<8>;
                }
                else
                {
                    v35 = *(v24 + 0x28);
                    if (*(v24 + 0x28) != 0)
                    {
                        v5 = v1->field_d8;
                        if (!(((char)(v35 <= 0))))
                        {
                            v2 = v33;
                            v32 = 0;
                            while (true)
                            {
                                v22 = *(v24->field_28 + v32 * 8) * 48 + v5;
                                if (...)
                                {
                                    v19 = v25->field_0;
                                    v26 = v31->field_8;
                                    v34 = *(v25->field_0 + v22[0] * 16);
                                    if (v2 != v22[3])
                                    {
                                        v33 = 0;
                                        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                                        {
                                            v26 = v34;
                                            v34 = v25;
                                            v25 = v26;
                                            while (true)
                                            {
                                                v19 += *(v31->field_10 + v33 * 8) * 16;
                                                if (((int)v19->field_8) - 8 <= 1 && v25 == v19->field_0)
                                                {
                                                    v19 = sub_epsilon_src_nodes();
                                                    if (v19 != 0)
                                                    {
                                                        return rax<8>;
                                                    }
                                                    else
                                                    {
                                                        v33 += 1;
                                                        if (v33 >= v31->field_8)
                                                        {
                                                            /* goto 4305512; */
                                                        }
                                                    }
                                                }
                                                if (((int)v19->field_8) - 8 > 1 || v25 != v19->field_0)
                                                {
                                                    v33 += 1;
                                                }
                                                if (v19 == 0 || ((int)v19->field_8) - 8 > 1 || v25 != v19->field_0)
                                                {
                                                    if ((((int)v19->field_8) - 8 <= 1 || v33 < v31->field_8) && (v33 < v31->field_8 || v25 == v19->field_0) && (v33 < v31->field_8 || ((int)v19->field_8) - 8 > 1 || v25 != v19->field_0))
                                                    {
                                                        v19 = v25->field_0;
                                                    }
                                                    if ((((int)v19->field_8) - 8 <= 1 || v33 >= v31->field_8) && (v25 == v19->field_0 || v33 >= v31->field_8) && (v33 >= v31->field_8 || ((int)v19->field_8) - 8 > 1 || v25 != v19->field_0))
                                                    {
                                                        v25 = v34;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                                    {
                                        v33 = 18446744069414584319;
                                        v29 = 18446744069414584319;
                                        v20 = v31->field_10;
                                        v30 = v31->field_10 + v26 * 8;
                                        while (true)
                                        {
                                            v27 = v20->field_0;
                                            v22 = v20->field_0 * 16 + v19;
                                            v26 = ((int)*(v20->field_0 * 16 + v19 + 8));
                                            if (*((v20->field_0 << 4) + v19 + 8) != 8)
                                            {
                                                if (v26 == 9)
                                                {
                                                    v33 = (v26 == v22->field_0? v27 : r14<8>);
                                                }
                                                v20 += 8;
                                                if (v30 == v20)
                                                {
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                v29 = (v26 == v22->field_0? v27 : r9<8>);
                                                v20 += 8;
                                                if (v30 == v20)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        v19 = sub_epsilon_src_nodes();
                                        if (v19 != 0)
                                        {
                                            return rax<8>;
                                        }
                                        else if (v31->field_8 > 0)
                                        {
                                            v7 = v24;
                                            v24 = 0;
                                            while (true)
                                            {
                                                v19 = re_node_set_contains.isra.0();
                                                if (v19 == 0)
                                                {
                                                    v19 = re_node_set_contains.isra.0();
                                                    if (v19 == 0)
                                                    {
                                                        v19 = sub_epsilon_src_nodes();
                                                        if (v19 != 0)
                                                        {
                                                            return rax<8>;
                                                        }
                                                    }
                                                }
                                                if (v19 != 0 || v19 != 0)
                                                {
                                                    v24 += 1;
                                                }
                                                if (v31->field_8 <= rbx<8> && (v19 == 0 || v19 != 0 || v19 != 0))
                                                {
                                                    v24 = v7;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (...)
                                {
                                    v32 += 1;
                                    v33 = v2;
                                }
                            }
                        }
                        v11 = 0;
                    }
                    v32 = v4 + v24->field_0;
                    v32->field_0 = (long long)re_acquire_state();
                    if (...)
                    {
                        return rax<8>;
                    }
                }
            }
        }
        if (False)
        {
            return rax<8>;
        }
        if (...)
        {
            v27 = 0;
            v26 = v1->field_c8;
            v22 = v1->field_c8;
            while (v22 > v27)
            {
                v20 = v22 + v27 >> 1;
                if (v33 <= *(((v22 + v27 & 18446744069414584318) + (v22 + v27 >> 1) << 4) + v1->field_d8 + 8))
                {
                    v22 = v20;
                }
                else
                {
                    v27 = v22 + 1;
                }
            }
            v9 = v27;
            if (v26 > v27)
            {
                v20 = v1;
                tmp_6 = v9 * 48;
                v10 = v9 * 48;
                if (v33 == *(v20[27] + tmp_6 + 8))
                {
                    v19 = v3;
                    v12 = 0;
                    if (v19[2] > 0)
                    {
                        v2 = 0;
                        v8 = v24 + 48;
                        do
                        {
                            v19 = ((long long)*(*(v3->field_18 + v2 * 8) * 16 + v1->field_98->field_0 + 8));
                            if (v19 == 4 && (*(v3->field_18 + (v2 << 3)) != v24->field_10 || v33 != v24->field_18))
                            {
                                v31 = v9;
                                v34 = v10 + v1->field_d8;
                                v6 = v13 * 24;
                                v5 = v13 * 8;
                                while (true)
                                {
                                    if (v13 == v34->field_0)
                                    {
                                        v28 = v33 + v34->field_18 - v34->field_10;
                                        if (v28 <= v24->field_18 && *(v24->field_0 + (v28 << 3)) != 0)
                                        {
                                            v19 = re_node_set_contains.isra.0();
                                            if (v19 != 0)
                                            {
                                                v0 = v28;
                                                v19 = check_dst_limits.isra.0();
                                                if (((long long)v19) == 0)
                                                {
                                                    if (((long long)v12) != 0)
                                                    {
                                                    }
                                                    else
                                                    {
                                                        v36 = v24->field_10;
                                                        v37 = v24->field_20;
                                                        tmp_31 = v24->field_28;
                                                        v12 = v24->field_0;
                                                        v17 = tmp_31;
                                                        v13 = v36;
                                                        v15 = v37;
                                                        v19 = re_node_set_init_copy();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (v28 <= v24->field_18 && ((long long)v12) == 0 && v13 == v34->field_0 && ((long long)v19) == 0 && v19 != 0 && *(v24->field_0 + (v28 << 3)) != 0 && ((int)v19) == 0 || v28 <= v24->field_18 && v13 == v34->field_0 && ((long long)v19) == 0 && ((long long)v12) != 0 && v19 != 0 && *(v24->field_0 + (v28 << 3)) != 0)
                                    {
                                        v13 = *(v3->field_18 + 0 * 8);
                                        v7 = &stack_base-120;
                                        v14 = v33;
                                        v19 = re_node_set_insert();
                                        if (((long long)v19) != 0)
                                        {
                                            v19 = sift_states_backward();
                                            if (((int)v19) == 0)
                                            {
                                                v22 = ((long long)v12);
                                                if (v24->field_8 != 0)
                                                {
                                                    v19 = merge_state_array();
                                                    if (((int)v19) == 0)
                                                    {
                                                        v22 = ((long long)v12);
                                                        /* goto 4304906; */
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v19 = 12;
                                        }
                                    }
                                    if (...)
                                    {
                                        return rax<8>;
                                        v1 = v19;
                                        rpl_free();
                                        return rax<8>;
                                    }
                                    if (...)
                                    {
                                        *(v22 + v4) = *(v4 + ((long long)v12));
                                        v19 = (long long)re_node_set_contains.isra.0() - 1;
                                        v22 = v19;
                                        if (((long long)*((long long *)(((char *)&v15) + 8))) > v22 && !(((char)(v22 - 1 >> 63))))
                                        {
                                            v16 = ((long long)*((long long *)(((char *)&v15) + 8))) - 1;
                                            re_node_set_remove_at.isra.0.part.0();
                                        }
                                        v34 = v31 * 48 + v1->field_d8;
                                    }
                                    if (...)
                                    {
                                        v31 += 1;
                                        v19 = r15<8> + 48;
                                        v34 = v19;
                                    }
                                }
                            }
                            v26 = v3;
                            v2 += 1;
                        }
                        while (v2 < v26[2]);
                        if (((long long)v12) != 0)
                        {
                            return rax<8>;
                            v19 = 0;
                            v1 = v19;
                            rpl_free();
                            return rax<8>;
                        }
                    }
                    return rax<8>;
                }
                return rax<8>;
            }
            return rax<8>;
        }
    }
    else if (v22 == 0)
    {
        *(v4 + v26->field_0) = 0;
        return rax<8>;
    }
    else
    {
        *(v4 + v26->field_0) = (long long)re_acquire_state();
        return rax<8>;
    }
}
