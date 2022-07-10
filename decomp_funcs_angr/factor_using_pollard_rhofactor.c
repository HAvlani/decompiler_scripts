extern <missing-type> binvert_table;

int factor_using_pollard_rho()
{
    BOT tmp_2;  // tmp #2
    BOT tmp_15;  // tmp #15
    BOT tmp_95;  // tmp #95
    BOT tmp_100;  // tmp #100
    unsigned long long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long|unsigned long long v10;  // rdx
    unsigned long long v11;  // rbx
    unsigned long|unsigned long long v12;  // rbp
    unsigned long|unsigned long long|unsigned int v13;  // esi
    unsigned long long v14;  // rdi
    unsigned long long v15;  // r8
    unsigned long long v16;  // r8
    unsigned long long v17;  // r9
    unsigned long long v18;  // r10
    unsigned long long v19;  // r12
    unsigned long v2;  // [bp-0x58]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned long|unsigned long long v22;  // r15
    unsigned long long|unsigned int v23;  // cc_dep1
    unsigned long|unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx

    v1 = v13;
    v2 = v10;
    if (v14 > 1)
    {
        v19 = v14;
        v5 = v1 + 1;
        while (true)
        {
            v9 = v19;
            v13 = 64;
            v7 = 1;
            v10 = 0;
            v14 = 0;
            do
            {
                v15 = v9 * 0x8000000000000000;
                v9 = v9 % 2;
                v10 = v10 % 2 | v15;
                if (v9 < v7 || v10 <= v14 && ((char)(v9 == v7)))
                {
                    tmp_2 = v14;
                    v14 -= v10;
                    v7 = v7 - rcx<8> - ((long long)(tmp_2 < v10));
                }
                v23 = v13;
                v13 = ((long long)v13) - 1;
            }
            while (v23 != 1);
            v20 = v14;
            v0 = 1;
            v21 = 1;
            v12 = (0 - ((long long)!(v19 - v14 <= v14)) & v19) + v14 * 2 - v19;
            v11 = (0 - ((long long)!(v19 - v14 <= v14)) & v19) + v14 * 2 - v19;
            v22 = (0 - ((long long)!(v19 - v14 <= v14)) & v19) + v14 * 2 - v19;
            while (true)
            {
                if (v1 < v19)
                {
                    v15 = ...;
                    v18 = v19 - v1;
                    v17 = v1 - v19;
                    while (true)
                    {
                        tmp_15 = ((long long)((v12 * v12 >> 64) - ((v15 * ((long long)(v12 * v12))) * v19 >> 64)));
                        tmp_95 = ((long long)((v12 * v12 >> 64) - ((v15 * ((long long)(v12 * v12))) * v19 >> 64))) + v19;
                        tmp_100 = ((long long)(v12 * v12 >> 64)) < ((long long)((v15 * ((long long)(v12 * v12))) * v19 >> 64));
                        v12 = ...;
                        v20 = (...? ... : ((long long)(...)));
                        if (((long long)(((int)v21) & 31)) == 1)
                        {
                            v7 = gcd_odd();
                            if (v7 == 1)
                            {
                                v11 = v12;
                            }
                            else
                            {
                                while (true)
                                {
                                    v11 = ...;
                                    v7 = gcd_odd();
                                    if (v14 != 1)
                                    {
                                        break;
                                    }
                                }
                                v14 = v7;
                                if (v3 != v19)
                                {
                                    v8 = ((long long)((0 CONCAT v19) % v3));
                                    v16 = ((long long)((0 CONCAT v19) % v3));
                                    v19 = ((long long)((0 CONCAT v19) % v3));
                                    if (v3 <= 1 || ((long long)v8) == 0 && v3 > 25030008)
                                    {
                                        v3 = v16;
                                        v7 = factor_using_pollard_rho();
                                        v15 = v3;
                                        v23 = v3;
                                    }
                                    if (v3 > 1)
                                    {
                                        if (v3 > 25030008)
                                        {
                                            v3 = v14;
                                            v4 = v8;
                                            v8 = prime_p.part.0();
                                            v16 = v4;
                                        }
                                        if (v3 <= 25030008 || ((long long)v8) != 0)
                                        {
                                            v3 = v16;
                                            v7 = factor_insert_multiplicity();
                                            v15 = v3;
                                            v23 = v3;
                                        }
                                        if (v15 > 25030008)
                                        {
                                            v3 = v15;
                                            v7 = prime_p.part.0();
                                            v15 = v3;
                                            if (((long long)v7) == 0)
                                            {
                                                v12 = ((long long)((0 CONCAT v12) % v15 >> 64));
                                                v22 = ((long long)((0 CONCAT v22) % v15 >> 64));
                                                break;
                                            }
                                        }
                                    }
                                    else if (!(((char)(v23 == 1))))
                                    {
                                        v22 = 0;
                                        v12 = 0;
                                        break;
                                    }
                                    else
                                    {
                                        return v7;
                                    }
                                }
                                else
                                {
                                    v1 += 1;
                                    v5 += 1;
                                    break;
                                }
                            }
                        }
                        if (v7 == 1 || ((long long)(((int)v21) & 31)) != 1)
                        {
                            v21 -= 1;
                            v9 = v0 * 2;
                            if (v0 != 0)
                            {
                                v7 = v12;
                                do
                                {
                                    v21 += 1;
                                    v7 = ...;
                                }
                                while (v21 != 1);
                                v22 = v12;
                                v0 = 1 * 2;
                                v11 = v7;
                                v12 = v7;
                            }
                            else
                            {
                                v21 = v0;
                                v11 = v12;
                                v0 = v9;
                                v22 = v12;
                            }
                        }
                    }
                    if (v3 == v19)
                    {
                        v9 = v19;
                        v13 = 64;
                        v7 = 1;
                        v10 = 0;
                        v14 = 0;
                    }
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
