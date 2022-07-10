int setlocale_null_r()
{
    void *v11;  // rsi
    unsigned long long v12;  // r13
    unsigned long long|void * v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rbx
    void *v8;  // rbp

    v7 = v5;
    v2 = setlocale();
    if (&stack_base+0 != 0)
    {
        v8 = v2;
        v2 = strlen(v2);
        if (v5 <= v2)
        {
            v12 = 34;
            if (v5 == 0)
            {
                v3 = v12;
                return v3;
            }
            v6 = v5 - 1;
            memcpy(v11, v8, v6);
            *(v11 + v7 + 1) = 0;
            return 34;
        }
        memcpy(v11, v8, v2 + 1);
        return 0;
    }
    v12 = 22;
    if (v5 == 0)
    {
        v3 = v12;
        return v3;
    }
    else
    {
        *(v11) = 0;
        v3 = v12;
        return v3;
    }
}
