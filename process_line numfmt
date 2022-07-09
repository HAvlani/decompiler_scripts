extern struct_0 delimiter;
extern char line_delim;
extern unsigned long long stdout[7];

int process_line()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_19;  // tmp #19
    unsigned int v0;  // [bp-0x3c]
    unsigned long v10;  // r12
    unsigned int v12;  // r13d
    unsigned long long v13;  // r14
    char [2] v14;  // r15
    unsigned long|unsigned long long|char *|unsigned int v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long|char * v4;  // rdx
    unsigned long long [7]|char [2] v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long v7;  // rsi
    char v8[2];  // rdi
    unsigned int v9;  // r12d

    v14 = v8;
    v13 = 1;
    v12 = 0;
    v9 = 1;
    v2 = ((long long)delimiter);
    v6 = ((long long)v8[0]);
    v0 = ((int)v7);
    while (true)
    {
        if (((int)v6) != v2)
        {
            v5 = v14;
            while (true)
            {
                v4 = ((long long)v5[1]);
                v5 += 1;
                tmp_6 = v4;
            }
            if (((long long)tmp_6) != 0)
            {
                v5[0] = 0;
                v2 = process_field();
                tmp_19 = ((long long)v2);
                v2 = ((int)delimiter);
                v9 = ((int)((tmp_19 & 255) == 0? ((int)v12) : ((int)r12<8>)));
                v4 = *(stdout + 40);
            }
            else
            {
                v10 = ((long long)((long long)process_field() == 0? 0 : ((int)r12<8>)));
            }
        }
        else
        {
            v5 = stdout;
        }
        v5[0] = 0;
        v2 = process_field();
        tmp_19 = ((long long)v2);
        v2 = ((int)delimiter);
        v9 = ((int)((tmp_19 & 255) == 0? ((int)v12) : ((int)r12<8>)));
        v4 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v4) = ((char)(delimiter != 128? delimiter : 32));
        }
        else
        {
            __overflow();
            v2 = ((long long)delimiter);
        }
        v14 = v5 + 1;
        v13 += 1;
        v6 = ((long long)v5[1]);
    }
    if (*(stdout + 40) >= *(stdout + 48) || ((long long)v6) != 0)
    {
    }
    else
    {
        v10 = ((long long)((long long)process_field() == 0? 0 : ((int)r12<8>)));
    }
    if (((long long)bpl<1>) != 0)
    {
        v5 = r15<8>;
        v4 = *(__ctype_b_loc());
        while (true)
        {
            if (((long long)(*(v4 + (((long long)bpl<1>) << 1)) & 1)) == 0 && bpl<1> != 10)
            {
                v2 = ((long long)v5[0]);
                while (true)
                {
                    if (((long long)(*(v4 + (((long long)v2) << 1)) & 1)) == 0 && v2 != 10)
                    {
                        v2 = ((long long)*(rbx<8> + 1));
                        v5 = rbx<8> + 1;
                        tmp_6 = v2;
                        break;
                    }
                    if (v2 == 10 || ((long long)(*(v4 + (((long long)v2) << 1)) & 1)) != 0)
                    {
                        v6 = ((long long)v5[0]);
                        break;
                    }
                }
                if (((long long)(*(v4 + (((long long)v2) << 1)) & 1)) == 0 && ((long long)tmp_6) == 0 && v2 != 10)
                {
                    v10 = ((long long)((long long)process_field() == 0? 0 : ((int)r12<8>)));
                }
            }
            if (bpl<1> == 10 || ((long long)(*(v4 + (((long long)bpl<1>) << 1)) & 1)) != 0)
            {
                v6 = ((long long)v5[1]);
                v5 += 1;
                tmp_6 = v6;
                break;
            }
        }
        if (((long long)tmp_6) == 0 && bpl<1> == 10 || ((long long)tmp_6) == 0 && ((long long)(*(v4 + (((long long)bpl<1>) << 1)) & 1)) != 0 || ((long long)(*(v4 + (((long long)bpl<1>) << 1)) & 1)) == 0 && ((long long)v5[0]) == 0 && bpl<1> != 10)
        {
            v10 = ((long long)((long long)process_field() == 0? 0 : ((int)r12<8>)));
        }
    }
    v10 = ((long long)((long long)process_field() == 0? 0 : ((int)r12<8>)));
    v3 = v10;
    return v3;
    v2 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v2) = line_delim;
        v3 = v10;
        return v3;
    }
    __overflow();
    v3 = v10;
    return v3;
}
