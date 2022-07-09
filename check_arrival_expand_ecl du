typedef struct struct_1 {
    uint128_t field_0;
    unsigned long long field_8;
    unsigned long long field_10;
} struct_1;

typedef struct struct_3 {
    uint128_t field_0;
    unsigned long long field_8;
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
} struct_5;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

int check_arrival_expand_ecl()
{
    unsigned int v0;  // [bp-0x5c]
    unsigned int v1;  // [bp-0x58]
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rbx
    unsigned long v12;  // rbp
    struct_1 *|unsigned long long v13;  // rsi
    unsigned long|unsigned long long v14;  // rdi
    unsigned long long v15;  // r8
    struct_5 *v16;  // r10
    unsigned long long v17;  // r12
    unsigned long long v18[7];  // r13
    struct_3 *v19;  // r14
    unsigned long long v2;  // [bp-0x50]
    unsigned int v20;  // r15d
    unsigned long v3;  // [bp-0x48]
    struct_4 *|unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int|unsigned long long v9;  // rcx

    v20 = v9;
    v19 = v13;
    v18 = v14;
    v11 = v10;
    v12 = *(v13 + 0x8);
    v2 = 0;
    ((unsigned int)v1) = v12;
    v3 = malloc(((unsigned int)v1) * 8);
    if (!(v3 != 0))
    {
        v6 = 12;
        return v6;
    }
    else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
    {
        v17 = 0;
        while (true)
        {
            v16 = v18[6] + *(v19->field_8 + v17 * 8) * 24;
            v13 = *(v18[6] + *(v19->field_8 + v17 * 8) * 24 + 8);
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
            {
                v15 = v16->field_10;
                v14 = v18[0];
                v10 = 0;
                while (true)
                {
                    v9 = *(v15 + v10 * 8);
                    v5 = *(v15 + v10 * 8) * 16 + v14;
                    if (v20 == ((int)*((*(v15 + (v10 << 3)) << 4) + v14 + 8)) && v11 == v5->field_0)
                    {
                        v5 = check_arrival_expand_ecl_sub();
                        v0 = v5;
                        rpl_free();
                        v6 = ((long long)v0);
                        return v6;
                    }
                    if (v20 != ((int)*((*(v15 + (v10 << 3)) << 4) + v14 + 8)) || v11 != v5->field_0)
                    {
                        v10 += 1;
                    }
                }
                if (True)
                {
                    v5 = re_node_set_merge();
                }
                else if (...)
                {
                    v17 += 1;
                }
            }
            if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || ((int)v5) != 0)
            {
                v5 = re_node_set_merge();
            }
            if (((int)v5) == 0)
            {
                v17 += 1;
                rpl_free();
                v19->field_8 = v3;
                v6 = 0;
                v19->field_0 = v1;
                return v6;
            }
            v0 = v5;
            rpl_free();
            v6 = ((long long)v0);
            return v6;
        }
    }
    else
    {
        rpl_free();
        v19->field_8 = v3;
        v6 = 0;
        v19->field_0 = v1;
        return v6;
    }
}
