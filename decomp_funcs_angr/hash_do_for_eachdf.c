int hash_do_for_each()
{
    unsigned long long v1;  // rax
    unsigned long long v10[2];  // r15
    unsigned long long v3;  // rdx
    unsigned long long [2] v4;  // rbx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rsi
    unsigned long long|unsigned long long [2] v7;  // rdi
    unsigned long long v8;  // r12
    unsigned long long [2] v9;  // r14

    v9 = v7[0];
    if (v7[1] > v7[0])
    {
        v10 = v7;
        v5 = v6;
        v8 = 0;
        do
        {
            v7 = v9[0];
            if (v9[0] != 0)
            {
                v4 = v9;
                while (true)
                {
                    v6 = v3;
                    if ((long long)rbp<8>() != 0)
                    {
                        v4 = v4[1];
                        v8 += 1;
                        v7 = v4[0];
                    }
                    else
                    {
                        v1 = v8;
                        return v1;
                    }
                }
            }
            v9 += 16;
        }
        while (v10[1] > v9);
        v1 = v8;
        return v1;
    }
    v8 = 0;
    v1 = v8;
    return v1;
}