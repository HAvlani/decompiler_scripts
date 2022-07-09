extern unsigned int g_417011;
extern struct_0 g_4220f8;
extern struct_0 lbuf;

int lbuf_flush()
{
    unsigned long long v2;  // r12

    if (full_write() == g_4220f8 - lbuf)
    {
        g_4220f8 = lbuf;
        return lbuf;
    }
    v2 = dcgettext(0x0, &g_417011, 0x5);
    error(0x1, *(__errno_location()), "%s");
}
