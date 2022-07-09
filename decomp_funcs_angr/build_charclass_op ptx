typedef struct struct_2 {
    char padding_0[120];
    struct struct_1 *field_78;
    char padding_80[48];
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
} struct_2;

typedef struct struct_4 {
    char padding_0[120];
    unsigned long long field_78;
    char padding_80[48];
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
} struct_4;

typedef struct struct_3 {
    char padding_0[32];
    char field_20;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_1 g_0;

int build_charclass_op()
{
    BOT tmp_24;  // tmp #24
    BOT tmp_53;  // tmp #53
    BOT tmp_2;  // tmp #2
    BOT tmp_54;  // tmp #54
    BOT tmp_97;  // tmp #97
    unsigned long long v0;  // [bp-0x98]
    unsigned long|struct_1 * v1;  // [bp-0x88]
    unsigned long long v11;  // rax
    struct_1 *|unsigned long long v13;  // rax
    char *|unsigned long long v15;  // rcx
    struct_4 *v18;  // rbx
    unsigned long long v19;  // rbp
    unsigned long long v2;  // [bp-0x70]
    unsigned long v20;  // rsi
    struct_2 *v21;  // rdi
    unsigned long v22;  // r8
    struct_0 *v23;  // r9
    unsigned long long v24;  // r12
    char * v25;  // r13
    unsigned long|unsigned long long|struct_3 * v3;  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned int v5;  // [bp-0x5f]
    unsigned short v6;  // [bp-0x5b]
    char v7;  // [bp-0x59]
    uint128_t v8;  // [bp-0x58]
    char v9;  // [bp-0x50]

    v25 = v15;
    v18 = v21;
    v1 = v20;
    v2 = &g_0;
    v13 = calloc(0x20, &g_0);
    if (&stack_base+0 != 0)
    {
        v19 = v13;
        if (v3 != 0)
        {
            tmp_24 = ((long long)v3->field_20);
            v0 = &g_0;
            v3->field_20 = ((char)(((int)tmp_24) & -2 | ((int)v22) & &g_0));
            v13 = build_charclass.isra.0();
            if (((int)v1) == 0)
            {
                v15 = ((long long)*(v15));
                if (((long long)*(v25)) != 0)
                {
                    do
                    {
                        tmp_2 = v15;
                        tmp_54 = v15 + 63;
                        v25 += &g_0;
                        tmp_97 = ((long long)(((int)(v15 + (v15 >> 63 >> 58))) & 63)) - (v15 >> 63 >> 58);
                        v15 = ((long long)*(v25));
                        *(v13 + ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t2, 0x0<64>, cc_ndep<8>))? tmp_2 : tmp_54) >> &g_0) * 8) = *(v13 + ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t2, 0x0<64>, cc_ndep<8>))? tmp_2 : tmp_54) >> &g_0) * 8) | &g_0 << (tmp_97 & 63);
                        tmp_53 = v15;
                    }
                    while (((long long)tmp_53) != 0);
                }
                if (((long long)v22) != 0)
                {
                    v13 = v19;
                    do
                    {
                        v13->field_0 = !(v13->field_0);
                        v13 += 8;
                    }
                    while (v19 + 32 != v13);
                }
                if (v21->field_b4 > 1)
                {
                    v13 = &g_0;
                    do
                    {
                        *(v13 + v13) = *(v13 + v13) & *(v21->field_78 + v13);
                        v13 += 8;
                    }
                    while (v13 != 32);
                }
                v5 = &g_0;
                v6 = &g_0;
                v7 = &g_0;
                v3 = v13;
                v4 = &g_0;
                v1 = &stack_base-104;
                v24 = (long long)create_token_tree.isra.0();
                if (v24 != 0)
                {
                    if (v21->field_b4 > 1)
                    {
                        v18->field_b0 = v18->field_b0 | &g_0;
                        v4 = &g_0;
                        v3 = calloc(0x50, &g_0);
                        v15 = (long long)create_token_tree.isra.0();
                        if (v15 != 0)
                        {
                            v8 = &g_0;
                            v9 = 10;
                            v24 = (long long)create_token_tree.isra.0();
                            v11 = v24;
                            return v11;
                        }
                    }
                    free_charset();
                    v11 = v24;
                    return v11;
                }
                if (v24 == 0 || v15 == 0 && v21->field_b4 > 1)
                {
                    rpl_free();
                    free_charset();
                    v24 = &g_0;
                    v23->field_0 = 12;
                    v11 = v24;
                    return v11;
                }
            }
            v1 = v13;
            v24 = &g_0;
            rpl_free();
            free_charset();
            v23->field_0 = v1;
            v11 = v24;
            return v11;
        }
        v24 = &g_0;
        rpl_free();
        v23->field_0 = 12;
        v11 = v24;
        return v11;
    }
    v24 = &g_0;
    v23->field_0 = 12;
    v11 = v24;
    return v11;
}
