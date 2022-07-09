int open_safer()
{
    unsigned int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned int v10;  // esi
    char *v11;  // rdi
    unsigned long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x28]
    unsigned long long v6;  // rax
    unsigned long v7;  // rdx
    unsigned long long v8;  // rdx
    char v9;  // sil

    v3 = v7;
    v8 = 0;
    if (((long long)(v9 & 64)) == 0)
    {
        open(v11, v10, v8);
        v6 = fd_safer();
        return v6;
    }
    v0 = 16;
    v8 = ((long long)((int)v3));
    v1 = &stack_base+8;
    v2 = &stack_base-56;
    open(v11, v10, v8);
    v6 = fd_safer();
    return v6;
}
