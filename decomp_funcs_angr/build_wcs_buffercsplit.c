typedef struct struct_0 {
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
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int build_wcs_buffer()
{
    BOT tmp_47;  // tmp #47
    BOT tmp_44;  // tmp #44
    unsigned int v0;  // [bp-0x8c]
    char v1;  // [bp-0x88]
    unsigned long long v10;  // rsi
    unsigned long long|struct_0 * v11;  // rdi
    unsigned long v12;  // r12
    unsigned long long v13;  // r15
    struct_1 *v14;  // fs
    unsigned long v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    unsigned long long|struct_2 * v5;  // rax
    char *|unsigned long long|unsigned int v6;  // rcx
    char *|unsigned long long v7;  // rdx
    struct_0 *v8;  // rbx
    struct_2 * v9;  // rbp

    v8 = v11;
    tmp_47 = v11->field_58;
    v9 = v11->field_30;
    v12 = (v11->field_40 <= tmp_47? v11->field_40 : tmp_47);
    if ((v11->field_40 <= tmp_47? v11->field_40 : tmp_47) > v9)
    {
        while (true)
        {
            v6 = v8->field_78;
            v13 = v8->field_20;
            if (v8->field_90 > 0)
            {
                v4 = 0;
                while (true)
                {
                    tmp_44 = *(v6 + ((long long)*(v8->field_0 + v9 + v4 + v8->field_28)));
                    *(v8->field_8 + v9 + v4) = *(v6 + ((long long)*(v8->field_0 + v9 + v4 + v8->field_28)));
                    v1 = tmp_44;
                    if (v8->field_90 > ((int)(v4 + 1)))
                    {
                        v4 += 1;
                        if ((v11->field_40 <= tmp_47? v11->field_40 : tmp_47) - v11->field_30 == v4)
                        {
                            break;
                        }
                        v6 = v8->field_78;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            v5 = rpl_mbrtowc();
            if (v5 - 1 <= 18446744069414584317)
            {
                v6 = ((int)v0);
                if (v8->field_40 < v8->field_58 && v5 == 18446744069414584318)
                {
                    v8->field_20 = v13;
                    v8->field_30 = v9;
                    v8->field_38 = v9;
                    return v2 ^ *(v14 + 0x28);
                }
            }
            if (v5 - 1 > 18446744069414584317 || v5 == 18446744069414584318 && v8->field_40 >= v8->field_58)
            {
                v7 = v8->field_78;
                v6 = ((long long)*(v8->field_0 + v9 + v8->field_28));
                v0 = ((int)*(v8->field_0 + v9 + v8->field_28));
                if (v7 != 0)
                {
                    v6 = ((long long)*(v7 + v6));
                    v0 = ((int)v6);
                }
                v8->field_20 = v13;
                v5 = 1;
            }
            if (v5 - 1 > 18446744069414584317 || v8->field_40 >= v8->field_58 || v5 != 18446744069414584318)
            {
                v7 = v8->field_10;
                v10 = v9 + 1;
                v11 = v9 * 4;
                *(v8->field_10 + v9 * 4) = ((unsigned int)v6);
                v9 += v5;
                v9 = v10;
                v8->field_30 = v9;
                v8->field_38 = v9;
                return v2 ^ *(v14 + 0x28);
                if (v9 < v9)
                {
                    v5 = v7 + v11 + 4;
                    v7 += v9 * 4;
                    do
                    {
                        v5->field_0 = -1;
                        v5 += 4;
                    }
                    while (v7 != v5);
                    v8->field_30 = v9;
                    v8->field_38 = v9;
                    return v2 ^ *(v14 + 0x28);
                }
            }
        }
    }
    v8->field_30 = v9;
    v8->field_38 = v9;
    return v2 ^ *(v14 + 0x28);
}
