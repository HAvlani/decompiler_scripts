typedef struct struct_2 {
    char padding_0[152];
    unsigned long long field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[32];
    unsigned int field_e0;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int sift_states_backward()
{
    BOT tmp_11;  // tmp #11
    BOT tmp_17;  // tmp #17
    unsigned long v0;  // [bp-0xa8]
    unsigned long long|unsigned int v1;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x50]
    struct_1 *v11;  // [bp-0x48]
    unsigned long long|struct_1 * v13;  // rax
    unsigned long long v17;  // rax
    unsigned long long|unsigned int v18;  // rax
    struct_1 *v19;  // rcx
    struct_1 *v2;  // [bp-0x90]
    struct_1 * v20;  // rbx
    struct_2 *v21;  // rbp
    unsigned long long v22[6];  // rsi
    unsigned long long|struct_1 * v23;  // rdi
    unsigned long long v24;  // r8
    unsigned long long v25;  // r11
    struct_1 *v26;  // r12
    unsigned long long v27[7];  // r13
    unsigned long long v28;  // cc_dep1
    unsigned int v3;  // [bp-0x84]
    unsigned long v4;  // [bp-0x80]
    unsigned long|struct_1 * v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long v7;  // [bp-0x68]
    unsigned long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]

    v21 = v23;
    v20 = v22[3];
    v9 = 1;
    v10 = 1;
    v11 = malloc(0x8);
    if (v11 != 0)
    {
        v11->field_0 = v22[2];
        v4 = &stack_base-88;
        v18 = update_cur_sifted_state();
        if (((int)v18) == 0)
        {
            v3 = 0;
            v8 = v22 + 48;
            while (true)
            {
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v23 = v22[0];
                    v2 = v20 * 8;
                    if (*(v23 + (v20 << 3)) != 0)
                    {
                        v3 = 0;
                        if (v21->field_e0 < 0)
                        {
                            memset(v22[0], 0x0, v2);
                            rpl_free();
                            v17 = 0;
                            return v17;
                        }
                    }
                    v3 += 1;
                    if (v21->field_e0 < v3)
                    {
                        memset(v22[0], 0x0, v2);
                        rpl_free();
                        v17 = 0;
                        return v17;
                    }
                    if (*(v23 + (v20 << 3)) == 0 && v21->field_e0 >= v3 || v21->field_e0 >= 0 && *(v23 + (v20 << 3)) != 0)
                    {
                        v13 = v21->field_b8;
                        v19 = v2;
                        v20 -= 1;
                        v10 = 0;
                        v27 = *(v13 + v19 + 8);
                        if (*(v13 + v19 + 8) != 0)
                        {
                            v26 = v21->field_98;
                            if (v27[5] > 0)
                            {
                                v1 = 0;
                                while (true)
                                {
                                    v25 = *(v27[6] + v1 * 8) * 16;
                                    if (...)
                                    {
                                        tmp_11 = v21->field_98;
                                        tmp_17 = v22[3];
                                        v6 = v25;
                                        v7 = tmp_11;
                                        v5 = tmp_17;
                                        v13 = check_node_accept_bytes.isra.0();
                                        v24 = v13;
                                        v28 = v13;
                                        if (((int)v13) > 0)
                                        {
                                            v13 = v24 + v20;
                                            if (v5 >= v24 + v20)
                                            {
                                                v13 = *(v22[0] + v13 * 8);
                                                if (v13 != 0)
                                                {
                                                    v5 = v6;
                                                    v13 = re_node_set_contains.isra.0();
                                                    if (v13 == 0)
                                                    {
                                                        /* goto 4291536; */
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (...)
                                    {
                                        v13 = check_node_accept();
                                        if (*(v22[0] + v2) != 0 && ((long long)v13) != 0)
                                        {
                                            v13 = re_node_set_contains.isra.0();
                                        }
                                    }
                                    if (...)
                                    {
                                        v0 = v22[3] - 1;
                                        v13 = check_dst_limits.isra.0();
                                    }
                                    if (...)
                                    {
                                        v13 = re_node_set_insert();
                                        if (((long long)v13) == 0)
                                        {
                                            v18 = 12;
                                            v1 = ((unsigned int)v18);
                                            rpl_free();
                                            v17 = ((long long)v1);
                                            return v17;
                                        }
                                    }
                                    if (...)
                                    {
                                        v1 += 1;
                                    }
                                }
                            }
                        }
                        v18 = update_cur_sifted_state();
                        v1 = ((unsigned int)v18);
                        rpl_free();
                        v17 = ((long long)v1);
                        return v17;
                    }
                }
            }
            v18 = 0;
            v1 = ((unsigned int)v18);
            rpl_free();
            v17 = ((long long)v1);
            return v17;
        }
        v1 = ((unsigned int)v18);
        rpl_free();
        v17 = ((long long)v1);
        return v17;
    }
    v17 = 12;
    return v17;
}
