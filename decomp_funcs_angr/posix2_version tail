int posix2_version()
{
    char v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long|char * v3;  // rax
    unsigned long long v4;  // r12

    v4 = 200809;
    v3 = getenv("_POSIX2_VERSION");
    if (!(v3 != 0))
    {
        v2 = v4;
        return v2;
    }
    else if (*(v3) == 0)
    {
        v2 = v4;
        return v2;
    }
    else
    {
        v3 = strtol(v3, &v0, 0xa);
        if (*(v0) != 0)
        {
            v2 = v4;
            return v2;
        }
        else if (v3 >= 0xfffffffe80000000)
        {
            v4 = (v3 <= 2147483647? v3 : 2147483647);
            v2 = v4;
            return v2;
        }
        else
        {
            v4 = 0x80000000;
            v2 = v4;
            return v2;
        }
    }
}
