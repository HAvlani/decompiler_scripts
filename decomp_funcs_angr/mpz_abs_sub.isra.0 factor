typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

int mpz_abs_sub.isra.0()
{
    unsigned long long v1;  // rax
    struct_1 * v10;  // rdi
    struct_0 *v11;  // r8
    unsigned long long v12;  // r9
    unsigned long long v13;  // r12
    unsigned long long|unsigned int v14;  // r13
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // cc_dep2
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long v4;  // rcx
    struct_0 *v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long|unsigned int v7;  // rbp
    unsigned long long v8;  // rsi
    unsigned long v9;  // rsi

    v14 = ((int)v9);
    v7 = ((int)v4);
    v13 = ((long long)((((int)(v9 >> 31)) ^ ((int)v9)) - ((int)(v9 >> 31))));
    v3 = ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
    v12 = v11->field_0;
    v8 = v5->field_0;
    v6 = v3;
    v16 = v3;
    if (v13 != v3)
    {
    }
    else
    {
        v1 = v13;
        while (true)
        {
            v1 -= 1;
            if (v1 != 18446744069414584319)
            {
                v15 = *(v8 + v1 * 8);
                v16 = *(v12 + v1 * 8);
                v13 = 0;
                v2 = v13;
                return v2;
            }
        }
    }
    if (v13 == v3 && v5 > v10->field_0 || !(((char)(v13 < v16))) && v13 != v3)
    {
        if (v5 <= v10->field_0)
        {
            v7 = v10->field_8;
        }
        else
        {
            v7 = (long long)mpz_realloc();
        }
        v1 = mpn_sub();
        if (!(v1 == 0))
        {
            __assert_fail(); /* do not return */
        }
        else if (v14 == 0)
        {
            v13 = 0;
            v2 = v13;
            return v2;
            v2 = v13;
            return v2;
        }
        else
        {
            while (true)
            {
                if (*(v7 + (v13 << 3) + 8) == 0)
                {
                    v13 -= 1;
                    v13 = 0;
                    v2 = v13;
                    return v2;
                }
            }
        }
    }
    if (((char)(v13 < v16)) && v13 != v3 || v13 == v3 && v5 > v10->field_0)
    {
        if (((int)v3) <= v10->field_0)
        {
            v14 = v10->field_8;
        }
        else
        {
            v14 = (long long)mpz_realloc();
        }
        v1 = mpn_sub();
        if (!(v1 == 0))
        {
            __assert_fail(); /* do not return */
        }
        else if (v7 == 0)
        {
            v13 = 0;
            v6 = 0 - v6;
            v13 = v6;
            v2 = v13;
            return v2;
            v2 = v13;
            return v2;
        }
        else
        {
            while (true)
            {
                if (*(v14 + (v6 << 3) + 8) == 0)
                {
                    v6 -= 1;
                    v13 = 0;
                    v2 = v13;
                    return v2;
                }
            }
        }
    }
}
