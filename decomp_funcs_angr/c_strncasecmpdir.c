int c_strncasecmp()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // r10
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rdx
    unsigned long v5;  // rdx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // r8
    unsigned long long v9;  // r9

    if (!(v7 != v6))
    {
        return 0;
    }
    else if (v5 != 0)
    {
        v10 = v5 - 1;
        v4 = 0;
        while (true)
        {
            v1 = ((long long)*(v7 + v4));
            v8 = ((long long)*(v7 + v4));
            if (((int)(((long long)*(v7 + v4)) - 65)) <= 25)
            {
                v1 = ((long long)(((int)v1) + 32));
                v8 = ((long long)(((int)v8) + 32));
            }
            v9 = ((long long)*(v6 + v4));
            v3 = ((long long)*(v6 + v4));
            if (((int)(((long long)*(v6 + v4)) - 65)) <= 25)
            {
                v9 = ((long long)(((int)v9) + 32));
                v3 = ((long long)(((int)v3) + 32));
            }
            if (v4 == v10)
            {
                v2 = ((long long)(v1 - v9));
                return v2;
            }
            else if (((int)v1) != 0)
            {
                v4 += 1;
                v2 = ((long long)(v1 - v9));
                return v2;
            }
            else
            {
                v2 = ((long long)(v1 - v9));
                return v2;
            }
        }
    }
    else
    {
        return 0;
    }
}
