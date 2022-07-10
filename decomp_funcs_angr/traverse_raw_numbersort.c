extern char decimal_point;
extern struct_0 thousands_sep;

int traverse_raw_number()
{
    BOT tmp_30;  // tmp #30
    unsigned long long|char [2] v1;  // rax
    unsigned long long|char [2] v2;  // rdx
    unsigned int v3;  // edx
    char [2] v4;  // rsi
    char *v5[2];  // rdi
    unsigned long long v6;  // r8
    unsigned long long v7;  // r10

    v1 = v5[0];
    v4 = v5[0] + 1;
    v2 = ((long long)v5[0][0]);
    if (((int)v5[0][0]) - 48 <= 9)
    {
        v6 = 0;
        do
        {
            v7 = 1;
            v6 = ((long long)(((char)(((long long)v6) < ((long long)v2)))? ((int)v2) : ((int)r8<8>)));
            v3 = ((int)v1[1]);
            v1 += 2;
            if (v3 != thousands_sep)
            {
                v1 = v4;
                v7 = 0;
            }
            v4 = rax<8> + 1;
            v2 = ((long long)*(rax<8>));
        }
        while (((int)*(rax<8>)) - 48 <= 9);
        if (((long long)v7) != 0)
        {
            v5[0] = v1 - 1;
            return v6;
        }
    }
    v6 = 0;
    if (((long long)v7) == 0 || ((int)v5[0][0]) - 48 > 9)
    {
        if (decimal_point != v2)
        {
            v4 -= 1;
            v5[0] = v4;
            return v6;
        }
        v2 = v4 + 1;
        v1 = ((long long)v4[0]);
        if (((int)v4[0]) - 48 > 9)
        {
            v5[0] = v4;
            return v6;
        }
        else
        {
            do
            {
                v4 = v2;
                v6 = ((long long)(((char)(((long long)r8b<1>) < ((long long)v1)))? ((int)v1) : ((int)r8<8>)));
                tmp_30 = ((long long)v2[0]);
                v2 += 1;
                v1 = tmp_30;
            }
            while (((int)tmp_30) - 48 <= 9);
            v5[0] = v4;
            return v6;
        }
    }
}
