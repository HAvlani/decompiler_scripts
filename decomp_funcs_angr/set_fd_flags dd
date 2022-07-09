typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_40e17f;

int set_fd_flags()
{
    unsigned int v0;  // [bp-0xb0]
    unsigned long v1;  // [bp-0x30]
    struct_1 *v10;  // fs
    unsigned int|unsigned long long v5;  // ebx
    unsigned int v6;  // esi
    unsigned long long v7;  // r12
    unsigned int|unsigned long v8;  // r13

    if ((v6 & -131329) == 0)
    {
        return v1 ^ *(v10 + 0x28);
    }
    v8 = rpl_fcntl();
    v5 = ((long long)(v6 & -131329 | v8));
    if (v8 >= 0)
    {
        if (v8 == ((int)v5))
        {
            return v1 ^ *(v10 + 0x28);
        }
        else if ((((int)((int)v5)) & 0x10000) != 0)
        {
            if (ifstat() == 0)
            {
                if ((((short)v0) & 0xf000) != 0x4000)
                {
                    *(__errno_location() + None) = 20;
                }
            }
        }
        while (true)
        {
            v5 = ((int)(v5 & -65537));
            if (v5 == v8)
            {
                break;
            }
            if (!(((char)(rpl_fcntl() + 1 == 0))))
            {
                break;
            }
            v8 = (long long)quotearg_style();
            v7 = dcgettext(0x0, &g_40e17f, 0x5);
            __errno_location();
            nl_error();
        }
        return v1 ^ *(v10 + 0x28);
    }
}
