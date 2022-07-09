extern struct_0 check_input_order;
extern unsigned int g_407008;
extern char hard_LC_COLLATE;
extern char issued_disorder_warning;

int check_order.isra.0.part.0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdi
    char v3;  // dil
    unsigned long v4;  // r8

    if (*(issued_disorder_warning + v4 - 1) == 0)
    {
        if (hard_LC_COLLATE == 0)
        {
            v1 = memcmp2();
        }
        else
        {
            v1 = xmemcoll();
        }
        if (((int)v1) > 0)
        {
            v2 = 0;
            v3 = ((char)(check_input_order == 1));
            v1 = error(rdi<4>, 0x0, dcgettext(0x0, &g_407008, 0x5));
            *(issued_disorder_warning + v4 - 1) = 1;
            return v1;
        }
        return v1;
    }
    return v1;
}
