int bytes_split()
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long v10;  // rdx
    char|unsigned long|unsigned long long v11;  // bl
    unsigned long long|unsigned int v12;  // rbp
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rdi
    unsigned long v15;  // r8
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r14
    char v2;  // [bp-0x4a]
    unsigned long v21;  // cc_dep1
    char v3;  // [bp-0x49]
    unsigned long long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    char|unsigned long long v7;  // rax
    unsigned long long v9;  // rcx

    v19 = 0;
    v18 = v15;
    v16 = v14;
    v12 = 1;
    v11 = 1;
    v4 = v13;
    v5 = v10;
    if (v9 != 18446744069414584319)
    {
        v3 = ((char)(v9 < v10));
    }
    while (true)
    {
        if (((long long)bpl<1>) == 0)
        {
            v7 = lseek(0x0, ((int)r12<8>), 0x1);
            v16 = (v7 != 18446744069414584319? v14 : r12<8>);
            v11 = ((long long)(v7 != 18446744069414584319? 1 : ((int)rbx<8>)));
        }
        v9 = (long long)safe_read();
        if (v9 != 18446744069414584319)
        {
            v3 = ((char)(v9 == 0));
            if (v9 >= r12<8>)
            {
                v13 = v4;
                while (true)
                {
                    v12 = bpl<1> | bl<1>;
                    if (((char)((long long)(bpl<1> | bl<1>))) != 0)
                    {
                        v1 = rcx<8>;
                        v2 = ((char)(v15 == 0));
                        v0 = v13;
                        v12 = (long long)cwrite();
                    }
                    v11 = ((long long)bl<1>);
                    v19 = r14<8> + v11;
                    v21 = ((long long)(((char)(v19 < v18)) | v2));
                    v11 = ((char)(v19 < v18)) | v2;
                    if (((char)v21) == 0 && ((long long)bpl<1>) != 0)
                    {
                        return rax<8>;
                    }
                    if (((char)v21) != 0 || ((long long)bpl<1>) != 0)
                    {
                        v9 = rcx<8> - r12<8>;
                        v13 = v4 + r12<8>;
                        if (v14 <= v9)
                        {
                            v16 = v14;
                        }
                    }
                }
                if (v14 > v9 && (((char)v21) != 0 || ((long long)bpl<1>) != 0))
                {
                    v0 = v9;
                    v12 = cwrite();
                    v19 += rbx<8>;
                    v21 = ((long long)(((char)(v15 == v19)) & ((char)(v12 ^ 1))));
                }
            }
            else if (v9 != 0)
            {
                v7 = ((char)v12) | v11;
                if (((long long)(((char)v12) | v11)) == 0)
                {
                    v7 = ((long long)v7);
                    v12 = 0;
                    v19 += v7;
                    v21 = ((long long)(v18 == v19));
                    v11 = ((char)(v18 == v19));
                }
            }
            if (v9 < r12<8> && v9 != 0 || v3 != 0 && v9 >= r12<8>)
            {
                if (v9 >= r12<8> || ((long long)(((char)v12) | v11)) != 0)
                {
                    v0 = v9;
                    v12 = cwrite();
                    v19 += rbx<8>;
                    v21 = ((long long)(((char)(v15 == v19)) & ((char)(v12 ^ 1))));
                }
                if ((((char)v21) == 0 || v9 < r12<8>) && (((char)v21) == 0 || ((long long)(((char)v12) | v11)) == 0) && (((char)v21) == 0 || v9 >= r12<8> || ((long long)(((char)v12) | v11)) != 0))
                {
                    v16 -= v9;
                }
            }
        }
        else
        {
            v17 = (long long)quotearg_n_style_colon();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    if (v9 != 18446744069414584319 && (v9 < r12<8> || v3 != 0) && (v9 != 0 || v9 >= r12<8>) && (v9 >= r12<8> || ((long long)(((char)v12) | v11)) != 0))
    {
        return rax<8>;
    }
    else if (v9 < r12<8> && ((long long)(((char)v12) | v11)) == 0 && v9 != 18446744069414584319 && v9 != 0)
    {
        return rax<8>;
    }
    else if (v9 != 18446744069414584319 && (v9 < r12<8> || v3 != 0) && (((char)v21) == 0 || v9 == 0 || ((long long)(((char)v12) | v11)) == 0 || v9 >= r12<8>) && (((char)v21) == 0 || v9 == 0 || v9 >= r12<8> || ((long long)(((char)v12) | v11)) != 0))
    {
        v11 = v19 + 1;
    }
    return rax<8>;
    return rax<8>;
    v11 = v19 + 1;
    if (v19 >= v15)
    {
        return rax<8>;
    }
    while (true)
    {
        cwrite();
        v7 = v11;
        v11 += 1;
        if (v15 == v7)
        {
            break;
        }
    }
    return v7;
}
