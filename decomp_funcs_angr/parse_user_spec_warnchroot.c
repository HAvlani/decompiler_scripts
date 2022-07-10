int parse_user_spec_warn()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // rsi
    char *v5;  // rdi
    char *v6;  // r9
    unsigned long v7;  // r10

    if (v3 != 0)
    {
        v0 = strchr(v5, 0x3a);
        v2 = parse_with_separator();
    }
    else
    {
        parse_with_separator();
    }
    if (False)
    {
        v0 = v2;
        v4 = strchr(v5, 0x2e);
        v2 = parse_with_separator();
        v2 = 1;
        if (v6 != 0)
        {
            *(v6) = v2;
            return v7;
        }
        return v7;
    }
    if (v6 == 0)
    {
        return v7;
    }
    v2 = 0;
    *(v6) = v2;
    return v7;
}
