typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[234];
    char field_fa;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern unsigned long long g_417608;
extern char primes_diff[3];
extern unsigned long long primes_diff8;
extern char primes_dtab;

int factor()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_16;  // tmp #16
    BOT tmp_22;  // tmp #22
    BOT tmp_38;  // tmp #38
    BOT tmp_43;  // tmp #43
    BOT tmp_30;  // tmp #30
    BOT tmp_10;  // tmp #10
    unsigned long long v0;  // [bp-0x68]
    char|unsigned long long v1;  // [bp-0x60]
    char [3]|unsigned long long v11;  // rdx
    struct_1 *|unsigned long|char [3]|unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    char [3]|unsigned long long v14;  // rdx
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    char [3]|unsigned long long v17;  // rdx
    unsigned long long [14]|unsigned long long v18;  // rbx
    unsigned long long v19;  // rbx
    struct_2 *|unsigned long long v2;  // [bp-0x58]
    unsigned long long v20;  // rsi
    struct_1 *|unsigned long long v21;  // rdi
    unsigned long long v22;  // r9
    unsigned long long|unsigned int v23;  // r10
    unsigned long long v24;  // r11
    char [3]|unsigned long long v26;  // r13
    struct_2 *|unsigned long long v27;  // r14
    unsigned long long v28;  // r15
    unsigned long long v3;  // [bp-0x50]
    unsigned long long|unsigned int v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx

    v28 = v20;
    v12->field_fa = 0;
    v0 = v21;
    v12->field_8 = 0;
    if (v21 == 0)
    {
        if (v20 <= 1)
        {
            return v7;
        }
    }
    if (v21 != 0 || v20 > 1)
    {
        if (((long long)(((char)v20) & 1)) == 0)
        {
            if (v20 == 0)
            {
                tmp_5 = BinaryOp ExpCmpNE;
                tmp_22 = UnaryOp Ctz;
                v28 = v0 >> (((char)(tmp_5? tmp_22 : rcx<8>)) & 63);
                factor_insert_multiplicity();
                v0 = 0;
                /* goto 4214157; */
            }
            else
            {
                v21 = v12;
                tmp_5 = BinaryOp ExpCmpNE;
                tmp_43 = UnaryOp Ctz;
                tmp_30 = v0 << (((char)(64 - ((int)(tmp_5? tmp_43 : v21)))) & 63) | v20 >> (((char)(tmp_5? tmp_43 : v21)) & 63);
                v0 >>= ((char)(tmp_5? tmp_43 : v21)) & 63;
                v28 = tmp_30;
                factor_insert_multiplicity();
            }
        }
        if (v20 != 0 || ((long long)(((char)v20) & 1)) != 0)
        {
            if (v0 != 0)
            {
                v27 = &g_417608;
                v26 = 1;
                v22 = 12297829382473034411;
                2 = 2;
                v9 = 3;
                while (true)
                {
                    v23 = r15<8> * v22;
                    v12 = ((long long)((r15<8> * v22) * v9 >> 64));
                    if (v0 >= ((long long)((r15<8> * v22) * v9 >> 64)))
                    {
                        v24 = v27->field_0;
                        while (true)
                        {
                            v18 = 12297829382473034411 * (v0 - v12);
                            if (12297829382473034411 * (v0 - v12) > v24)
                            {
                                break;
                            }
                            v3 = v24;
                            v2 = v23;
                            v1 = 12297829382473034411;
                            v0 = 3;
                            factor_insert_multiplicity();
                            v23 = v2;
                            v9 = v0;
                            v24 = v3;
                            v0 = v18;
                            v28 = v23;
                            v12 = ((long long)((v28 * 12297829382473034411) * 3 >> 64));
                            if (((long long)((v28 * 12297829382473034411) * 3 >> 64)) > v0)
                            {
                                break;
                            }
                            v23 = v2 * 12297829382473034411;
                        }
                    }
                    v7 = v26;
                    v9 = rcx<8> + 2;
                    v26 += 1;
                    v27 += 16;
                    if (v0 != 0)
                    {
                        2 = ((long long)v26[4301568]);
                        v22 = *(v27 + 0x8);
                    }
                    else
                    {
                        v19 = v7;
                        v2 = &primes_dtab;
                        v23 = *(v7 * 16 + &primes_dtab + 8);
                        v24 = *(primes_dtab + v7 * 16);
                        v1 = *(v7 + 4300864);
                        break;
                    }
                }
                if (v0 == 0 && ((int)v7) <= 667)
                {
                    v26 = v7 + 8;
                    v18 = (v19 + 1) * 16 + v2;
                }
            }
        }
        if (v0 == 0 || v20 == 0 && ((long long)(((char)v20) & 1)) == 0)
        {
            v1 = 26;
            v7 = 0;
            v24 = 12297829382473034411;
            v2 = &primes_dtab;
            v9 = 3;
            v19 = 0;
            v23 = 6148914691236517205;
        }
        v26 = v7 + 8;
        v18 = (v19 + 1) * 16 + v2;
        while (true)
        {
            v27 = r11<8> * r15<8>;
            if (r11<8> * r15<8> > r10<8>)
            {
                v15 = r15<8> * v18[0];
            }
            else
            {
                while (true)
                {
                    v5 = r11<8>;
                    v4 = r10<8>;
                    v28 = v27;
                    v3 = rcx<8>;
                    factor_insert_multiplicity();
                    v24 = v5;
                    v23 = v4;
                    v9 = v3;
                    v27 = v5 * v27;
                    if (v27 > v4)
                    {
                        break;
                    }
                }
                v15 = v28 * v18[0];
            }
            if (r11<8> * r15<8> <= r10<8> && v28 * v18[0] > v18[1] || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] > v18[1])
            {
                v13 = r15<8> * v18[2];
            }
            if (v28 * v18[0] <= v18[1] && r11<8> * r15<8> <= r10<8> || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] <= v18[1])
            {
                while (true)
                {
                    v28 = rdx<8>;
                    v3 = rcx<8>;
                    factor_insert_multiplicity();
                    v9 = v3;
                    v15 = v28 * v18[0];
                    if (v28 * v18[0] > v18[1])
                    {
                        break;
                    }
                }
                v13 = v28 * v18[2];
            }
            if ((v28 * v18[0] <= v18[1] && r11<8> * r15<8> <= r10<8> || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] <= v18[1]) && v28 * v18[2] > v18[3] || (r11<8> * r15<8> <= r10<8> && v28 * v18[0] > v18[1] || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] > v18[1]) && r15<8> * v18[2] > v18[3])
            {
                v16 = v28 * v18[4];
            }
            if ((v28 * v18[0] <= v18[1] && r11<8> * r15<8> <= r10<8> || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] <= v18[1]) && v28 * v18[2] <= v18[3] || (r11<8> * r15<8> <= r10<8> && v28 * v18[0] > v18[1] || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] > v18[1]) && r15<8> * v18[2] <= v18[3])
            {
                while (true)
                {
                    v28 = rdx<8>;
                    v3 = rcx<8>;
                    factor_insert_multiplicity();
                    v9 = v3;
                    v13 = v28 * v18[2];
                    if (v28 * v18[2] > v18[3])
                    {
                        break;
                    }
                }
                v16 = v28 * v18[4];
            }
            if (((v28 * v18[0] <= v18[1] && r11<8> * r15<8> <= r10<8> || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] <= v18[1]) && v28 * v18[2] <= v18[3] || (r11<8> * r15<8> <= r10<8> && v28 * v18[0] > v18[1] || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] > v18[1]) && r15<8> * v18[2] <= v18[3]) && v28 * v18[4] > v18[5] || ((v28 * v18[0] <= v18[1] && r11<8> * r15<8> <= r10<8> || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] <= v18[1]) && v28 * v18[2] > v18[3] || (r11<8> * r15<8> <= r10<8> && v28 * v18[0] > v18[1] || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] > v18[1]) && r15<8> * v18[2] > v18[3]) && v28 * v18[4] > v18[5])
            {
                v17 = v28 * v18[6];
            }
            if (((v28 * v18[0] <= v18[1] && r11<8> * r15<8> <= r10<8> || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] <= v18[1]) && v28 * v18[2] <= v18[3] || (r11<8> * r15<8> <= r10<8> && v28 * v18[0] > v18[1] || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] > v18[1]) && r15<8> * v18[2] <= v18[3]) && v28 * v18[4] <= v18[5] || ((v28 * v18[0] <= v18[1] && r11<8> * r15<8> <= r10<8> || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] <= v18[1]) && v28 * v18[2] > v18[3] || (r11<8> * r15<8> <= r10<8> && v28 * v18[0] > v18[1] || r11<8> * r15<8> > r10<8> && r15<8> * v18[0] > v18[1]) && r15<8> * v18[2] > v18[3]) && v28 * v18[4] <= v18[5])
            {
                while (true)
                {
                    v28 = rdx<8>;
                    v3 = rcx<8>;
                    factor_insert_multiplicity();
                    v9 = v3;
                    v16 = v28 * v18[4];
                    if (v28 * v18[4] > v18[5])
                    {
                        break;
                    }
                }
                v17 = v28 * v18[6];
            }
            if (...)
            {
                v28 = v17;
                v27 = v26 - 7;
                v23 = ((int)v26) - 3;
                while (true)
                {
                    v17 = v27;
                    v20 = rcx<8>;
                    do
                    {
                        tmp_10 = v17;
                        v17 = ((long long)(((int)v17) + 1));
                        v20 += ((long long)*(tmp_10 + 0x41a300));
                    }
                    while (v4 != ((int)v17));
                    v4 = v23;
                    v3 = v9;
                    factor_insert_multiplicity();
                    v9 = v3;
                    if (v28 * v18[6] > v18[7])
                    {
                        break;
                    }
                }
            }
            v11 = r15<8> * v18[8];
            if (r15<8> * v18[8] <= v18[9])
            {
                v28 = v11;
                v27 = v26 - 7;
                v23 = ((int)v26) - 2;
                while (true)
                {
                    v11 = v27;
                    v20 = rcx<8>;
                    do
                    {
                        tmp_10 = v11;
                        v11 = ((long long)(((int)v11) + 1));
                        v20 += ((long long)*(tmp_10 + 0x41a300));
                    }
                    while (((int)v11) != v4);
                    v4 = v23;
                    v3 = v9;
                    factor_insert_multiplicity();
                    v9 = v3;
                    if (v28 * v18[8] > v18[9])
                    {
                        break;
                    }
                }
            }
            v14 = v28 * v18[10];
            if (v18[11] >= v28 * v18[10])
            {
                v28 = v14;
                v27 = v26 - 7;
                v23 = ((int)v26) - 1;
                while (true)
                {
                    v14 = v27;
                    v20 = rcx<8>;
                    do
                    {
                        tmp_10 = v14;
                        v14 = ((long long)(((int)v14) + 1));
                        v20 += ((long long)*(tmp_10 + 0x41a300));
                    }
                    while (((int)v14) != v4);
                    v4 = v23;
                    v3 = v9;
                    factor_insert_multiplicity();
                    v9 = v3;
                    if (v28 * v18[10] > v18[11])
                    {
                        break;
                    }
                }
            }
            v12 = r15<8> * v18[12];
            if (r15<8> * v18[12] <= v18[13])
            {
                v28 = v12;
                v27 = v26 - 7;
                while (true)
                {
                    v12 = v27;
                    v20 = v9;
                    do
                    {
                        tmp_10 = v12;
                        v12 = ((long long)(((int)v12) + 1));
                        v20 += ((long long)*(tmp_10 + 0x41a300));
                    }
                    while (((int)v26) != ((int)v12));
                    v3 = v9;
                    factor_insert_multiplicity();
                    if (v28 * v18[12] > v18[13])
                    {
                        break;
                    }
                }
            }
            v9 += ((long long)v1);
            v18 -= 18446744069414584192;
            if (v9 * v9 > r15<8> || ((int)v26) > 667)
            {
                break;
            }
            v23 = *(((long long)v26) * 16 + v2 + 8);
            v24 = *(((long long)v26) * 16 + v2);
            v1 = *(primes_diff8 + ((long long)v26));
        }
        if (!(v0 == 0))
        {
            v8 = prime2_p();
        }
        else if (v28 <= 1)
        {
            return v7;
        }
        else
        {
            v8 = prime2_p();
        }
    }
}
