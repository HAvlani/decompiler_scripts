typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
} struct_3;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char field_a;
} struct_4;

int re_acquire_state()
{
    BOT tmp_10;  // tmp #10
    BOT tmp_2;  // tmp #2
    struct_2 * v1;  // rax
    unsigned long long v10;  // r8
    unsigned long long v11;  // r9
    unsigned long long v12;  // r10
    unsigned long long v13;  // r11
    unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16[3];  // r14
    unsigned long long v17;  // r15
    struct_3 *|unsigned long long v2;  // rax
    struct_4 *|unsigned long long v3;  // rax
    unsigned long long v5;  // rax
    unsigned long long|unsigned int|unsigned long long [3] v6;  // rdx
    unsigned long long v7[18];  // rbp
    struct_2 *|unsigned long long v8;  // rsi
    struct_1 *|unsigned int v9;  // rdi

    v15 = v6[1];
    if (v6[1] != 0)
    {
        v7 = v8;
        v16 = v6;
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v1 = v6[2];
            v6 = v6[2] + v6[1] * 8;
            do
            {
                v15 += v1->field_0;
                v1 += 8;
            }
            while (v6 != v1);
        }
        v2 = v7[8] + (v7[17] & v15) * 24;
        v12 = *(v7[8] + (v7[17] & v15) * 24);
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v13 = v2->field_10;
            v11 = 0;
            while (true)
            {
                v14 = *(v13 + v11 * 8);
                if (*(*(v13 + (v11 << 3))) == v15)
                {
                    v2 = re_node_set_compare();
                    if (((long long)v2) != 0)
                    {
                        v5 = v14;
                        return v5;
                    }
                }
                if (((long long)v2) == 0 || *(*(v13 + (v11 << 3))) != v15)
                {
                    v11 += 1;
                }
            }
        }
        v14 = calloc(0x70, 0x1);
        if (v14 != 0)
        {
            v17 = v14 + 8;
            if (re_node_set_init_copy() == 0)
            {
                v3 = v16[1];
                *(v14 + 80) = v17;
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v8 = v16[2];
                    v11 = v7[0];
                    v10 = v16[2] + v3 * 8;
                    while (true)
                    {
                        v3 = v8->field_0 * 16 + v11;
                        v9 = ((int)*(v8->field_0 * 16 + v11 + 8));
                        if (*((v8->field_0 << 4) + v11 + 8) != 1)
                        {
                            v6 = ((int)(...));
                            *(v14 + 104) = ((char)(...));
                            if (v9 == 2)
                            {
                                v6 = ((long long)(v6 | 16));
                                tmp_10 = v6;
                                *(v14 + 104) = tmp_10;
                                /* goto 4234665; */
                            }
                            else if (v9 != 4)
                            {
                                if (v9 != 12)
                                {
                                    if ((((int)v3->field_8) & 0x3ff00) != 0)
                                    {
                                        /* goto 4234738; */
                                    }
                                }
                            }
                            if (v9 == 4)
                            {
                                v6 = ((long long)(v6 | 64));
                                tmp_10 = v6;
                                *(v14 + 104) = tmp_10;
                                /* goto 4234665; */
                            }
                        }
                        else if ((((int)v3->field_8) & 0x3ff00) != 0)
                        {
                            v3 = ((long long)*(v3 + 0xa));
                            tmp_2 = v3;
                            *(v14 + 104) = ((char)(...));
                            /* goto 4234738; */
                        }
                        if ((((int)v3->field_8) & 0x3ff00) == 0 && *((v8->field_0 << 4) + v11 + 8) == 1 || v9 == 4 && *((v8->field_0 << 4) + v11 + 8) != 1 || v9 == 2 && *((v8->field_0 << 4) + v11 + 8) != 1 || (((int)v3->field_8) & 0x3ff00) == 0 && *((v8->field_0 << 4) + v11 + 8) != 1 && v9 != 12)
                        {
                            v8 += 8;
                            if (v10 == v8)
                            {
                                break;
                            }
                        }
                        else
                        {
                            v8 += 8;
                            *(v14 + 104) = *(v14 + 104) | 128;
                            if (v10 == v8)
                            {
                                break;
                            }
                        }
                    }
                }
                v2 = register_state();
                if (v2 == 0)
                {
                    v5 = v14;
                    return v5;
                }
                free_state();
                v9->field_0 = 12;
                v14 = 0;
                v5 = v14;
                return v5;
            }
            rpl_free();
            v9->field_0 = 12;
            v14 = 0;
            v5 = v14;
            return v5;
        }
        v9->field_0 = 12;
        v14 = 0;
        v5 = v14;
        return v5;
    }
    v9->field_0 = 0;
    v14 = 0;
    v5 = v14;
    return v5;
}
