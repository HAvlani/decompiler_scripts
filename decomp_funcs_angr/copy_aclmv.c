extern unsigned int g_417840;

int copy_acl()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12
    unsigned long long v4;  // r13
    unsigned long long v5;  // r14

    v3 = (long long)qcopy_acl();
    if (!(((int)v1) != -2))
    {
        v4 = (long long)quote();
        error(0x0, *(__errno_location()), "%s");
        return v1;
    }
    else if (((int)v1) == -1)
    {
        v5 = (long long)quote();
        error(0x0, *(__errno_location()), dcgettext(0x0, &g_417840, 0x5));
        v1 = v3;
        return v2;
    }
    else
    {
        v1 = v3;
        return v2;
    }
}
