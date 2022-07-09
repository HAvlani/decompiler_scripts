extern unsigned int g_412004;

int get_reldate()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // r12

    v1 = parse_datetime();
    if (((long long)v1) != 0)
    {
        return v1;
    }
    v2 = (long long)quote();
    error(0x1, 0x0, dcgettext(0x0, &g_412004, 0x5));
}
