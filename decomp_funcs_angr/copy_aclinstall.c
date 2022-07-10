extern unsigned int g_418cb5;

int copy_acl()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rax
    unsigned long long v3;  // r12
    unsigned long long v4;  // r13
    unsigned long long v5;  // r14

    v3 = (long long)qcopy_acl();
    if (!(((int)v2) != -2))
    {
        v4 = (long long)quote();
        error(0x0, *(__errno_location()), "%s");
        return v2;
    }
    else if (((int)v2) == -1)
    {
        v5 = (long long)quote();
        error(0x0, *(__errno_location()), dcgettext(0x0, &g_418cb5, 0x5));
        v2 = v3;
        return v1;
    }
    else
    {
        v2 = v3;
        return v1;
    }
}
