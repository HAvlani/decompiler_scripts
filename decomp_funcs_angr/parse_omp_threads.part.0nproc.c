int parse_omp_threads.part.0()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_7;  // tmp #7
    unsigned long long v0;  // [bp-0x18]
    unsigned long long|unsigned int v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rdx
    unsigned long long|char [2] v5;  // rdi

    v2 = ((long long)v5[0]);
    if (((long long)v5[0]) != 0)
    {
        if (!(((char)(((long long)v5[0]) <= 13))) || !(((char)(((long long)v2) <= 8))))
        {
            while (true)
            {
                v2 = ((long long)v5[1]);
                v5 += 1;
                tmp_6 = v2;
                if (((long long)tmp_6) != 0)
                {
                    v2 = 0;
                    return v2;
                }
            }
            if (!(((char)(((long long)v2) <= 13))) && ((long long)tmp_6) != 0)
            {
                v2 = ((int)(((int)v2) - 48));
            }
            if (((int)v2) - 48 > 9)
            {
                v2 = ((int)(((int)v2) - 48));
                if (((int)v2) - 48 > 9)
                {
                    v2 = 0;
                    return v2;
                }
                v0 = 0;
                v2 = strtoul();
                if (v0 == 0)
                {
                    v2 = 0;
                    return v2;
                }
                else
                {
                    v3 = ((long long)*(NULL));
                    if (((long long)*(NULL)) == 0)
                    {
                        return v2;
                    }
                    else
                    {
                        v4 = 1;
                        while (true)
                        {
                            if (!(((char)(((long long)v3) <= 8))))
                            {
                                while (true)
                                {
                                    v0 = v4;
                                    v3 = ((long long)*(v4));
                                    v4 += 1;
                                    tmp_7 = v3;
                                    if (((long long)tmp_7) != 0)
                                    {
                                        return v2;
                                    }
                                }
                                v2 = 0;
                                return v2;
                            }
                        }
                        return v2;
                        v2 = 0;
                        return v2;
                    }
                }
            }
        }
        if (((char)(((long long)v5[0]) <= 13)) || ((int)v2) - 48 > 9)
        {
            if (((char)(((long long)v2) <= 8)))
            {
                v2 = 0;
                return v2;
            }
        }
    }
    v2 = 0;
    return v2;
}
