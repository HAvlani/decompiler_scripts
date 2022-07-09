int writable_destination()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v10;  // r12
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    unsigned long long v4;  // rax
    char v5;  // al
    unsigned int v6;  // edx
    unsigned int v7;  // edx
    unsigned int v8;  // esi
    unsigned int v9;  // edi

    v7 = ((int)(v6 & 0xf000));
    if (v7 == 0xa000)
    {
        return 1;
    }
    v1 = v12;
    v0 = &stack_base+0;
    if ((long long)can_write_any_file() != 0)
    {
        v10 = v1;
        return 1;
    }
    else
    {
        v4 = faccessat(v9, v8, 0x2, 0x200);
        v5 = ((char)(((int)v4) == 0));
        v11 = v1;
        return rax<8>;
    }
}
