int fts_lfree()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rax
    unsigned long long [4] v5;  // rbx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v9;  // rdi

    if (v9 != 0)
    {
        v1 = &stack_base+0;
        v0 = v6;
        v5 = v9;
        while (true)
        {
            v5 = v5[2];
            if (v5[3] != 0)
            {
                closedir();
            }
            if (v5 == 0)
            {
                break;
            }
        }
        v7 = v0;
        return rpl_free();
    }
    return v3;
}
