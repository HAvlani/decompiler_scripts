extern unsigned int g_41805c;
extern char have_read_eof;
extern struct_1 *head;

int get_first_line_in_buffer()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long long v4;  // r12

    if (head != 0)
    {
        return *(head + 24);
    }
    v0 = v3;
    if (!(have_read_eof == 0))
    {
        error(0x1, *(__errno_location()), dcgettext(0x0, &g_41805c, 0x5));
    }
    else if ((long long)load_buffer.part.0() != 0)
    {
        v4 = v0;
        return *(head + 24);
    }
    else
    {
        error(0x1, *(__errno_location()), dcgettext(0x0, &g_41805c, 0x5));
    }
}
