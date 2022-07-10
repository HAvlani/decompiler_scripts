int c_strcasecmp()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v10;  // r8
    unsigned long long v11;  // r9
    unsigned int v12;  // r10d
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi

    if (v9 != v8)
    {
        v0 = v6;
        v5 = 0;
        while (true)
        {
            v2 = ((long long)*(v9 + v5));
            v11 = ((long long)*(v8 + v5));
            v10 = ((long long)*(v9 + v5));
            v4 = ((long long)*(v8 + v5));
            v6 = ((long long)*(v8 + v5));
            v12 = ((int)(((long long)*(v8 + v5)) - 65));
            if (((int)(((long long)*(v9 + v5)) - 65)) <= 25)
            {
                v2 = ((long long)(((int)v2) + 32));
                v10 = ((long long)(((int)v10) + 32));
            }
            else if (v12 > 25)
            {
                if (((int)v2) == 0)
                {
                    v3 = ((long long)(v2 - v6));
                    v7 = v0;
                    return v3;
                }
            }
            if (v12 <= 25)
            {
                v6 = v11 + 32;
                v4 = ((long long)(((int)v4) + 32));
                if (((int)rax<8>) == 0)
                {
                    v3 = ((long long)(v2 - v6));
                    v7 = v0;
                    return v3;
                }
            }
            if (((int)(((long long)*(v9 + v5)) - 65)) <= 25 && v12 > 25 || v12 <= 25 && ((int)rax<8>) != 0 || ((int)v2) != 0 && v12 > 25)
            {
                v5 += 1;
                v3 = ((long long)(v2 - v6));
                v7 = v0;
                return v3;
            }
        }
    }
    return 0;
}
