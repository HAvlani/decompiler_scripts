int filename_unescape()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long|unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    char * v6;  // r9

    v2 = v5 + 1;
    v3 = 0;
    if (v4 != 0)
    {
        while (true)
        {
            v1 = ((long long)*(v5 + v3));
            if (((long long)*(v5 + v3)) != 0)
            {
                if (v1 != 92)
                {
                    *(v2 + 1) = v1;
                    v6 = v2;
                }
                else if (v4 - 1 != v3)
                {
                    v3 += 1;
                    v1 = ((long long)*(v5 + v3));
                    if (*(v5 + v3) != 110)
                    {
                        if (v1 == 114)
                        {
                            *(v2 + 1) = 13;
                            v6 = v2;
                            /* goto 4209686; */
                        }
                        else if (v1 != 92)
                        {
                            return 0;
                        }
                        if (v1 == 92)
                        {
                            *(v2 + 1) = 92;
                            v6 = v2;
                        }
                    }
                    else
                    {
                        *(v2 + 1) = 10;
                        v6 = v2;
                    }
                }
                else
                {
                    return 0;
                }
                if (v1 != 92 || *(v5 + v3) == 110 && v4 - 1 != v3 || v1 == 114 && v4 - 1 != v3 || v1 == 92 && v4 - 1 != v3)
                {
                    v3 = rdx<8> + 1;
                    v2 += 1;
                    v4 += v5;
                    if (v6 >= v4)
                    {
                        break;
                    }
                    if (v6 < v4)
                    {
                        *(v6) = 0;
                        break;
                    }
                    else
                    {
                        return v5;
                    }
                }
            }
            else
            {
                return 0;
            }
        }
        return v5;
    }
    return v5;
}
