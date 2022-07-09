extern char b32str.3249;

int base32_encode()
{
    BOT tmp_30;  // tmp #30
    BOT tmp_42;  // tmp #42
    unsigned long long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    char [8]|unsigned long long v10;  // rdx
    char [8]|char * v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rbp
    char|unsigned long|char *|unsigned long long v17;  // rsi
    char *v18;  // rdi
    char|char *|unsigned long long v19;  // r8
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
    unsigned int|char|char *|unsigned long long v30;  // r14
    unsigned long long v31;  // r14
    unsigned long long v32;  // r14
    unsigned long long v33;  // r15
    unsigned long long v34;  // r15
    unsigned long long v35;  // r15
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long v7;  // rax
    char [8] v8;  // rax
    unsigned long long v9;  // rcx

    if (!(v9 != 0))
    {
        return v7;
    }
    else if (v17 != 0)
    {
        v19 = ((long long)*(v18));
        v7 = ((long long)*(b32str.3249 + ((long long)(((int)v19) % 8 & 31))));
        v11[0] = *(b32str.3249 + ((long long)(((int)v19) % 8 & 31)));
        if (v9 != 1)
        {
            v8 = v11;
            v5 = v35;
            v21 = v17 - 1;
            v20 = v17 - 2;
            v4 = v30;
            v10 = 0;
            v3 = v27;
            v28 = v8 + v9;
            v2 = v22;
            v25 = v17 - 5;
            v1 = &stack_base+0;
            v16 = v17 - 4;
            v0 = v13;
            v15 = v17 - 3;
            while (true)
            {
                v19 *= 4;
                if (v21 != v10)
                {
                    v17 = ((long long)*(v18 + v10 + 1));
                    v8[1] = *(b32str.3249 + ((long long)(((int)(v19 + (((long long)*(v18 + v10 + 1)) >> 6))) & 31)));
                    if (v9 == 2)
                    {
                        break;
                    }
                    if (v9 != 2)
                    {
                        v19 = v17;
                        v19 = ((char)v17) % 2;
                        tmp_30 = r8<8>;
                        v8[2] = *(b32str.3249 + ((long long)(((int)tmp_30) & 31)));
                        if (v9 == 3)
                        {
                            break;
                        }
                        if (v9 != 3)
                        {
                            v17 = v19 * 16;
                            if (v10 != v20)
                            {
                                v30 = ((int)*(v18 + v10 + 2));
                                v19 = v28 - v8;
                                v8[3] = *(b32str.3249 + ((long long)(((int)(v17 + (((long long)*(v18 + v10 + 2)) >> 4))) & 31)));
                                if (v28 - v8 == 4)
                                {
                                    break;
                                }
                                if (v28 - v8 != 4)
                                {
                                    v30 = ((long long)v30) * 2;
                                    if (v10 != v15)
                                    {
                                        v17 = ((long long)*(v18 + v10 + 3));
                                        v8[4] = *(b32str.3249 + ((long long)(((int)(v30 + (((long long)*(v18 + v10 + 3)) >> 7))) & 31)));
                                        if (v19 == 5)
                                        {
                                            break;
                                        }
                                        if (v19 != 5)
                                        {
                                            v30 = v17;
                                            v30 = ((char)v17) % 4;
                                            tmp_30 = r14<8>;
                                            v8[5] = *(b32str.3249 + ((long long)(((int)tmp_30) & 31)));
                                            if (v9 == 6)
                                            {
                                                break;
                                            }
                                            if (v9 != 6)
                                            {
                                                v17 = v30 * 8;
                                                if (v16 != v10)
                                                {
                                                    v30 = ((int)*(v18 + v10 + 4));
                                                    v8[6] = *(b32str.3249 + ((long long)(((int)(v17 + (((long long)*(v18 + v10 + 4)) >> 5))) & 31)));
                                                    if (v19 == 7)
                                                    {
                                                        break;
                                                    }
                                                    if (v19 != 7)
                                                    {
                                                        v8 += 8;
                                                        v8[1] = *(b32str.3249 + ((long long)(v30 & 31)));
                                                        v30 = v9 - 8;
                                                        if (v9 == 8)
                                                        {
                                                            break;
                                                        }
                                                        if (v9 == 8)
                                                        {
                                                            v14 = v0;
                                                            v24 = v2;
                                                            v29 = v3;
                                                            v32 = v4;
                                                            v33 = v5;
                                                            return v8;
                                                        }
                                                        else if (v25 != v10)
                                                        {
                                                            v19 = ((long long)*(v18 + v10 + 5));
                                                            v10 += 5;
                                                            v17 = v19;
                                                            v17 = ((char)v19) % 8;
                                                            tmp_42 = rsi<8>;
                                                            v8[0] = *(b32str.3249 + ((long long)(((int)tmp_42) & 31)));
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
                                                                v14 = v0;
                                                                v24 = v2;
                                                                v29 = v3;
                                                                v32 = v4;
                                                                v33 = v5;
                                                                return v8;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v10 = v8;
                                                            v10[0] = 0;
                                                            v14 = v0;
                                                            v24 = v2;
                                                            v29 = v3;
                                                            v32 = v4;
                                                            v33 = v5;
                                                            return v8;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v14 = v0;
                                                        v24 = v2;
                                                        v29 = v3;
                                                        v32 = v4;
                                                        v33 = v5;
                                                        return v8;
                                                    }
                                                }
                                                else
                                                {
                                                    v17 = ((long long)(((int)v17) & 24));
                                                    v8[6] = *(v17 + 0x409ae0);
                                                    if (v9 == 7)
                                                    {
                                                        break;
                                                    }
                                                    if (v9 != 7)
                                                    {
                                                        /* goto 4212330; */
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        v30 = ((long long)(((int)v30) & 30));
                                        v8[4] = *(v30 + 0x409ae0);
                                        if (v9 == 5)
                                        {
                                            break;
                                        }
                                        if (v9 != 5)
                                        {
                                            /* goto 4212310; */
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v17 = ((long long)(((int)v17) & 31));
                                v8[3] = *(v17 + 0x409ae0);
                                if (v9 == 4)
                                {
                                    v12 = v0;
                                    v23 = v2;
                                    v26 = v3;
                                    v31 = v4;
                                    v34 = v5;
                                    return v8;
                                }
                            }
                        }
                    }
                }
                else
                {
                    v19 = ((long long)(((int)v19) & 28));
                    v8[1] = *(v19 + 0x409ae0);
                    if (v9 == 2)
                    {
                        break;
                    }
                    if (v9 != 2)
                    {
                        v8[2] = 61;
                        if (v9 == 3)
                        {
                            break;
                        }
                        if (v9 != 3)
                        {
                            v8[3] = 61;
                            if (v9 == 4)
                            {
                                break;
                            }
                        }
                    }
                }
                if (v9 != 2 && v9 != 3)
                {
                    if (v9 != 4 && (v10 == v20 || v21 == v10))
                    {
                        v8[4] = 61;
                        if (v9 == 5)
                        {
                            break;
                        }
                    }
                    if (v9 != 5 && (v10 == v15 || v10 == v20 || v21 == v10) && (v9 != 4 || v10 != v20) && (v9 != 4 || v21 != v10) && (v10 == v20 || v21 == v10 || v28 - v8 != 4))
                    {
                        v8[5] = 61;
                        if (v9 == 6)
                        {
                            break;
                        }
                        if (v9 != 6)
                        {
                            v8[6] = 61;
                            if (v9 == 7)
                            {
                                break;
                            }
                        }
                    }
                }
                if (...)
                {
                    v8[7] = 61;
                    v10 = v8 + 8;
                    if (v9 == 8)
                    {
                        break;
                    }
                    if (v9 != 8)
                    {
                        v10[0] = 0;
                        break;
                    }
                    else
                    {
                        v14 = v0;
                        v24 = v2;
                        v29 = v3;
                        v32 = v4;
                        v33 = v5;
                        return v8;
                    }
                }
            }
            v14 = v0;
            v24 = v2;
            v29 = v3;
            v32 = v4;
            v33 = v5;
            return v8;
        }
        return v7;
    }
    else if (v9 != 0)
    {
        *(v11) = 0;
        return v7;
    }
    else
    {
        return v7;
    }
}
