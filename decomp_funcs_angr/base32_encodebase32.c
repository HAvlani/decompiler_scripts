extern char b32str.3249;

int base32_encode()
{
    BOT tmp_30;  // tmp #30
    BOT tmp_42;  // tmp #42
    unsigned long long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    char *|char [8] v10;  // rdx
    unsigned long long|char [8] v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rbp
    unsigned long|char *|unsigned long long|char v17;  // rsi
    char *v18;  // rdi
    char *|unsigned long long|char v19;  // r8
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v20;  // r10
    unsigned long long v21;  // r11
    unsigned long long v22;  // r12
    unsigned long long v23;  // r12
    unsigned long long v24;  // r12
    unsigned long long v25;  // r12
    unsigned long long v26;  // r13
    unsigned long long v27;  // r13
    unsigned long long v28;  // r13
    unsigned long long v29;  // r13
    unsigned long long v3;  // [bp-0x18]
    char *|unsigned long long|unsigned int|char v30;  // r14
    unsigned long long v31;  // r14
    unsigned long long v32;  // r14
    unsigned long long v33;  // r15
    unsigned long long v34;  // r15
    unsigned long long v35;  // r15
    unsigned long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    char [8] v7;  // rax
    unsigned long v8;  // rax
    unsigned long long v9;  // rcx

    if (!(v9 != 0))
    {
        return v8;
    }
    else if (v17 != 0)
    {
        v19 = ((long long)*(v18));
        v8 = ((long long)*(b32str.3249 + ((long long)(((int)v19) % 8 & 31))));
        v10[0] = *(b32str.3249 + ((long long)(((int)v19) % 8 & 31)));
        if (v9 != 1)
        {
            v7 = v10;
            v5 = v35;
            v21 = v17 - 1;
            v20 = v17 - 2;
            v4 = v30;
            v11 = 0;
            v3 = v26;
            v29 = v7 + v9;
            v2 = v24;
            v23 = v17 - 5;
            v1 = &stack_base+0;
            v16 = v17 - 4;
            v0 = v15;
            v12 = v17 - 3;
            while (true)
            {
                v19 *= 4;
                if (v21 != v11)
                {
                    v17 = ((long long)*(v18 + v11 + 1));
                    v7[1] = *(b32str.3249 + ((long long)(((int)(v19 + (((long long)*(v18 + v11 + 1)) >> 6))) & 31)));
                    if (v9 == 2)
                    {
                        break;
                    }
                    if (v9 != 2)
                    {
                        v19 = v17;
                        v19 = ((char)v17) % 2;
                        tmp_30 = r8<8>;
                        v7[2] = *(b32str.3249 + ((long long)(((int)tmp_30) & 31)));
                        if (v9 == 3)
                        {
                            break;
                        }
                        if (v9 != 3)
                        {
                            v17 = v19 * 16;
                            if (v11 != v20)
                            {
                                v30 = ((int)*(v18 + v11 + 2));
                                v19 = v29 - v7;
                                v7[3] = *(b32str.3249 + ((long long)(((int)(v17 + (((long long)*(v18 + v11 + 2)) >> 4))) & 31)));
                                if (v29 - v7 == 4)
                                {
                                    break;
                                }
                                if (v29 - v7 != 4)
                                {
                                    v30 = ((long long)v30) * 2;
                                    if (v11 != v12)
                                    {
                                        v17 = ((long long)*(v18 + v11 + 3));
                                        v7[4] = *(b32str.3249 + ((long long)(((int)(v30 + (((long long)*(v18 + v11 + 3)) >> 7))) & 31)));
                                        if (v19 == 5)
                                        {
                                            break;
                                        }
                                        if (v19 != 5)
                                        {
                                            v30 = v17;
                                            v30 = ((char)v17) % 4;
                                            tmp_30 = r14<8>;
                                            v7[5] = *(b32str.3249 + ((long long)(((int)tmp_30) & 31)));
                                            if (v9 == 6)
                                            {
                                                break;
                                            }
                                            if (v9 != 6)
                                            {
                                                v17 = v30 * 8;
                                                if (v16 != v11)
                                                {
                                                    v30 = ((int)*(v18 + v11 + 4));
                                                    v7[6] = *(b32str.3249 + ((long long)(((int)(v17 + (((long long)*(v18 + v11 + 4)) >> 5))) & 31)));
                                                    if (v19 == 7)
                                                    {
                                                        break;
                                                    }
                                                    if (v19 != 7)
                                                    {
                                                        v7 += 8;
                                                        v7[1] = *(b32str.3249 + ((long long)(v30 & 31)));
                                                        v30 = v9 - 8;
                                                        if (v9 == 8)
                                                        {
                                                            break;
                                                        }
                                                        if (v9 == 8)
                                                        {
                                                            v13 = v0;
                                                            v25 = v2;
                                                            v28 = v3;
                                                            v32 = v4;
                                                            v34 = v5;
                                                            return v7;
                                                        }
                                                        else if (v23 != v11)
                                                        {
                                                            v19 = ((long long)*(v18 + v11 + 5));
                                                            v11 += 5;
                                                            v17 = v19;
                                                            v17 = ((char)v19) % 8;
                                                            tmp_42 = rsi<8>;
                                                            v7[0] = *(b32str.3249 + ((long long)(((int)tmp_42) & 31)));
                                                            if (v9 == 9)
                                                            {
                                                                break;
                                                            }
                                                            if (v9 != 9)
                                                            {
                                                                v9 = v30;
                                                            }
                                                            else
                                                            {
                                                                v13 = v0;
                                                                v25 = v2;
                                                                v28 = v3;
                                                                v32 = v4;
                                                                v34 = v5;
                                                                return v7;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v11 = v7;
                                                            v11[0] = 0;
                                                            v13 = v0;
                                                            v25 = v2;
                                                            v28 = v3;
                                                            v32 = v4;
                                                            v34 = v5;
                                                            return v7;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v13 = v0;
                                                        v25 = v2;
                                                        v28 = v3;
                                                        v32 = v4;
                                                        v34 = v5;
                                                        return v7;
                                                    }
                                                }
                                                else
                                                {
                                                    v17 = ((long long)(((int)v17) & 24));
                                                    v7[6] = *(v17 + 0x4085c0);
                                                    if (v9 == 7)
                                                    {
                                                        break;
                                                    }
                                                    if (v9 != 7)
                                                    {
                                                        /* goto 4208634; */
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        v30 = ((long long)(((int)v30) & 30));
                                        v7[4] = *(v30 + 0x4085c0);
                                        if (v9 == 5)
                                        {
                                            break;
                                        }
                                        if (v9 != 5)
                                        {
                                            /* goto 4208614; */
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v17 = ((long long)(((int)v17) & 31));
                                v7[3] = *(v17 + 0x4085c0);
                                if (v9 == 4)
                                {
                                    v14 = v0;
                                    v22 = v2;
                                    v27 = v3;
                                    v31 = v4;
                                    v33 = v5;
                                    return v7;
                                }
                            }
                        }
                    }
                }
                else
                {
                    v19 = ((long long)(((int)v19) & 28));
                    v7[1] = *(v19 + 0x4085c0);
                    if (v9 == 2)
                    {
                        break;
                    }
                    if (v9 != 2)
                    {
                        v7[2] = 61;
                        if (v9 == 3)
                        {
                            break;
                        }
                        if (v9 != 3)
                        {
                            v7[3] = 61;
                            if (v9 == 4)
                            {
                                break;
                            }
                        }
                    }
                }
                if (v9 != 3 && v9 != 2)
                {
                    if (v9 != 4 && (v11 == v20 || v21 == v11))
                    {
                        v7[4] = 61;
                        if (v9 == 5)
                        {
                            break;
                        }
                    }
                    if (v9 != 5 && (v11 == v20 || v11 == v12 || v21 == v11) && (v11 != v20 || v9 != 4) && (v9 != 4 || v21 != v11) && (v11 == v20 || v21 == v11 || v29 - v7 != 4))
                    {
                        v7[5] = 61;
                        if (v9 == 6)
                        {
                            break;
                        }
                        if (v9 != 6)
                        {
                            v7[6] = 61;
                            if (v9 == 7)
                            {
                                break;
                            }
                        }
                    }
                }
                if (...)
                {
                    v7[7] = 61;
                    v11 = v7 + 8;
                    if (v9 == 8)
                    {
                        break;
                    }
                    if (v9 != 8)
                    {
                        v11[0] = 0;
                        break;
                    }
                    else
                    {
                        v13 = v0;
                        v25 = v2;
                        v28 = v3;
                        v32 = v4;
                        v34 = v5;
                        return v7;
                    }
                }
            }
            v13 = v0;
            v25 = v2;
            v28 = v3;
            v32 = v4;
            v34 = v5;
            return v7;
        }
        return v8;
    }
    else if (v9 != 0)
    {
        *(v10) = 0;
        return v8;
    }
    else
    {
        return v8;
    }
}
