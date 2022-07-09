typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    struct struct_1 *field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int register_state()
{
    unsigned long long|struct_1 * v1;  // rax
    unsigned long long v10;  // r15
    unsigned long v2;  // rdx
    unsigned long long|unsigned long long [3] v3;  // rbx
    unsigned long long v4[7];  // rbp
    unsigned long|struct_0 * v5;  // rsi
    unsigned long v6;  // rsi
    struct_1 *|unsigned long long [18] v7;  // rdi
    unsigned long long|struct_1 * v8;  // r12
    unsigned long long v9[18];  // r14

    v9 = v7;
    v4 = v5;
    v10 = v5->field_10;
    v5->field_0 = v2;
    v5->field_28 = 0;
    v5->field_20 = v10;
    v1 = malloc(v5->field_10 * 8);
    v5->field_30 = v1;
    if (v1 != 0)
    {
        v3 = 0;
        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
        }
        else
        {
            while (true)
            {
                if (...)
                {
                    v1 = re_node_set_insert_last();
                    if (((long long)v1) != 0)
                    {
                        return 12;
                    }
                }
                if (...)
                {
                    v3 += 1;
                }
            }
        }
        v8 = v2 & v9[17];
        v3 = v9[8] + v8 * 24;
        v1 = *(v9[8] + v8 * 24);
        v7 = *(v9[8] + v8 * 24 + 16);
        v6 = *(v9[8] + v8 * 24) + 1;
        if (*(v9[8] + (v8 + (v8 << 1) << 3) + 8) > *(v9[8] + (v8 + (v8 << 1) << 3)))
        {
            v3[0] = v6;
            *(v7 + v1 * 8) = v4;
            return 0;
        }
        v8 = v6 * 2;
        v5 = v6 * 16;
        v7 = realloc(v7, v5);
        if (v7 == 0)
        {
            return 12;
        }
        else
        {
            v3[2] = v7;
            v1 = v3[0];
            v3[1] = v8;
            v6 = v1 + 1;
            v3[0] = v6;
            *(v7 + v1 * 8) = v4;
            return 0;
        }
    }
    return 12;
}
