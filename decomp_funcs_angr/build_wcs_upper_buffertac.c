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
    unsigned int|unsigned long s_b0;  // [bp-0xb0]
    unsigned int|unsigned long|unsigned long long v0;  // [bp-0xc0]
    unsigned int|unsigned long|struct_1 *|unsigned long long v1;  // [bp-0xb8]
    unsigned long long v10;  // rax
    unsigned int|unsigned long v14;  // rax
    unsigned long long v15;  // rax
    unsigned int|unsigned long|struct_1 * v16;  // rcx
    struct_1 *|unsigned long long|unsigned long|struct_2 *|char * v17;  // rdx
    unsigned long v18;  // rbx
    unsigned long long v19;  // rbx
    unsigned long|struct_1 *|unsigned long long v2;  // [bp-0xa8]
    struct_1 *|unsigned long long v20;  // rbp
    unsigned long long v21;  // rsi
    struct_0 *|unsigned long|unsigned long long v22;  // rdi
    struct_1 * v23;  // r8
    unsigned long|struct_1 *|unsigned long long v24;  // r12
    unsigned int|unsigned long|unsigned long long v25;  // r13
    struct_0 *v26;  // r14
    struct_1 * v27;  // r15
    unsigned long v3;  // [bp-0xa0]
    unsigned int v4;  // [bp-0x94]
    unsigned long v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    unsigned long long v8;  // rax
    struct_1 *|unsigned long long|unsigned long|struct_2 *|char * v9;  // rax

    v26 = v22;
    tmp_48 = v22->field_58;
    v27 = v22->field_30;
    v18 = (v22->field_40 <= tmp_48? v22->field_40 : tmp_48);
    if (v22->field_8a == 0)
    {
        if (v22->field_78 == 0)
        {
            if (v22->field_8c == 0)
            {
                if (v22->field_30 < (v22->field_40 <= tmp_48? v22->field_40 : tmp_48))
                {
                    v0 = v22 + 32;
                    v3 = &stack_base-148;
                    while (true)
                    {
                        v21 = v26->field_28;
                        v20 = v27;
                        v8 = ((long long)*(v26->field_0 + v26->field_28 + v27));
                        v1 = ((int)*(v26->field_0 + v26->field_28 + v27));
                        v25 = v8;
                        tmp_5 = ((char)v25);
                        if (((long long)(tmp_5 & 128)) == 0)
                        {
                            v22 = v0;
                            s_b0 = v21;
                            v8 = mbsinit(v22);
                            if (v8 != 0)
                            {
                                v8 = towupper(v1);
                                if ((((int)v8) & -128) == 0)
                                {
                                    *(v26->field_8 + v27) = v8;
                                    *(v26->field_10 + v27 * 4) = ((int)v8);
                                    v27 += 1;
                                }
                            }
                        }
                        if (v8 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v8) & -128) != 0)
                        {
                            tmp_19 = v26->field_20;
                            s_b0 = v18 - v27;
                            v5 = tmp_19;
                            v2 = &stack_base-148;
                            v24 = (long long)rpl_mbrtowc();
                            v8 = v24 - 1;
                            if (v8 <= 18446744069414584316)
                            {
                                v1 = v4;
                                v25 = towupper(v4);
                                if (v1 != v25)
                                {
                                    v1 = &v6;
                                    v9 = wcrtomb(((int)&v6), v25, ((int)&v5));
                                    if (v24 == v9)
                                    {
                                        memcpy(v26->field_8 + v27, &v6, v24);
                                    }
                                    else
                                    {
                                        v24 = v27;
                                    }
                                }
                                else
                                {
                                    memcpy(v26->field_8 + v27, v26->field_28 + v27 + v26->field_0, v24);
                                }
                                if (v1 == v25 || v24 == v9)
                                {
                                    v8 = v26->field_10;
                                    v17 = v20 * 4;
                                    v27 += 1;
                                    *(v26->field_10 + v20 * 4) = v25;
                                    v20 += v24;
                                    if (v27 < v27)
                                    {
                                        v17 = v8 + v17 + 4;
                                        v16 = v8 + v27 * 4;
                                        do
                                        {
                                            v17->field_0 = -1;
                                            v17 += 4;
                                        }
                                        while (v16 != v17);
                                        v27 = v20;
                                    }
                                }
                            }
                            else if (v8 != 18446744069414584317)
                            {
                                *(v26->field_8 + v27) = v25;
                                v27 += 1;
                                *(v26->field_10 + v20 * 4) = v1;
                                if (v24 == 18446744069414584319)
                                {
                                    v26->field_20 = v5;
                                }
                            }
                            else if (v26->field_40 >= v26->field_58)
                            {
                                *(v26->field_8 + v27) = v25;
                                v27 += 1;
                                *(v26->field_10 + v20 * 4) = v1;
                            }
                            else
                            {
                                v26->field_20 = v5;
                                v26->field_30 = v27;
                                v10 = 0;
                                v26->field_38 = v27;
                                return v10;
                            }
                        }
                        if (v8 <= 18446744069414584316 && (v1 == v25 || v24 == v9) && (v8 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v8) & -128) != 0) || v8 == 18446744069414584317 && v26->field_40 >= v26->field_58 && v8 > 18446744069414584316 && (v8 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v8) & -128) != 0) || ((long long)(tmp_5 & 128)) == 0 && (((int)v8) & -128) == 0 && v8 != 0 || v8 != 18446744069414584317 && v8 > 18446744069414584316 && (v8 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v8) & -128) != 0))
                        {
                            v26->field_30 = v27;
                            v10 = 0;
                            v26->field_38 = v27;
                            return v10;
                        }
                    }
                }
                v26->field_30 = v27;
                v10 = 0;
                v26->field_38 = v27;
                return v10;
            }
        }
    }
    if (v22->field_78 != 0 || v22->field_8c != 0 || v22->field_8a != 0)
    {
        v24 = v22->field_38;
    }
    v17 = v26->field_78;
    v5 = v26->field_20;
    if (v17 == 0)
    {
        v20 = v26->field_28 + v24 + v26->field_0;
    }
    else
    {
        v9 = ((long long)v26->field_90);
        if (v26->field_90 > 0)
        {
            v22 = v9 - 1;
            v9 = 0;
            v21 = v26->field_28 + v24 + v26->field_0;
            do
            {
                v6 = *(v17 + ((long long)*(v21 + v9)));
                v9 += 1;
            }
            while (s_b0 != v9 && v22 != v9);
        }
        v20 = &v6;
    }
    v25 = (long long)rpl_mbrtowc();
    v9 = v25 - 1;
    v1 = v9;
    if (v1 <= 18446744069414584316)
    {
        v22 = ((long long)v4);
        v0 = v4;
        if (v0 != ((int)s_b0))
        {
            v14 = towupper(v22);
            v0 = &v6;
            v2 = r15<8>;
            v17 = wcrtomb(((int)&v6), ((int)s_b0), ((int)&v5));
            if (v25 == v17)
            {
                tmp_10 = v26->field_8;
                v1 = v2;
                v0 = v16;
                memcpy(tmp_10 + r15<8>, &v6, v25);
                v16 = ((long long)v0);
                v23 = v1;
            }
            else
            {
                if (v17 != 18446744069414584319)
                {
                    v20 = v17 + r15<8>;
                    v9 = v26->field_40;
                    if (r15<8> <= v26->field_40)
                    {
                        if (v26->field_18 == 0)
                        {
                            v2 = &v6;
                            v14 = v17;
                            v0 = v16;
                            v9 = malloc(v9 * 8);
                            v16 = ((int)v0);
                            v17 = v14;
                            v26->field_18 = v9;
                            if (v9 == 0)
                            {
                                v10 = 12;
                                return v10;
                            }
                        }
                    }
                }
                tmp_10 = v26->field_8;
                v1 = v2;
                v0 = v16;
                memcpy(tmp_10 + r15<8>, rbp<8>, v25);
                v16 = ((int)v0);
                v23 = v1;
            }
        }
        else
        {
            tmp_10 = v26->field_8;
            v1 = r15<8>;
            v0 = ((int)s_b0);
            memcpy(tmp_10 + r15<8>, rbp<8>, v25);
            v23 = v1;
            v16 = ((long long)v0);
        }
        if (v25 == v17 || v0 == ((int)s_b0) || v17 == 18446744069414584319)
        {
            v15 = v25 + v24;
            if (v26->field_8c != 0)
            {
                v17 = v26->field_18 + (r15<8> - v24) * 8;
                do
                {
                    *(v17 + v24 * 8) = v24;
                    v24 += 1;
                }
                while (False);
            }
            v17 = v26->field_10;
            v27 = r15<8> + 1;
            v24 = v15;
            v9 = v23 * 4;
            *(v26->field_10 + v23 * 4) = v16;
            v16 = v25 + v23;
            if (v27 < v25 + v23)
            {
                v9 = v17 + v9 + 4;
                v17 += v27 * 4;
                do
                {
                    v9->field_0 = -1;
                    v9 += 4;
                }
                while (v17 != v9);
                v27 = v16;
            }
        }
    }
    else if (v26->field_40 >= v26->field_58 || v1 != 18446744069414584317)
    {
        v17 = v26->field_78;
        v9 = ((long long)*(v26->field_0 + v24 + v26->field_28));
        if (v26->field_78 != 0)
        {
            v9 = ((long long)*(v17 + v9));
        }
        v16 = r15<8>;
        *(v26->field_8 + r15<8>) = al<1>;
        if (v26->field_8c != 0)
        {
            *(v26->field_18 + r15<8> * 8) = v24;
        }
        v24 += 1;
        v27 = r15<8> + 1;
        *(v26->field_10 + v16 * 4) = ((int)rax<8>);
        if (v25 == 18446744069414584319)
        {
            v26->field_20 = v5;
        }
    }
    if (v1 <= 18446744069414584316 && v26->field_18 == 0 && r15<8> <= v26->field_40 && v25 != v17 && v0 != ((int)s_b0) && v17 != 18446744069414584319 && v9 != 0 || v1 <= 18446744069414584316 && r15<8> <= v26->field_40 && v25 != v17 && v0 != ((int)s_b0) && v17 != 18446744069414584319 && v26->field_18 != 0)
    {
        if (v26->field_8c == 0)
        {
            if (r15<8> != 0)
            {
                v21 = v26->field_18;
                v9 = 0;
                do
                {
                    *(v21 + v9 * 8) = v9;
                    v9 += 1;
                }
                while (v9 != v27);
            }
            v26->field_8c = 1;
        }
        tmp_10 = v26->field_8;
        s_b0 = v16;
        v0 = rdx<8>;
        memcpy(tmp_10 + r15<8>, &v6, rdx<8>);
        v22 = v26->field_10 + r15<8> * 4;
        tmp_27 = v26->field_18;
        *(v26->field_10 + r15<8> * 4) = s_b0;
        v21 = tmp_27 + r15<8> * 8;
        v9 = 1;
        *(tmp_27 + r15<8> * 8) = v24;
        if (v0 > 1)
        {
            do
            {
                *(v21 + v9 * 8) = (v9 < v25? v9 : *(&stack_base-184)) + v24;
                *(v22 + v9 * 4) = -1;
                v9 += 1;
            }
            while (v9 != v0);
        }
        v17 = v0 - v25;
        v19 = v26->field_58 + v17;
        v26->field_58 = v26->field_58 + v17;
        if (v26->field_60 > v24)
        {
            v26->field_68 = v26->field_68 + v17;
        }
        r15<8> = v20;
        v18 = (v26->field_40 <= v19? v26->field_40 : v19);
        v24 += v25;
    }
    if (...)
    {
        if (v27 >= rbx<8>)
        {
            v26->field_30 = r15<8>;
            v10 = 0;
            v26->field_38 = r12<8>;
            return v10;
        }
        v0 = v26 + 32;
        s_b0 = rbx<8> - v27;
        v2 = &stack_base-148;
        /* goto 4221102; */
    }
    if (v1 == 18446744069414584317 && v1 > 18446744069414584316 && v26->field_40 < v26->field_58 || v1 <= 18446744069414584316 && v25 != v17 && v0 != ((int)s_b0) && v17 != 18446744069414584319 && r15<8> > v26->field_40)
    {
        v26->field_20 = v5;
        v26->field_30 = r15<8>;
        v10 = 0;
        v26->field_38 = r12<8>;
        return v10;
    }
}
