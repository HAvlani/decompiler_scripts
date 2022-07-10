typedef struct struct_4 {
    char field_0;
} struct_4;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    struct struct_1 *field_0;
    char padding_8[16];
    unsigned long long field_18;
    char field_1a;
    char padding_1b[29];
    char field_38;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    char padding_18[156];
    unsigned int field_b4;
} struct_1;

typedef struct struct_7 {
    char field_0;
    char padding_1[7];
    char field_8;
} struct_7;

typedef struct struct_6 {
    unsigned int field_0;
} struct_6;

typedef struct struct_5 {
    struct struct_6 *field_0;
    char padding_8[24];
    char field_20;
    char padding_21[31];
    unsigned long long field_40;
    unsigned long long field_48;
} struct_5;

typedef struct struct_8 {
    char field_0;
    char padding_1[7];
    unsigned int field_8;
} struct_8;

extern <missing-type> g_400000;

int re_compile_fastmap_iter.isra.0()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_2;  // tmp #2
    BOT tmp_18;  // tmp #18
    unsigned long v0;  // [bp-0x2b8]
    struct_6 *|unsigned long v1;  // [bp-0x190]
    char v10;  // [bp-0x147]
    char v11;  // [bp-0x146]
    unsigned long v12;  // [bp-0x40]
    char *|unsigned long long|struct_4 *|unsigned int v14;  // rax
    unsigned long long v15;  // rax
    unsigned long|struct_4 *|unsigned long long|struct_0 * v16;  // rcx
    unsigned long|unsigned long long|struct_8 * v17;  // rdx
    unsigned long long v18;  // rbx
    unsigned long|unsigned long long|struct_7 * v19;  // rsi
    struct_1 *v2;  // [bp-0x188]
    struct_3 *v20;  // rdi
    unsigned long long v21;  // r12
    unsigned long long v22;  // r13
    struct_5 *|unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long|unsigned int v25;  // cc_dep1
    struct_0 *v26;  // fs
    struct_6 *|unsigned long long v3;  // [bp-0x180]
    struct struct_0 **v4;  // [bp-0x178]
    struct_0 *v5;  // [bp-0x168]
    struct struct_0 **v6;  // [bp-0x160]
    char v7;  // [bp-0x154]
    unsigned long long v8;  // [bp-0x150]
    char v9;  // [bp-0x148]

    v24 = v16;
    v21 = 0;
    v5 = v19;
    v6 = v17;
    v25 = ((int)v20->field_0->field_b4);
    v2 = v20->field_0;
    if (v25 == 1)
    {
        v14 = v20->field_18;
        v1 = v20->field_18;
        v21 = ((int)(((int)v14) % &g_400000 & 1));
    }
    v18 = 0;
    if (v5->field_0 <= 0)
    {
        return v12 ^ *(v26 + 0x28);
    }
    while (true)
    {
        v23 = *(v6[0] + v18 * 8);
        v19 = v2->field_0 + *(v6[0] + v18 * 8) * 16;
        v4 = *(v6[0] + v18 * 8) * 16;
        v16 = ((int)v19->field_8);
        v14 = ((int)v19->field_8);
        if (v19->field_8 != 1)
        {
            if (v16 == 3)
            {
                v3 = 0;
                do
                {
                    v16 = v3;
                    v23 = 0;
                    v22 = v3 * 8;
                    do
                    {
                        v0 = *(*(v2->field_0 + v4));
                        if ((((char)(((long long)((char)v0)) >> ((long long)((char)(v23 & 63 & 7))))) & 1) != 0)
                        {
                            *(v24 + v22) = 1;
                            v14 = v24 + v22;
                            if (v21 != 0)
                            {
                                if (((int)(v22 + 128)) <= 383)
                                {
                                    v1 = v0;
                                    v14 = ((long long)*(*(__ctype_tolower_loc()) + v22 * 4)) + v24;
                                }
                                *(rax<8> + None) = 1;
                            }
                        }
                        v23 = ((long long)(((int)v23) + 1));
                        v22 += 1;
                    }
                    while (((int)1) != 64);
                    v3 += 8;
                }
                while (v3 != 32);
            }
            else if (v16 != 6)
            {
                v14 = ((long long)(v14 & -3));
                tmp_3 = v14;
                if (tmp_3 == 5)
                {
                    *(v24) = 72340172838076673;
                    *(v24 + 16) = 72340172838076673;
                    *(v24 + 32) = 72340172838076673;
                    *(v24 + 48) = 72340172838076673;
                    *(v24 + 64) = 72340172838076673;
                    *(v24 + 80) = 72340172838076673;
                    *(v24 + 96) = 72340172838076673;
                    *(v24 + 112) = 72340172838076673;
                    *(v24 + 128) = 72340172838076673;
                    *(v24 + 144) = 72340172838076673;
                    *(v24 + 160) = 72340172838076673;
                    *(v24 + 176) = 72340172838076673;
                    *(v24 + 192) = 72340172838076673;
                    *(v24 + 208) = 72340172838076673;
                    *(v24 + 224) = 72340172838076673;
                    *(v24 + 240) = 72340172838076673;
                    if (v16 != 2)
                    {
                        return v12 ^ *(v26 + 0x28);
                    }
                    else
                    {
                        *(v20 + 0x38) = *(v20 + 0x38) | 1;
                        break;
                    }
                }
                else if (v16 == 2)
                {
                    *(v24) = 72340172838076673;
                    *(v24 + 16) = 72340172838076673;
                    *(v24 + 32) = 72340172838076673;
                    *(v24 + 48) = 72340172838076673;
                    *(v24 + 64) = 72340172838076673;
                    *(v24 + 80) = 72340172838076673;
                    *(v24 + 96) = 72340172838076673;
                    *(v24 + 112) = 72340172838076673;
                    *(v24 + 128) = 72340172838076673;
                    *(v24 + 144) = 72340172838076673;
                    *(v24 + 160) = 72340172838076673;
                    *(v24 + 176) = 72340172838076673;
                    *(v24 + 192) = 72340172838076673;
                    *(v24 + 208) = 72340172838076673;
                    *(v24 + 224) = 72340172838076673;
                    *(v24 + 240) = 72340172838076673;
                    *(v20 + 0x38) = *(v20 + 0x38) | 1;
                    return v12 ^ *(v26 + 0x28);
                }
            }
            if (v16 == 6)
            {
                v23 = v19->field_0;
                if (v2->field_b4 > 1 && (v23->field_48 != 0 || ((long long)(v23->field_20 & 1)) != 0 || v23->field_40 != 0))
                {
                    v7 = 0;
                    do
                    {
                        v8 = 0;
                        v14 = rpl_mbrtowc();
                        if (v14 == 18446744069414584318)
                        {
                            *(v16 + ((long long)v7)) = 1;
                        }
                        tmp_2 = v7;
                        v7 += 1;
                    }
                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x1<64>, Conv(8->64, t2), 0x1<64>, cc_ndep<8>))));
                    /* goto 4246854; */
                }
                if (v2->field_b4 <= 1 || v23->field_48 == 0 && ((long long)(v23->field_20 & 1)) == 0 && v23->field_40 == 0)
                {
                    v22 = 0;
                    v25 = *(*(v2->field_0 + *(v6[0] + 0 * 8) * 16) + 40);
                    v1 = &v9;
                    if (v25 <= 0)
                    {
                    }
                    else
                    {
                        do
                        {
                            v8 = 0;
                            v3 = v22 * 4;
                            v14 = wcrtomb(((int)&v9), *(v23->field_0 + v22 * 4), ((int)&v8));
                            if (v14 != 18446744069414584319)
                            {
                                *(v16 + ((long long)v9)) = 1;
                                v3 = ((long long)v9);
                                if (v21 != 0)
                                {
                                    v14 = ((long long)*(*(__ctype_tolower_loc()) + v3 * 4));
                                    *(v16 + v14) = 1;
                                }
                            }
                            if (((long long)(*(v20 + 0x1a) & 64)) != 0 && v2->field_b4 > 1)
                            {
                                v14 = wcrtomb(((int)&v9), towlower(*(*(*(v2->field_0 + *(v6[0] + 0 * 8) * 16)) + v22 * 4)), ((int)&v8));
                                if (v14 != 18446744069414584319)
                                {
                                    *(v16 + ((long long)v9)) = 1;
                                }
                            }
                            v22 += 1;
                        }
                        while (...);
                    }
                }
            }
        }
        else
        {
            v17 = ((long long)v19->field_0);
            *(v24 + ((long long)v19->field_0)) = 1;
            v1 = v17;
            if (v21 != 0)
            {
                v14 = ((long long)*(*(__ctype_tolower_loc()) + v1 * 4));
                *(v24 + v14) = 1;
            }
            if (((long long)(*(v20 + 0x1a) & 64)) != 0 && v2->field_b4 > 1)
            {
                v17 = *(v16);
                v16 = v2;
                v19 = &v10;
                v9 = *(v2->field_0 + v4);
                v15 = v23 + 1;
                if (v23 + 1 >= *(v16 + 16))
                {
                    v22 = 1;
                    v1 = &v9;
                }
                else
                {
                    while (true)
                    {
                        v17 += v15 * 16;
                        v17 = ((long long)v17->field_0);
                        v19 = &v11;
                        v15 += 1;
                        tmp_18 = v17;
                        v10 = tmp_18;
                        if (v2->field_10 <= v15 || (((int)v17->field_8) & 2097407) != 2097153)
                        {
                            break;
                        }
                        v17 = v2->field_0;
                    }
                    v1 = &v9;
                    v19 -= &v9;
                    v22 = v19;
                }
                v8 = 0;
                v14 = rpl_mbrtowc();
                if (v14 == v22)
                {
                    v14 = wcrtomb(((int)&v9), towlower(v7), ((int)&v8));
                    if (v14 != 18446744069414584319)
                    {
                        v18 = 1;
                        *(v24 + ((long long)v9)) = 1;
                        return v12 ^ *(v26 + 0x28);
                    }
                }
            }
        }
        if (...)
        {
            v18 = 1;
            return v12 ^ *(v26 + 0x28);
        }
    }
    return v12 ^ *(v26 + 0x28);
}
