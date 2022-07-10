typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int check_dst_limits.isra.0()
{
    BOT tmp_32;  // tmp #32
    BOT tmp_35;  // tmp #35
    unsigned int v0;  // [bp-0x64]
    unsigned long v1;  // [bp-0x60]
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long v12;  // rdx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rsi
    unsigned long v15;  // rsi
    unsigned long long v16[28];  // rdi
    unsigned long long v17;  // r8
    unsigned long v18;  // r9
    unsigned long long v19;  // r10
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v20;  // r11
    unsigned long long v21;  // r14
    struct struct_1 **v22;  // r15
    struct_1 *v3;  // [bp-0x50]
    struct_1 *v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long v6;  // [bp+0x8]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx

    v22 = v12;
    v20 = 0;
    v7 = v16[19];
    v3 = v15;
    v14 = v16[25];
    v5 = v18;
    v4 = v7;
    v10 = v14;
    while (v10 > v20)
    {
        v9 = v10 + v20 >> 1;
        if (*(((v10 + v20 & 18446744069414584318) + (v10 + v20 >> 1) << 4) + v16[27] + 8) >= v17)
        {
            v10 = v9;
        }
        else
        {
            v20 = v10 + 1;
        }
    }
    v11 = v16[25];
    v13 = 0;
    while (v11 > v13)
    {
        v9 = v11 + v13 >> 1;
        if (*(((v11 + v13 & 18446744069414584318) + (v11 + v13 >> 1) << 4) + v16[27] + 8) >= v6)
        {
            v11 = v9;
        }
        else
        {
            v13 = v11 + 1;
        }
    }
    if (v3->field_0 > 0)
    {
        v6 = v6;
        v19 = v17;
        v21 = 0;
        while (true)
        {
            tmp_32 = v22[0];
            tmp_35 = v4;
            v2 = v19;
            v1 = *(*(*(tmp_32 + v21 * 8) * 48 + v16[27]) * 16 + *(tmp_35));
            v0 = check_dst_limits_calc_pos();
            v7 = check_dst_limits_calc_pos();
            v19 = v2;
            if (v0 != v7)
            {
                v8 = 1;
                return v8;
            }
            v21 += 1;
            v8 = 0;
            return v8;
        }
    }
    v8 = 0;
    return v8;
}
