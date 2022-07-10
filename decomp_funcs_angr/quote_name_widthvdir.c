int quote_name_width()
{
    char v0;  // [bp-0x2039]
    unsigned long v1;  // [bp-0x2038]
    unsigned long v2;  // [bp-0x2030]
    unsigned long v3;  // [bp-0x2010]
    unsigned long v4;  // [bp-0x1010]
    unsigned long v7;  // rdi

    v4 = v4;
    v3 = v3;
    v1 = &stack_base-8232;
    quote_name_buf.constprop.0();
    if (!(v1 != &stack_base-8232))
    {
        return ((long long)v0) + v2;
    }
    else if (&stack_base-8232 != v7)
    {
        rpl_free();
        return ((long long)v0) + v2;
    }
    else
    {
        return ((long long)v0) + v2;
    }
}
