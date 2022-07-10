typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_1 *field_10;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    char padding_0[40];
    unsigned long long field_28;
} struct_5;

int check_dst_limits_calc_pos_1()
{
    BOT tmp_27;  // tmp #27
    unsigned long v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x78]
    struct_1 *|unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rcx
    unsigned long v15;  // rdx
    unsigned long long [28]|unsigned long long v16;  // rbx
    unsigned long long v17;  // rbp
    unsigned int v18;  // esi
    unsigned long v19;  // rsi
    unsigned int v2;  // [bp-0x70]
    unsigned long long v20[28];  // rdi
    unsigned long v21;  // r8
    unsigned long long [5] v22;  // r12
    struct_4 * v23;  // r13
    unsigned long long [28]|unsigned long long [7] v24;  // r14
    unsigned long long v25;  // r15
    unsigned long long [7]|struct_5 * v26;  // r15
    unsigned int v3;  // [bp-0x6c]
    unsigned long long v4[7];  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long long v8[3];  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]

    v25 = v19;
    v24 = v20[19];
    v1 = v13;
    v14 = v13 * 3;
    v23 = v24[6] + v14 * 8;
    if (*(v24[6] + (v14 << 3) + 8) > 0)
    {
        v26 = v20[19];
        v16 = 0;
        v24 = v20;
        v7 = v21 * 48;
        v5 = 1 << (((char)v15) & 63);
        v6 = !(1 << (((char)v15) & 63));
        v3 = ((int)v19) & 1;
        v2 = ((int)v19) & 2;
        while (true)
        {
            v17 = *(v23->field_10 + v16 * 8);
            v11 = *(v23->field_10 + v16 * 8) * 16 + v26[0];
            v14 = ((long long)*(*(v23->field_10 + v16 * 8) * 16 + v26[0] + 8));
            if (*((*(v23->field_10 + (v16 << 3)) << 4) + v26[0] + 8) != 8)
            {
                if (v14 != 9)
                {
                    if (v14 == 4 && v0 != 18446744069414584319)
                    {
                        v8 = v23;
                        tmp_27 = v7;
                        v9 = v16;
                        v22 = tmp_27 + v24[27];
                        v16 = v24;
                        v4 = v26 * 24;
                        v24 = v26;
                        v26 = v17;
                        while (true)
                        {
                            if (v22[0] == v26 && ((v5 & v22[4]) != 0 || v15 > 63))
                            {
                                if (v1 != *(*(v26->field_28 + v4 + 16)))
                                {
                                    v0 = v0;
                                    v11 = check_dst_limits_calc_pos_1();
                                    if (v11 != -1)
                                    {
                                        return -1;
                                        if (v11 == 0 && v2 != 0)
                                        {
                                            return 0;
                                        }
                                    }
                                }
                                v18 = ((int)(((int)v19) & 1));
                                return ((long long)(0 - (((int)v19) & 1)));
                            }
                            if (...)
                            {
                                v22[4] = v22[4] & v6;
                            }
                            if (...)
                            {
                                v22 += 48;
                                v26 = v24;
                                v24 = v16;
                                v23 = v8;
                                v16 = v9 + 1;
                                v25 = v19;
                                v12 = v25 >> 1;
                                return v12;
                            }
                        }
                    }
                }
                if (v2 != 0)
                {
                    if (v11->field_0 == v15)
                    {
                        return 0;
                    }
                }
            }
            if (v3 != 0)
            {
                if (v11->field_0 == v15)
                {
                    return -1;
                }
            }
            if (...)
            {
                v16 += 1;
                v25 = v19;
                break;
            }
        }
        v12 = v25 >> 1;
        return v12;
    }
    v12 = v25 >> 1;
    return v12;
}
