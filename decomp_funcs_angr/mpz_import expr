typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_import()
{
    BOT tmp_27;  // tmp #27
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp+0x8]
    unsigned long|unsigned long long v10;  // rdi
    unsigned long|unsigned long long v11;  // r8
    unsigned long|unsigned long long v12;  // r9
    unsigned long long|unsigned int v13;  // r10
    unsigned long long v14;  // r11
    struct_0 *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v17;  // r13
    unsigned long long v18;  // r14
    unsigned long|unsigned long long v19;  // r15
    unsigned long long v2;  // rax
    unsigned int v21;  // r15d
    unsigned long long v3;  // rax
    unsigned long|unsigned long long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbp
    unsigned long long|char * v9;  // rsi

    v16 = v1;
    if (!(v12 == 0))
    {
        gmp_die(); /* do not return */
    }
    else if ((((int)(v6 + 1)) & -3) == 0)
    {
        v21 = ((int)v11);
        if (((int)(v11 + 1)) <= 2)
        {
            v15 = v10;
            v19 = ((long long)(((int)v11) == 0? -1 : ((int)r15<8>)));
            v8 = v9;
            v7 = v5;
            v18 = ((((int)v11) == 0? -1 : ((int)v11)) == ((int)v6)? v12 : v5 << 1);
            if (((int)v6) == 1)
            {
                v18 = 0 - ((((int)v11) == 0? -1 : tmp_27) == ((int)v6)? v12 : v5 << 1);
                v16 = v1 + v5 * (v9 - 1);
            }
            v17 = (((int)v19) == 1? v16 + v7 - 1 : v16);
            v0 = v8 * v7 + 7 >> 3;
            v2 = ((long long)v15->field_0);
            if (((long long)v15->field_0) >= v8 * v7 + 7 >> 3)
            {
                v14 = v15->field_8;
            }
            else
            {
                v2 = mpz_realloc();
                v14 = v2;
            }
            if (v8 != 0)
            {
                v3 = 0;
                v12 = 0;
                v10 = 0 - v19;
                v13 = 0;
                v19 = (0 - v19) * v7;
                do
                {
                    v11 = 0;
                    v9 = v17;
                    if (v7 != 0)
                    {
                        do
                        {
                            v5 = v3 * 8;
                            v3 += 1;
                            tmp_27 = v5;
                            v12 |= ((long long)*(v9)) << (tmp_27 & 63);
                            if (v3 == 8)
                            {
                                *(v14 + v13 * 8) = v12;
                                v3 = 0;
                                v13 += 1;
                                v12 = 0;
                            }
                            v11 += 1;
                            v9 += v10;
                        }
                        while (v7 != v11);
                        v17 += v19;
                    }
                    v17 = r13<8> + v18;
                    v8 -= 1;
                }
                while (v8 != 1);
                v2 = ((long long)(v3 != 0)) + v13;
                if (v2 == v0)
                {
                    if (v12 != 0)
                    {
                        *(v14 + v13 * 8) = v12;
                        v13 = ((long long)(((int)v13) + 1));
                        v15->field_4 = v13;
                        return v2;
                    }
                    if (v13 == 0)
                    {
                        v13 = 0;
                        v15->field_4 = v13;
                        return v2;
                    }
                    else
                    {
                        while (true)
                        {
                            if (*(v14 + (r10<8> << 3) + 8) == 0)
                            {
                                v13 = r10<8> - 1;
                                v13 = 0;
                                v15->field_4 = v13;
                                return v2;
                            }
                            else
                            {
                                v15->field_4 = v13;
                                return v2;
                            }
                        }
                    }
                }
                __assert_fail(); /* do not return */
            }
            else if (v0 == 0)
            {
                v13 = 0;
                v15->field_4 = v13;
                return v2;
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        __assert_fail(); /* do not return */
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
