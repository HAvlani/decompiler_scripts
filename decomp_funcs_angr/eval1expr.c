int eval1()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v7;  // rbp
    char v8;  // dil
    unsigned long long v9;  // r12

    v7 = (long long)eval2();
    while (true)
    {
        v2 = nextarg();
        if (((long long)v2) == 0)
        {
            break;
        }
        while (true)
        {
            if (((long long)v8) != 0)
            {
                v2 = ((long long)(null() ^ 1));
            }
            v9 = (long long)eval2();
            v1 = null();
            if (((long long)v1) == 0)
            {
                v1 = null();
                if (((long long)v1) == 0)
                {
                    freev();
                }
            }
            if (((long long)v1) != 0 || ((long long)v1) != 0)
            {
                freev();
                freev();
                *(xmalloc() + None) = 0;
                mpz_init_set_ui();
                v2 = nextarg();
                return &stack_base+0;
            }
        }
    }
    return &stack_base+0;
}
