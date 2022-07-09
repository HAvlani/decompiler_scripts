int openat_safer()
{
    unsigned int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x20]
    unsigned long long v5;  // rax
    unsigned long v6;  // rcx
    char v7;  // dl
    unsigned int v8;  // edi

    v3 = v6;
    if (((long long)(v7 & 64)) == 0)
    {
        openat(v8);
        v5 = fd_safer();
        return v5;
    }
    v0 = 24;
    v1 = &stack_base+8;
    v2 = &stack_base-56;
    openat(v8);
    v5 = fd_safer();
    return v5;
}
