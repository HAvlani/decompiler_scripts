int rpl_vfprintf()
{
    unsigned int v0;  // [bp-0x81c]
    unsigned long long v1;  // [bp-0x810]
    unsigned long long v3;  // rax
    unsigned long long|void * v6;  // rax
    unsigned long long v7;  // rbp
    void *v8;  // rdi

    v1 = 2000;
    v6 = vasnprintf();
    if (&stack_base+0 != 0)
    {
        v7 = v6;
        v6 = fwrite(v6, 0x1, 0x7d0, v8);
        if (v6 >= 2000)
        {
            if (v7 != &stack_base-2056)
            {
                rpl_free();
            }
            if (False)
            {
                *(__errno_location() + None) = 75;
                fseterr();
                v3 = -1;
                return v3;
            }
            v3 = 2000;
            return v3;
        }
        v3 = -1;
        if (v7 == &stack_base-2056)
        {
            return v3;
        }
        else
        {
            v0 = -1;
            rpl_free();
            v3 = ((long long)v0);
            return v3;
        }
    }
    fseterr();
    v3 = -1;
    return v3;
}
