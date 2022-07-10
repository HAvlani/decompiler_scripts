typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpn_mul()
{
    struct_0 *v0;  // [bp-0x40]
    unsigned long long v11;  // r13
    unsigned long long v12;  // r14
    unsigned long long v13;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    struct_0 * v6;  // rbx
    unsigned long v7;  // rsi
    unsigned long v8;  // rdi
    unsigned long v9;  // r8

    if (!(v5 >= v9))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r8<8>, 0x0<64>, cc_ndep<8>))))
    {
        v6 = v8;
        v13 = v5;
        v2 = v8 + (v5 + v9) * 8;
        v12 = v4;
        if (v8 + (v5 + v9 << 3) > v7)
        {
            v5 = v7 + v5 * 8;
            if (v8 < v5)
            {
                __assert_fail(); /* do not return */
            }
        }
        if (v8 + (v5 + v9 << 3) <= v7 || v8 >= v5)
        {
            if (v2 > v4)
            {
                if (v8 < v4 + (v9 << 3))
                {
                    __assert_fail(); /* do not return */
                }
            }
            if (v2 <= v4 || v8 >= v4 + (v9 << 3))
            {
                v0 = v8 + v13 * 8;
                v3 = mpn_mul_1();
                v0->field_0 = v3;
                v11 = v9 - 1;
                if (v9 - 1 != 1)
                {
                    while (true)
                    {
                        v6 += 8;
                        v12 += 8;
                        v3 = mpn_addmul_1();
                        *(v6 + v13 * 8) = v3;
                        v11 -= 1;
                        if (v11 == 1)
                        {
                            break;
                        }
                    }
                    return v3;
                }
                return v3;
            }
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
