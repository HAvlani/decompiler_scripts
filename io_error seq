extern unsigned int g_40a00f;
extern struct_1 stdout;

int io_error()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // r12

    v0 = v2;
    clearerr_unlocked(((int)stdout));
    error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a00f, 0x5));
}
