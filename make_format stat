int make_format()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    char *v10;  // rdx
    unsigned long long v11;  // rbx
    unsigned long v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long v14;  // rsi
    unsigned long v15;  // rdi
    unsigned long|unsigned long long|unsigned int v16;  // r12d
    unsigned long v17;  // r13
    unsigned long|unsigned long long v18;  // r14
    unsigned long v19;  // r15
    unsigned long v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x10]
    unsigned long v6;  // [bp-0x8]
    unsigned long long v8;  // rax
    unsigned long v9;  // rcx

    v6 = v19;
    v5 = v18;
    v4 = v17;
    v3 = v16;
    v13 = v15 + 1;
    v2 = v12;
    v11 = v15 + 1;
    v1 = v9;
    v0 = v15 + v14;
    if (v15 + 1 >= v15 + v14)
    {
    }
    else
    {
        while (true)
        {
            v16 = ((int)*(v11));
            v18 = ((long long)*(v11));
            v8 = strchr("'-+ #0I", ((int)*(v11)));
            if (v8 != 0)
            {
                v8 = strchr(v10, v16);
                if (v8 != 0)
                {
                    *(v13) = v18;
                    v13 += 1;
                }
                v11 += 1;
            }
            else if (v0 > v11)
            {
                v8 = 0;
                v16 = v0 - v11;
                break;
            }
        }
        while (true)
        {
            *(v13 + v8) = v18;
            v8 += 1;
            if (v16 == v8)
            {
                break;
            }
            v18 = ((long long)*(v11 + v8));
        }
    }
}
