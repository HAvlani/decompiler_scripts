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
    unsigned long|unsigned long long|unsigned int v0;  // [bp-0xc0]
    struct_1 *|unsigned long|unsigned long long|unsigned int v1;  // [bp-0xb8]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v13;  // rax
    struct_1 *|unsigned long|unsigned int v17;  // rcx
    char *|unsigned long long|unsigned long|struct_1 *|struct_2 * v18;  // rdx
    unsigned long v19;  // rbx
    unsigned long|unsigned int v2;  // [bp-0xb0]
    unsigned long long v20;  // rbx
    struct_1 *|unsigned long long v21;  // rbp
    unsigned long long v22;  // rsi
    unsigned long|unsigned long long|struct_0 * v23;  // rdi
    struct_1 * v24;  // r8
    struct_1 *|unsigned long|unsigned long long v25;  // r12
    unsigned long|unsigned long long|unsigned int v26;  // r13
    struct_0 *v27;  // r14
    struct_1 * v28;  // r15
    struct_1 *|unsigned long|unsigned long long v3;  // [bp-0xa8]
    unsigned long v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x94]
    unsigned long v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    char *|unsigned long long|unsigned long|struct_1 *|struct_2 * v9;  // rax

    v27 = v23;
    tmp_48 = v23->field_58;
    v28 = v23->field_30;
    v19 = (v23->field_40 <= tmp_48? v23->field_40 : tmp_48);
    if (v23->field_8a == 0)
    {
        if (v23->field_78 == 0)
        {
            if (v23->field_8c == 0)
            {
                if (v23->field_30 < (v23->field_40 <= tmp_48? v23->field_40 : tmp_48))
                {
                    v0 = v23 + 32;
                    v4 = &stack_base-148;
                    while (true)
                    {
                        v22 = v27->field_28;
                        v21 = v28;
                        v10 = ((long long)*(v27->field_0 + v27->field_28 + v28));
                        v1 = ((int)*(v27->field_0 + v27->field_28 + v28));
                        v26 = v10;
                        tmp_5 = ((char)v26);
                        if (((long long)(tmp_5 & 128)) == 0)
                        {
                            v23 = v0;
                            v2 = v22;
                            v10 = mbsinit(v23);
                            if (v10 != 0)
                            {
                                v10 = towupper(v1);
                                if ((((int)v10) & -128) == 0)
                                {
                                    *(v27->field_8 + v28) = v10;
                                    *(v27->field_10 + v28 * 4) = ((int)v10);
                                    v28 += 1;
                                }
                            }
                        }
                        if (v10 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v10) & -128) != 0)
                        {
                            tmp_19 = v27->field_20;
                            v2 = v19 - v28;
                            v6 = tmp_19;
                            v3 = &stack_base-148;
                            v25 = (long long)rpl_mbrtowc();
                            v10 = v25 - 1;
                            if (v10 <= 18446744069414584316)
                            {
                                v1 = v5;
                                v26 = towupper(v5);
                                if (v1 != v26)
                                {
                                    v1 = &v7;
                                    v9 = wcrtomb(((int)&v7), v26, ((int)&v6));
                                    if (v25 == v9)
                                    {
                                        memcpy(v27->field_8 + v28, &v7, v25);
                                    }
                                    else
                                    {
                                        v25 = v28;
                                    }
                                }
                                else
                                {
                                    memcpy(v27->field_8 + v28, v27->field_28 + v28 + v27->field_0, v25);
                                }
                                if (v25 == v9 || v1 == v26)
                                {
                                    v10 = v27->field_10;
                                    v18 = v21 * 4;
                                    v28 += 1;
                                    *(v27->field_10 + v21 * 4) = v26;
                                    v21 += v25;
                                    if (v28 < v28)
                                    {
                                        v18 = v10 + v18 + 4;
                                        v17 = v10 + v28 * 4;
                                        do
                                        {
                                            v18->field_0 = -1;
                                            v18 += 4;
                                        }
                                        while (v17 != v18);
                                        v28 = v21;
                                    }
                                }
                            }
                            else if (v10 != 18446744069414584317)
                            {
                                *(v27->field_8 + v28) = v26;
                                v28 += 1;
                                *(v27->field_10 + v21 * 4) = v1;
                                if (v25 == 18446744069414584319)
                                {
                                    v27->field_20 = v6;
                                }
                            }
                            else if (v27->field_40 >= v27->field_58)
                            {
                                *(v27->field_8 + v28) = v26;
                                v28 += 1;
                                *(v27->field_10 + v21 * 4) = v1;
                            }
                            else
                            {
                                v27->field_20 = v6;
                                v27->field_30 = v28;
                                v11 = 0;
                                v27->field_38 = v28;
                                return v11;
                            }
                        }
                        if (v10 == 18446744069414584317 && v27->field_40 >= v27->field_58 && v10 > 18446744069414584316 && (v10 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v10) & -128) != 0) || v10 <= 18446744069414584316 && (v25 == v9 || v1 == v26) && (v10 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v10) & -128) != 0) || ((long long)(tmp_5 & 128)) == 0 && (((int)v10) & -128) == 0 && v10 != 0 || v10 != 18446744069414584317 && v10 > 18446744069414584316 && (v10 == 0 || ((long long)(tmp_5 & 128)) != 0 || (((int)v10) & -128) != 0))
                        {
                            v27->field_30 = v28;
                            v11 = 0;
                            v27->field_38 = v28;
                            return v11;
                        }
                    }
                }
                v27->field_30 = v28;
                v11 = 0;
                v27->field_38 = v28;
                return v11;
            }
        }
    }
    if (v23->field_78 != 0 || v23->field_8c != 0 || v23->field_8a != 0)
    {
        v25 = v23->field_38;
    }
    v18 = v27->field_78;
    v6 = v27->field_20;
    if (v18 == 0)
    {
        v21 = v27->field_28 + v25 + v27->field_0;
    }
    else
    {
        v9 = ((long long)v27->field_90);
        if (v27->field_90 > 0)
        {
            v23 = v9 - 1;
            v9 = 0;
            v22 = v27->field_28 + v25 + v27->field_0;
            do
            {
                v7 = *(v18 + ((long long)*(v22 + v9)));
                v9 += 1;
            }
            while (v2 != v9 && v23 != v9);
        }
        v21 = &v7;
    }
    v26 = (long long)rpl_mbrtowc();
    v9 = v26 - 1;
    v1 = v9;
    if (v1 <= 18446744069414584316)
    {
        v23 = ((long long)v5);
        v0 = v5;
        if (v0 != ((int)v2))
        {
            v2 = towupper(v23);
            v0 = &v7;
            v3 = r15<8>;
            v18 = wcrtomb(((int)&v7), ((int)v2), ((int)&v6));
            if (v26 == v18)
            {
                tmp_10 = v27->field_8;
                v1 = v3;
                v0 = v17;
                memcpy(tmp_10 + r15<8>, &v7, v26);
                v17 = ((int)v0);
                v24 = v1;
            }
            else
            {
                if (v18 != 18446744069414584319)
                {
                    v21 = v18 + r15<8>;
                    v9 = v27->field_40;
                    if (r15<8> <= v27->field_40)
                    {
                        if (v27->field_18 == 0)
                        {
                            v3 = &v7;
                            v2 = v18;
                            v0 = v17;
                            v9 = malloc(v9 * 8);
                            v17 = ((int)v0);
                            v18 = v2;
                            v27->field_18 = v9;
                            if (v9 == 0)
                            {
                                v11 = 12;
                                return v11;
                            }
                        }
                    }
                }
                tmp_10 = v27->field_8;
                v1 = v3;
                v0 = v17;
                memcpy(tmp_10 + r15<8>, rbp<8>, v26);
                v17 = ((long long)v0);
                v24 = v1;
            }
        }
        else
        {
            tmp_10 = v27->field_8;
            v1 = r15<8>;
            v0 = ((int)v2);
            memcpy(tmp_10 + r15<8>, rbp<8>, v26);
            v24 = v1;
            v17 = ((long long)v0);
        }
        if (v18 == 18446744069414584319 || v26 == v18 || v0 == ((int)v2))
        {
            v13 = v26 + v25;
            if (v27->field_8c != 0)
            {
                v18 = v27->field_18 + (r15<8> - v25) * 8;
                do
                {
                    *(v18 + v25 * 8) = v25;
                    v25 += 1;
                }
                while (False);
            }
            v18 = v27->field_10;
            v28 = r15<8> + 1;
            v25 = v13;
            v9 = v24 * 4;
            *(v27->field_10 + v24 * 4) = v17;
            v17 = v26 + v24;
            if (v28 < v26 + v24)
            {
                v9 = v18 + v9 + 4;
                v18 += v28 * 4;
                do
                {
                    v9->field_0 = -1;
                    v9 += 4;
                }
                while (v18 != v9);
                v28 = v17;
            }
        }
    }
    else if (v1 != 18446744069414584317 || v27->field_40 >= v27->field_58)
    {
        v18 = v27->field_78;
        v9 = ((long long)*(v27->field_0 + v25 + v27->field_28));
        if (v27->field_78 != 0)
        {
            v9 = ((long long)*(v18 + v9));
        }
        v17 = r15<8>;
        *(v27->field_8 + r15<8>) = al<1>;
        if (v27->field_8c != 0)
        {
            *(v27->field_18 + r15<8> * 8) = v25;
        }
        v25 += 1;
        v28 = r15<8> + 1;
        *(v27->field_10 + v17 * 4) = ((int)rax<8>);
        if (v26 == 18446744069414584319)
        {
            v27->field_20 = v6;
        }
    }
    if (v1 <= 18446744069414584316 && v27->field_18 == 0 && r15<8> <= v27->field_40 && v18 != 18446744069414584319 && v26 != v18 && v0 != ((int)v2) && v9 != 0 || v1 <= 18446744069414584316 && r15<8> <= v27->field_40 && v18 != 18446744069414584319 && v26 != v18 && v0 != ((int)v2) && v27->field_18 != 0)
    {
        if (v27->field_8c == 0)
        {
            if (r15<8> != 0)
            {
                v22 = v27->field_18;
                v9 = 0;
                do
                {
                    *(v22 + v9 * 8) = v9;
                    v9 += 1;
                }
                while (v9 != v28);
            }
            v27->field_8c = 1;
        }
        tmp_10 = v27->field_8;
        v2 = reg_24<4>;
        v0 = rdx<8>;
        memcpy(tmp_10 + r15<8>, &v7, rdx<8>);
        v23 = v27->field_10 + r15<8> * 4;
        tmp_27 = v27->field_18;
        *(v27->field_10 + r15<8> * 4) = v2;
        v22 = tmp_27 + r15<8> * 8;
        v9 = 1;
        *(tmp_27 + r15<8> * 8) = v25;
        if (v0 > 1)
        {
            do
            {
                *(v22 + v9 * 8) = (v9 < v26? v9 : *(&stack_base-184)) + v25;
                *(v23 + v9 * 4) = -1;
                v9 += 1;
            }
            while (v9 != v0);
        }
        v18 = v0 - v26;
        v20 = v27->field_58 + v18;
        v27->field_58 = v27->field_58 + v18;
        if (v27->field_60 > v25)
        {
            v27->field_68 = v27->field_68 + v18;
        }
        r15<8> = v21;
        v19 = (v27->field_40 <= v20? v27->field_40 : v20);
        v25 += v26;
    }
    if (...)
    {
        if (r15<8> >= rbx<8>)
        {
            v27->field_30 = r15<8>;
            v11 = 0;
            v27->field_38 = r12<8>;
            return v11;
        }
        v0 = v27 + 32;
        v2 = rbx<8> - r15<8>;
        v3 = &stack_base-148;
        /* goto 4266686; */
    }
    if (v1 == 18446744069414584317 && v1 > 18446744069414584316 && v27->field_40 < v27->field_58 || v1 <= 18446744069414584316 && v18 != 18446744069414584319 && v26 != v18 && v0 != ((int)v2) && r15<8> > v27->field_40)
    {
        v27->field_20 = v6;
        v27->field_30 = r15<8>;
        v11 = 0;
        v27->field_38 = r12<8>;
        return v11;
    }
}