typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[56];
    struct struct_0 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[8];
    unsigned long long field_c8;
    char padding_d0[8];
    unsigned long long field_d8;
    char padding_e0[8];
    unsigned long long field_e8;
    char padding_f0[8];
    unsigned long long field_f8;
} struct_5;

typedef struct struct_4 {
    char field_0;
} struct_4;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_8 {
    char padding_0[8];
    unsigned int field_8;
} struct_8;

typedef struct struct_6 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_1 **field_28;
} struct_6;

typedef struct struct_7 {
    char padding_0[16];
    unsigned long long field_10;
} struct_7;

int transit_state_bkref.isra.0()
{
    BOT tmp_69;  // tmp #69
    BOT tmp_15;  // tmp #15
    unsigned long long v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xd8]
    char *|unsigned long long v10;  // [bp-0x90]
    struct struct_7 **v11;  // [bp-0x88]
    struct_0 *|unsigned long v12;  // [bp-0x80]
    struct_0 *|unsigned long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned int v15;  // [bp-0x5c]
    struct_0 *|unsigned long long|struct_8 *|unsigned long long [4]|struct_7 *|unsigned long long [32] v17;  // rax
    unsigned long long v18;  // rax
    unsigned short|unsigned long long|unsigned int v19;  // cx
    unsigned long|unsigned long long v2;  // [bp-0xd0]
    struct_0 *|unsigned long long|struct struct_7 **|unsigned long|unsigned int|unsigned long long [2] v20;  // rdx
    unsigned long long|unsigned long|struct_6 *|unsigned long long [32] v21;  // rbx
    struct_0 *|struct_4 * v22;  // rbp
    unsigned long long v23;  // rbp
    struct_0 *|unsigned long long v24;  // rsi
    struct_0 *|unsigned long long|unsigned long long [32] v25;  // rdi
    struct_4 * v26;  // r8
    struct_4 * v27;  // r9
    unsigned long long|struct_4 * v28;  // r10
    struct_4 * v29;  // r11
    unsigned long|char *|struct_4 * v3;  // [bp-0xc8]
    unsigned long long [7]|unsigned long long|struct_4 * v30;  // r12
    struct_0 *|unsigned long long v31;  // r13
    unsigned long long [28]|unsigned long long|struct_5 * v32;  // r14
    unsigned long long [32]|unsigned long long|struct_4 * v33;  // r15
    unsigned long long v34;  // cc_dep1
    unsigned long|char *|unsigned long long|struct_4 * v4;  // [bp-0xc0]
    struct_0 *|unsigned long|unsigned long long|struct_4 * v5;  // [bp-0xb8]
    unsigned int|struct_4 * v6;  // [bp-0xb0]
    unsigned long long v7[7];  // [bp-0xa8]
    struct struct_0 **v8;  // [bp-0xa0]
    struct_0 *v9;  // [bp-0x98]

    v32 = v25;
    v33 = v25[9];
    v9 = v24;
    v8 = v20;
    tmp_69 = v25[19];
    v34 = v24->field_0;
    v1 = 0;
    v7 = tmp_69;
    v11 = v33 * 8;
    if (v34 <= 0)
    {
        return v17;
    }
    while (true)
    {
        v31 = *(v8[0] + v1 * 8);
        v22 = *(v8[0] + v1 * 8) * 16;
        v17 = v7[0] + *(v8[0] + v1 * 8) * 16;
        if (*(v7[0] + (*(v8[0] + (v1 << 3)) << 4) + 8) == 4)
        {
            v21 = ((long long)v17->field_8);
            if ((((int)v17->field_8) & 0x3ff00) != 0)
            {
                v21 = v21 % 0x100;
                v17 = re_string_context_at();
                v19 = ((int)rbx<8>);
                v20 = ((int)rbx<8>);
                v19 = ((short)rbx<8>) & 1023;
                if (((long long)(bl<1> & 4)) == 0 && ((long long)(v17 & 1)) != 0 && (((char)v20) & 8) != 0)
                {
                    /* goto 4288736; */
                }
                if (((long long)(v17 & 8)) == 0 && (((char)reg_24<4>) & 128) != 0 && (((long long)(v17 & 1)) == 0 || (((char)v20) & 8) == 0) && (((long long)(v19 & 32)) == 0 || ((long long)(v17 & 2)) != 0) && (((long long)(bl<1> & 4)) == 0 || ((long long)(v17 & 1)) != 0))
                {
                    /* goto 4288736; */
                }
            }
            if (...)
            {
                v21 = v32->field_c8;
                v24 = 0;
                v20 = v32->field_c8;
                while (v20 > v24)
                {
                    v19 = v20 + v24 >> 1;
                    if (v25[9] <= *(((v20 + v24 & 18446744069414584318) + (v20 + v24 >> 1) << 4) + v32->field_d8 + 8))
                    {
                        v20 = v19;
                    }
                    else
                    {
                        v24 = v20 + 1;
                    }
                }
                if (v25[25] > v24)
                {
                    v17 = v24 * 48 + v32->field_d8;
                    if (v25[9] != *((v24 + (v24 << 1) << 4) + v32->field_d8 + 8))
                    {
                    }
                    else
                    {
                        while (true)
                        {
                            v17 += 48;
                        }
                        if (True)
                        {
                            v15 = 0;
                            v12 = v31 * 8;
                            v13 = v31 * 24;
                        }
                        else if (*(v8[0] + (0 << 3)) != v17->field_0)
                        {
                            v34 = v32->field_e8;
                            v20 = v32->field_98->field_0;
                            v13 = v32->field_98;
                            v12 = *(v20 + v22);
                        }
                    }
                }
                if (v25[25] <= v24 || v25[9] != *((v24 + (v24 << 1) << 4) + v32->field_d8 + 8) || v21 >= v32->field_c8)
                {
                    v34 = v32->field_e8;
                    v20 = v32->field_98->field_0;
                    v13 = v32->field_98;
                    v12 = *(v20 + v22);
                    if (v34 > 0)
                    {
                        v2 = 0;
                        v28 = v32->field_8;
                        v6 = v33;
                        v10 = v31;
                        v14 = v21;
                        while (true)
                        {
                            v21 = *(v32->field_f8 + v2 * 8);
                            if (...)
                            {
                                v33 = v21->field_0;
                                if (v21->field_20 > 0)
                                {
                                    v22 = v6;
                                    v30 = 0;
                                    v27 = v28;
                                    while (true)
                                    {
                                        v19 = v33;
                                        v26 = v22;
                                        v33 = v21->field_28[v30]->field_8;
                                        v20 = v21->field_28[v30]->field_8 - v19;
                                        v22 += v21->field_28[v30]->field_8 - v19;
                                        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))))
                                        {
                                            if (v32->field_30 < v22)
                                            {
                                                v3 = v20;
                                                if (v32->field_58 >= v22)
                                                {
                                                    v5 = v26;
                                                    v4 = v19;
                                                    v17 = clean_state_log_if_needed();
                                                    if (v17 != 0)
                                                    {
                                                        return v17;
                                                    }
                                                    else
                                                    {
                                                        v27 = v32->field_8;
                                                        v20 = v3;
                                                        v26 = v5;
                                                        v19 = v4;
                                                    }
                                                }
                                            }
                                            if ((v17 == 0 || v32->field_30 >= v22) && (v32->field_30 >= v22 || v32->field_58 >= v22))
                                            {
                                                v5 = v19;
                                                v4 = r8<8>;
                                                v3 = v27;
                                                v17 = memcmp(v27 + r8<8>, v27 + v19, v20);
                                                v27 = v3;
                                                v26 = v4;
                                                v19 = v5;
                                            }
                                            if ((v32->field_30 < v22 || v17 != 0) && (v32->field_58 < v22 || v17 != 0) && (v17 == 0 || v32->field_58 < v22 || v32->field_30 >= v22))
                                            {
                                                v28 = v27;
                                                v31 = v19;
                                                v29 = v26;
                                                v22 = v26;
                                                v33 = v19;
                                                /* goto 4290138; */
                                            }
                                        }
                                        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) || v17 == 0 && v32->field_30 >= v22 || v17 == 0 && v17 == 0 && v32->field_58 >= v22)
                                        {
                                            v17 = get_subexp_sub.isra.0();
                                            v27 = v32->field_8;
                                        }
                                        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) || v17 == 0 && v32->field_30 >= v22 || v17 == 0 && v17 == 0 && v32->field_58 >= v22)
                                        {
                                            if (v17 <= 1)
                                            {
                                                v30 += 1;
                                                v28 = v25[1];
                                            }
                                            else
                                            {
                                                return v17;
                                            }
                                        }
                                        if (v17 <= 1 || v17 == 0)
                                        {
                                            v31 = v33 + 1;
                                            v29 = v22;
                                            break;
                                        }
                                    }
                                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))) && (v32->field_30 < v22 || v17 != 0) && (v32->field_58 < v22 || v17 != 0) && (v17 == 0 || v32->field_58 < v22 || v32->field_30 >= v22))
                                    {
                                        v2 += 1;
                                        if (v2 >= *(r14<8> + 232))
                                        {
                                            break;
                                        }
                                    }
                                }
                                else
                                {
                                    v29 = v6;
                                    v31 = v33;
                                }
                                if (v6 >= v31 && (v21->field_20 <= 0 || v2 >= *(r14<8> + 232)))
                                {
                                    v30 = r11<8>;
                                    v33 = v32;
                                    while (true)
                                    {
                                        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))))
                                        {
                                            if (v32->field_30 <= v30 && v32->field_58 > v30)
                                            {
                                                v17 = extend_buffers();
                                                if (v17 != 0)
                                                {
                                                    return v17;
                                                }
                                                else
                                                {
                                                    v28 = v32->field_8;
                                                }
                                            }
                                            if (v32->field_30 > v30 || v17 == 0 && v32->field_58 > v30)
                                            {
                                                v17 = v30 + 1;
                                                if (*(r10<8> + v30) == *(r10<8> + r13<8> + 1))
                                                {
                                                    v30 = v17;
                                                }
                                            }
                                        }
                                        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) || *(r10<8> + v30) == *(r10<8> + r13<8> + 1) && v32->field_30 > v30 || *(r10<8> + v30) == *(r10<8> + r13<8> + 1) && v17 == 0 && v32->field_58 > v30)
                                        {
                                            v17 = *(v32->field_b8 + r13<8> * 8);
                                            if (*(v32->field_b8 + (r13<8> << 3)) != 0)
                                            {
                                                v19 = v17[2];
                                                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))))
                                                {
                                                    v25 = v17[3];
                                                    v20 = 0;
                                                    v24 = v13->field_0;
                                                    while (true)
                                                    {
                                                        v32 = *(v25 + v20 * 8);
                                                        v17 = *(v25 + v20 * 8) * 16 + v24;
                                                        if (*((*(v25 + (v20 << 3)) << 4) + v24 + 8) == 9 && v12 == v17->field_0)
                                                        {
                                                            v19 = v21->field_0;
                                                            if (v21->field_10 == 0)
                                                            {
                                                                v4 = v28;
                                                                v3 = v19;
                                                                v21->field_10 = v24;
                                                                v24 = calloc(0x18, v31 - v3 + 1);
                                                                if (v24 == 0)
                                                                {
                                                                    return v17;
                                                                }
                                                            }
                                                            if (v21->field_10 != 0 || v24 != 0)
                                                            {
                                                                v3 = v28;
                                                                v0 = 9;
                                                                v17 = check_arrival();
                                                                if (v17 != 0)
                                                                {
                                                                    return v17;
                                                                }
                                                                else
                                                                {
                                                                    v17 = v21->field_18;
                                                                    if (v21->field_20 == v21->field_18)
                                                                    {
                                                                        v25 = v21->field_28;
                                                                        v3 = v17 * 2 + 1;
                                                                        v17 = realloc(v25, (v17 * 2 + 1) * 8);
                                                                        if (v17 == 0)
                                                                        {
                                                                            return v17;
                                                                        }
                                                                        else
                                                                        {
                                                                            v21->field_28 = v17;
                                                                            v21->field_18 = v3;
                                                                        }
                                                                    }
                                                                    if (v21->field_20 != v21->field_18 || v17 != 0)
                                                                    {
                                                                        v20 = calloc(0x1, 0x28);
                                                                        if (v20 != 0)
                                                                        {
                                                                            tmp_15 = v21->field_20;
                                                                            v21->field_28[v21->field_20] = v20;
                                                                            v20[0] = v32;
                                                                            v20[1] = v31;
                                                                            v21->field_20 = tmp_15 + 1;
                                                                            v17 = get_subexp_sub.isra.0();
                                                                            return v17;
                                                                        }
                                                                        else
                                                                        {
                                                                            return v17;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (*((*(v25 + (v20 << 3)) << 4) + v24 + 8) != 9 || v12 != v17->field_0)
                                                        {
                                                            v20 += 1;
                                                        }
                                                    }
                                                }
                                            }
                                            v31 = r13<8> + 1;
                                        }
                                        if (v32->field_30 <= v30 && !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))) && v32->field_58 <= v30 || !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))) && (v17 == 0 || v32->field_30 > v30) && (v32->field_30 > v30 || v32->field_58 > v30) && *(r10<8> + v30) != *(r10<8> + r13<8> + 1) || (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r13<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) || *(r10<8> + v30) == *(r10<8> + r13<8> + 1) && v32->field_30 > v30 || *(r10<8> + v30) == *(r10<8> + r13<8> + 1) && v17 == 0 && v32->field_58 > v30) && v6 < v31)
                                        {
                                            v32 = v33;
                                        }
                                    }
                                }
                            }
                            v20 = v13->field_0;
                        }
                        v33 = v6;
                        v31 = v10;
                        v21 = v14;
                    }
                }
                v15 = 0;
                v12 = v31 * 8;
                v13 = v31 * 24;
                if (v21 < v32->field_c8)
                {
                    v17 = v32;
                    v30 = v7;
                    v32 = v21;
                    v21 = v17;
                    while (true)
                    {
                        v17 = v32 * 48 + v32[27];
                        if (v31 == *((v32 + (v32 << 1) << 4) + v32[27]) && v33 == v17[1])
                        {
                            v23 = v17[3];
                            v18 = v17[2];
                            v4 = v23 - v18;
                            if (v23 == v18)
                            {
                                v3 = v7[6] + *(*(v30[5] + v13 + 16)) * 24;
                            }
                            else
                            {
                                v3 = v7[6] + *(v30[3] + v12) * 24;
                            }
                            v22 = v23 + v33 - v18;
                            v2 = 0;
                            v19 = re_string_context_at();
                            v28 = v32[23] + v22 * 8;
                            v17 = *(v32[23] + v24);
                            v20 = *(v32[23] + v22 * 8);
                            if (*(v32[23] + v24) != 0)
                            {
                                v17 = v17->field_10;
                                v2 = v17;
                            }
                            if (v20 != 0)
                            {
                                v6 = v19;
                                v10 = v29;
                                v5 = &stack_base-88;
                                v15 = re_node_set_init_union();
                                if (v15 == 0)
                                {
                                    v5 = v10 + v32[23];
                                    v5->field_0 = (long long)re_acquire_state_context();
                                    rpl_free();
                                    v20 = v32[23];
                                }
                                else
                                {
                                    rpl_free();
                                    return v17;
                                }
                            }
                            else
                            {
                                v5 = v28;
                                v5->field_0 = (long long)re_acquire_state_context();
                                if (v20[v22] == 0 && v15 != 0)
                                {
                                    return v17;
                                }
                            }
                            if (v4 == 0 && (v20 == 0 || v15 == 0) && (v15 == 0 || v20[v22] != 0))
                            {
                                if (*(*(rdx<8> + v11) + 16) <= v2)
                                {
                                }
                                else
                                {
                                    v2 = v3 + 16;
                                    v15 = check_subexp_matching_top.isra.0();
                                    if (v15 != 0)
                                    {
                                        return v17;
                                    }
                                    else
                                    {
                                        v15 = transit_state_bkref.isra.0();
                                        v32 += 1;
                                        /* goto 4290024; */
                                    }
                                    if (False)
                                    {
                                        return v17;
                                    }
                                }
                            }
                        }
                        if (...)
                        {
                            v32 += 1;
                        }
                        if (...)
                        {
                            v32 = v21;
                        }
                    }
                }
            }
        }
        v25 = v9;
        v1 += 1;
    }
    return v17;
}
