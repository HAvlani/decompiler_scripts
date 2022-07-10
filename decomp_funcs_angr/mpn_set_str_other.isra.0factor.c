typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int mpn_set_str_other.isra.0()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_4;  // tmp #4
    unsigned long v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long|unsigned long long|unsigned long long [2] v10;  // rdx
    unsigned long v11;  // rdx
    unsigned long long|char v12;  // rbx
    char *|unsigned long long v13;  // rsi
    unsigned long v14;  // rsi
    unsigned long long v15[2];  // rdi
    unsigned long|unsigned long long v16;  // r8
    unsigned long|unsigned long long v17;  // r9
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    struct_0 *v2;  // [bp-0x40]
    unsigned long long v20;  // r14
    unsigned long long v21;  // r15
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char *|unsigned long long v6;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rcx

    v0 = v11;
    v2 = v16;
    v1 = v17;
    if (v11 != 0)
    {
        v21 = v14;
        v20 = v8;
        v13 = ((long long)v2->field_0);
        v9 = ((long long)v2->field_0);
        v10 = ((long long)((0 CONCAT v0 - 1) % v13 >> 64));
        v5 = ((long long)*(v21));
        if (((long long)((0 CONCAT v0 - 1) % v13 >> 64)) != 0)
        {
            v16 = v10 - 1;
            v13 = v21 + 1;
            v17 = v21 + v10 - 1 + 2;
            do
            {
                v10 = ((long long)*(v13));
                v13 += 1;
                v5 = v20 * v5 + v10;
            }
            while (v13 != v17);
            v18 = v16 + 2;
        }
        else
        {
            v18 = 1;
        }
        v15[0] = v5;
        v19 = 1;
        if (v0 > v18)
        {
            v12 = ((long long)*(v21 + v18));
            v6 = v18 + 1;
            while (true)
            {
                v13 = v9 - 2;
                v6 += v21;
                v9 = v21 + r12<8> + 2 + v9 - 2;
                do
                {
                    v10 = ((long long)*(v6));
                    v6 += 1;
                    v12 = v20 * v12 + v10;
                }
                while (v6 != v9);
                v18 = v18 + v13 + 2;
                while (true)
                {
                    v10 = v15;
                    v13 = v19 * 8 + v15;
                    do
                    {
                        tmp_15 = rbx<8>;
                        v12 = 0;
                        tmp_4 = v10[0];
                        v10[0] = tmp_15 + v10[0];
                        v12 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t15, t4, cc_ndep<8>));
                        v10 += 8;
                    }
                    while (v13 != v10);
                    v5 = mpn_mul_1() + rbx<8>;
                    if (v5 + rbx<8> != 0)
                    {
                        v10[1] = v5;
                        v19 = 2;
                    }
                    if (v0 > v18)
                    {
                        if (v0 == v18)
                        {
                            v4 = v19;
                            return v4;
                        }
                        __assert_fail(); /* do not return */
                        v12 = ((long long)*(v21 + v18));
                        v9 = ((long long)v2->field_0);
                        v6 = v18 + 1;
                    }
                }
            }
        }
        else if (v0 == v18)
        {
            v4 = v19;
            return v4;
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
