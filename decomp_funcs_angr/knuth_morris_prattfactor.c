typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_413d20;

int knuth_morris_pratt()
{
    BOT tmp_0;  // tmp #0
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v10;  // rdi
    unsigned long long v12;  // r8
    char *|unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    struct_0 *v15;  // r14
    unsigned long long v3;  // rax
    unsigned long|unsigned long long v4;  // rax
    char *|struct_0 * v6;  // rcx
    unsigned long|unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi

    v13 = v10;
    rsp<8> = &stack_base-56;
    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(rdx<8>, 0x3<8>), Shl(rdx<8>, 0x2<8>), cc_ndep<8>)))))
    {
        v3 = 0;
        return v3;
    }
    else if ([D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(rdx<8>, 0x3<8>), Shl(rdx<8>, 0x2<8>), cc_ndep<8>) == 0)
    {
        v8 = v9;
        v14 = v7;
        v15 = v6;
        if (v7 << 3 <= 4000)
        {
            v7 = &stack_base-56 - (v7 * 8 + 54 & 0xfffffffefffff000);
            if (&stack_base-56 != &stack_base-56 - (v7 * 8 + 54 & 0xfffffffefffff000))
            {
                do
                {
                    rsp<8> = rsp<8> - 0x1000;
                    v0 = v0;
                }
                while (rsp<8> != v7);
            }
            v4 = ((long long)(((int)(tmp_0 & 0xfffffffefffffff0)) & 4095));
            rsp<8> = rsp<8> - v4;
            if (v4 != 0)
            {
                v1 = v1;
            }
            v10 = (rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0;
            if (((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) == 0)
            {
                v3 = 0;
                return v3;
            }
        }
        rsp<8> = &stack_base-64;
        v10 = (long long)mmalloca();
        if (v10 == 0)
        {
            v3 = 0;
            return v3;
        }
        if (v7 << 3 <= 4000 && ((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) != 0 || v7 << 3 > 4000 && v10 != 0)
        {
            *(v10 + 8) = 1;
            if (v14 > 2)
            {
                v4 = 0;
                v12 = 2;
                while (true)
                {
                    v9 = ((long long)*(v8 + v12 + 1));
                    if (*(v8 + v12 + 1) == *(v8 + v4))
                    {
                    }
                    else
                    {
                        while (true)
                        {
                            if (v4 != 0)
                            {
                                v4 -= *(v10 + v4 * 8);
                            }
                            else
                            {
                                *(v10 + 2 * 8) = 2;
                                v4 = 0;
                                break;
                            }
                        }
                        if (v4 != 0)
                        {
                            v4 += 1;
                            *(v10 + v12 * 8) = v12 - v4;
                        }
                        else if (v4 == 0)
                        {
                            v12 += 1;
                            if (v14 == v12)
                            {
                                break;
                            }
                        }
                    }
                    v4 += 1;
                    *(v10 + v12 * 8) = v12 - v4;
                }
            }
            v6->field_0 = 0;
            v7 = ((long long)*(v13));
            if (((long long)*(v13)) != 0)
            {
                v6 = v13;
                v4 = 0;
                while (true)
                {
                    if (*(v8 + v4) == v7)
                    {
                        v4 += 1;
                        v6 += 1;
                        if (v14 == v4)
                        {
                            v15->field_0 = v13;
                            rsp<8> = rsp<8> - 8;
                            v1 = &g_413d20;
                            freea();
                            v3 = 1;
                            break;
                        }
                    }
                    else if (v4 != 0)
                    {
                        v13 += *(v10 + v4 * 8);
                        v4 -= *(v10 + v4 * 8);
                    }
                    else
                    {
                        v13 += 1;
                        v6 += 1;
                        /* goto 4275455; */
                    }
                    if (v14 != v4 || *(v8 + v4) != v7)
                    {
                        v7 = ((long long)*(rcx<8>));
                        rsp<8> = rsp<8> - 8;
                        v1 = &g_413d20;
                        freea();
                        v3 = 1;
                        return v3;
                    }
                }
                return v3;
            }
            rsp<8> = rsp<8> - 8;
            v1 = &g_413d20;
            freea();
            v3 = 1;
            return v3;
        }
    }
    else
    {
        v3 = 0;
        return v3;
    }
}
