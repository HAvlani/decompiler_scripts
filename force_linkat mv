int force_linkat()
{
    unsigned int v0;  // [bp-0x174]
    unsigned long v1;  // [bp-0x170]
    unsigned int v10;  // ecx
    unsigned int v11;  // edx
    unsigned int v12;  // ebp
    unsigned long v13;  // rsi
    unsigned int v14;  // edi
    unsigned int v15;  // r8d
    char v16;  // r9b
    unsigned long v17;  // r12
    unsigned long long v18;  // r15
    unsigned int v2;  // [bp-0x168]
    unsigned long v3;  // [bp-0x160]
    unsigned int v4;  // [bp-0x158]
    unsigned int v5;  // [bp-0x154]
    unsigned long v6;  // [bp+0x8]
    unsigned int|unsigned long|unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v12 = v11;
    v8 = ((int)((int)v6));
    if (((int)((int)v6)) < 0)
    {
        v0 = v15;
        v8 = linkat();
        if (v8 == 0)
        {
            v9 = v17;
            return v9;
        }
        v8 = ((long long)*(__errno_location()));
    }
    if (((int)((int)v6)) >= 0 || v8 != 0)
    {
        v0 = ((int)v0);
        if (!(v16 == 1))
        {
            v9 = v17;
            return v9;
        }
        else if (v8 == 17)
        {
            v1 = &stack_base-328;
            v18 = (long long)samedir_template();
            if (v18 != 0)
            {
                v5 = ((int)v0);
                v2 = v14;
                v3 = v13;
                v4 = v11;
                if (try_tempname_len() != 0)
                {
                    __errno_location();
                }
                else
                {
                    v8 = renameat(v12, ((int)v18), v12, v10);
                    if (v8 != 0)
                    {
                        __errno_location();
                    }
                    unlinkat(v12, ((int)v18), 0x0);
                }
                if (v18 != v1)
                {
                    rpl_free();
                    v9 = v17;
                    return v9;
                }
                v9 = v17;
                return v9;
            }
            __errno_location();
            v9 = v17;
            return v9;
        }
        else
        {
            v9 = v17;
            return v9;
        }
    }
}
