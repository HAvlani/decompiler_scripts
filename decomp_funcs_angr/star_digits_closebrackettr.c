int star_digits_closebracket()
{
    char *v1;  // rcx
    unsigned long long v2;  // rdx
    char * v3;  // rsi
    unsigned long long [3]|unsigned long long v4;  // rdi
    char *v5;  // r8
    unsigned long long v6;  // r9

    v1 = v4[0];
    v6 = 0;
    if (*(v4[0] + v3) != 42)
    {
        return v6;
    }
    v5 = v4[1];
    v6 = ((long long)*(v4[1] + v3));
    if (((long long)*(v4[1] + v3)) == 0)
    {
        v4 = v4[2];
        v3 += 1;
        if (v3 >= v4)
        {
            return v6;
        }
        else
        {
            while (true)
            {
                v2 = ((long long)*(v1 + v3));
                if (((int)*(v1 + v3)) - 48 <= 9)
                {
                    if (*(v5 + v3) != 0)
                    {
                        return v6;
                    }
                    else
                    {
                        v3 += 1;
                        return 0;
                    }
                }
                else
                {
                    if (v2 != 93)
                    {
                        return v6;
                    }
                    else
                    {
                        v6 = ((long long)(((int)*(v5 + v3)) ^ 1));
                    }
                }
            }
            return v6;
        }
    }
    else
    {
        return 0;
    }
}
