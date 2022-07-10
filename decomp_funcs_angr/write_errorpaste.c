extern unsigned int g_407004;

int write_error()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // r12

    v0 = v2;
    error(0x1, *(__errno_location()), dcgettext(0x0, &g_407004, 0x5));
}
