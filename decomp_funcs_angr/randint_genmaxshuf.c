int randint_genmax()
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v10;  // rbp
    unsigned long|unsigned long long v11;  // rsi
    unsigned long|unsigned long long [3] v12;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    unsigned long long v15[3];  // r14
    char v2;  // [bp-0x47]
    unsigned long|unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long|char * v7;  // rdx
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbx

    v15 = v12;
    v14 = v11 + 1;
    v10 = v11;
    v13 = v12[1];
    v9 = v12[2];
    while (true)
    {
        if (v9 < v10)
        {
            v5 = v9;
            v8 = 0;
            do
            {
                v8 += 1;
                v5 = v5 * 0x100 + 255;
            }
            while (v10 > v5);
            v0 = v12[0];
            randread();
            v7 = &v1;
            do
            {
                v4 = ((long long)v1);
                v7 = &v2;
                v9 = v9 * 0x100 + 255;
                v13 = v13 * 0x100 + v4;
            }
            while (v10 > v9);
            if (v9 == v10)
            {
                v15[2] = 0;
                v15[1] = 0;
                v6 = v13;
                return v6;
            }
        }
        else if (v9 == v10)
        {
            v15[2] = 0;
            v15[1] = 0;
            v6 = v13;
            return v6;
        }
        if (v9 < v10 && v9 != v10 || v9 >= v10 && v9 != v10)
        {
            v12 = ((long long)((0 CONCAT v9 - v10) % v14 >> 64));
            v11 = ((long long)((0 CONCAT v9 - v10) % v14));
            v9 -= ((long long)((0 CONCAT v9 - v10) % v14 >> 64));
            v4 = ((long long)((0 CONCAT r12<8>) % v14));
            v7 = ((long long)((0 CONCAT r12<8>) % v14 >> 64));
            if (r12<8> > v9)
            {
                v9 = v12 - 1;
                v13 = v7;
            }
            else
            {
                v15[1] = v4;
                v15[2] = v11;
                v6 = v13;
                return v6;
            }
        }
    }
}
