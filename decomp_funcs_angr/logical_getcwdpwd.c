extern unsigned int g_40711a;

int logical_getcwd()
{
    char v0;  // [bp-0x148]
    unsigned long v1;  // [bp-0x140]
    char v2;  // [bp-0xb8]
    unsigned long v3;  // [bp-0xb0]
    char [4]|unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdi
    unsigned long|unsigned long long v9;  // r12

    v5 = getenv("PWD");
    if (v9 != 0)
    {
        v9 = v5;
        if (*(v5) == 47)
        {
            v8 = v9;
            while (true)
            {
                v5 = strstr(v8, "/.");
                if (v5 != 0)
                {
                    v7 = ((long long)v5[2]);
                    if (((long long)v5[2]) != 0)
                    {
                        v9 = 0;
                        v6 = v9;
                        return v6;
                        if (v7 != 47)
                        {
                            v9 = 0;
                            v6 = v9;
                            return v6;
                            if (v7 == 46)
                            {
                                v7 = ((long long)v5[3]);
                                if (((long long)v5[3]) != 0)
                                {
                                    v9 = 0;
                                    v6 = v9;
                                    return v6;
                                    if (v7 == 47)
                                    {
                                        v9 = 0;
                                        v6 = v9;
                                        return v6;
                                    }
                                }
                            }
                            if (v7 != 46 || ((long long)v5[3]) != 0 && v7 != 47)
                            {
                                v8 = v5 + 1;
                            }
                        }
                    }
                }
                else
                {
                    v5 = __xstat(0x1, ((int)v9), ((int)&v0));
                    if (v5 != 0)
                    {
                        v9 = 0;
                        v6 = v9;
                        return v6;
                    }
                    v5 = __xstat(0x1, &g_40711a, ((int)&v2));
                    if (v5 != 0)
                    {
                        v9 = 0;
                        v6 = v9;
                        return v6;
                    }
                    else if (v1 != v3)
                    {
                        v9 = 0;
                        v6 = v9;
                        return v6;
                    }
                    else if (v0 != v2)
                    {
                        v9 = 0;
                        v6 = v9;
                        return v6;
                    }
                    else
                    {
                        v6 = v9;
                        return v6;
                    }
                }
            }
        }
        else
        {
            v9 = 0;
            v6 = v9;
            return v6;
        }
    }
    else
    {
        v9 = 0;
        v6 = v9;
        return v6;
    }
}
