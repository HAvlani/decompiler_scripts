extern <missing-type> fnmatch;
extern unsigned long long fnmatch_no_wildcards;

int exclude_fnmatch()
{
    BOT tmp_4;  // tmp #4
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long v3;  // rdx
    char [2] v4;  // rbx
    char [2]|unsigned long long v5;  // rsi
    unsigned long long v6;  // r8b
    char [2] v7;  // r12
    unsigned long long v8;  // r13

    v8 = &fnmatch_no_wildcards;
    v4 = v5;
    if ((((int)v3) & 0x10000000) != 0)
    {
        v8 = &fnmatch;
    }
    v1 = r13<8>();
    v6 = ((char)(((int)v1) == 0));
    if ((((int)v3) & 0x40000000) == 0)
    {
        v2 = ((long long)v4[0]);
        if (((long long)v4[0]) != 0)
        {
            while (v1 != 0)
            {
                while (true)
                {
                    v7 = v4;
                    v1 = v2;
                    v4 += 1;
                    v2 = ((long long)v4[0]);
                    tmp_4 = v1;
                    if (tmp_4 != 47)
                    {
                        v6 = 0;
                        return v6;
                    }
                    for (; v2 == 47; v4 += 1)
                    {
                        v2 = ((long long)v4[1]);
                        v7 = v4;
                    }
                    v5 = v4;
                    v1 = r13<8>();
                    v2 = ((long long)v7[1]);
                    v6 = ((char)(v1 == 0));
                    return v6;
                }
            }
            return 1;
        }
        return v6;
    }
    return v6;
}
