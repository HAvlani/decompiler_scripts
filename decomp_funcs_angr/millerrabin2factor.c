int millerrabin2()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v10;  // rsi
    unsigned long long v11[2];  // rdi
    unsigned int v12;  // r8d
    unsigned long long v13[2];  // r9
    unsigned long long v14;  // r10
    unsigned long long v15[2];  // r13
    unsigned long long|unsigned int v16;  // r15
    unsigned long v17;  // cc_dep1
    unsigned long v2;  // [bp-0x58]
    char v3;  // [bp-0x49]
    unsigned long v4;  // [bp-0x48]
    unsigned long long v6;  // rax
    unsigned long v7;  // rcx
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbp

    v15 = v11;
    v8 = (long long)powm2();
    if (v13[0] == v8)
    {
        if (v13[1] == v4)
        {
            v3 = 1;
            return ((long long)v3);
        }
    }
    if (v13[0] != v8 || v13[1] != v4)
    {
        v6 = v15[0];
        v9 = v15[0] - v7;
        v14 = v15[1] - v11 - ((long long)(v15[0] < v7));
        v2 = v15[1] - v11 - ((long long)(v15[0] < v7));
        v17 = ((long long)(((char)(v8 == v9)) & ((char)(v10 == v14))));
        v3 = ((char)(v8 == v9)) & ((char)(v10 == v14));
        if (((char)v17) == 0)
        {
            v16 = 1;
            if (v12 <= 1)
            {
                return ((long long)v3);
            }
            while (true)
            {
                v1 = v10;
                v0 = v6;
                v8 = (long long)mulredc2();
                if (v11[0] - v7 == v8 && v2 != v4)
                {
                    v3 = 1;
                    return ((long long)v3);
                }
                if (v2 != v4 || v11[0] - v7 != v8)
                {
                    if (v13[1] == v4 && v13[0] == v8)
                    {
                        return ((long long)v3);
                    }
                    if (v13[1] != v4 || v13[0] != v8)
                    {
                        v16 = ((long long)((unsigned int)v16)) + 1;
                        if (v12 != ((int)v16))
                        {
                            v6 = v15[0];
                            return ((long long)v3);
                        }
                    }
                }
            }
        }
        v3 = 1;
        return ((long long)v3);
    }
}
