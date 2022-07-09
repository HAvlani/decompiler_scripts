extern <missing-type> binvert_table;
extern unsigned int g_417208;
extern <missing-type> g_41a59c;
extern char primes_diff;

int prime2_p.part.0()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_0;  // tmp #0
    BOT tmp_19;  // tmp #19
    BOT tmp_43;  // tmp #43
    BOT tmp_6;  // tmp #6
    BOT tmp_47;  // tmp #47
    BOT tmp_2;  // tmp #2
    BOT tmp_57;  // tmp #57
    BOT tmp_83;  // tmp #83
    unsigned long|char * v0;  // [bp-0x208]
    unsigned long v1;  // [bp-0x200]
    unsigned long long v10;  // [bp-0x1b8]
    unsigned int v11;  // [bp-0x1b0]
    char v12;  // [bp-0x1a9]
    unsigned long v13;  // [bp-0x1a8]
    unsigned long|unsigned long long v14;  // [bp-0x1a0]
    unsigned long|unsigned long long v15;  // [bp-0x198]
    unsigned long v16;  // [bp-0x190]
    unsigned long long v17;  // [bp-0x188]
    unsigned long v18;  // [bp-0x180]
    unsigned long v19;  // [bp-0x178]
    unsigned long v2;  // [bp-0x1f8]
    unsigned long v20;  // [bp-0x170]
    unsigned long v21;  // [bp-0x168]
    unsigned long|unsigned long long v22;  // [bp-0x160]
    unsigned long v23;  // [bp-0x158]
    unsigned long v24;  // [bp-0x150]
    unsigned long v25;  // [bp-0x148]
    unsigned long v26;  // [bp-0x140]
    char v27;  // [bp-0x4e]
    unsigned long long v29;  // rax
    unsigned long v3;  // [bp-0x1f0]
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long|char v33;  // cl
    unsigned long long v34;  // rcx
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rbp
    unsigned long long v39;  // rsi
    unsigned long v4;  // [bp-0x1e8]
    unsigned long long v40;  // rdi
    unsigned long long v41;  // r15
    unsigned long long v42;  // cc_dep1
    unsigned long long v43;  // cc_dep2
    unsigned long long v5;  // [bp-0x1e0]
    unsigned long v6;  // [bp-0x1d8]
    unsigned long long v7;  // [bp-0x1d0]
    unsigned long long v8;  // [bp-0x1c8]
    unsigned long|unsigned long long v9;  // [bp-0x1c0]

    v41 = v39;
    v37 = v40;
    v5 = v40 - ((long long)(v39 == 0));
    v30 = v40 - ((long long)(v39 == 0));
    v4 = v39 - 1;
    if (v39 == 1)
    {
        tmp_4 = BinaryOp ExpCmpNE;
        tmp_19 = UnaryOp Ctz;
        v14 = 0;
        v13 = v40 - ((long long)(v39 == 0)) >> (((char)(tmp_4? tmp_19 : rcx<8>)) & 63);
        v11 = ((int)((tmp_4? tmp_19 : rcx<8>) + 64));
    }
    else
    {
        v39 = v5;
        tmp_43 = v4;
        tmp_6 = BinaryOp ExpCmpNE;
        tmp_47 = UnaryOp Ctz;
        v11 = ((int)(tmp_6? tmp_47 : rax<8>));
        v13 = v39 << (((char)(64 - ((int)(tmp_6? tmp_47 : rax<8>)))) & 63) | tmp_43 >> (((char)(tmp_6? tmp_47 : rax<8>)) & 63);
        v14 = v39 >> (((char)(tmp_6? tmp_47 : rax<8>)) & 63);
    }
    v36 = 0;
    v34 = ((long long)(((int)(0 - ((long long)(v37 < 2)))) & 64)) + 63;
    v36 = ((char)(v37 < 2));
    v29 = 0 - ((long long)(v37 < 2)) + 1;
    do
    {
        tmp_19 = v36;
        v36 *= 2;
        v29 = v29 * 2 | tmp_19 >> 63;
        if (v37 < v29 || v19 <= v36 && ((char)(v40 == v29)))
        {
            tmp_2 = v36;
            v36 -= v19;
            v29 = v29 - v37 - ((long long)(tmp_2 < v19));
        }
        v34 -= 1;
    }
    while (v34 != 18446744069414584319);
    v18 = v29;
    v17 = v36;
    v33 = v36 * 2;
    v32 = v29 * 2 + ((v36 + v36 <= v36? 1 : 0) & 1);
    v16 = v32;
    v15 = v36 * 2;
    v43 = v32;
    if (v37 < v32 || ((char)(v40 == v43)) && v19 <= v33)
    {
        tmp_2 = v33;
        v33 -= v19;
        v32 = v32 - v37 - ((long long)(tmp_2 < v19));
        v16 = v32;
        v15 = v33;
    }
    v19 = v41;
    v20 = v37;
    v6 = &stack_base-424;
    v12 = (char)millerrabin2();
    if (((long long)v12) != 0)
    {
        v3 = &stack_base-328;
        factor();
        v42 = v5 * 0x8000000000000000 | v4 >> 1;
        v8 = v5 >> 1;
        v0 = &primes_diff;
        v38 = 2;
        v7 = v42;
        v2 = &stack_base-360;
        while (true)
        {
            if (v26 != 0)
            {
                tmp_57 = v25;
                v9 = &stack_base-392;
                v22 = 0;
                tmp_83 = ((long long)*(binvert_table + ((long long)(((int)(tmp_57 >> 1)) & 127))));
                v1 = &stack_base-336;
                v21 = (((tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83) * 2 - tmp_57 * (tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83) * (tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83)) * 2 - tmp_57 * ((tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83) * 2 - tmp_57 * (tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83) * (tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83)) * ((tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83) * 2 - tmp_57 * (tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83) * (tmp_83 * 2 - tmp_57 * tmp_83 * tmp_83))) * v4;
                v23 = (long long)powm2();
                if (v23 != v43)
                {
                    if (v27 == 0)
                    {
                        return ((long long)v12);
                    }
                }
                if (v27 == 0)
                {
                    v33 = ((char)(v24 != v18));
                }
            }
            else if (v27 != 0)
            {
                v1 = &stack_base-336;
            }
            else
            {
                return ((long long)v12);
            }
            if (v27 != 0 && (v26 == 0 || v24 != v18 || v23 != v43))
            {
                v9 = 2;
                v10 = v37;
                v37 = 1;
                while (true)
                {
                    v36 = *(v3 + v37 * 8 + 8);
                    if (*(v3 + (v37 << 3) + 8) != 2 || *(v3 + (v37 << 3) + 8) != 2)
                    {
                        v39 = v5;
                        v33 = ...;
                        v40 = ...;
                        if (v5 >= v36)
                        {
                            v21 = v40;
                            v33 = (v39 - ((long long)(v21 * v36 >> 64))) * v33;
                            v22 = v33;
                        }
                        else
                        {
                            v21 = v21;
                            v22 = 0;
                        }
                    }
                    v23 = (long long)powm2();
                    if (*(v3 + (v37 << 3) + 8) == 2 || *(v3 + (v37 << 3) + 8) == 2 && v23 != v17 && ((int)v27) > ((int)v37))
                    {
                        v21 = v7;
                        v22 = v8;
                    }
                    if (v23 == v17)
                    {
                        v33 = ((char)(v24 != v18));
                        if (((int)v27) > ((int)v37))
                        {
                            v37 += 1;
                            v37 = v10;
                            v38 = v9;
                            break;
                        }
                        else
                        {
                            v37 = v10;
                            v38 = v9;
                            break;
                        }
                    }
                    else if (((int)v27) > ((int)v37))
                    {
                        v37 += 1;
                        v36 = *(v3 + v37 * 8 + 8);
                        return ((long long)v12);
                    }
                }
                if (v24 == v18 && v23 == v17 && ((int)v27) > ((int)v37))
                {
                    v38 = rbp<8> + ((long long)*(v0));
                    v36 = (rbx<8> <= v38? v38 : 0);
                    v33 = (0 - ((long long)(v38 < rbx<8>)) & 18446744069414584256) + 127;
                    v31 = (!(rbx<8> <= v38)? v38 : 0);
                }
            }
            if (v27 != 0 || ((long long)v33) == 0 && v23 == v43 && v26 != 0)
            {
                v38 = rbp<8> + ((long long)*(v0));
                v36 = (rbx<8> <= v38? v38 : 0);
                v33 = (0 - ((long long)(v38 < rbx<8>)) & 18446744069414584256) + 127;
                v31 = (!(rbx<8> <= v38)? v38 : 0);
                do
                {
                    tmp_19 = v36;
                    v36 *= 2;
                    v31 = v31 * 2 | tmp_19 >> 63;
                    if (v37 < v31 || ((char)(v37 == v31)) && v19 <= v36)
                    {
                        tmp_2 = v36;
                        v36 -= v19;
                        v31 = v31 - v37 - ((long long)(tmp_2 < v19));
                    }
                    v33 -= 1;
                }
                while (v33 != 18446744069414584319);
                v15 = v36;
                v16 = v31;
                v1 = &stack_base-392;
                v32 = millerrabin2();
                if (((long long)v32) != 0)
                {
                    v0 += 1;
                    error(0x0, 0x0, dcgettext(0x0, &g_417208, 0x5));
                    abort(); /* do not return */
                }
                v12 = 0;
                return ((long long)v12);
            }
            if (((long long)v33) != 0 && (v23 == v43 || v27 != 0) && (v26 != 0 || v27 != 0) && (v26 == 0 || v27 == 0 || v24 != v18 || v23 != v43))
            {
                return ((long long)v12);
            }
        }
    }
    return ((long long)v12);
}
