int same_nameat.part.0()
{
    unsigned long v0;  // [bp-0x158]
    unsigned long v1;  // [bp-0x150]
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rbp
    char|unsigned long long v12;  // r12b
    unsigned long v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long long v8;  // rax

    v11 = (long long)dir_name();
    if (__fxstatat(0x1) == 0)
    {
        rpl_free();
        v10 = (long long)dir_name();
        if (__fxstatat(0x1) == 0)
        {
            v12 = 0;
            if (v1 == v3)
            {
                v12 = ((char)(v0 == v2));
                rpl_free();
                v8 = v12;
                return v8;
            }
            rpl_free();
            v8 = v12;
            return v8;
        }
        error(0x1, *(__errno_location()), "%s");
    }
    else
    {
        error(0x1, *(__errno_location()), "%s");
    }
}
