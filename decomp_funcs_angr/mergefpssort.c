typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    uint128_t field_0;
    uint128_t field_10;
    uint128_t field_20;
    unsigned long long field_30;
} struct_5;

extern struct_4 keylist;
extern char unique;

int mergefps()
{
    BOT tmp_2;  // tmp #2
    BOT tmp_38;  // tmp #38
    BOT tmp_43;  // tmp #43
    BOT tmp_11;  // tmp #11
    BOT tmp_60;  // tmp #60
    BOT tmp_48;  // tmp #48
    BOT tmp_65;  // tmp #65
    unsigned long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    unsigned long v12;  // [bp-0x78]
    unsigned long v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x60]
    unsigned long v16;  // [bp-0x58]
    unsigned long v17;  // [bp-0x50]
    unsigned long v18;  // [bp-0x40]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v20;  // rax
    unsigned long long|void * v21;  // rax
    unsigned long long v24;  // rax
    struct_4 * v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v35;  // rax
    unsigned long|unsigned long long v37;  // rcx
    unsigned long long|struct_5 * v38;  // rdx
    unsigned long long|struct_4 * v39;  // rbx
    struct_4 *v4;  // [bp-0xb8]
    unsigned long long v40;  // rbp
    unsigned long|unsigned long long|struct_4 *|void * v41;  // rsi
    unsigned long long v42;  // rdi
    unsigned long|unsigned long long v43;  // r8
    unsigned long long v44;  // r9
    unsigned long long [4]|unsigned long long v45;  // r12
    unsigned long long [4]|unsigned long long|struct_4 * v46;  // r13
    unsigned long long v47;  // r14
    unsigned long long v48;  // r15
    unsigned long long v49;  // cc_dep1
    unsigned long long v5;  // [bp-0xb0]
    struct_4 *v50;  // fs
    uint128_t v51;  // xmm0
    uint128_t v52;  // xmm1
    uint128_t v53;  // xmm2
    uint128_t v54;  // xmm3
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x98]
    unsigned long v9;  // [bp-0x90]

    v48 = v44;
    v2 = v38;
    v8 = v37;
    v9 = v43;
    v7 = v44;
    v5 = v42;
    v10 = v41;
    v4 = (long long)xnmalloc();
    v45 = (long long)xnmalloc();
    v3 = (long long)xnmalloc();
    v14 = 0;
    v40 = (long long)xnmalloc();
    v13 = keylist;
    if (v38 != 0)
    {
        v1 = v45;
        v39 = 0;
        v6 = v40;
        while (true)
        {
            v40 = v39 * 8;
            v45 = v4 + v39 * 56;
            initbuf();
            v0 = v44 + v40;
            v20 = fillbuf();
            if (((long long)v20) != 0)
            {
                tmp_2 = v45[3] + v45[0];
                *(v1 + v39 * 8) = v45[3] + v45[0] - 32;
                *(v3 + v39 * 8) = tmp_2 - v45[2] * 32;
                v39 += 1;
                v40 = v6;
                v45 = v1;
                break;
            }
            else
            {
                xfclose();
                if (v39 < v10)
                {
                    v10 -= 1;
                    zaptemp();
                }
                rpl_free();
                if (v2 - 1 > v39)
                {
                    v47 = v5;
                    do
                    {
                        v20 = *(v48 + v40 + 8);
                        *(v47 + v40 * 2) = *(v47 + v40 * 2 + 16);
                        *(v48 + v40) = v20;
                        v40 += 8;
                    }
                    while ((v2 << 3) - 8 != v40);
                    v2 -= 1;
                }
                else
                {
                    v45 = v1;
                    v40 = v6;
                    v2 -= 1;
                    break;
                }
            }
        }
        if (v2 != 0)
        {
            v21 = 0;
            do
            {
                *(v40 + v21 * 8) = v21;
                v21 += 1;
            }
            while (v21 != v2);
            if (v2 != 1)
            {
                v47 = 1;
                while (true)
                {
                    v39 = v40 + v47 * 8;
                    v46 = v40 + v47 * 8 - 8;
                    v21 = compare();
                    if (v21 > 0)
                    {
                        v21 = v46->field_0;
                        v47 = 1;
                        v46->field_0 = v39->field_0;
                        v39->field_0 = v21;
                    }
                    else
                    {
                        v47 += 1;
                        if (v47 >= v2)
                        {
                            break;
                        }
                    }
                }
            }
            v11 = 0;
            v6 = 0;
            v12 = &stack_base-104;
            while (true)
            {
                v46 = *(v45 + *(v40) * 8);
                if (unique != 0)
                {
                    if (v6 != 0)
                    {
                        v35 = compare();
                        if (v35 != 0)
                        {
                            write_line();
                        }
                    }
                    if (v6 == 0 || v35 != 0)
                    {
                        v47 = v46[1];
                        v42 = v14;
                        if (v46[1] > v11)
                        {
                            v28 = v11;
                            while (true)
                            {
                                if (v28 != 0)
                                {
                                    v28 *= 2;
                                    v47 = v28;
                                }
                                rpl_free();
                                v21 = xmalloc();
                                v11 = v47;
                                v47 = v46[1];
                                v14 = v21;
                                v42 = v21;
                                break;
                            }
                        }
                        v41 = v46[0];
                        v15 = r14<8>;
                        memcpy(rdi<8>, v41, r14<8>);
                        v49 = v13;
                        v6 = v12;
                        if (v49 != 0)
                        {
                            v35 = v14 + v46[3] - v46[0];
                            v16 = v46[2] + v14 - v46[0];
                            v17 = v35;
                        }
                    }
                }
                else
                {
                    write_line();
                }
                v37 = *(v40);
                v39 = v3;
                v1 = *(v40);
                if (*(v39 + (v37 << 3)) >= v46)
                {
                    v24 = fillbuf();
                    if (((long long)v24) != 0)
                    {
                        v42 = *(v40);
                        tmp_38 = v4;
                        v46 = v2;
                        tmp_43 = *(v40) * 8;
                        v1 = *(v40);
                        tmp_11 = *(tmp_38 + (tmp_43 - v42) * 8 + 24) + *(tmp_38 + (tmp_43 - v42) * 8);
                        tmp_60 = *(tmp_38 + (tmp_43 - v42) * 8 + 16);
                        *(v45 + v42 * 8) = *(tmp_38 + (tmp_43 - v42) * 8 + 24) + *(tmp_38 + (tmp_43 - v42) * 8) - 32;
                        *(v3 + v42 * 8) = tmp_11 - tmp_60 * 32;
                        v21 = v1;
                    }
                    else
                    {
                        v37 = *(v40);
                        v27 = v40 + 8;
                        v41 = v40 + v2 * 8;
                        if (v2 != 1)
                        {
                            do
                            {
                                v38 = v27->field_0;
                                if (v27->field_0 > v37)
                                {
                                    v38 -= 1;
                                    v27->field_0 = v38;
                                    v37 = *(v40);
                                }
                                v27 += 8;
                            }
                            while (v41 != v27);
                        }
                        xfclose();
                        if (*(v40) < v10)
                        {
                            v10 -= 1;
                            zaptemp();
                        }
                        rpl_free();
                        v38 = *(v40);
                        if (v2 - 1 > *(v40))
                        {
                            v20 = v38 * 8;
                            v37 = v3;
                            v43 = v7;
                            v38 = v4 + v38 * 56;
                            v42 = v5;
                            do
                            {
                                v51 = *(v42 + v20 * 2 + 16);
                                v38 += 56;
                                v52 = v38->field_0;
                                v53 = v38->field_10;
                                *(v43 + v20) = *(v43 + v20 + 8);
                                tmp_48 = v38->field_30;
                                v54 = v38->field_20;
                                *(v42 + v20 * 2) = v51;
                                *(v38 + 0x8) = tmp_48;
                                tmp_65 = *(v45 + v20 + 8);
                                *(v38 + 0x38) = v52;
                                *(v45 + v20) = tmp_65;
                                v44 = *(v37 + v20 + 8);
                                *(v38 + 0x28) = v53;
                                *(v37 + v20) = v44;
                                v20 += 8;
                                *(v38 + 0x18) = v54;
                            }
                            while ((v2 << 3) - 8 != v20);
                        }
                        if (v2 - 1 == 0)
                        {
                            break;
                        }
                        v21 = v40;
                        v37 = v40 + v2 * 8 - 8;
                        do
                        {
                            v38 = *(v21 + 8);
                            v21 += 8;
                            *(v21 + 8) = v38;
                        }
                        while (v37 != v21);
                        v2 -= 1;
                    }
                }
                else
                {
                    v21 = v1;
                    *(v45 + v37 * 8) = v46 - 32;
                    v46 = v2;
                }
                if (*(v39 + (v37 << 3)) < v46 || ((long long)v24) != 0)
                {
                    if ((*(v39 + (v37 << 3)) < v46 || v46 == 1) && (v2 == 1 || *(v39 + (v37 << 3)) >= v46))
                    {
                        *(v40) = rax<8>;
                    }
                    if ((*(v39 + (v37 << 3)) < v46 || v46 != 1) && (*(v39 + (v37 << 3)) >= v46 || v2 != 1))
                    {
                        v47 = 1;
                        v0 = v45 + v21 * 8;
                        v21 = r13<8>;
                        v46 = 1;
                        v48 = v21;
                        while (true)
                        {
                            v39 = v40 + v47 * 8;
                            v21 = compare();
                            if (((int)v21) >= 0 && (v39->field_0 <= v1 || !(((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)))))
                            {
                                v46 = v47 + 1;
                                v47 = v47 + 1 + v48 >> 1;
                                if (v46 >= v48)
                                {
                                    break;
                                }
                            }
                            if (((int)v21) < 0 || ((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v39->field_0 > v1)
                            {
                                v48 = v47;
                                v47 = v46 + v47 >> 1;
                                if (v46 >= v48)
                                {
                                    break;
                                }
                            }
                        }
                        v41 = v40 + (v46 - 1) * 8;
                        if (v46 - 1 != 0)
                        {
                            v21 = v40;
                            v37 = v40 + v46 * 8 - 8;
                            do
                            {
                                v38 = *(v21 + 8);
                                v21 += 8;
                                *(v21 + 8) = v38;
                            }
                            while (v21 != v37);
                        }
                        v41->field_0 = v1;
                    }
                }
            }
            if (!(v6 != 0))
            {
                xfclose();
                rpl_free();
                rpl_free();
                rpl_free();
                rpl_free();
                rpl_free();
                return v18 ^ *(v50 + 0x28);
            }
            else if (unique != 0)
            {
                write_line();
                rpl_free();
                xfclose();
                rpl_free();
                rpl_free();
                rpl_free();
                rpl_free();
                rpl_free();
                return v18 ^ *(v50 + 0x28);
            }
            else
            {
                xfclose();
                rpl_free();
                rpl_free();
                rpl_free();
                rpl_free();
                rpl_free();
                return v18 ^ *(v50 + 0x28);
            }
        }
        xfclose();
        rpl_free();
        rpl_free();
        rpl_free();
        rpl_free();
        rpl_free();
        return v18 ^ *(v50 + 0x28);
    }
    xfclose();
    rpl_free();
    rpl_free();
    rpl_free();
    rpl_free();
    rpl_free();
    return v18 ^ *(v50 + 0x28);
}
