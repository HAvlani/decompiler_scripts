typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_41a6a0;

int knuth_morris_pratt()
{
    BOT tmp_0;  // tmp #0
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long|unsigned long long v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned long long v13;  // r8
    char *|unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    struct_0 *v16;  // r14
    unsigned long v2;  // [bp-0x8]
    unsigned long long v4;  // rax
    unsigned long|unsigned long long v6;  // rax
    char *|struct_0 * v7;  // rcx
    unsigned long|unsigned long long v8;  // rdx
    unsigned long long v9;  // rbx

    v14 = v11;
    rsp<8> = &stack_base-56;
    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(rdx<8>, 0x3<8>), Shl(rdx<8>, 0x2<8>), cc_ndep<8>)))))
    {
        v4 = 0;
        return v4;
    }
    else if ([D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(rdx<8>, 0x3<8>), Shl(rdx<8>, 0x2<8>), cc_ndep<8>) == 0)
    {
        v9 = v10;
        v15 = v8;
        v16 = v7;
        if (v8 << 3 <= 4000)
        {
            v8 = &stack_base-56 - (v8 * 8 + 54 & 0xfffffffefffff000);
            if (&stack_base-56 != &stack_base-56 - (v8 * 8 + 54 & 0xfffffffefffff000))
            {
                do
                {
                    rsp<8> = rsp<8> - 0x1000;
                    v1 = v1;
                }
                while (rsp<8> != v8);
            }
            v6 = ((long long)(((int)(tmp_0 & 0xfffffffefffffff0)) & 4095));
            rsp<8> = rsp<8> - v6;
            if (v6 != 0)
            {
                v2 = v2;
            }
            v11 = (rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0;
            if (((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) == 0)
            {
                v4 = 0;
                return v4;
            }
        }
        rsp<8> = &stack_base-64;
        v11 = (long long)mmalloca();
        if (v11 == 0)
        {
            v4 = 0;
            return v4;
        }
        if (v8 << 3 <= 4000 && ((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) != 0 || v8 << 3 > 4000 && v11 != 0)
        {
            *(v11 + 8) = 1;
            if (v15 > 2)
            {
                v6 = 0;
                v13 = 2;
                while (true)
                {
                    v10 = ((long long)*(v9 + v13 + 1));
                    if (*(v9 + v13 + 1) == *(v9 + v6))
                    {
                    }
                    else
                    {
                        while (true)
                        {
                            if (v6 != 0)
                            {
                                v6 -= *(v11 + v6 * 8);
                            }
                            else
                            {
                                *(v11 + 2 * 8) = 2;
                                v6 = 0;
                                break;
                            }
                        }
                        if (v6 != 0)
                        {
                            v6 += 1;
                            *(v11 + v13 * 8) = v13 - v6;
                        }
                        else if (v6 == 0)
                        {
                            v13 += 1;
                            if (v15 == v13)
                            {
                                break;
                            }
                        }
                    }
                    v6 += 1;
                    *(v11 + v13 * 8) = v13 - v6;
                }
            }
            v7->field_0 = 0;
            v8 = ((long long)*(v14));
            if (((long long)*(v14)) != 0)
            {
                v7 = v14;
                v6 = 0;
                while (true)
                {
                    if (*(v9 + v6) == v8)
                    {
                        v6 += 1;
                        v7 += 1;
                        if (v15 == v6)
                        {
                            v16->field_0 = v14;
                            rsp<8> = rsp<8> - 8;
                            v0 = &g_41a6a0;
                            freea();
                            v4 = 1;
                            break;
                        }
                    }
                    else if (v6 != 0)
                    {
                        v14 += *(v11 + v6 * 8);
                        v6 -= *(v11 + v6 * 8);
                    }
                    else
                    {
                        v14 += 1;
                        v7 += 1;
                        /* goto 4302463; */
                    }
                    if (*(v9 + v6) != v8 || v15 != v6)
                    {
                        v8 = ((long long)*(v7));
                        rsp<8> = rsp<8> - 8;
                        v0 = &g_41a6a0;
                        freea();
                        v4 = 1;
                        return v4;
                    }
                }
                return v4;
            }
            rsp<8> = rsp<8> - 8;
            v0 = &g_41a6a0;
            freea();
            v4 = 1;
            return v4;
        }
    }
    else
    {
        v4 = 0;
        return v4;
    }
}
