int gethrxtime()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]

    if (clock_gettime() != 0)
    {
        gettime();
        return v0 * 0x3b9aca00 + v1;
    }
    return v0 * 0x3b9aca00 + v1;
}
