int screen_columns()
{
    unsigned long long v0;  // [bp-0x20]
    char v1;  // [bp-0x18]
    unsigned short v2;  // [bp-0x16]
    unsigned long long v4;  // rax

    v4 = ioctl(0x1, 0x5413, ((int)&v1));
    if (v4 == 0)
    {
        v4 = ((long long)v2);
        if (((long long)v2) != 0)
        {
            return v4;
        }
    }
    if (((long long)v2) == 0 || v4 != 0)
    {
        if (getenv("COLUMNS") != 0)
        {
            v4 = xstrtol();
            if (v4 == 0)
            {
                v4 = v0;
                if (v0 - 1 > 2147483646)
                {
                    v4 = 80;
                    return v4;
                }
                return v4;
            }
            v4 = 80;
            return v4;
        }
        v4 = 80;
        return v4;
    }
}
