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

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int build_wcs_upper_buffer()
{
    BOT tmp_48;  // tmp #48
    BOT tmp_5;  // tmp #5
    BOT tmp_19;  // tmp #19
    BOT tmp_10;  // tmp #10
    BOT tmp_27;  // tmp #27
    unsigned long|unsigned long long|unsigned int v0;  // [bp-0xc0]
    unsigned long|struct_2 *|unsigned long long|unsigned int v1;  // [bp-0xb8]
    char *|unsigned long long|unsigned long|struct_2 *|struct_1 * v10;  // rax
    unsigned long long v13;  // rax
    unsigned long long v16;  // rax
    unsigned long|unsigned int v17;  // rcx
    struct_2 * v18;  // rcx
    char *|unsigned long long|unsigned long|struct_2 *|struct_1 * v19;  // rdx
    unsigned long|unsigned int v2;  // [bp-0xb0]
    unsigned long v20;  // rbx
    unsigned long long v21;  // rbx
    struct_2 *|unsigned long long v22;  // rbp
    unsigned long long v23;  // rsi
    struct_0 *|unsigned long|unsigned long long v24;  // rdi
    struct_2 * v25;  // r8
    unsigned long|struct_2 *|unsigned long long v26;  // r12
    unsigned long|unsigned long long|unsigned int v27;  // r13
    struct_0 *v28;  // r14
    struct_2 * v29;  // r15
    unsigned long|struct_2 *|unsigned long long v3;  // [bp-0xa8]
    unsigned long v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x94]
    unsigned long v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    unsigned long long v9;  // rax

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
                    v4 = &stack_base-148;
                    while (true)
                    {
                        v23 = v28->field_28;
                        v22 = v29;
                        v9 = ((long long)*(v28->field_0 + v28->field_28 + v29));
                        v1 = ((int)*(v28->field_0 + v28->field_28 + v29));
                        v27 = v9;
                        tmp_5 = ((char)v27);
                        if (((long long)(tmp_5 & 128)) == 0)
                        {
                            v24 = v0;
                            v2 = v23;
                            v9 = mbsinit(v24);
                            if (v9 != 0)
                            {
                                v9 = towupper(v1);
                                if ((((int)v9) & -128) == 0)
                                {
                                    *(v28->field_8 + v29) = v9;
                                    *(v28->field_10 + v29 * 4) = ((int)v9);
                                    v29 += 1;
                                }
                            }
                        }
                        if (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0)
                        {
                            tmp_19 = v28->field_20;
                            v2 = v20 - v29;
                            v6 = tmp_19;
                            v3 = &stack_base-148;
                            v26 = (long long)rpl_mbrtowc();
                            v9 = v26 - 1;
                            if (v9 <= 18446744069414584316)
                            {
                                v1 = v5;
                                v27 = towupper(v5);
                                if (v1 != v27)
                                {
                                    v1 = &v7;
                                    v10 = wcrtomb(((int)&v7), v27, ((int)&v6));
                                    if (v26 == v10)
                                    {
                                        memcpy(v28->field_8 + v29, &v7, v26);
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
                                if (v26 == v10 || v1 == v27)
                                {
                                    v9 = v28->field_10;
                                    v19 = v22 * 4;
                                    v29 += 1;
                                    *(v28->field_10 + v22 * 4) = v27;
                                    v22 += v26;
                                    if (v29 < v29)
                                    {
                                        v19 = v9 + v19 + 4;
                                        v17 = v9 + v29 * 4;
                                        do
                                        {
                                            v19->field_0 = -1;
                                            v19 += 4;
                                        }
                                        while (v17 != v19);
                                        v29 = v22;
                                    }
                                }
                            }
                            else if (v9 != 18446744069414584317)
                            {
                                *(v28->field_8 + v29) = v27;
                                v29 += 1;
                                *(v28->field_10 + v22 * 4) = v1;
                                if (v26 == 18446744069414584319)
                                {
                                    v28->field_20 = v6;
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
                                v28->field_20 = v6;
                                v28->field_30 = v29;
                                v16 = 0;
                                v28->field_38 = v29;
                                return v16;
                            }
                        }
                        if (v9 <= 18446744069414584316 && (v26 == v10 || v1 == v27) && (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0) || v9 == 18446744069414584317 && v9 > 18446744069414584316 && v28->field_40 >= v28->field_58 && (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0) || v9 > 18446744069414584316 && v9 != 18446744069414584317 && (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0) || (((int)v9) & -128) == 0 && ((long long)(tmp_5 & 128)) == 0 && v9 != 0)
                        {
                            v28->field_30 = v29;
                            v16 = 0;
                            v28->field_38 = v29;
                            return v16;
                        }
                    }
                }
                v28->field_30 = v29;
                v16 = 0;
                v28->field_38 = v29;
                return v16;
            }
        }
    }
    if (v24->field_8a != 0 || v24->field_8c != 0 || v24->field_78 != 0)
    {
        v26 = v24->field_38;
    }
    v19 = v28->field_78;
    v6 = v28->field_20;
    if (v19 == 0)
    {
        v22 = v28->field_28 + v26 + v28->field_0;
    }
    else
    {
        v10 = ((long long)v28->field_90);
        if (v28->field_90 > 0)
        {
            v24 = v10 - 1;
            v10 = 0;
            v23 = v28->field_28 + v26 + v28->field_0;
            do
            {
                v7 = *(v19 + ((long long)*(v23 + v10)));
                v10 += 1;
            }
            while (v2 != v10 && v24 != v10);
        }
        v22 = &v7;
    }
    v27 = (long long)rpl_mbrtowc();
    v10 = v27 - 1;
    v1 = v10;
    if (v1 <= 18446744069414584316)
    {
        v24 = ((long long)v5);
        v0 = v5;
        if (v0 != ((int)v2))
        {
            v2 = towupper(v24);
            v0 = &v7;
            v3 = r15<8>;
            v19 = wcrtomb(((int)&v7), ((int)v2), ((int)&v6));
            if (v27 == v19)
            {
                tmp_10 = v28->field_8;
                v1 = v3;
                v0 = v2;
                memcpy(tmp_10 + r15<8>, &v7, v27);
                v17 = ((long long)v0);
                v25 = v1;
            }
            else
            {
                if (v19 != 18446744069414584319)
                {
                    v22 = v19 + r15<8>;
                    v10 = v28->field_40;
                    if (r15<8> <= v28->field_40)
                    {
                        if (v28->field_18 == 0)
                        {
                            v3 = &v7;
                            v2 = v19;
                            v0 = v2;
                            v10 = malloc(v10 * 8);
                            v17 = ((long long)v0);
                            v19 = v2;
                            v28->field_18 = v10;
                            if (v10 == 0)
                            {
                                v16 = 12;
                                return v16;
                            }
                        }
                    }
                }
                tmp_10 = v28->field_8;
                v1 = v3;
                v0 = v2;
                memcpy(tmp_10 + r15<8>, v22, v27);
                v17 = ((long long)v0);
                v25 = v1;
            }
        }
        else
        {
            tmp_10 = v28->field_8;
            v1 = r15<8>;
            v0 = ((int)v2);
            memcpy(tmp_10 + r15<8>, v22, v27);
            v25 = v1;
            v17 = ((int)v0);
        }
        if (v27 == v19 || v19 == 18446744069414584319 || v0 == ((int)v2))
        {
            v13 = v27 + v26;
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
            v26 = v13;
            v10 = v25 * 4;
            *(v28->field_10 + v25 * 4) = v17;
            v18 = v27 + v25;
            if (v29 < v27 + v25)
            {
                v10 = v19 + v10 + 4;
                v19 += v29 * 4;
                do
                {
                    v10->field_0 = -1;
                    v10 += 4;
                }
                while (v19 != v10);
                v29 = v18;
            }
        }
    }
    else if (v1 != 18446744069414584317 || v28->field_40 >= v28->field_58)
    {
        v19 = v28->field_78;
        v10 = ((long long)*(v28->field_0 + v26 + v28->field_28));
        if (v28->field_78 != 0)
        {
            v10 = ((long long)*(v19 + v10));
        }
        v18 = r15<8>;
        *(v28->field_8 + r15<8>) = al<1>;
        if (v28->field_8c != 0)
        {
            *(v28->field_18 + r15<8> * 8) = v26;
        }
        v26 += 1;
        v29 = r15<8> + 1;
        *(v28->field_10 + v18 * 4) = ((int)rax<8>);
        if (v27 == 18446744069414584319)
        {
            v28->field_20 = v6;
        }
    }
    if (v28->field_18 == 0 && r15<8> <= v28->field_40 && v1 <= 18446744069414584316 && v27 != v19 && v19 != 18446744069414584319 && v0 != ((int)v2) && v10 != 0 || r15<8> <= v28->field_40 && v1 <= 18446744069414584316 && v27 != v19 && v19 != 18446744069414584319 && v0 != ((int)v2) && v28->field_18 != 0)
    {
        if (v28->field_8c == 0)
        {
            if (r15<8> != 0)
            {
                v23 = v28->field_18;
                v10 = 0;
                do
                {
                    *(v23 + v10 * 8) = v10;
                    v10 += 1;
                }
                while (v10 != v29);
            }
            v28->field_8c = 1;
        }
        tmp_10 = v28->field_8;
        v2 = reg_24<4>;
        v0 = rdx<8>;
        memcpy(tmp_10 + r15<8>, &v7, rdx<8>);
        v24 = v28->field_10 + r15<8> * 4;
        tmp_27 = v28->field_18;
        *(v28->field_10 + r15<8> * 4) = v2;
        v23 = tmp_27 + r15<8> * 8;
        v10 = 1;
        *(tmp_27 + r15<8> * 8) = v26;
        if (v0 > 1)
        {
            do
            {
                *(v23 + v10 * 8) = (v10 < v27? v10 : *(&stack_base-184)) + v26;
                *(v24 + v10 * 4) = -1;
                v10 += 1;
            }
            while (v10 != v0);
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
        if (r15<8> >= rbx<8>)
        {
            v28->field_30 = v29;
            v16 = 0;
            v28->field_38 = r12<8>;
            return v16;
        }
        v0 = v28 + 32;
        v2 = rbx<8> - r15<8>;
        v3 = &stack_base-148;
        /* goto 4263342; */
    }
    if (v1 == 18446744069414584317 && v1 > 18446744069414584316 && v28->field_40 < v28->field_58 || v1 <= 18446744069414584316 && v27 != v19 && v19 != 18446744069414584319 && v0 != ((int)v2) && r15<8> > v28->field_40)
    {
        v28->field_20 = v6;
        v28->field_30 = v29;
        v16 = 0;
        v28->field_38 = r12<8>;
        return v16;
    }
}
