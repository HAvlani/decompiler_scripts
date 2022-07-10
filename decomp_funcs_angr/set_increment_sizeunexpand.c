extern unsigned int g_4074a0;
extern struct_0 increment_size;

int set_increment_size()
{
    unsigned long long v1;  // rdi

    if (increment_size == 0)
    {
        increment_size = v1;
        return 1;
    }
    error(0x0, 0x0, dcgettext(0x0, &g_4074a0, 0x5));
    increment_size = v1;
    return 0;
}
