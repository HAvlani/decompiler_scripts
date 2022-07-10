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
    struct_1 *|unsigned long long|unsigned int v14;  // rax
    unsigned long long v16;  // rcx
    unsigned long v17;  // rbx
    struct_2 *v18;  // rbp
    unsigned long long v19[6];  // rsi
    struct_1 *v2;  // [bp-0x90]
    struct_1 *|unsigned long long v20;  // rdi
    unsigned long long v21;  // r8
    unsigned long long v22;  // r11
    struct_1 *v23;  // r12
    unsigned long long v24[7];  // r13
    unsigned long long v25;  // cc_dep1
    unsigned int v3;  // [bp-0x84]
    unsigned long v4;  // [bp-0x80]
    unsigned long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long v7;  // [bp-0x68]
    unsigned long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]

    v18 = v20;
    v17 = v19[3];
    v9 = 1;
    v10 = 1;
    v11 = malloc(0x8);
    if (v11 != 0)
    {
        v11->field_0 = v19[2];
        v4 = &stack_base-88;
        v14 = update_cur_sifted_state();
        if (((int)v14) == 0)
        {
            v3 = 0;
            v8 = v19 + 48;
            while (true)
            {
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v20 = v19[0];
                    v2 = v17 * 8;
                    if (*(v20 + (v17 << 3)) != 0)
                    {
                        v3 = 0;
                        if (v18->field_e0 < 0)
                        {
                            memset(v19[0], 0x0, v2);
                            rpl_free();
                            return v11;
                        }
                    }
                    v3 += 1;
                    if (v18->field_e0 < v3)
                    {
                        memset(v19[0], 0x0, v2);
                        rpl_free();
                        return v11;
                    }
                    if (*(v20 + (v17 << 3)) == 0 && v18->field_e0 >= v3 || v18->field_e0 >= 0 && *(v20 + (v17 << 3)) != 0)
                    {
                        v14 = v18->field_b8;
                        v16 = v2;
                        v17 -= 1;
                        v10 = 0;
                        v24 = *(v14 + v16 + 8);
                        if (*(v14 + v16 + 8) != 0)
                        {
                            v23 = v18->field_98;
                            if (v24[5] > 0)
                            {
                                v1 = 0;
                                while (true)
                                {
                                    v22 = *(v24[6] + v1 * 8) * 16;
                                    if (...)
                                    {
                                        tmp_11 = v18->field_98;
                                        tmp_17 = v19[3];
                                        v6 = v22;
                                        v7 = tmp_11;
                                        v5 = tmp_17;
                                        v14 = check_node_accept_bytes.isra.0();
                                        v21 = v14;
                                        v25 = v14;
                                        if (((int)v14) > 0)
                                        {
                                            v14 = v21 + v17;
                                            if (v5 >= v21 + v17)
                                            {
                                                v14 = *(v19[0] + v14 * 8);
                                                if (v14 != 0)
                                                {
                                                    v5 = v6;
                                                    v14 = re_node_set_contains.isra.0();
                                                    if (v14 == 0)
                                                    {
                                                        /* goto 4267504; */
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (...)
                                    {
                                        v14 = check_node_accept();
                                        if (*(v19[0] + v2) != 0 && ((long long)v14) != 0)
                                        {
                                            v14 = re_node_set_contains.isra.0();
                                        }
                                    }
                                    if (...)
                                    {
                                        v0 = v19[3] - 1;
                                        v14 = check_dst_limits.isra.0();
                                    }
                                    if (...)
                                    {
                                        v14 = re_node_set_insert();
                                        if (((long long)v14) == 0)
                                        {
                                            v14 = 12;
                                            v1 = ((unsigned int)v14);
                                            rpl_free();
                                            return v11;
                                        }
                                    }
                                    if (...)
                                    {
                                        v1 += 1;
                                    }
                                }
                            }
                        }
                        v14 = update_cur_sifted_state();
                        v1 = ((unsigned int)v14);
                        rpl_free();
                        return v11;
                    }
                }
            }
            v14 = 0;
            v1 = ((unsigned int)v14);
            rpl_free();
            return v11;
        }
        v1 = ((unsigned int)v14);
        rpl_free();
        return v11;
    }
    return v11;
}
