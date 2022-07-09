int rpl_vfprintf()
{
    unsigned int v0;  // [bp-0x81c]
    unsigned long long v1;  // [bp-0x810]
    void *|unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v7;  // rbp
    void *v8;  // rdi

    v1 = 2000;
    v3 = vasnprintf();
    if (&stack_base+0 != 0)
    {
        v7 = v3;
        v3 = fwrite(v3, 0x1, 0x7d0, v8);
        if (v3 >= 2000)
        {
            if (v7 != &stack_base-2056)
            {
                rpl_free();
            }
            if (False)
            {
                *(__errno_location() + None) = 75;
                fseterr();
                v4 = -1;
                return v4;
            }
            v4 = 2000;
            return v4;
        }
        v4 = -1;
        if (v7 == &stack_base-2056)
        {
            return v4;
        }
        else
        {
            v0 = -1;
            rpl_free();
            v4 = ((long long)v0);
            return v4;
        }
    }
    fseterr();
    v4 = -1;
    return v4;
}
