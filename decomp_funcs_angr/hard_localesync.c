int hard_locale()
{
    unsigned short v0;  // [bp-0x118]
    unsigned short v1;  // [bp-0x114]
    unsigned long long v3;  // rax

    v3 = 0;
    if (!(setlocale_null_r() == 0))
    {
        return v3;
    }
    else if (!(v0 != 67))
    {
        return v3;
    }
    else if (v0 != 1230196560)
    {
        v3 = 1;
        return v3;
    }
    else
    {
        v3 = 0;
        if (v1 != 88)
        {
            v3 = 1;
            return v3;
        }
        return v3;
    }
}
