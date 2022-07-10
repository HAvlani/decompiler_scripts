extern unsigned int g_409b1c;

int string_to_join_field()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r12

    v3 = xstrtoumax();
    if (!(v3 != 1))
    {
        v2 = 18446744069414584318;
        return v2;
    }
    else if (!(v3 == 0))
    {
        v4 = (long long)quote();
        error(0x1, 0x0, dcgettext(0x0, &g_409b1c, 0x5));
    }
    else if (v0 != 0)
    {
        v2 = v0 - 1;
        return v2;
    }
    else
    {
        v4 = (long long)quote();
        error(0x1, 0x0, dcgettext(0x0, &g_409b1c, 0x5));
    }
}
