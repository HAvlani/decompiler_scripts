typedef struct struct_6 {
    uint128_t field_0;
} struct_6;

typedef struct struct_7 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_7;

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_9 {
    char padding_0[8];
    char field_8;
} struct_9;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_8;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

int calc_eclosure_iter()
{
    BOT tmp_75;  // tmp #75
    BOT tmp_99;  // tmp #99
    struct_7 *v0;  // [bp-0x90]
    unsigned int v1;  // [bp-0x84]
    unsigned long long|struct_6 * v10;  // rax
    unsigned long|unsigned long long|struct_7 * v12;  // rcx
    struct_8 *|struct_2 *|struct_9 *|unsigned long long v13;  // rdx
    struct_6 *v14;  // rbx
    unsigned long long v15[7];  // rbp
    unsigned long long [7]|unsigned long long v16;  // rsi
    unsigned long|unsigned long long v17;  // rdi
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    unsigned long v2;  // [bp-0x80]
    unsigned long long v20;  // r14
    struct_4 *|unsigned long long v21;  // r15
    unsigned long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    struct_5 *v5;  // [bp-0x68]
    BOT v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x48]

    v19 = v13;
    v15 = v16;
    v14 = v13 * 24;
    tmp_75 = v16[5];
    v0 = v17;
    v1 = ((int)v12);
    v21 = tmp_75 + v13 * 24;
    tmp_99 = *(tmp_75 + v13 * 24 + 8) + 1;
    v3 = *(tmp_75 + v13 * 24 + 8) + 1;
    v5 = malloc(tmp_99 * 8);
    if (v5 != 0)
    {
        v12 = v15[0];
        v5->field_0 = v19;
        v20 = v19 * 16;
        v10 = v15[6];
        v4 = 1;
        v13 = v12 + v19 * 16;
        *(v10 + v14 + 8) = 18446744069414584319;
        if ((((int)*(v12 + (v19 << 4) + 8)) & 0x3ff00) != 0)
        {
            if (v21->field_8 != 0)
            {
                if (((long long)(*(v16[0] + (v21->field_10->field_0 << 4) + 10) & 4)) == 0)
                {
                    v10 = duplicate_node_closure();
                    if (((int)v10) != 0)
                    {
                        return v10;
                    }
                    v10 = v15[6];
                    v13 = v15[0] + v20;
                }
            }
        }
        if (...)
        {
            if (((long long)(v13->field_8 & 8)) != 0)
            {
                v17 = v15[5];
                v13 = v15[5] + v14;
                if (*(v15[5] + v14 + 8) > 0)
                {
                    v20 = 0;
                    v18 = 0;
                    while (true)
                    {
                        v13 = *(v13->field_10 + v18 * 8);
                        v21 = v13 * 24;
                        v12 = rax<8> + v13 * 24;
                        v16 = *(rax<8> + v13 * 24 + 8);
                        if (*(rax<8> + (v13 + (v13 << 1) << 3) + 8) != 18446744069414584319)
                        {
                            if (v16 != 0)
                            {
                                v6 = v12->field_0;
                                v7 = v12->field_10;
                            }
                            else
                            {
                                v2 = &stack_base-88;
                                v10 = calc_eclosure_iter();
                                if (((int)v10) != 0)
                                {
                                    return v10;
                                }
                            }
                            if (((int)v10) == 0 || v16 != 0)
                            {
                                v10 = re_node_set_merge();
                                if (((int)v10) == 0)
                                {
                                    v10 = v15[6];
                                    if (*(v15[6] + v21 + 8) == 0)
                                    {
                                        v20 = 1;
                                        rpl_free();
                                        v10 = v15[6];
                                    }
                                    v17 = v15[5];
                                    v18 += 1;
                                    v13 = v15[5] + v14;
                                }
                                else
                                {
                                    return v10;
                                }
                            }
                        }
                        else
                        {
                            v13 = v17 + v14;
                            v20 = 1;
                            v18 += 1;
                        }
                        if (...)
                        {
                            v13 = v10 + v14;
                            v13->field_8 = 0;
                            v0->field_10 = v5;
                            v10 = 0;
                            v0->field_0 = *((int128_t *)(((char *)&v4) + -8));
                            return v10;
                        }
                    }
                }
            }
        }
        if (...)
        {
            *(v10 + v14) = *((int128_t *)(((char *)&v4) + -8));
            *(v10 + v14 + 16) = v5;
            v0->field_10 = v5;
            v10 = 0;
            v0->field_0 = *((int128_t *)(((char *)&v4) + -8));
            return v10;
        }
    }
    v10 = 12;
    return v10;
}
