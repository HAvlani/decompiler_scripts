typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_2 *field_10;
} struct_3;

int sub_epsilon_src_nodes()
{
    unsigned int|unsigned long v0;  // [bp-0x60]
    uint128_t v1;  // [bp-0x58]
    unsigned long long v10;  // rbx
    unsigned long v11;  // rsi
    unsigned long long v12[8];  // rdi
    struct_1 *v16;  // r11
    struct_3 *v18;  // r15
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long v8;  // rcx
    unsigned long long v9;  // rdx

    v0 = v8;
    v4 = v12[7];
    v1 = 0;
    v2 = 0;
    v18 = v4 + v11 * 24;
    r8<8> - 1 = *(v4 + v11 * 24 + 8);
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
    {
        v10 = 0;
        while (true)
        {
            v4 = *(v18->field_10 + v10 * 8);
            if (v11 != *(v18->field_10 + (v10 << 3)) && ((long long)(*((v4 << 4) + v12[0] + 8) & 8)) != 0)
            {
                v4 = re_node_set_contains.isra.0();
                if (v16->field_8 > 1)
                {
                    if (v4 == 0)
                    {
                        v4 = re_node_set_contains.isra.0();
                    }
                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) && (v4 == 0 || v4 != 0))
                    {
                        v4 = re_node_set_contains.isra.0();
                    }
                }
                if (rax<8> == 0 && (v16->field_8 <= 1 || !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))) && (v16->field_8 <= 1 || v4 == 0 || v4 != 0))
                {
                    v4 = re_node_set_contains.isra.0();
                }
            }
            if (...)
            {
                v4 = re_node_set_add_intersect();
                if (((int)v0) == 0)
                {
                    r8<8> - 1 = v18->field_8;
                }
                else
                {
                    v0 = v4;
                    rpl_free();
                    v6 = ((long long)v0);
                    return v6;
                }
            }
            if (...)
            {
                v10 += 1;
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                {
                    do
                    {
                        v4 = re_node_set_contains.isra.0();
                        if (v4 == 0)
                        {
                            v4 = (long long)re_node_set_contains.isra.0() - 1;
                            v9 = v4;
                            if (v9 < r8<8> && !(((char)(v9 - 1 >> 63))))
                            {
                                r8<8> - 1 = r8<8> - 1;
                                *(v9 + 8) = r8<8> - 1;
                                re_node_set_remove_at.isra.0.part.0();
                            }
                        }
                    }
                    while (v18->field_8 > r9<8> + 1);
                }
                rpl_free();
                v6 = 0;
                break;
            }
        }
        return v6;
    }
    rpl_free();
    v6 = 0;
    return v6;
}
