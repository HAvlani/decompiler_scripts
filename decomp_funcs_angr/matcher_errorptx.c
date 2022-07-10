extern unsigned int g_41d008;

int matcher_error()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // r12

    v0 = v2;
    error(0x1, *(__errno_location()), dcgettext(0x0, &g_41d008, 0x5));
}
