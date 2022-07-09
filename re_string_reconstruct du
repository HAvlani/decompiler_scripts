typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    struct struct_1 *field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    unsigned int field_70;
    char padding_74[4];
    unsigned long long field_78;
    unsigned long long field_80;
    char field_88;
    char field_89;
    char padding_8a[1];
    char field_8b;
    char field_8c;
    char field_8d;
    char field_8e;
    char padding_8f[1];
    unsigned int field_90;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    unsigned int field_70;
    char padding_74[4];
    unsigned long long field_78;
    unsigned long long field_80;
    char field_88;
    char field_89;
    char padding_8a[1];
    char field_8b;
    char field_8c;
    char field_8d;
    char field_8e;
    char padding_8f[1];
    unsigned int field_90;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

int re_string_reconstruct()
{
    BOT tmp_32;  // tmp #32
    BOT tmp_43;  // tmp #43
    BOT tmp_14;  // tmp #14
    BOT tmp_18;  // tmp #18
    BOT tmp_21;  // tmp #21
    BOT tmp_19;  // tmp #19
    BOT tmp_15;  // tmp #15
    BOT tmp_17;  // tmp #17
    BOT tmp_25;  // tmp #25
    BOT tmp_1;  // tmp #1
    unsigned long|unsigned int v0;  // [bp-0x78]
    unsigned int v1;  // [bp-0x6c]
    unsigned long|char *|unsigned long long|unsigned int v10;  // ecx
    char * v11;  // rcx
    unsigned long|char *|unsigned long long|unsigned int v12;  // rdx
    unsigned long long v13;  // rdx
    struct_2 *v14;  // rbx
    unsigned long long v15;  // rbp
    unsigned long long|unsigned int v16;  // rsi
    struct_0 *v17;  // rdi
    unsigned long|unsigned int v18;  // r8
    unsigned long long v19;  // r9
    unsigned long v2;  // [bp-0x68]
    char * v20;  // r12
    unsigned long|unsigned long long v21;  // r13
    char *|unsigned long long|unsigned int v22;  // r14
    char * v23;  // r15
    unsigned long long v24;  // r15
    unsigned long long|unsigned int|char v25;  // cc_dep1
    unsigned long v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x54]
    unsigned long long v5;  // [bp-0x50]
    char *|unsigned long long|struct_3 *|unsigned long|unsigned int v7;  // rax
    unsigned long long v8;  // rax

    v18 = v12;
    v20 = v16;
    v14 = v17;
    v15 = v16 - v17->field_28;
    if (v17->field_28 > v16)
    {
        if (v17->field_90 > 1)
        {
            v17->field_20 = 0;
        }
        tmp_32 = v14->field_50;
        v14->field_30 = 0;
        v15 = v16;
        v14->field_28 = 0;
        v14->field_58 = tmp_32;
        tmp_43 = v14->field_60;
        v14->field_38 = 0;
        v14->field_68 = tmp_43;
        v14->field_8c = 0;
        v25 = ((char)v14->field_8b);
        v14->field_70 = (0 - ((int)((((int)v12) & 1) < 1)) & 2) + 4;
        if (v25 == 0)
        {
            v14->field_8 = v14->field_0;
        }
    }
    if (v15 != 0 || v16 != 0)
    {
        v7 = v14->field_38;
        v21 = v14->field_30;
    }
    if (v15 == 0 || v16 == 0)
    {
        v16 = ((int)v17->field_90);
        /* goto 4282493; */
    }
    if (v25 == 0 || v15 != 0)
    {
        if (v15 != 0 || v17->field_28 > v16)
        {
            if (v17->field_28 <= v16 || v16 != 0 || v25 != 0)
            {
                if (v14->field_38 > v15)
                {
                    if (((long long)v17->field_8c) == 0)
                    {
                        v21 = v17->field_30 - v15;
                        v14->field_70 = re_string_context_at();
                        if (v25 > 1)
                        {
                            memmove(v14->field_10, v14->field_10 + v15 * 4, v21 * 4);
                            v21 = v14->field_30 - v15;
                        }
                        if (v14->field_8b != 0)
                        {
                            memmove(v14->field_8, v14->field_8 + v15, v21);
                            v21 = v14->field_30 - v15;
                        }
                        v14->field_38 = v14->field_38 - v15;
                        v14->field_30 = v21;
                    }
                    else
                    {
                        v24 = v14->field_18;
                        v10 = v17->field_30;
                        v16 = 0;
                        while (true)
                        {
                            v7 = (v16 + v10 >> 63) + v16 + v10 >> 1;
                            v12 = *(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1) * 8);
                            v25 = *(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1) * 8);
                            if (*(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1 << 3)) > v15)
                            {
                                v10 = v7;
                            }
                            else if (((char)(v25 < v15)))
                            {
                                v16 = v10 + 1;
                            }
                            else
                            {
                                v22 = v10;
                                break;
                            }
                            if (((char)(v25 < v15)) || *(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1 << 3)) > v15)
                            {
                                v22 = v10 + 1;
                                v22 = v10;
                                break;
                                if (v12 < v15)
                                {
                                    break;
                                }
                            }
                        }
                        v14->field_70 = re_string_context_at();
                        if (v15 == v22)
                        {
                            if (v15 < v17->field_30)
                            {
                                if (*(v24 + (v22 << 3)) == v15)
                                {
                                    memmove(v14->field_10, v14->field_10 + v15 * 4, (v17->field_30 - v15) * 4);
                                    memmove(v14->field_8, v14->field_8 + v15, v14->field_30 - v15);
                                    tmp_14 = v14->field_30;
                                    v14->field_38 = v14->field_38 - v15;
                                    v14->field_30 = tmp_14 - v15;
                                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                                    {
                                        v10 = v14->field_18;
                                        v7 = 0;
                                        v16 = v14->field_18 + v15 * 8;
                                        do
                                        {
                                            *(v17->field_18 + v7 * 8) = *(v16 + v7 * 8) - v15;
                                            v7 += 1;
                                        }
                                        while (v14->field_30 > v7);
                                        /* goto 4282458; */
                                    }
                                }
                            }
                        }
                        if (*(v24 + (v22 << 3)) != v15 || v15 != v22 || v15 >= v17->field_30)
                        {
                            tmp_18 = v14->field_50;
                            tmp_21 = v14->field_60;
                            v14->field_8c = 0;
                            v10 = tmp_21 - v20;
                            v14->field_58 = tmp_18 - v20 + v15;
                            v14->field_68 = tmp_21 - v20 + v15;
                            if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>)))
                            {
                            }
                            else
                            {
                                while (*(v24 + (r14<8> << 3) + 8) == v15)
                                {
                                    v22 = r14<8> - 1;
                                    if (r14<8> == 1)
                                    {
                                        break;
                                    }
                                }
                            }
                            if (v22 < v21)
                            {
                                while (true)
                                {
                                    v22 = r14<8> + 1;
                                }
                                if (True)
                                {
                                    v13 = *(v24 + v22 * 8) - v15;
                                    v14->field_30 = *(v24 + v22 * 8) - v15;
                                }
                                else if (*(v17->field_10 + (r14<8> << 2)) == -1)
                                {
                                    v14->field_30 = 0;
                                    v13 = 0;
                                    /* goto 4283535; */
                                }
                            }
                            if (v22 < v21 && v13 != 0 || ((char)(v22 == v17->field_30)) && v22 >= v21)
                            {
                                v14->field_30 = 0;
                                v13 = 0;
                                /* goto 4283535; */
                            }
                            if (v22 < v21 && v13 != 0 || v22 >= v21 && !(((char)(v22 == v17->field_30))))
                            {
                                v13 = *(v24 + v22 * 8) - v15;
                                v14->field_30 = *(v24 + v22 * 8) - v15;
                                if (v13 != 0)
                                {
                                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                                    {
                                        v7 = v14->field_10;
                                        v10 = v14->field_10 + v13 * 4;
                                        do
                                        {
                                            v7->field_0 = -1;
                                            v7 += 4;
                                        }
                                        while (v10 != v7);
                                    }
                                    memset(v14->field_8, 0xff, v13);
                                    v13 = v14->field_30;
                                }
                            }
                            v14->field_38 = v13;
                            v16 = ((long long)v14->field_90);
                            v12 = ((long long)v14->field_8b);
                        }
                    }
                    if (((long long)v17->field_8c) == 0 || *(v24 + (v22 << 3)) == v15 && v15 == v22 && v15 < v17->field_30)
                    {
                        v16 = ((long long)v14->field_90);
                        v12 = ((long long)v14->field_8b);
                    }
                }
                else
                {
                    if (((long long)v17->field_8c) != 0)
                    {
                        tmp_19 = v14->field_50;
                        v14->field_8c = 0;
                        v14->field_58 = tmp_19 + v15 - v20;
                        v14->field_68 = v14->field_60 + v15 - v20;
                    }
                    v16 = ((long long)v14->field_90);
                    v19 = v14->field_28;
                    v14->field_30 = 0;
                    if (((int)v16) <= 1)
                    {
                        v11 = ((long long)*(v17->field_28 + v14->field_0 + v15 + 1));
                        v8 = v14->field_78;
                        v14->field_38 = 0;
                        if (v8 != 0)
                        {
                            v11 = ((long long)*(v17->field_78 + v11));
                        }
                        v12 = 1;
                        if (((long long)(((char)(*(v14->field_80 + (((long long)v11) >> 6 << 3)) >> (v11 & 63))) & 1)) == 0)
                        {
                            v12 = 0;
                            if (v11 == 10)
                            {
                                v12 = ((long long)(((int)(v14->field_8d != 0)) * 2));
                            }
                        }
                        tmp_15 = v14->field_58;
                        tmp_18 = v14->field_68;
                        v14->field_70 = v12;
                        v7 = tmp_15 - v15;
                        v10 = tmp_18 - v15;
                        if (v14->field_8b != 0)
                        {
                            v14->field_28 = v20;
                            v14->field_58 = v7;
                            v14->field_68 = v10;
                        }
                    }
                    else
                    {
                        if (v14->field_89 != 0)
                        {
                            v24 = v14->field_0 + v19;
                            v12 = v15 - v16 + v14->field_0 + v19;
                            v22 = v14->field_0 + v19 + v15 - 1;
                            v10 = (v14->field_0 < v15 - v16 + v14->field_0 + v19? v12 : v14->field_0);
                            if (v14->field_0 + v19 + v15 - 1 < (v14->field_0 < v15 - v16 + v14->field_0 + v19? v12 : v14->field_0))
                            {
                            }
                            else
                            {
                                while (true)
                                {
                                    if (((char)(((int)*(v22)) & -64)) == 128)
                                    {
                                        v22 -= 1;
                                    }
                                    else
                                    {
                                        v12 = v14->field_58 + v17->field_0 + v17->field_28 - v22;
                                        if (v14->field_78 != 0)
                                        {
                                            v7 = ((long long)(((int)(v12 <= 6? v12 : 6)) - 1));
                                            if (((int)((v12 <= 6? v12 : 6) - 1)) >= 0)
                                            {
                                                do
                                                {
                                                    *(&stack_base-70 + v7) = *(v17->field_78 + ((long long)*(v22 + v7)));
                                                    v7 -= 1;
                                                }
                                                while (((int)v7) >= 0);
                                            }
                                        }
                                        v0 = ((int)v18);
                                        v5 = 0;
                                        v24 = v24 + v15 - v22;
                                        v19 = (long long)rpl_mbrtowc();
                                        if (v19 <= 18446744069414584317 && v19 >= v24)
                                        {
                                            v10 = ((long long)v4);
                                            v19 -= v24;
                                            v14->field_20 = 0;
                                            v14->field_30 = v22;
                                            v22 = v19;
                                        }
                                        v19 = v14->field_28;
                                        v7 = v14->field_38;
                                        break;
                                    }
                                }
                                if (v4 == -1 || v19 < v24 || ((char)(((int)*(v22)) & -64)) == 128 || v19 > 18446744069414584317)
                                {
                                    v23 = v19 + v7;
                                }
                            }
                        }
                        if (v14->field_0 + v19 + v15 - 1 < (v14->field_0 < v15 - v16 + v14->field_0 + v19? v12 : v14->field_0) || v14->field_89 == 0 || v20 > v19 + v7)
                        {
                            v23 = v19 + v7;
                        }
                        if (v20 <= v19 + v7 && (v14->field_0 + v19 + v15 - 1 < (v14->field_0 < v15 - v16 + v14->field_0 + v19? v12 : v14->field_0) || v14->field_89 == 0))
                        {
                            v24 = v23 - v20;
                            v14->field_30 = v22;
                            v22 = v24;
                        }
                        if (v20 > v19 + v7)
                        {
                            v2 = v14 + 32;
                            do
                            {
                                tmp_17 = v14->field_50;
                                v1 = v18;
                                tmp_25 = v14->field_20;
                                v0 = &stack_base-84;
                                v22 = tmp_17 - v23;
                                v3 = tmp_25;
                                v7 = rpl_mbrtowc();
                                v10 = ((long long)v4);
                                v18 = ((int)v1);
                                if (v7 - 1 > 18446744069414584316)
                                {
                                    if (v22 != 0 && v7 != 0)
                                    {
                                        v10 = ((int)*(v14->field_0 + v23));
                                        /* goto 4284039; */
                                    }
                                    if (v22 == 0 || v7 == 0)
                                    {
                                        v10 = 0;
                                    }
                                    v14->field_20 = v3;
                                    v7 = 1;
                                }
                                v23 += rax<8>;
                            }
                            while (v20 > v23);
                            v24 = v23 - v20;
                            v14->field_30 = v22;
                            v22 = v24;
                        }
                        if (v20 > v19 + v7 && v10 == -1 || v20 <= v19 + v7 && (v14->field_0 + v19 + v15 - 1 < (v14->field_0 < v15 - v16 + v14->field_0 + v19? v12 : v14->field_0) || v14->field_89 == 0))
                        {
                            v14->field_70 = re_string_context_at();
                        }
                        if (v20 > v19 + v7 && v10 != -1 || v14->field_0 + v19 + v15 - 1 >= (v14->field_0 < v15 - v16 + v14->field_0 + v19? v12 : v14->field_0) && v14->field_89 != 0 && v20 > v19 + v7)
                        {
                            if (v14->field_8e != 0)
                            {
                                v0 = ((unsigned int)v10);
                                v7 = iswalnum(((unsigned int)v10));
                                if (v0 == 95 || v7 != 0)
                                {
                                    v7 = 1;
                                    /* goto 4283044; */
                                }
                            }
                            if (v14->field_8e == 0 || v7 == 0 && v0 != 95)
                            {
                                v7 = 0;
                                if (((unsigned int)v10) == 10)
                                {
                                    v7 = ((long long)(((int)(v14->field_8d != 0)) * 2));
                                }
                            }
                            v14->field_70 = v7;
                        }
                        if (((unsigned int)v22) != 0)
                        {
                            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                            {
                                v7 = v14->field_10;
                                v12 = v14->field_10 + ((unsigned int)v22) * 4;
                                do
                                {
                                    v7->field_0 = -1;
                                    v7 += 4;
                                }
                                while (v12 != v7);
                            }
                            v12 = ((long long)v14->field_8b);
                            if (((long long)v14->field_8b) != 0)
                            {
                                memset(v14->field_8, 0xff, ((unsigned int)v22));
                                v22 = v14->field_30;
                            }
                        }
                        if (((unsigned int)v22) == 0 || ((long long)v14->field_8b) != 0)
                        {
                            v12 = ((long long)v14->field_8b);
                        }
                        v14->field_38 = ((unsigned int)v22);
                        v16 = ((long long)v14->field_90);
                    }
                }
            }
        }
    }
    if (((int)v16) <= 1 && v14->field_38 <= v15 && (v25 == 0 || v15 != 0) && (v15 != 0 || v17->field_28 > v16) && (v17->field_28 <= v16 || v16 != 0 || v25 != 0) && v14->field_8b == 0 || (v25 == 0 || v15 != 0) && (v15 != 0 || v17->field_28 > v16) && (((int)v16) > 1 || v14->field_38 > v15) && (v17->field_28 <= v16 || v16 != 0 || v25 != 0) && ((long long)v12) == 0)
    {
        v14->field_8 = v14->field_8 + v15;
    }
    if (...)
    {
        v14->field_28 = v20;
        v14->field_58 = rax<8>;
        v14->field_68 = rcx<8>;
        if (((unsigned int)v16) > 1)
        {
            if (v14->field_88 == 0)
            {
                build_wcs_buffer();
                v14->field_48 = 0;
                v7 = 0;
                return v7;
            }
            v7 = build_wcs_upper_buffer();
            if (((int)v7) == 0)
            {
                v14->field_48 = 0;
                v7 = 0;
                return v7;
            }
            else
            {
                return v7;
            }
        }
    }
    if (...)
    {
        if (v14->field_8b == 0)
        {
            v14->field_30 = rax<8>;
            v14->field_48 = 0;
            v7 = 0;
            return v7;
        }
        else if (v14->field_88 == 0)
        {
            v10 = v14->field_78;
            if (v14->field_78 == 0)
            {
                v14->field_48 = 0;
                v7 = 0;
                return v7;
            }
            tmp_1 = rax<8>;
            v12 = v14->field_30;
            tmp_19 = v14->field_40 <= rax<8>;
            v7 = (v14->field_40 <= rax<8>? v14->field_40 : rax<8>);
            if ((tmp_19? v14->field_40 : tmp_1) <= v14->field_30)
            {
                v7 = v17->field_30;
            }
            else
            {
                while (true)
                {
                    *(v14->field_8 + v12) = *(v10 + ((long long)*(v14->field_0 + v12 + v20)));
                    v12 += 1;
                    if (v7 == v12)
                    {
                        break;
                    }
                    v20 = v14->field_28;
                    v10 = v14->field_78;
                }
            }
            v14->field_30 = v7;
            v14->field_38 = v7;
            v14->field_48 = 0;
            v7 = 0;
            return v7;
        }
        else
        {
            build_upper_buffer();
            v14->field_48 = 0;
            v7 = 0;
            return v7;
        }
    }
}
