typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int expand_bkref_cache()
{
    unsigned long v0;  // [bp-0xa8]
    unsigned long|struct_1 *|unsigned long long v1;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x50]
    struct_1 * v11;  // [bp-0x48]
    unsigned int|unsigned long|struct_1 *|unsigned long long v13;  // rax
    unsigned long|unsigned long long v14;  // rcx
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rbx
    unsigned long long v18[28];  // rbp
    unsigned long long v19;  // rsi
    unsigned long|struct_1 *|unsigned long long v2;  // [bp-0x98]
    unsigned long v20;  // rsi
    unsigned long long v21;  // rdi
    unsigned long long v22[28];  // rdi
    unsigned int v23;  // r8d
    unsigned long long v24;  // r10
    unsigned long long v25;  // r11
    unsigned long long v26[6];  // r13
    unsigned int|unsigned long long v27;  // r14d
    unsigned int|unsigned long long [4]|unsigned long long v28;  // r15d
    unsigned long v3;  // [bp-0x90]
    unsigned long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned int v7;  // [bp-0x6c]
    unsigned int v8;  // [bp-0x5c]
    unsigned long long v9;  // [bp-0x58]

    v18 = v22;
    v17 = v16;
    v26 = v22[19];
    v21 = v22[25];
    v0 = v20;
    v19 = 0;
    v6 = v14;
    v15 = v21;
    v7 = v23;
    while (v15 > v19)
    {
        v14 = v15 + v19 >> 1;
        if (v17 <= *(((v15 + v19 & 18446744069414584318) + (v15 + v19 >> 1) << 4) + v18[27] + 8))
        {
            v15 = v14;
        }
        else
        {
            v19 = v15 + 1;
        }
    }
    if (v15 > v19)
    {
        v28 = v18[27];
        v5 = v19 * 48;
        if (v17 == *(v28 + (v19 + (v19 << 1) << 4) + 8))
        {
            v4 = &stack_base-92;
            while (true)
            {
                v28 += v5;
                while (true)
                {
                    v13 = re_node_set_contains.isra.0();
                    if (v13 != 0)
                    {
                        v27 = v28[3] + v17 - v28[2];
                        if (v17 != v28[3] + v17 - v28[2])
                        {
                            v24 = *(v26[3] + v15 * 8);
                            v25 = v18[23] + v27 * 8;
                            v1 = v27 * 8;
                            if (v2->field_0 != 0)
                            {
                                v2 = v24;
                                v13 = re_node_set_contains.isra.0();
                                if (v13 == 0)
                                {
                                    v3 = &stack_base-88;
                                    v8 = re_node_set_init_copy();
                                    v2 = &stack_base-88;
                                    v13 = re_node_set_insert();
                                    if (v8 == 0 && v13 == 1)
                                    {
                                        v25 = v1 + v18[23];
                                        /* goto 4232778; */
                                    }
                                    if (v8 != 0 || v13 != 1)
                                    {
                                        rpl_free();
                                        if (v8 != 0)
                                        {
                                            return v13;
                                        }
                                        return v13;
                                    }
                                }
                            }
                            v2 = v25;
                            v1 = v2;
                            v9 = 1;
                            v10 = 1;
                            v13 = malloc(0x8);
                            v11 = v13;
                            if (v13 != 0)
                            {
                                v24 = v1;
                                v25 = v2;
                                v8 = 0;
                                v13->field_0 = v24;
                            }
                            else
                            {
                                return v13;
                            }
                        }
                        else
                        {
                            v27 = *(*(v26[5] + v15 * 24 + 16));
                            v13 = re_node_set_contains.isra.0();
                            if (v13 == 0)
                            {
                                v9 = 1;
                                v10 = 1;
                                v11 = malloc(0x8);
                                if (v11 != 0)
                                {
                                    v11->field_0 = v27;
                                    v13 = 0;
                                }
                                else
                                {
                                    v10 = 0;
                                    v13 = 12;
                                    v9 = 0;
                                }
                                v8 = v13;
                                v27 = check_arrival_expand_ecl();
                                v28 = re_node_set_merge();
                                rpl_free();
                                if ((v27 | v28 | v8) == 0)
                                {
                                    v28 = v18[27];
                                }
                                else if (v8 != 0)
                                {
                                    return v13;
                                }
                                else
                                {
                                    return v13;
                                }
                            }
                        }
                    }
                    if (v8 == 0 && v13 == 0 && v13 == 1 && v13 != 0 && v17 != v28[3] + v17 - v28[2] && v2->field_0 != 0 || v2->field_0 == 0 && v13 != 0 && v13 != 0 && v17 != v28[3] + v17 - v28[2])
                    {
                        v1 = r11<8>;
                        v1->field_0 = (long long)re_acquire_state();
                        rpl_free();
                        if (*(v18[23] + (v27 << 3)) == 0 && v8 != 0)
                        {
                            return v13;
                        }
                    }
                    if (...)
                    {
                        v28 += 48;
                        return v13;
                    }
                }
            }
        }
        return v13;
    }
    return v13;
}