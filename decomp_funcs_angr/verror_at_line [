extern unsigned int g_40b7e8;

int verror_at_line()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v10;  // r12
    unsigned long v11;  // r13
    unsigned long v12;  // r14
    unsigned long v13;  // r15
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long long v5;  // rax
    unsigned int v6;  // ecx
    unsigned int v7;  // rdx
    unsigned int v8;  // esi
    unsigned int v9;  // edi

    v3 = v13;
    v2 = v12;
    v1 = v11;
    v0 = v10;
    v5 = xvasprintf();
    if (!(v5 != 0))
    {
        error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b7e8, 0x5));
        abort(); /* do not return */
    }
    else if (((unsigned int)v7) != 0)
    {
        error_at_line(v9, v8, ((unsigned int)v7), v6, &g_40b059, ((int)v5));
    }
    else
    {
        error(v9, v8, "%s");
    }
}
