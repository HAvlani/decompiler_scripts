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
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long|struct_2 *|unsigned int v17;  // rcx
    char *|unsigned long long|unsigned long|struct_2 *|struct_1 * v18;  // rdx
    unsigned long v19;  // rbx
    unsigned long|unsigned int v2;  // [bp-0xb0]
    unsigned long long v20;  // rbx
    struct_2 *|unsigned long long v21;  // rbp
    unsigned long long v22;  // rsi
    struct_0 *|unsigned long|unsigned long long v23;  // rdi
    struct_2 * v24;  // r8
    unsigned long|struct_2 *|unsigned long long v25;  // r12
    unsigned long|unsigned long long|unsigned int v26;  // r13
    struct_0 *v27;  // r14
    struct_2 * v28;  // r15
    unsigned long|struct_2 *|unsigned long long v3;  // [bp-0xa8]
    unsigned long v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x94]
    unsigned long v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    unsigned long long v9;  // rax

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
                        v9 = ((long long)*(v27->field_0 + v27->field_28 + v28));
                        v1 = ((int)*(v27->field_0 + v27->field_28 + v28));
                        v26 = v9;
                        tmp_5 = ((char)v26);
                        if (((long long)(tmp_5 & 128)) == 0)
                        {
                            v23 = v0;
                            v2 = v22;
                            v9 = mbsinit(v23);
                            if (v9 != 0)
                            {
                                v9 = towupper(v1);
                                if ((((int)v9) & -128) == 0)
                                {
                                    *(v27->field_8 + v28) = v9;
                                    *(v27->field_10 + v28 * 4) = ((int)v9);
                                    v28 += 1;
                                }
                            }
                        }
                        if (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0)
                        {
                            tmp_19 = v27->field_20;
                            v2 = v19 - v28;
                            v6 = tmp_19;
                            v3 = &stack_base-148;
                            v25 = (long long)rpl_mbrtowc();
                            v9 = v25 - 1;
                            if (v9 <= 18446744069414584316)
                            {
                                v1 = v5;
                                v26 = towupper(v5);
                                if (v1 != v26)
                                {
                                    v1 = &v7;
                                    v10 = wcrtomb(((int)&v7), v26, ((int)&v6));
                                    if (v25 == v10)
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
                                if (v25 == v10 || v1 == v26)
                                {
                                    v9 = v27->field_10;
                                    v18 = v21 * 4;
                                    v28 += 1;
                                    *(v27->field_10 + v21 * 4) = v26;
                                    v21 += v25;
                                    if (v28 < v28)
                                    {
                                        v18 = v9 + v18 + 4;
                                        v17 = v9 + v28 * 4;
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
                            else if (v9 != 18446744069414584317)
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
                                v14 = 0;
                                v27->field_38 = v28;
                                return v14;
                            }
                        }
                        if (v9 <= 18446744069414584316 && (v25 == v10 || v1 == v26) && (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0) || v9 == 18446744069414584317 && v27->field_40 >= v27->field_58 && v9 > 18446744069414584316 && (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0) || (((int)v9) & -128) == 0 && ((long long)(tmp_5 & 128)) == 0 && v9 != 0 || v9 != 18446744069414584317 && v9 > 18446744069414584316 && (v9 == 0 || (((int)v9) & -128) != 0 || ((long long)(tmp_5 & 128)) != 0))
                        {
                            v27->field_30 = v28;
                            v14 = 0;
                            v27->field_38 = v28;
                            return v14;
                        }
                    }
                }
                v27->field_30 = v28;
                v14 = 0;
                v27->field_38 = v28;
                return v14;
            }
        }
    }
    if (v23->field_8c != 0 || v23->field_8a != 0 || v23->field_78 != 0)
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
        v10 = ((long long)v27->field_90);
        if (v27->field_90 > 0)
        {
            v23 = v10 - 1;
            v10 = 0;
            v22 = v27->field_28 + v25 + v27->field_0;
            do
            {
                v7 = *(v18 + ((long long)*(v22 + v10)));
                v10 += 1;
            }
            while (v2 != v10 && v23 != v10);
        }
        v21 = &v7;
    }
    v26 = (long long)rpl_mbrtowc();
    v10 = v26 - 1;
    v1 = v10;
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
                    v10 = v27->field_40;
                    if (r15<8> <= v27->field_40)
                    {
                        if (v27->field_18 == 0)
                        {
                            v3 = &v7;
                            v2 = v18;
                            v0 = v17;
                            v10 = malloc(v10 * 8);
                            v17 = ((int)v0);
                            v18 = v2;
                            v27->field_18 = v10;
                            if (v10 == 0)
                            {
                                v14 = 12;
                                return v14;
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
        if (v26 == v18 || v0 == ((int)v2) || v18 == 18446744069414584319)
        {
            v15 = v26 + v25;
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
            v25 = v15;
            v10 = v24 * 4;
            *(v27->field_10 + v24 * 4) = v17;
            v17 = v26 + v24;
            if (v28 < v26 + v24)
            {
                v10 = v18 + v10 + 4;
                v18 += v28 * 4;
                do
                {
                    v10->field_0 = -1;
                    v10 += 4;
                }
                while (v18 != v10);
                v28 = v17;
            }
        }
    }
    else if (v1 != 18446744069414584317 || v27->field_40 >= v27->field_58)
    {
        v18 = v27->field_78;
        v10 = ((long long)*(v27->field_0 + v25 + v27->field_28));
        if (v27->field_78 != 0)
        {
            v10 = ((long long)*(v18 + v10));
        }
        v17 = r15<8>;
        *(v27->field_8 + r15<8>) = v10;
        if (v27->field_8c != 0)
        {
            *(v27->field_18 + r15<8> * 8) = v25;
        }
        v25 += 1;
        v28 = r15<8> + 1;
        *(v27->field_10 + v17 * 4) = ((int)v10);
        if (v26 == 18446744069414584319)
        {
            v27->field_20 = v6;
        }
    }
    if (v27->field_18 == 0 && r15<8> <= v27->field_40 && v1 <= 18446744069414584316 && v26 != v18 && v0 != ((int)v2) && v18 != 18446744069414584319 && v10 != 0 || r15<8> <= v27->field_40 && v1 <= 18446744069414584316 && v26 != v18 && v0 != ((int)v2) && v18 != 18446744069414584319 && v27->field_18 != 0)
    {
        if (v27->field_8c == 0)
        {
            if (r15<8> != 0)
            {
                v22 = v27->field_18;
                v10 = 0;
                do
                {
                    *(v22 + v10 * 8) = v10;
                    v10 += 1;
                }
                while (v10 != v28);
            }
            v27->field_8c = 1;
        }
        tmp_10 = v27->field_8;
        v2 = v17;
        v0 = v18;
        memcpy(tmp_10 + r15<8>, &v7, v18);
        v23 = v27->field_10 + r15<8> * 4;
        tmp_27 = v27->field_18;
        *(v27->field_10 + r15<8> * 4) = v2;
        v22 = tmp_27 + r15<8> * 8;
        v10 = 1;
        *(tmp_27 + r15<8> * 8) = v25;
        if (v0 > 1)
        {
            do
            {
                *(v22 + v10 * 8) = (v10 < v26? v10 : *(&stack_base-184)) + v25;
                *(v23 + v10 * 4) = -1;
                v10 += 1;
            }
            while (v10 != v0);
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
        if (r15<8> >= v19)
        {
            v27->field_30 = v28;
            v14 = 0;
            v27->field_38 = r12<8>;
            return v14;
        }
        v0 = v27 + 32;
        v2 = v19 - r15<8>;
        v3 = &stack_base-148;
        /* goto 4225822; */
    }
    if (v1 == 18446744069414584317 && v1 > 18446744069414584316 && v27->field_40 < v27->field_58 || v1 <= 18446744069414584316 && v26 != v18 && v0 != ((int)v2) && v18 != 18446744069414584319 && r15<8> > v27->field_40)
    {
        v27->field_20 = v6;
        v27->field_30 = v28;
        v14 = 0;
        v27->field_38 = r12<8>;
        return v14;
    }
}
