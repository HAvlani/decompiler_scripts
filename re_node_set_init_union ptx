typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int re_node_set_init_union()
{
    unsigned long long v0[3];  // [bp-0x38]
    unsigned long long v1[3];  // [bp-0x30]
    void *|unsigned long long|unsigned long long [3] v10;  // rsi
    struct_0 *|void *|unsigned long long v11;  // rdi
    unsigned long long v12;  // r8
    unsigned long long v13;  // r9
    struct_0 *v14;  // r13
    unsigned long long v15;  // r14
    unsigned long long v16;  // cc_dep1
    unsigned long long v17;  // cc_dep2
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long|unsigned long long v6;  // rdx
    unsigned long long v7[3];  // rdx
    unsigned long|unsigned long long v8;  // rbx
    unsigned long long v9;  // rbp

    v14 = v11;
    if (v10 != 0)
    {
        v8 = v10[1];
        if (v7 != 0)
        {
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
            {
                v15 = v7[1];
                v0 = v7;
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                {
                    v1 = v10;
                    v11->field_0 = v8 + v15;
                    v3 = malloc((v8 + v15) * 8);
                    v11->field_10 = v3;
                    if (v3 != 0)
                    {
                        v12 = v0[2];
                        v13 = v1[2];
                        v9 = 0;
                        v6 = 0;
                        v5 = 0;
                        while (true)
                        {
                            v10 = *(v13 + v5 * 8);
                            v11 = *(v12 + v6 * 8);
                            v9 += 1;
                            v16 = *(v13 + v5 * 8);
                            v17 = *(v12 + v6 * 8);
                            if (*(v13 + (v5 << 3)) <= *(v12 + (v6 << 3)))
                            {
                                *(v3 + v9 * 8 + 8) = v10;
                                v5 += 1;
                                v6 += ((long long)(v16 == v17));
                            }
                            else
                            {
                                *(v3 + v9 * 8 + 8) = v11;
                                v6 += 1;
                            }
                            if (v8 > rcx<8>)
                            {
                                v8 -= v5;
                                v11 = v3 + v9 * 8;
                                v6 = v8 * 8;
                                v9 += v8;
                                memcpy(v11, v13 + v5 * 8, v6);
                                v14->field_8 = v9;
                                return 0;
                            }
                            if (v15 <= v6)
                            {
                                break;
                            }
                            if (v15 <= v6)
                            {
                                v14->field_8 = v9;
                                return 0;
                            }
                            else
                            {
                                v15 -= v6;
                                v11 = v3 + v9 * 8;
                                v10 = v12 + v6 * 8;
                                v9 += v15;
                                v6 = v15 * 8;
                                memcpy(v11, v10, v6);
                                break;
                            }
                        }
                        v14->field_8 = v9;
                        return 0;
                    }
                    v4 = 12;
                    return v4;
                }
            }
        }
    }
    if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v10 == 0)
    {
        if (!(v7 != 0))
        {
            v14->field_10 = 0;
            v4 = 0;
            v14->field_0 = 0;
            return v4;
        }
        else if (v7[1] <= 0)
        {
            v14->field_10 = 0;
            v4 = 0;
            v14->field_0 = 0;
            return v4;
        }
    }
}
