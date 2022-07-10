typedef struct struct_3 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[72];
    struct struct_1 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[32];
    unsigned int field_e0;
} struct_3;

typedef struct struct_4 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[72];
    unsigned long long field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[32];
    unsigned int field_e0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    char padding_0[24];
    unsigned long long field_18;
} struct_5;

int check_arrival()
{
    unsigned long long|unsigned int v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    unsigned long v10;  // [bp-0xb0]
    unsigned long long v11[3];  // [bp-0xa8]
    unsigned long v12;  // [bp-0xa0]
    unsigned long v13;  // [bp-0x98]
    unsigned long v14;  // [bp-0x90]
    unsigned int v15;  // [bp-0x80]
    unsigned int v16;  // [bp-0x7c]
    uint128_t|unsigned long long v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    struct_1 *|unsigned long long v19;  // [bp-0x68]
    unsigned long v2;  // [bp-0xf0]
    uint128_t v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    struct_1 *|unsigned long long|unsigned int v24;  // rax
    struct_1 *|unsigned long long v27;  // rcx
    struct_1 *v28;  // rdx
    unsigned long long v29;  // rdx
    struct_1 * v3;  // [bp-0xe8]
    unsigned long long [7]|unsigned long long v30;  // rbx
    struct_5 *|struct_1 * v31;  // rbp
    unsigned long|unsigned long long|unsigned long long [3] v32;  // rsi
    struct_3 *v33;  // rdi
    unsigned long|unsigned long long v34;  // r8
    unsigned long|unsigned int v35;  // r9d
    struct_4 *v36;  // r12
    struct_1 *|unsigned long long v37;  // r13
    unsigned long long [7]|unsigned long long|struct_1 * v38;  // r14
    unsigned long|struct_1 * v39;  // r15
    unsigned long v4;  // [bp-0xe0]
    unsigned long long v40;  // cc_dep1
    unsigned long|unsigned long long v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xd0]
    struct_1 *v7;  // [bp-0xc8]
    unsigned long v8;  // [bp-0xc0]
    unsigned long v9;  // [bp-0xb8]

    v36 = v33;
    v31 = v29;
    v30 = v27;
    v28 = v33->field_98;
    v37 = v32[1];
    v11 = v32;
    v14 = v34;
    v8 = v35;
    v7 = v28;
    v15 = 0;
    v9 = *(v31 * 16 + v7->field_0);
    if (((long long)v33->field_e0) + v35 >= v37)
    {
        v39 = ((long long)v33->field_e0) + v35 + 1;
        if (9223372036854775807 - v32[1] >= ((long long)v33->field_e0) + v35 + 1)
        {
            v38 = v37 + v39;
            if (v37 + v39 <= 2305843009213693951)
            {
                v32 = (v32[1] + ((long long)v33->field_e0) + v35 + 1) * 8;
                v24 = realloc(v11[2], v32);
                if (v24 != 0)
                {
                    v11[2] = v24;
                    v11[1] = v38;
                    memset(v24 + v37 * 8, 0x0, v39 * 8);
                }
                else
                {
                    v24 = 12;
                    return v24;
                }
            }
            else
            {
                v24 = 12;
                return v24;
            }
        }
        else
        {
            v24 = 12;
            return v24;
        }
    }
    if (((long long)v33->field_e0) + v35 < v37 || v37 + v39 <= 2305843009213693951 && 9223372036854775807 - v32[1] >= ((long long)v33->field_e0) + v35 + 1 && v24 != 0)
    {
        v39 = v11[0];
        v37 = v11[2];
        v12 = v36->field_b8;
        v27 = v36->field_48;
        v36->field_b8 = v37;
        v13 = v27;
        if (v39 != 0)
        {
            v36->field_48 = v11[0];
            v35 = (long long)re_string_context_at();
        }
        else
        {
            v36->field_48 = v11[0];
            v35 = re_string_context_at();
            /* goto 4250300; */
        }
        if (False)
        {
            v38 = *(v37 + v39 * 8);
            v19 = 0;
            v17 = 0;
            v0 = ((int)v35);
            v24 = re_node_set_init_copy();
            v15 = ((int)v24);
            v35 = ((int)v0);
            return v24;
            rpl_free();
            v24 = ((long long)v15);
            return v24;
            rpl_free();
            v24 = ((long long)v15);
            return v24;
        }
        v0 = v35;
        v17 = 1;
        v18 = 1;
        v19 = malloc(0x8);
        if (v19 != 0)
        {
            v19->field_0 = v31;
            v39 = v30;
            v15 = 0;
            v15 = check_arrival_expand_ecl();
            if (v15 == 0)
            {
                if (v18 != 0)
                {
                    v0 = v35;
                    v15 = expand_bkref_cache();
                }
                v38 = (long long)re_acquire_state_context();
                *(v36->field_b8 + v39 * 8) = v38;
                if (v39 < v8)
                {
                    v5 = 0;
                    v2 = &stack_base-120;
                    v1 = v39 + 1;
                    while (true)
                    {
                        v39 = v1 - 1;
                        v30 = v1;
                        v18 = 0;
                        v6 = v30 * 8;
                        if (*(v36->field_b8 + (v30 << 3)) != 0)
                        {
                            v15 = re_node_set_merge();
                            if (v15 != 0)
                            {
                                rpl_free();
                                v24 = ((long long)v15);
                                return v24;
                            }
                        }
                        if (r14<8> == 0)
                        {
                            v30 = v1;
                            /* goto 4249672; */
                        }
                        if (v15 != 0 && v18 != 0 && r14<8> != 0)
                        {
                            rpl_free();
                            v24 = ((long long)v15);
                            return v24;
                        }
                        if (v15 == 0 && *(v36->field_b8 + (v30 << 3)) != 0 || *(v36->field_b8 + (v30 << 3)) == 0 && r14<8> != 0)
                        {
                            if (*(v36->field_b8 + (v30 << 3)) == 0 || r14<8> != 0)
                            {
                                v40 = *(r14<8> + 40);
                                v16 = 0;
                                v4 = &stack_base-88;
                                v31 = v36->field_98;
                                v22 = 0;
                                v20 = 0;
                                if (v40 > 0)
                                {
                                    v0 = 0;
                                    v30 = r14<8>;
                                    while (true)
                                    {
                                        v37 = *(v30[6] + v0 * 8);
                                        if (...)
                                        {
                                            v24 = check_node_accept_bytes.isra.0();
                                            if (((int)v24) > 1)
                                            {
                                                v38 = v24 + v1 - 1;
                                                v24 = v36->field_b8;
                                                v3 = v37 * 8;
                                                v32 = *(v24 + v38 * 8);
                                                v34 = *(v31->field_18 + v37 * 8);
                                                v37 = v38 * 8;
                                                v21 = 0;
                                                if (v32 != 0)
                                                {
                                                    v10 = v34;
                                                    v16 = re_node_set_merge();
                                                }
                                                if (v32 == 0 || v16 == 0)
                                                {
                                                    v24 = re_node_set_insert();
                                                    if (((long long)v24) != 0)
                                                    {
                                                        v37 += v36->field_b8;
                                                        v37->field_0 = (long long)re_acquire_state();
                                                    }
                                                }
                                                if (v16 != 0)
                                                {
                                                    if ((*(v36->field_b8 + (v38 << 3)) == 0 || v32 != 0) && (v32 != 0 || ((long long)v24) != 0))
                                                    {
                                                        rpl_free();
                                                        v24 = ((int)v16);
                                                        v15 = v16;
                                                        if (v24 == 0)
                                                        {
                                                            break;
                                                        }
                                                        else
                                                        {
                                                            rpl_free();
                                                            v24 = ((long long)v15);
                                                            return v24;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if (...)
                                        {
                                            v24 = check_node_accept();
                                        }
                                        if (...)
                                        {
                                            v3 = v37 * 8;
                                        }
                                        if (...)
                                        {
                                            v24 = re_node_set_insert();
                                        }
                                        if (...)
                                        {
                                            rpl_free();
                                            v15 = 12;
                                            rpl_free();
                                            v24 = ((long long)v15);
                                            return v24;
                                        }
                                        if (...)
                                        {
                                            v0 += 1;
                                            break;
                                        }
                                    }
                                    if (v0 >= v30[5] && (((long long)v24) == 0 || ((long long)v24) != 0))
                                    {
                                        rpl_free();
                                        v15 = 0;
                                    }
                                    else if (...)
                                    {
                                        v30 = v1;
                                    }
                                }
                                rpl_free();
                                v15 = 0;
                            }
                            if (v18 != 0)
                            {
                                v15 = check_arrival_expand_ecl();
                            }
                        }
                        if (v15 == 0 && *(v36->field_b8 + (v30 << 3)) != 0 || *(v36->field_b8 + (v30 << 3)) == 0 && r14<8> != 0)
                        {
                            v30 = v1;
                        }
                        if (v15 == 0 && v18 != 0 && (r14<8> != 0 || *(v36->field_b8 + (v30 << 3)) != 0))
                        {
                            v15 = expand_bkref_cache();
                        }
                        if (False)
                        {
                            rpl_free();
                            v24 = ((long long)v15);
                            return v24;
                        }
                        if (v15 == 0 || v18 == 0 && *(v36->field_b8 + (v30 << 3)) == 0 || r14<8> == 0 && *(v36->field_b8 + (v30 << 3)) == 0)
                        {
                            re_string_context_at();
                            v38 = (long long)re_acquire_state_context();
                            if (v38 != 0)
                            {
                                v24 = v36->field_b8;
                                v27 = v6;
                                v5 = 0;
                                *(v24 + v27) = v38;
                            }
                            else if (v15 != 0)
                            {
                                rpl_free();
                                v24 = ((long long)v15);
                                return v24;
                            }
                            else
                            {
                                v24 = v36->field_b8;
                                v27 = v6;
                                v5 += 1;
                                *(v24 + v27) = 0;
                                /* goto 4249754; */
                            }
                            if (v15 == 0 || v38 != 0)
                            {
                                v1 += 1;
                                v39 = v30;
                            }
                        }
                    }
                }
                rpl_free();
                if (*(v36->field_b8 + (v8 << 3)) != 0)
                {
                    v11[0] = v39;
                    v36->field_b8 = v12;
                    v36->field_48 = v13;
                    v24 = ((long long)((long long)re_node_set_contains.isra.0() == 0));
                    return v24;
                }
                v11[0] = v39;
                v36->field_b8 = v12;
                v36->field_48 = v13;
                v24 = 1;
                return v24;
            }
            rpl_free();
            v24 = ((long long)v15);
            return v24;
        }
        v24 = 12;
        return v24;
    }
}
