int same_nameat.part.0()
{
    char v0;  // [bp-0x158]
    unsigned long v1;  // [bp-0x150]
    unsigned int v10;  // edx
    unsigned int v11;  // edi
    char|unsigned long|unsigned long long v12;  // r12
    char v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long long v5;  // rax
    unsigned long long v7;  // rax
    unsigned long long v9;  // rax

    v5 = __fxstatat(0x1, v11, (int)dir_name(), ((int)&v0), 0x100);
    if (v5 == 0)
    {
        rpl_free();
        v7 = __fxstatat(0x1, v10, (int)dir_name(), ((int)&v2), 0x100);
        if (v7 == 0)
        {
            v12 = 0;
            if (v1 == v3)
            {
                v12 = ((char)(v0 == v2));
                rpl_free();
                v9 = v12;
                return v9;
            }
            rpl_free();
            v9 = v12;
            return v9;
        }
        error(0x1, *(__errno_location()), "%s");
    }
    else
    {
        error(0x1, *(__errno_location()), "%s");
    }
}
