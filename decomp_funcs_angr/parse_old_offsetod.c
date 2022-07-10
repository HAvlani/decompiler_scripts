int parse_old_offset()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    char *v10;  // rdi
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char v6;  // al
    unsigned long v7;  // rcx
    unsigned long long v8;  // rdx
    char * v9;  // rbp

    v8 = ((long long)*(v10));
    if (((long long)*(v10)) != 0)
    {
        v2 = v11;
        v1 = &stack_base+0;
        v9 = v10;
        v0 = v7;
        if (v8 == 43)
        {
            v9 = v10 + 1;
        }
        v5 = strchr(v9, 0x2e);
        if (v5 != 0)
        {
            v4 = xstrtoumax();
            v12 = v2;
            v6 = ((char)(((int)v4) == 0));
            return rax<8>;
        }
        else if (*(v9) != 48)
        {
            v4 = xstrtoumax();
            v12 = v2;
            v6 = ((char)(((int)v4) == 0));
            return rax<8>;
        }
        else
        {
            v4 = xstrtoumax();
            v12 = v2;
            v6 = ((char)(((int)v4) == 0));
            return rax<8>;
        }
    }
    return 0;
}
