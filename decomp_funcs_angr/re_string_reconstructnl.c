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

typedef struct struct_3 {
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
} struct_3;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

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
    unsigned long|unsigned long long|char *|unsigned int v10;  // rcx
    char * v11;  // rcx
    unsigned long|unsigned long long|char *|unsigned int v12;  // edx
    unsigned long long v13;  // rdx
    struct_3 *v14;  // rbx
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rsi
    unsigned long long|unsigned int v17;  // rsi
    struct_0 *v18;  // rdi
    unsigned long|unsigned int v19;  // r8d
    unsigned long v2;  // [bp-0x68]
    unsigned long long v20;  // r9
    char * v21;  // r12
    unsigned long|unsigned long long v22;  // r13
    unsigned long long|char *|unsigned int v23;  // r14
    unsigned long long v24;  // r15
    char * v25;  // r15
    char|unsigned long long|unsigned int v26;  // cc_dep1
    unsigned long v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x54]
    unsigned long long v5;  // [bp-0x50]
    unsigned long|unsigned int|struct_2 *|unsigned long long|char * v7;  // rax
    unsigned long long v9;  // rax

    v19 = v12;
    v21 = v16;
    v14 = v18;
    v15 = v16 - v18->field_28;
    if (v18->field_28 > v16)
    {
        if (v18->field_90 > 1)
        {
            v18->field_20 = 0;
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
        v26 = ((char)v14->field_8b);
        v14->field_70 = (0 - ((int)((v12 & 1) < 1)) & 2) + 4;
        if (v26 == 0)
        {
            v14->field_8 = v14->field_0;
        }
    }
    if (v15 == 0 || v16 == 0)
    {
        v17 = ((long long)v18->field_90);
        /* goto 4236573; */
    }
    if (v15 != 0 || v16 != 0)
    {
        v7 = v14->field_38;
        v22 = v14->field_30;
    }
    if (v26 == 0 || v15 != 0)
    {
        if (v15 != 0 || v18->field_28 > v16)
        {
            if (v18->field_28 <= v16 || v16 != 0 || v26 != 0)
            {
                if (v14->field_38 > v15)
                {
                    if (((long long)v18->field_8c) == 0)
                    {
                        v22 = v18->field_30 - v15;
                        v14->field_70 = re_string_context_at();
                        if (v26 > 1)
                        {
                            memmove(v14->field_10, v14->field_10 + v15 * 4, v22 * 4);
                            v22 = v14->field_30 - v15;
                        }
                        if (v14->field_8b != 0)
                        {
                            memmove(v14->field_8, v14->field_8 + v15, v22);
                            v22 = v14->field_30 - v15;
                        }
                        v14->field_38 = v14->field_38 - v15;
                        v14->field_30 = v22;
                    }
                    else
                    {
                        v24 = v14->field_18;
                        v10 = v18->field_30;
                        v16 = 0;
                        while (true)
                        {
                            v7 = (v16 + v10 >> 63) + v16 + v10 >> 1;
                            v12 = *(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1) * 8);
                            v26 = *(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1) * 8);
                            if (*(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1 << 3)) > v15)
                            {
                                v10 = v7;
                            }
                            else if (((char)(v26 < v15)))
                            {
                                v16 = v10 + 1;
                            }
                            else
                            {
                                v23 = v10;
                            }
                            if (((char)(v26 < v15)) || *(v24 + ((v16 + v10 >> 63) + v16 + v10 >> 1 << 3)) > v15)
                            {
                                v23 = v10 + 1;
                                if (v12 >= v15)
                                {
                                    v23 = v10;
                                }
                            }
                            v14->field_70 = re_string_context_at();
                            if (v15 == v23 && v15 < v18->field_30 && *(v24 + (v23 << 3)) == v15)
                            {
                                memmove(v14->field_10, v14->field_10 + v15 * 4, (v18->field_30 - v15) * 4);
                                memmove(v14->field_8, v14->field_8 + v15, v14->field_30 - v15);
                                tmp_14 = v14->field_30;
                                v14->field_38 = v14->field_38 - v15;
                                v14->field_30 = tmp_14 - v15;
                                if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>)))
                                {
                                    break;
                                }
                                v10 = v14->field_18;
                                v7 = 0;
                                v16 = v14->field_18 + v15 * 8;
                                do
                                {
                                    *(v18->field_18 + v7 * 8) = *(v16 + v7 * 8) - v15;
                                    v7 += 1;
                                }
                                while (v14->field_30 > v7);
                                break;
                            }
                            if (v15 != v23 || v15 >= v18->field_30 || *(v24 + (v23 << 3)) != v15)
                            {
                                tmp_18 = v14->field_50;
                                tmp_21 = v14->field_60;
                                v14->field_8c = 0;
                                v10 = tmp_21 - v21;
                                v14->field_58 = tmp_18 - v21 + v15;
                                v14->field_68 = tmp_21 - v21 + v15;
                                if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>)))
                                {
                                }
                                else
                                {
                                    while (*(v24 + (r14<8> << 3) + 8) == v15)
                                    {
                                        v23 = r14<8> - 1;
                                        if (r14<8> == 1)
                                        {
                                            break;
                                        }
                                    }
                                }
                                if (v23 < v22)
                                {
                                    while (true)
                                    {
                                        v23 = r14<8> + 1;
                                    }
                                    if (True)
                                    {
                                        v13 = *(v24 + v23 * 8) - v15;
                                        v14->field_30 = *(v24 + v23 * 8) - v15;
                                    }
                                    else if (*(v18->field_10 + (r14<8> << 2)) == -1)
                                    {
                                        v14->field_30 = 0;
                                        v13 = 0;
                                        /* goto 4237615; */
                                    }
                                }
                                if (v23 < v22 && v13 != 0 || ((char)(v23 == v18->field_30)) && v23 >= v22)
                                {
                                    v14->field_30 = 0;
                                    v13 = 0;
                                    /* goto 4237615; */
                                }
                                if (v23 < v22 && v13 != 0 || v23 >= v22 && !(((char)(v23 == v18->field_30))))
                                {
                                    v13 = *(v24 + v23 * 8) - v15;
                                    v14->field_30 = *(v24 + v23 * 8) - v15;
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
                                v17 = ((long long)v14->field_90);
                                v12 = ((long long)v14->field_8b);
                                break;
                            }
                        }
                        if (v15 == v23 && v15 < v18->field_30 && *(v24 + (v23 << 3)) == v15)
                        {
                            v17 = ((long long)v14->field_90);
                            v12 = ((long long)v14->field_8b);
                        }
                    }
                    v17 = ((long long)v14->field_90);
                    v12 = ((long long)v14->field_8b);
                }
                else
                {
                    if (((long long)v18->field_8c) != 0)
                    {
                        tmp_19 = v14->field_50;
                        v14->field_8c = 0;
                        v14->field_58 = tmp_19 + v15 - v21;
                        v14->field_68 = v14->field_60 + v15 - v21;
                    }
                    v17 = ((long long)v14->field_90);
                    v20 = v14->field_28;
                    v14->field_30 = 0;
                    if (((int)v17) <= 1)
                    {
                        v11 = ((long long)*(v18->field_28 + v14->field_0 + v15 + 1));
                        v9 = v14->field_78;
                        v14->field_38 = 0;
                        if (v9 != 0)
                        {
                            v11 = ((long long)*(v18->field_78 + v11));
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
                            v14->field_28 = v21;
                            v14->field_58 = v7;
                            v14->field_68 = v10;
                        }
                    }
                    else
                    {
                        if (v14->field_89 != 0)
                        {
                            v24 = v14->field_0 + v20;
                            v12 = v15 - v17 + v14->field_0 + v20;
                            v23 = v14->field_0 + v20 + v15 - 1;
                            v10 = (v14->field_0 < v15 - v17 + v14->field_0 + v20? v12 : v14->field_0);
                            if (v14->field_0 + v20 + v15 - 1 < (v14->field_0 < v15 - v17 + v14->field_0 + v20? v12 : v14->field_0))
                            {
                            }
                            else
                            {
                                while (true)
                                {
                                    if (((char)(((int)*(v23)) & -64)) == 128)
                                    {
                                        v23 -= 1;
                                    }
                                    else
                                    {
                                        v12 = v14->field_58 + v18->field_0 + v18->field_28 - v23;
                                        if (v14->field_78 != 0)
                                        {
                                            v7 = ((long long)(((int)(v12 <= 6? v12 : 6)) - 1));
                                            if (((int)((v12 <= 6? v12 : 6) - 1)) >= 0)
                                            {
                                                do
                                                {
                                                    *(&stack_base-70 + v7) = *(v18->field_78 + ((long long)*(v23 + v7)));
                                                    v7 -= 1;
                                                }
                                                while (((int)v7) >= 0);
                                            }
                                        }
                                        v0 = v19;
                                        v5 = 0;
                                        v24 = v24 + v15 - v23;
                                        v20 = (long long)rpl_mbrtowc();
                                        if (v20 <= 18446744069414584317 && v20 >= v24)
                                        {
                                            v10 = ((long long)v4);
                                            v20 -= v24;
                                            v14->field_20 = 0;
                                            v14->field_30 = v23;
                                            v23 = v20;
                                        }
                                        v20 = v14->field_28;
                                        v7 = v14->field_38;
                                        break;
                                    }
                                }
                                if (v4 == -1 || v20 < v24 || ((char)(((int)*(v23)) & -64)) == 128 || v20 > 18446744069414584317)
                                {
                                    v25 = v20 + v7;
                                }
                            }
                        }
                        if (v14->field_0 + v20 + v15 - 1 < (v14->field_0 < v15 - v17 + v14->field_0 + v20? v12 : v14->field_0) || v14->field_89 == 0 || v21 > v20 + v7)
                        {
                            v25 = v20 + v7;
                        }
                        if (v21 <= v20 + v7 && (v14->field_0 + v20 + v15 - 1 < (v14->field_0 < v15 - v17 + v14->field_0 + v20? v12 : v14->field_0) || v14->field_89 == 0))
                        {
                            v24 = v25 - v21;
                            v14->field_30 = v23;
                            v23 = v24;
                        }
                        if (v21 > v20 + v7)
                        {
                            v2 = v14 + 32;
                            do
                            {
                                tmp_17 = v14->field_50;
                                v1 = v19;
                                tmp_25 = v14->field_20;
                                v0 = &stack_base-84;
                                v23 = tmp_17 - v25;
                                v3 = tmp_25;
                                v7 = rpl_mbrtowc();
                                v10 = ((int)v4);
                                v19 = ((long long)v1);
                                if (v7 - 1 > 18446744069414584316)
                                {
                                    if (v7 != 0 && v23 != 0)
                                    {
                                        v10 = ((long long)*(v14->field_0 + v25));
                                        /* goto 4238119; */
                                    }
                                    if (v7 == 0 || v23 == 0)
                                    {
                                        v10 = 0;
                                    }
                                    v14->field_20 = v3;
                                    v7 = 1;
                                }
                                v25 += v7;
                            }
                            while (v21 > v25);
                            v24 = v25 - v21;
                            v14->field_30 = v23;
                            v23 = v24;
                        }
                        if (v21 > v20 + v7 && ((unsigned int)v10) == -1 || v21 <= v20 + v7 && (v14->field_0 + v20 + v15 - 1 < (v14->field_0 < v15 - v17 + v14->field_0 + v20? v12 : v14->field_0) || v14->field_89 == 0))
                        {
                            v14->field_70 = re_string_context_at();
                        }
                        if (v21 > v20 + v7 && ((unsigned int)v10) != -1 || v14->field_0 + v20 + v15 - 1 >= (v14->field_0 < v15 - v17 + v14->field_0 + v20? v12 : v14->field_0) && v14->field_89 != 0 && v21 > v20 + v7)
                        {
                            if (v14->field_8e != 0)
                            {
                                v0 = ((unsigned int)v10);
                                v7 = iswalnum(((unsigned int)v10));
                                if (v0 == 95 || v7 != 0)
                                {
                                    v7 = 1;
                                    /* goto 4237124; */
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
                        if (((unsigned int)v23) != 0)
                        {
                            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>))))
                            {
                                v7 = v14->field_10;
                                v12 = v14->field_10 + ((unsigned int)v23) * 4;
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
                                memset(v14->field_8, 0xff, ((unsigned int)v23));
                                v23 = v14->field_30;
                            }
                        }
                        if (((unsigned int)v23) == 0 || ((long long)v14->field_8b) != 0)
                        {
                            v12 = ((long long)v14->field_8b);
                        }
                        v14->field_38 = ((unsigned int)v23);
                        v17 = ((int)v14->field_90);
                    }
                }
            }
        }
    }
    if (((int)v17) <= 1 && v14->field_38 <= v15 && (v26 == 0 || v15 != 0) && (v15 != 0 || v18->field_28 > v16) && (v18->field_28 <= v16 || v16 != 0 || v26 != 0) && v14->field_8b == 0 || (v26 == 0 || v15 != 0) && (((int)v17) > 1 || v14->field_38 > v15) && (v15 != 0 || v18->field_28 > v16) && (v18->field_28 <= v16 || v16 != 0 || v26 != 0) && ((long long)v12) == 0)
    {
        v14->field_8 = v14->field_8 + v15;
    }
    if (...)
    {
        v14->field_28 = v21;
        v14->field_58 = rax<8>;
        v14->field_68 = rcx<8>;
        if (v17 > 1)
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
                v7 = v18->field_30;
            }
            else
            {
                while (true)
                {
                    *(v14->field_8 + v12) = *(v10 + ((long long)*(v14->field_0 + v12 + v21)));
                    v12 += 1;
                    if (v7 == v12)
                    {
                        break;
                    }
                    v21 = v14->field_28;
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