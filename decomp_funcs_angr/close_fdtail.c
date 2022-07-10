extern unsigned int g_40d013;

int close_fd()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned int v10;  // rdi
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v14;  // r13
    unsigned long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    if (((int)(((unsigned int)v10) + 1)) <= 1)
    {
        return ((unsigned int)v10) + 1;
    }
    v3 = v13;
    v2 = v12;
    v1 = &stack_base+0;
    v0 = v8;
    v7 = close(((unsigned int)v10));
    if (((int)v7) == 0)
    {
        v9 = v0;
        v11 = v2;
        v14 = v3;
        return v7;
    }
    else
    {
        quotearg_style();
        dcgettext(0x0, &g_40d013, 0x5);
        __errno_location();
    }
}
