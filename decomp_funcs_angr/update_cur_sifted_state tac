typedef struct struct_11 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_11;

typedef struct struct_4 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
    uint128_t field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_4;

typedef struct struct_6 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
    uint128_t field_20;
    unsigned long long field_28;
    struct struct_0 *field_30;
} struct_6;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_10 {
    char padding_0[152];
    struct struct_0 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[8];
    unsigned long long field_c8;
    char padding_d0[8];
    unsigned long long field_d8;
} struct_10;

typedef struct struct_7 {
    char padding_0[24];
    unsigned long long field_18;
} struct_7;

typedef struct struct_8 {
    char padding_0[24];
    struct struct_0 *field_18;
} struct_8;

typedef struct struct_12 {
    unsigned long long field_0;
    char field_8;
} struct_12;

typedef struct struct_9 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    char field_28;
} struct_9;

int update_cur_sifted_state()
{
    BOT tmp_68;  // tmp #68
    BOT tmp_15;  // tmp #15
    BOT tmp_6;  // tmp #6
    BOT tmp_31;  // tmp #31
    unsigned long v0;  // [bp-0xe8]
    struct_10 *|unsigned int v1;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0x90]
    unsigned int v11;  // [bp-0x7c]
    BOT|unsigned long long|unsigned int v12;  // [bp-0x78]
    unsigned long|BOT v13;  // [bp-0x68]
    struct_0 *v14;  // [bp-0x60]
    BOT v15;  // [bp-0x58]
    unsigned long v16;  // [bp-0x50]
    struct_0 *v17;  // [bp-0x48]
    unsigned long long|struct_12 *|unsigned int|unsigned long long [4] v19;  // rax
    unsigned long long [10]|unsigned long long [9]|unsigned long long v2;  // [bp-0xd0]
    unsigned long long v20;  // rax
    struct_0 *|struct_7 *|unsigned long long|unsigned long long [28] v21;  // rcx
    unsigned long long v22[3];  // rcx
    struct_0 *|unsigned long long|unsigned long long [4] v23;  // rdx
    unsigned long long v24;  // rdx
    struct_6 *|unsigned long long v25;  // rbx
    struct_0 * v26;  // rbp
    unsigned long long|unsigned long long [4]|unsigned int|struct_4 * v27;  // rsi
    unsigned long long|unsigned long long [28] v28;  // rdi
    unsigned long long v29;  // r8
    struct_8 *v3;  // [bp-0xc8]
    unsigned long long v30;  // r9
    unsigned long long v31;  // r11
    struct_11 *|unsigned long long v32;  // r12
    struct_0 *|unsigned long long v33;  // r13
    unsigned long|unsigned long long v34;  // r14
    unsigned long long|struct_9 * v35;  // r15
    unsigned long long v36;  // cc_dep1
    uint128_t v37;  // xmm1
    uint128_t v38;  // xmm2
    unsigned long long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb8]
    unsigned long v6;  // [bp-0xb0]
    unsigned long|struct_4 * v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]

    v34 = v24;
    v32 = v22;
    v25 = v27;
    v26 = v28[19];
    v1 = v28;
    tmp_68 = v24 * 8;
    v23 = v22[1];
    v11 = 0;
    v4 = tmp_68;
    v21 = *(tmp_68 + v28[23]);
    v3 = *(tmp_68 + v28[23]);
    if (v21 != 0)
    {
        if (v23 == 0)
        {
            *(v27->field_0 + v34 * 8) = 0;
            if (((long long)(*(*(tmp_68 + v28[23]) + 104) & 64)) == 0)
            {
                return v19;
            }
        }
        v12 = 0;
        v23 = (long long)re_acquire_state();
        if (v12 != 0)
        {
            return v19;
        }
        else
        {
            v33 = v2[7];
            if (v2[7] == 0)
            {
                tmp_15 = v32->field_8;
                v2[8] = 0;
                v2 = v23;
                v2[7] = tmp_15;
                v19 = malloc(tmp_15 * 8);
                v2[9] = v19;
                if (v19 != 0)
                {
                    v36 = v32->field_8;
                    v12 = 0;
                    if (v36 <= 0)
                    {
                    }
                    else
                    {
                        while (true)
                        {
                            v12 = re_node_set_merge();
                            if (v12 == 0)
                            {
                                v33 += 1;
                            }
                            else
                            {
                                return v19;
                            }
                        }
                    }
                }
                else
                {
                    return v19;
                }
            }
            if (v2[7] != 0 || v19 != 0)
            {
                v6 = v3 + 8;
                v11 = re_node_set_add_intersect();
                if (v11 != 0)
                {
                    return v19;
                }
                else
                {
                    v36 = *(v25 + 0x28);
                    if (*(v25 + 0x28) != 0)
                    {
                        v5 = v1->field_d8;
                        if (!(((char)(v36 <= 0))))
                        {
                            v2 = v34;
                            v33 = 0;
                            while (true)
                            {
                                v23 = *(v25->field_28 + v33 * 8) * 48 + v5;
                                if (...)
                                {
                                    v19 = v26->field_0;
                                    v27 = v32->field_8;
                                    v35 = *(v26->field_0 + v23[0] * 16);
                                    if (v2 != v23[3])
                                    {
                                        v34 = 0;
                                        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                                        {
                                            v27 = v35;
                                            v35 = v26;
                                            v26 = v27;
                                            while (true)
                                            {
                                                v19 += *(v32->field_10 + v34 * 8) * 16;
                                                if (v26 == v19->field_0 && ((int)v19->field_8) - 8 <= 1)
                                                {
                                                    v19 = sub_epsilon_src_nodes();
                                                    if (v19 != 0)
                                                    {
                                                        return v19;
                                                    }
                                                    else
                                                    {
                                                        v34 += 1;
                                                        if (v34 >= v32->field_8)
                                                        {
                                                            /* goto 4259928; */
                                                        }
                                                    }
                                                }
                                                if (v26 != v19->field_0 || ((int)v19->field_8) - 8 > 1)
                                                {
                                                    v34 += 1;
                                                }
                                                if (v19 == 0 || v26 != v19->field_0 || ((int)v19->field_8) - 8 > 1)
                                                {
                                                    if ((v26 == v19->field_0 || v34 < v32->field_8) && (((int)v19->field_8) - 8 <= 1 || v34 < v32->field_8) && (v34 < v32->field_8 || v26 != v19->field_0 || ((int)v19->field_8) - 8 > 1))
                                                    {
                                                        v19 = v26->field_0;
                                                    }
                                                    if ((v26 == v19->field_0 || v34 >= v32->field_8) && (((int)v19->field_8) - 8 <= 1 || v34 >= v32->field_8) && (v26 != v19->field_0 || v34 >= v32->field_8 || ((int)v19->field_8) - 8 > 1))
                                                    {
                                                        v26 = v35;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                                    {
                                        v34 = 18446744069414584319;
                                        v30 = 18446744069414584319;
                                        v21 = v32->field_10;
                                        v31 = v32->field_10 + v27 * 8;
                                        while (true)
                                        {
                                            v28 = v21->field_0;
                                            v23 = v21->field_0 * 16 + v19;
                                            v27 = ((int)*(v21->field_0 * 16 + v19 + 8));
                                            if (*((v21->field_0 << 4) + v19 + 8) != 8)
                                            {
                                                if (v27 == 9)
                                                {
                                                    v34 = (v27 == v23->field_0? v28 : r14<8>);
                                                }
                                                v21 += 8;
                                                if (v31 == v21)
                                                {
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                v30 = (v27 == v23->field_0? v28 : r9<8>);
                                                v21 += 8;
                                                if (v31 == v21)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        v19 = sub_epsilon_src_nodes();
                                        if (v19 != 0)
                                        {
                                            return v19;
                                        }
                                        else if (v32->field_8 > 0)
                                        {
                                            v7 = v25;
                                            v25 = 0;
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
                                                            return v19;
                                                        }
                                                    }
                                                }
                                                if (v19 != 0 || v19 != 0)
                                                {
                                                    v25 += 1;
                                                }
                                                if (v32->field_8 <= rbx<8> && (v19 == 0 || v19 != 0 || v19 != 0))
                                                {
                                                    v25 = v7;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (...)
                                {
                                    v33 += 1;
                                    v34 = v2;
                                }
                            }
                        }
                        v11 = 0;
                    }
                    v33 = v4 + v25->field_0;
                    v33->field_0 = (long long)re_acquire_state();
                    if (...)
                    {
                        return v19;
                    }
                }
            }
        }
        if (False)
        {
            return v19;
        }
        if (...)
        {
            v28 = 0;
            v27 = v1->field_c8;
            v23 = v1->field_c8;
            while (v23 > v28)
            {
                v21 = v23 + v28 >> 1;
                if (v34 <= *(((v23 + v28 & 18446744069414584318) + (v23 + v28 >> 1) << 4) + v1->field_d8 + 8))
                {
                    v23 = v21;
                }
                else
                {
                    v28 = v23 + 1;
                }
            }
            v9 = v28;
            if (v27 > v28)
            {
                v21 = v1;
                tmp_6 = v9 * 48;
                v10 = v9 * 48;
                if (v34 == *(v21[27] + tmp_6 + 8))
                {
                    v19 = v3;
                    v12 = 0;
                    if (v19[2] > 0)
                    {
                        v2 = 0;
                        v8 = v25 + 48;
                        do
                        {
                            v19 = ((long long)*(*(v3->field_18 + v2 * 8) * 16 + v1->field_98->field_0 + 8));
                            if (v19 == 4 && (*(v3->field_18 + (v2 << 3)) != v25->field_10 || v34 != v25->field_18))
                            {
                                v32 = v9;
                                v35 = v10 + v1->field_d8;
                                v6 = v13 * 24;
                                v5 = v13 * 8;
                                while (true)
                                {
                                    if (v13 == v35->field_0)
                                    {
                                        v29 = v34 + v35->field_18 - v35->field_10;
                                        if (v29 <= v25->field_18 && *(v25->field_0 + (v29 << 3)) != 0)
                                        {
                                            v19 = re_node_set_contains.isra.0();
                                            if (v19 != 0)
                                            {
                                                v0 = v29;
                                                v19 = check_dst_limits.isra.0();
                                                if (((long long)v19) == 0)
                                                {
                                                    if (((long long)v12) != 0)
                                                    {
                                                    }
                                                    else
                                                    {
                                                        v37 = v25->field_10;
                                                        v38 = v25->field_20;
                                                        tmp_31 = v25->field_28;
                                                        v12 = v25->field_0;
                                                        v17 = tmp_31;
                                                        v13 = v37;
                                                        v15 = v38;
                                                        v19 = re_node_set_init_copy();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (((long long)v12) == 0 && ((long long)v19) == 0 && v13 == v35->field_0 && v29 <= v25->field_18 && *(v25->field_0 + (v29 << 3)) != 0 && v19 != 0 && ((int)v19) == 0 || ((long long)v19) == 0 && v13 == v35->field_0 && v29 <= v25->field_18 && ((long long)v12) != 0 && *(v25->field_0 + (v29 << 3)) != 0 && v19 != 0)
                                    {
                                        v13 = *(v3->field_18 + 0 * 8);
                                        v7 = &stack_base-120;
                                        v14 = v34;
                                        v20 = re_node_set_insert();
                                        if (((long long)v20) != 0)
                                        {
                                            v19 = sift_states_backward();
                                            if (((int)v19) == 0)
                                            {
                                                v23 = ((long long)v12);
                                                if (v25->field_8 != 0)
                                                {
                                                    v19 = merge_state_array();
                                                    if (((int)v19) == 0)
                                                    {
                                                        v23 = ((long long)v12);
                                                        /* goto 4259322; */
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
                                        return v19;
                                        v1 = v19;
                                        rpl_free();
                                        return v19;
                                    }
                                    if (...)
                                    {
                                        *(v23 + v4) = *(v4 + ((long long)v12));
                                        v19 = (long long)re_node_set_contains.isra.0() - 1;
                                        v23 = v19;
                                        if (!(((char)(v23 - 1 >> 63))) && ((long long)*((long long *)(((char *)&v15) + 8))) > v23)
                                        {
                                            v16 = ((long long)*((long long *)(((char *)&v15) + 8))) - 1;
                                            re_node_set_remove_at.isra.0.part.0();
                                        }
                                        v35 = v32 * 48 + v1->field_d8;
                                    }
                                    if (...)
                                    {
                                        v32 += 1;
                                        v19 = v35 + 48;
                                        v35 = v19;
                                    }
                                }
                            }
                            v27 = v3;
                            v2 += 1;
                        }
                        while (v2 < v27[2]);
                        if (((long long)v12) != 0)
                        {
                            return v19;
                            v19 = 0;
                            v1 = v19;
                            rpl_free();
                            return v19;
                        }
                    }
                    return v19;
                }
                return v19;
            }
            return v19;
        }
    }
    else if (v23 == 0)
    {
        *(v4 + v27->field_0) = 0;
        return v19;
    }
    else
    {
        *(v4 + v27->field_0) = (long long)re_acquire_state();
        return v19;
    }
}
