extern unsigned int g_40d004;

int integer_overflow()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    v0 = v2;
    error(0x1, 0x0, dcgettext(0x0, &g_40d004, 0x5));
}
