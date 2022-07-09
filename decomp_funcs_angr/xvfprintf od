extern struct_0 exit_failure;
extern unsigned int g_40e360;

int xvfprintf()
{
    unsigned long long v1;  // rax
    unsigned long long|unsigned int v2;  // rax
    unsigned int v3;  // edi
    unsigned long long v4;  // r12

    v4 = (long long)rpl_vfprintf();
    if (v2 >= 0)
    {
        v1 = v4;
        return v1;
    }
    v2 = ferror(v3);
    if (v2 != 0)
    {
        v1 = v4;
        return v1;
    }
    else
    {
        error(exit_failure, *(__errno_location()), dcgettext(0x0, &g_40e360, 0x5));
    }
}
