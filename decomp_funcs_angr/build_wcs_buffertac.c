typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[16];
    unsigned long long field_58;
    char padding_60[24];
    unsigned long long field_78;
    char padding_80[16];
    unsigned int field_90;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int build_wcs_buffer()
{
    BOT tmp_47;  // tmp #47
    BOT tmp_44;  // tmp #44
    unsigned int v0;  // [bp-0x8c]
    char v1;  // [bp-0x88]
    struct_2 *|struct_1 * v10;  // rdi
    unsigned long v11;  // r12
    unsigned long long v12;  // r15
    struct_0 *v13;  // fs
    unsigned long v2;  // [bp-0x40]
    struct_2 *|unsigned long long v4;  // rax
    char *|unsigned long long|unsigned int v5;  // rcx
    char *|unsigned long long v6;  // rdx
    struct_1 *v7;  // rbx
    struct_2 * v8;  // rbp
    struct_2 *v9;  // rsi

    v7 = v10;
    tmp_47 = v10->field_58;
    v8 = v10->field_30;
    v11 = (v10->field_40 <= tmp_47? v10->field_40 : tmp_47);
    if ((v10->field_40 <= tmp_47? v10->field_40 : tmp_47) > v8)
    {
        while (true)
        {
            v5 = v7->field_78;
            v12 = v7->field_20;
            if (v7->field_90 > 0)
            {
                v4 = 0;
                while (true)
                {
                    tmp_44 = *(v5 + ((long long)*(v7->field_0 + v8 + v4 + v7->field_28)));
                    *(v7->field_8 + v8 + v4) = *(v5 + ((long long)*(v7->field_0 + v8 + v4 + v7->field_28)));
                    v1 = tmp_44;
                    if (v7->field_90 > ((int)(v4 + 1)))
                    {
                        v4 += 1;
                        if ((v10->field_40 <= tmp_47? v10->field_40 : tmp_47) - v10->field_30 == v4)
                        {
                            break;
                        }
                        v5 = v7->field_78;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            v4 = rpl_mbrtowc();
            if (v4 - 1 <= 18446744069414584317)
            {
                v5 = ((int)v0);
                if (v7->field_40 < v7->field_58 && v4 == 18446744069414584318)
                {
                    v7->field_20 = v12;
                    v7->field_30 = v8;
                    v7->field_38 = v8;
                    return v2 ^ *(v13 + 0x28);
                }
            }
            if (v4 - 1 > 18446744069414584317 || v4 == 18446744069414584318 && v7->field_40 >= v7->field_58)
            {
                v6 = v7->field_78;
                v5 = ((long long)*(v7->field_0 + v8 + v7->field_28));
                v0 = ((int)*(v7->field_0 + v8 + v7->field_28));
                if (v6 != 0)
                {
                    v5 = ((long long)*(v6 + v5));
                    v0 = ((int)v5);
                }
                v7->field_20 = v12;
                v4 = 1;
            }
            if (v4 - 1 > 18446744069414584317 || v7->field_40 >= v7->field_58 || v4 != 18446744069414584318)
            {
                v6 = v7->field_10;
                v9 = v8 + 1;
                v10 = v8 * 4;
                *(v7->field_10 + v8 * 4) = ((unsigned int)v5);
                v8 += rax<8>;
                if (v8 < v8)
                {
                    v4 = v6 + v10 + 4;
                    v6 += v8 * 4;
                    do
                    {
                        v4->field_0 = -1;
                        v4 += 4;
                    }
                    while (v6 != v4);
                    v7->field_30 = v8;
                    v7->field_38 = v8;
                    return v2 ^ *(v13 + 0x28);
                }
                v8 = v9;
                v7->field_30 = v8;
                v7->field_38 = v8;
                return v2 ^ *(v13 + 0x28);
            }
        }
    }
    v7->field_30 = v8;
    v7->field_38 = v8;
    return v2 ^ *(v13 + 0x28);
}