int verrevcmp()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v10;  // rbx
    unsigned long v11;  // rsi
    unsigned long long v12;  // rdi
    unsigned long long v13;  // r8
    unsigned long long|unsigned int v14;  // r9
    unsigned long long v15;  // r10
    unsigned long long v16;  // r10
    unsigned long long v17;  // r11
    unsigned long long v18;  // r11
    unsigned long long v19;  // r12
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r12
    unsigned long long v22;  // r12
    unsigned long long v4;  // rax
    unsigned long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    v4 = 0;
    v13 = 0;
    if (0 >= v11)
    {
        if (0 >= v5)
        {
            return 0;
        }
    }
    if (0 < v11 || 0 < v5)
    {
        v2 = v19;
        v1 = &stack_base+0;
        v0 = v7;
        while (true)
        {
            if (v4 < v11 || v4 < v11)
            {
                v14 = ((long long)*(v12 + v4));
                if (((int)*(v12 + v4)) - 48 > 9)
                {
                    v17 = ((long long)v14);
                    if (((int)(((long long)v14) - 48)) <= 9)
                    {
                        v15 = 0;
                    }
                }
            }
            if (((int)(((long long)*(v12 + v4)) - 48)) <= 9 || v13 != v5 || v5 != rax<8>)
            {
                v14 = ((long long)*(v6 + v13));
                v18 = 0;
            }
            if (((int)(((long long)*(v12 + v4)) - 48)) <= 9 || ((int)(((long long)v14) - 48)) > 9 || v13 != v5 || v5 != rax<8>)
            {
                v4 += 1;
                v13 += 1;
            }
            if (...)
            {
                v14 = ((long long)*(v6 + r8<8>));
                if (((int)*(v6 + r8<8>)) - 48 > 9)
                {
                    if (v4 != v11)
                    {
                        v17 = ((long long)*(v12 + v4));
                        v14 = ((long long)*(v12 + v4));
                    }
                    else
                    {
                        v15 = -1;
                        if (((int)(((long long)v14) - 48)) <= 9)
                        {
                            v18 = 0;
                            v16 = ((long long)(r10<8> - v18));
                            v8 = v0;
                            v21 = v2;
                            return v16;
                        }
                    }
                }
            }
            if (...)
            {
                v15 = r11<8>;
            }
            if (...)
            {
                v18 = -1;
                v16 = ((long long)(r10<8> - v18));
                v8 = v0;
                v21 = v2;
                return v16;
            }
            if (...)
            {
                if (v4 >= v11)
                {
                }
                else
                {
                    while (true)
                    {
                        if (*(v12 + rax<8>) == 48)
                        {
                            v4 = rax<8> + 1;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if (r8<8> < v5)
                {
                    while (true)
                    {
                        if (*(v6 + r8<8>) == 48)
                        {
                            v13 = r8<8> + 1;
                        }
                        else
                        {
                            v15 = 0;
                            if (v11 > v4)
                            {
                                while (true)
                                {
                                    v14 = ((long long)*(v12 + rax<8>));
                                    v18 = ((long long)*(v6 + r8<8>));
                                    if (((int)(((long long)*(v6 + r8<8>)) - 48)) <= 9)
                                    {
                                        v14 = ((int)(v14 - v18));
                                        v15 = ((long long)(((int)v15) == 0? ((int)r9<8>) : ((int)v15)));
                                        v4 = rax<8> + 1;
                                        v13 = r8<8> + 1;
                                        break;
                                    }
                                    else
                                    {
                                        v15 = 1;
                                        v9 = v0;
                                        v22 = v2;
                                        return v15;
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
                if (v11 > v4 && (r8<8> < v5 || v4 < v11))
                {
                    v15 = 0;
                    if (((int)*(v12 + v4)) - 48 <= 9)
                    {
                        v15 = 1;
                        v9 = v0;
                        v22 = v2;
                        return v15;
                    }
                    if (r8<8> < v5 || ((int)*(v12 + v4)) - 48 > 9)
                    {
                        if (((int)*(v6 + v13)) - 48 <= 9)
                        {
                            v10 = v0;
                            v20 = v2;
                            return -1;
                        }
                        if (((int)v15) != 0)
                        {
                            v9 = v0;
                            v22 = v2;
                            return v15;
                        }
                    }
                }
                if (r8<8> >= v5 || ((int)v15) == 0 && v11 > v4)
                {
                    v15 = 0;
                    v9 = v0;
                    v22 = v2;
                    return v15;
                }
            }
            if (v13 == v5)
            {
                v18 = -1;
                v16 = ((long long)(r10<8> - v18));
                v8 = v0;
                v21 = v2;
                return v16;
            }
            if (False)
            {
                v16 = ((long long)(r10<8> - v18));
                v8 = v0;
                v21 = v2;
                return v16;
            }
        }
    }
}
