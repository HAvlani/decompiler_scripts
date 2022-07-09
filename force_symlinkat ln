int force_symlinkat()
{
    unsigned long v0;  // [bp-0x158]
    unsigned int v1;  // [bp-0x150]
    unsigned long v10;  // rdi
    unsigned long long v11;  // r8
    unsigned long v12;  // r12
    unsigned long long v13;  // r15
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char v6;  // cl
    unsigned int v7;  // edx
    unsigned int v8;  // ebp
    unsigned int v9;  // esi

    v8 = v9;
    if (v11 < 0)
    {
        v4 = symlinkat();
        if (v4 == 0)
        {
            v5 = v12;
            return v5;
        }
        v11 = ((long long)*(__errno_location()));
    }
    if (v4 != 0 || v11 >= 0)
    {
        if (!(v6 == 1))
        {
            v5 = v12;
            return v5;
        }
        else if (v11 == 17)
        {
            v13 = (long long)samedir_template();
            if (v13 != 0)
            {
                v0 = v10;
                v1 = v9;
                if (try_tempname_len() != 0)
                {
                    __errno_location();
                }
                else
                {
                    v4 = renameat(v8, ((int)v13), v8, v7);
                    if (v4 != 0)
                    {
                        __errno_location();
                        unlinkat(v8, ((int)v13), 0x0);
                    }
                }
                if (v13 != &stack_base-328)
                {
                    rpl_free();
                    v5 = v12;
                    return v5;
                }
                v5 = v12;
                return v5;
            }
            __errno_location();
            v5 = v12;
            return v5;
        }
        else
        {
            v5 = v12;
            return v5;
        }
    }
}
