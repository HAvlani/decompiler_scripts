int setlocale_null_r()
{
    void *|unsigned long long v1;  // rax
    unsigned long long v12;  // r13
    unsigned long long v2;  // rax
    unsigned long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rbx
    void *v8;  // rbp
    void *v9;  // rsi

    v7 = v5;
    v1 = setlocale();
    if (&stack_base+0 != 0)
    {
        v8 = v1;
        v1 = strlen(v1);
        if (v5 <= v1)
        {
            v12 = 34;
            if (v5 == 0)
            {
                v2 = v12;
                return v2;
            }
            v6 = v5 - 1;
            memcpy(v9, v8, v6);
            *(v9 + v7 + 1) = 0;
            return 34;
        }
        memcpy(v9, v8, v1 + 1);
        return 0;
    }
    v12 = 22;
    if (v5 == 0)
    {
        v2 = v12;
        return v2;
    }
    else
    {
        *(v9) = 0;
        v2 = v12;
        return v2;
    }
}
