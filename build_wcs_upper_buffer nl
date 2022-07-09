typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[16];
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    char padding_70[8];
    unsigned long long field_78;
    char padding_80[10];
    char field_8a;
    char padding_8b[1];
    char field_8c;
    char padding_8d[3];
    unsigned int field_90;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

int build_wcs_upper_buffer()
{
    BOT tmp_48;  // tmp #48
    BOT tmp_5;  // tmp #5
    BOT tmp_19;  // tmp #19
    BOT tmp_10;  // tmp #10
    BOT tmp_27;  // tmp #27
    unsigned long|unsigned int s_b0;  // [bp-0xb0]
    unsigned long|unsigned long long|unsigned int v0;  // [bp-0xc0]
    unsigned long|unsigned long long|struct_1 *|unsigned int v1;  // [bp-0xb8]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long|unsigned int v14;  // rax
    unsigned long|unsigned int v16;  // rcx
    struct_1 *v17;  // rcx
    unsigned long|struct_1 *|struct_2 *|unsigned long long|char * v19;  // rdx
    unsigned long|unsigned long long|struct_1 * v2;  // [bp-0xa8]
    unsigned long v20;  // rbx
    unsigned long long v21;  // rbx
    unsigned long long|struct_1 * v22;  // rbp
    unsigned long long v23;  // rsi
    unsigned long long|struct_0 *|unsigned long v24;  // rdi
    struct_1 * v25;  // r8
    unsigned long|unsigned long long|struct_1 * v26;  // r12
    unsigned long|unsigned long long|unsigned int v27;  // r13
    struct_0 *v28;  // r14
    struct_1 * v29;  // r15
    unsigned long v3;  // [bp-0xa0]
    unsigned int v4;  // [bp-0x94]
    unsigned long v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    unsigned long long v8;  // rax
    unsigned long|char *|struct_2 *|unsigned long long|struct_1 * v9;  // rax

    v28 = v24;
    tmp_48 = v24->field_58;
    v29 = v24->field_30;
    v20 = (v24->field_40 <= tmp_48? v24->field_40 : tmp_48);
    if (v24->field_8a == 0)
    {
        if (v24->field_78 == 0)
        {
            if (v24->field_8c == 0)
            {
                if (v24->field_30 < (v24->field_40 <= tmp_48? v24->field_40 : tmp_48))
                {
                    v0 = v24 + 32;
                    v3 = &stack_base-148;
                    while (true)
                    {
                        v23 = v28->field_28;
                        v22 = v29;
                        v8 = ((long long)*(v28->field_0 + v28->field_28 + v29));
                        v1 = ((int)*(v28->field_0 + v28->field_28 + v29));
                        v27 = v8;
                        tmp_5 = ((char)v27);
                        if (((long long)(tmp_5 & 128)) == 0)
                        {
                            v24 = v0;
                            s_b0 = v23;
                            v8 = mbsinit(v24);
                            if (v8 != 0)
                            {
                                v8 = towupper(v1);
                                if ((((int)v8) & -128) == 0)
                                {
                                    *(v28->field_8 + v29) = v8;
                                    *(v28->field_10 + v29 * 4) = ((int)v8);
                                    v29 += 1;
                                }
                            }
                        }
                        if (v8 == 0 || (((int)v8) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0)
                        {
                            tmp_19 = v28->field_20;
                            s_b0 = v20 - v29;
                            v5 = tmp_19;
                            v2 = &stack_base-148;
                            v26 = (long long)rpl_mbrtowc();
                            v8 = v26 - 1;
                            if (v8 <= 18446744069414584316)
                            {
                                v1 = v4;
                                v27 = towupper(v4);
                                if (v1 != v27)
                                {
                                    v1 = &v6;
                                    v9 = wcrtomb(((int)&v6), v27, ((int)&v5));
                                    if (v26 == v9)
                                    {
                                        memcpy(v28->field_8 + v29, &v6, v26);
                                    }
                                    else
                                    {
                                        v26 = v29;
                                    }
                                }
                                else
                                {
                                    memcpy(v28->field_8 + v29, v28->field_28 + v29 + v28->field_0, v26);
                                }
                                if (v26 == v9 || v1 == v27)
                                {
                                    v8 = v28->field_10;
                                    v19 = v22 * 4;
                                    v29 += 1;
                                    *(v28->field_10 + v22 * 4) = v27;
                                    v22 += v26;
                                    if (v29 < v29)
                                    {
                                        v19 = v8 + v19 + 4;
                                        v16 = v8 + v29 * 4;
                                        do
                                        {
                                            v19->field_0 = -1;
                                            v19 += 4;
                                        }
                                        while (v16 != v19);
                                        v29 = v22;
                                    }
                                }
                            }
                            else if (v8 != 18446744069414584317)
                            {
                                *(v28->field_8 + v29) = v27;
                                v29 += 1;
                                *(v28->field_10 + v22 * 4) = v1;
                                if (v26 == 18446744069414584319)
                                {
                                    v28->field_20 = v5;
                                }
                            }
                            else if (v28->field_40 >= v28->field_58)
                            {
                                *(v28->field_8 + v29) = v27;
                                v29 += 1;
                                *(v28->field_10 + v22 * 4) = v1;
                            }
                            else
                            {
                                v28->field_20 = v5;
                                v28->field_30 = v29;
                                v11 = 0;
                                v28->field_38 = v29;
                                return v11;
                            }
                        }
                        if (v8 <= 18446744069414584316 && (v26 == v9 || v1 == v27) && (v8 == 0 || (((int)v8) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0) || v8 == 18446744069414584317 && v28->field_40 >= v28->field_58 && v8 > 18446744069414584316 && (v8 == 0 || (((int)v8) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0) || (((int)v8) & -128) == 0 && ((long long)(tmp_5 & 128)) == 0 && v8 != 0 || v8 > 18446744069414584316 && v8 != 18446744069414584317 && (v8 == 0 || (((int)v8) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0))
                        {
                            v28->field_30 = v29;
                            v11 = 0;
                            v28->field_38 = v29;
                            return v11;
                        }
                    }
                }
                v28->field_30 = v29;
                v11 = 0;
                v28->field_38 = v29;
                return v11;
            }
        }
    }
    if (v24->field_8a != 0 || v24->field_78 != 0 || v24->field_8c != 0)
    {
        v26 = v24->field_38;
    }
    v19 = v28->field_78;
    v5 = v28->field_20;
    if (v19 == 0)
    {
        v22 = v28->field_28 + v26 + v28->field_0;
    }
    else
    {
        v9 = ((long long)v28->field_90);
        if (v28->field_90 > 0)
        {
            v24 = v9 - 1;
            v9 = 0;
            v23 = v28->field_28 + v26 + v28->field_0;
            do
            {
                v6 = *(v19 + ((long long)*(v23 + v9)));
                v9 += 1;
            }
            while (s_b0 != v9 && v24 != v9);
        }
        v22 = &v6;
    }
    v27 = (long long)rpl_mbrtowc();
    v9 = v27 - 1;
    v1 = v9;
    if (v1 <= 18446744069414584316)
    {
        v24 = ((long long)v4);
        v0 = v4;
        if (v0 != ((int)s_b0))
        {
            v14 = towupper(v24);
            v0 = &v6;
            v2 = r15<8>;
            v19 = wcrtomb(((int)&v6), ((int)s_b0), ((int)&v5));
            if (v27 == v19)
            {
                tmp_10 = v28->field_8;
                v1 = v2;
                v0 = v16;
                memcpy(tmp_10 + r15<8>, &v6, v27);
                v16 = ((long long)v0);
                v25 = v1;
            }
            else
            {
                if (v19 != 18446744069414584319)
                {
                    v22 = v19 + r15<8>;
                    v9 = v28->field_40;
                    if (r15<8> <= v28->field_40)
                    {
                        if (v28->field_18 == 0)
                        {
                            v2 = &v6;
                            v14 = v19;
                            v0 = v16;
                            v9 = malloc(v9 * 8);
                            v16 = ((long long)v0);
                            v19 = v14;
                            v28->field_18 = v9;
                            if (v9 == 0)
                            {
                                v11 = 12;
                                return v11;
                            }
                        }
                    }
                }
                tmp_10 = v28->field_8;
                v1 = v2;
                v0 = v16;
                memcpy(tmp_10 + r15<8>, rbp<8>, v27);
                v16 = ((long long)v0);
                v25 = v1;
            }
        }
        else
        {
            tmp_10 = v28->field_8;
            v1 = r15<8>;
            v0 = ((int)s_b0);
            memcpy(tmp_10 + r15<8>, rbp<8>, v27);
            v25 = v1;
            v16 = ((int)v0);
        }
        if (v27 == v19 || v19 == 18446744069414584319 || v0 == ((int)s_b0))
        {
            v12 = v27 + v26;
            if (v28->field_8c != 0)
            {
                v19 = v28->field_18 + (r15<8> - v26) * 8;
                do
                {
                    *(v19 + v26 * 8) = v26;
                    v26 += 1;
                }
                while (False);
            }
            v19 = v28->field_10;
            v29 = r15<8> + 1;
            v26 = v12;
            v9 = v25 * 4;
            *(v28->field_10 + v25 * 4) = v16;
            v17 = v27 + v25;
            if (v29 < v27 + v25)
            {
                v9 = v19 + v9 + 4;
                v19 += v29 * 4;
                do
                {
                    v9->field_0 = -1;
                    v9 += 4;
                }
                while (v19 != v9);
                v29 = v17;
            }
        }
    }
    else if (v1 != 18446744069414584317 || v28->field_40 >= v28->field_58)
    {
        v19 = v28->field_78;
        v9 = ((long long)*(v28->field_0 + v26 + v28->field_28));
        if (v28->field_78 != 0)
        {
            v9 = ((long long)*(v19 + v9));
        }
        *(v28->field_8 + r15<8>) = al<1>;
        if (v28->field_8c != 0)
        {
            *(v28->field_18 + r15<8> * 8) = v26;
        }
        v26 += 1;
        v29 = r15<8> + 1;
        *(v28->field_10 + r15<8> * 4) = ((int)rax<8>);
        if (v27 == 18446744069414584319)
        {
            v28->field_20 = v5;
        }
    }
    if (v1 <= 18446744069414584316 && v28->field_18 == 0 && r15<8> <= v28->field_40 && v27 != v19 && v19 != 18446744069414584319 && v0 != ((int)s_b0) && v9 != 0 || v1 <= 18446744069414584316 && r15<8> <= v28->field_40 && v27 != v19 && v19 != 18446744069414584319 && v0 != ((int)s_b0) && v28->field_18 != 0)
    {
        if (v28->field_8c == 0)
        {
            if (r15<8> != 0)
            {
                v23 = v28->field_18;
                v9 = 0;
                do
                {
                    *(v23 + v9 * 8) = v9;
                    v9 += 1;
                }
                while (v9 != v29);
            }
            v28->field_8c = 1;
        }
        tmp_10 = v28->field_8;
        s_b0 = reg_24<4>;
        v0 = v19;
        memcpy(tmp_10 + r15<8>, &v6, v19);
        v24 = v28->field_10 + r15<8> * 4;
        tmp_27 = v28->field_18;
        *(v28->field_10 + r15<8> * 4) = s_b0;
        v23 = tmp_27 + r15<8> * 8;
        v9 = 1;
        *(tmp_27 + r15<8> * 8) = v26;
        if (v0 > 1)
        {
            do
            {
                *(v23 + v9 * 8) = (v9 < v27? v9 : *(&stack_base-184)) + v26;
                *(v24 + v9 * 4) = -1;
                v9 += 1;
            }
            while (v9 != v0);
        }
        v19 = v0 - v27;
        v21 = v28->field_58 + v19;
        v28->field_58 = v28->field_58 + v19;
        if (v28->field_60 > v26)
        {
            v28->field_68 = v28->field_68 + v19;
        }
        r15<8> = v22;
        v20 = (v28->field_40 <= v21? v28->field_40 : v21);
        v26 += v27;
    }
    if (...)
    {
        if (v29 >= rbx<8>)
        {
            v28->field_30 = r15<8>;
            v11 = 0;
            v28->field_38 = r12<8>;
            return v11;
        }
        v0 = v28 + 32;
        s_b0 = rbx<8> - v29;
        v2 = &stack_base-148;
        /* goto 4220766; */
    }
    if (v1 == 18446744069414584317 && v1 > 18446744069414584316 && v28->field_40 < v28->field_58 || v1 <= 18446744069414584316 && v27 != v19 && v19 != 18446744069414584319 && v0 != ((int)s_b0) && r15<8> > v28->field_40)
    {
        v28->field_20 = v5;
        v28->field_30 = r15<8>;
        v11 = 0;
        v28->field_38 = r12<8>;
        return v11;
    }
}
