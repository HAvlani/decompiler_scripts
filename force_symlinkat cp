int force_symlinkat()
{
    unsigned long v0;  // [bp-0x158]
    unsigned int v1;  // [bp-0x150]
    unsigned long v10;  // rdi
    unsigned long long v11;  // r8
    unsigned long v12;  // r12
    unsigned long long v13;  // r15
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    char v6;  // cl
    unsigned int v7;  // edx
    unsigned int v8;  // ebp
    unsigned int v9;  // esi

    v8 = v9;
    if (v11 < 0)
    {
        v3 = symlinkat();
        if (v3 == 0)
        {
            v4 = v12;
            return v4;
        }
        v11 = ((long long)*(__errno_location()));
    }
    if (v11 >= 0 || v3 != 0)
    {
        if (!(v6 == 1))
        {
            v4 = v12;
            return v4;
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
                    v3 = renameat(v8, ((int)v13), v8, v7);
                    if (v3 != 0)
                    {
                        __errno_location();
                        unlinkat(v8, ((int)v13), 0x0);
                    }
                }
                if (v13 != &stack_base-328)
                {
                    rpl_free();
                    v4 = v12;
                    return v4;
                }
                v4 = v12;
                return v4;
            }
            __errno_location();
            v4 = v12;
            return v4;
        }
        else
        {
            v4 = v12;
            return v4;
        }
    }
}
