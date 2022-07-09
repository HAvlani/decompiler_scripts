typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern <missing-type> binvert_table;

int factor_using_pollard_rho2()
{
    BOT tmp_19;  // tmp #19
    BOT tmp_2;  // tmp #2
    BOT tmp_3;  // tmp #3
    BOT tmp_66;  // tmp #66
    BOT tmp_93;  // tmp #93
    unsigned long v0;  // [bp-0xc8]
    unsigned long v1;  // [bp-0xc0]
    unsigned long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned long|unsigned long long v12;  // [bp-0x68]
    unsigned long v13;  // [bp-0x60]
    unsigned long v14;  // [bp-0x58]
    unsigned long v15;  // [bp-0x50]
    unsigned long v16;  // [bp-0x48]
    unsigned long v17;  // [bp-0x40]
    unsigned long long v19;  // rax
    unsigned long|unsigned long long v2;  // [bp-0xb8]
    unsigned long long v20;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long|unsigned long long v3;  // [bp-0xb0]
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long v33;  // rcx
    unsigned long|unsigned long long v34;  // rdx
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rbx
    unsigned long v4;  // [bp-0xa8]
    unsigned long long v40;  // rbp
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rdi
    unsigned long long v44;  // rdi
    unsigned long long v45;  // r8
    unsigned long long v46;  // r12
    unsigned long long v47;  // r12
    unsigned long long v48;  // r13
    unsigned long long v49;  // r13
    unsigned long v5;  // [bp-0xa0]
    unsigned long long v50;  // r15
    unsigned long long v51;  // cc_dep1
    struct_0 *v52;  // fs
    unsigned long|unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    unsigned long|unsigned long long v8;  // [bp-0x88]
    unsigned long v9;  // [bp-0x80]

    v50 = v44;
    v40 = v42;
    v7 = v36;
    v35 = 0;
    v10 = v33;
    v35 = ((char)(v44 < 2));
    v19 = 0 - ((long long)(v44 < 2)) + 1;
    v32 = ((long long)(((int)(0 - ((long long)(v44 < 2)))) & 64)) + 63;
    do
    {
        tmp_19 = v35;
        v35 *= 2;
        v19 = v19 * 2 | tmp_19 >> 63;
        if (v44 < v19 || ((char)(v44 == v19)) && v42 <= v35)
        {
            tmp_2 = v35;
            v35 -= v40;
            v19 = v19 - v44 - ((long long)(tmp_2 < v40));
        }
        v32 -= 1;
    }
    while (v32 != 18446744069414584319);
    v3 = v35;
    v43 = v35;
    v4 = v19;
    v34 = v35 * 2;
    v26 = v19 * 2 + ((v43 + v43 <= v43? 1 : 0) & 1);
    v12 = v26;
    v46 = v34;
    v41 = v26;
    v51 = v26;
    if (v26 > v26 || ((char)(v51 == v26)) && v46 >= v40)
    {
        v26 = v26 - v26 - ((long long)(v46 < v40));
        v12 = v26;
        v46 -= v40;
        v41 = v26;
    }
    v13 = v41;
    v14 = v41;
    if (v26 == 0)
    {
        if (v40 == 1)
        {
            return v17 ^ *(v52 + 0x28);
        }
    }
    if (v40 != 1 || v26 != 0)
    {
        v6 = v46;
        v38 = 1;
        v2 = 1;
        v9 = &stack_base-80;
        v48 = v50;
        while (true)
        {
            v30 = v48;
            v48 = v38;
            v5 = ...;
            v37 = v30;
            while (true)
            {
                v1 = v5;
                v0 = v40;
                v24 = mulredc2();
                tmp_3 = v24;
                v30 = v24 + v7;
                v34 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1);
                v12 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1);
                v46 = v30;
                v41 = v34;
                if (...)
                {
                    tmp_2 = v30;
                    v30 -= v40;
                    v34 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1) - v37 - ((long long)(tmp_2 < v40));
                    v12 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1) - v37 - ((long long)(tmp_2 < v40));
                    v46 = v30;
                    v41 = v34;
                }
                v1 = v5;
                v0 = v40;
                v3 = (long long)mulredc2();
                v4 = v16;
                if (((long long)(((int)v48) & 31)) != 1)
                {
                    v41 = v12;
                }
                else
                {
                    v30 = gcd2_odd();
                    if (v15 == 0 && v30 == 1)
                    {
                        v41 = v12;
                        v14 = v12;
                        /* goto 4212868; */
                    }
                    if (v15 != 0 || v30 != 1)
                    {
                        v8 = v46;
                        v46 = v37;
                        v38 = v40;
                        v11 = v48;
                        while (true)
                        {
                            v1 = v5;
                            v0 = v38;
                            v25 = mulredc2();
                            tmp_3 = v25;
                            v29 = v25 + v7;
                            v34 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1);
                            v14 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1);
                            v48 = v29;
                            v32 = v34;
                            if (...)
                            {
                                tmp_2 = v29;
                                v29 -= v38;
                                v34 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1) - v48 - ((long long)(tmp_2 < v38));
                                v14 = v16 + ((tmp_3 + v7 <= tmp_3? 1 : 0) & 1) - v48 - ((long long)(tmp_2 < v38));
                                v48 = v29;
                                v32 = v34;
                            }
                            v30 = gcd2_odd();
                            if (v15 == 0)
                            {
                                v45 = v30;
                                tmp_66 = v38;
                                v9 = &stack_base-80;
                                v48 = v46;
                                v38 = v11;
                                tmp_93 = ...;
                                v31 = ...;
                                v32 = tmp_93 - v31;
                                v40 = (tmp_93 - v31) * tmp_66;
                                if (v5 <= v46)
                                {
                                    v48 = v32 * (v49 - ((long long)(v40 * v5 >> 64)));
                                }
                                else
                                {
                                    v48 = 0;
                                }
                                if (v5 > 1)
                                {
                                    if (v5 > 25030008)
                                    {
                                        v5 = v45;
                                        v31 = prime_p.part.0();
                                    }
                                    if (v5 <= 25030008 || ((long long)v31) != 0)
                                    {
                                        factor_insert_multiplicity();
                                    }
                                }
                                if (v5 <= 1 || ((long long)v31) == 0 && v5 > 25030008)
                                {
                                    factor_using_pollard_rho();
                                }
                                if (v48 != 0)
                                {
                                    if ((long long)prime2_p() == 0)
                                    {
                                        mod2();
                                        v6 = (long long)mod2();
                                        mod2();
                                    }
                                    else
                                    {
                                        factor_insert_large();
                                        return v17 ^ *(v52 + 0x28);
                                    }
                                }
                            }
                            else
                            {
                                v45 = v30;
                                v40 = v38;
                                if (v15 == v48 && v30 == v38)
                                {
                                    factor_using_pollard_rho2();
                                    return v17 ^ *(v52 + 0x28);
                                }
                                if (v15 != v48 || v30 != v38)
                                {
                                    v2 = v45;
                                    v40 = ...;
                                    if ((long long)prime2_p() == 0)
                                    {
                                        factor_using_pollard_rho2();
                                    }
                                    else
                                    {
                                        factor_insert_large();
                                    }
                                }
                            }
                            if (v15 == 0 && v48 == 0 || v15 != v48 && v15 != 0 || v15 != 0 && v30 != v38)
                            {
                                if (v40 <= 1)
                                {
                                    factor_using_pollard_rho();
                                    return v17 ^ *(v52 + 0x28);
                                }
                                else if (v40 > 25030008)
                                {
                                    if ((long long)prime_p.part.0() != 0)
                                    {
                                        factor_insert_multiplicity();
                                        return v17 ^ *(v52 + 0x28);
                                    }
                                    factor_using_pollard_rho();
                                    return v17 ^ *(v52 + 0x28);
                                }
                                else
                                {
                                    factor_insert_multiplicity();
                                    return v17 ^ *(v52 + 0x28);
                                }
                            }
                        }
                    }
                }
                if (((long long)(((int)v48) & 31)) != 1 || v15 == 0 && v30 == 1)
                {
                    v48 -= 1;
                    v28 = v2;
                    v13 = rsi<8>;
                    v6 = v28 * 2;
                    if (v28 != 0)
                    {
                        v8 = r12<8>;
                        v50 = v48;
                        v47 = v37;
                        v48 = v7;
                        v39 = v40;
                        do
                        {
                            v1 = v5;
                            v0 = v39;
                            v20 = mulredc2();
                            tmp_3 = v20;
                            v28 = v20 + v48;
                            v32 = v16 + ((tmp_3 + v48 <= tmp_3? 1 : 0) & 1);
                            v12 = v16 + ((tmp_3 + v48 <= tmp_3? 1 : 0) & 1);
                            v34 = v28;
                            v41 = v32;
                            v51 = v32;
                            if (v32 > v0 || ((char)(v51 == v0)) && v34 >= v0)
                            {
                                v32 = v32 - v0 - ((long long)(v34 < v0));
                                v12 = v32;
                                v41 = v32;
                            }
                            v50 += 1;
                        }
                        while (v2 != v50);
                        v40 = v0;
                        v37 = v47;
                        v46 = v8;
                    }
                    v30 = v6;
                    v48 = v2;
                    v6 = v46;
                    v14 = rsi<8>;
                    v2 = v30;
                }
            }
        }
    }
}
