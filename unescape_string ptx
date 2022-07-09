int unescape_string()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_19;  // tmp #19
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long|char [2]|char * v5;  // rbx
    unsigned long long|char [2] v6;  // rbp
    char v7[2];  // rdi

    v6 = v7;
    v1 = ((long long)v7[0]);
    v5 = v7;
    if (((long long)v7[0]) != 0)
    {
        while (true)
        {
            v4 = v5 + 1;
            if (v1 != 92)
            {
                v6[0] = v1;
                v6 += 1;
                v1 = ((long long)v5[1]);
                v5 = v4;
            }
            else
            {
                v1 = ((long long)v5[1]);
                if (((long long)v5[1]) != 0)
                {
                    v2 = ((long long)(((int)v1) - 48));
                    tmp_3 = v2;
                    if (((long long)tmp_3) <= 72)
                    {
                        /* goto ((long long)*(4315160 + ((long long)al<1>) * 4)) + 4315160; */
                    }
                    else
                    {
                        v6[0] = 92;
                        v3 = ((long long)v5[1]);
                        v6 += 2;
                        v5 += 2;
                        tmp_19 = v3;
                        *(v6 + 1) = tmp_19;
                        v1 = ((long long)*(v5));
                    }
                }
                else
                {
                    v6[0] = 0;
                    return v1;
                }
            }
            if (v1 != 92 || ((long long)v5[1]) != 0 && ((long long)tmp_3) > 72)
            {
                v6[0] = 0;
                return v1;
            }
        }
    }
    v6[0] = 0;
    return v1;
}
