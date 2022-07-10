int current_timespec()
{
    unsigned long v0;  // [bp-0x28]

    clock_gettime();
    return v0;
}
