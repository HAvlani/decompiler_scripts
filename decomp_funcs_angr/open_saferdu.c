int open_safer()
{
    unsigned int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned int v10;  // esi
    char *v11;  // rdi
    unsigned long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x28]
    unsigned long long v5;  // rax
    unsigned long long v7;  // rdx
    unsigned long v8;  // rdx
    char v9;  // sil

    v3 = v8;
    v7 = 0;
    if (((long long)(v9 & 64)) == 0)
    {
        open(v11, v10, v7);
        v5 = fd_safer();
        return v5;
    }
    v0 = 16;
    v7 = ((long long)((int)v3));
    v1 = &stack_base+8;
    v2 = &stack_base-56;
    open(v11, v10, v7);
    v5 = fd_safer();
    return v5;
}