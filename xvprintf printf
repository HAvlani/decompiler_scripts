extern struct_0 exit_failure;
extern unsigned int g_40b7a0;
extern struct_1 stdout;

int xvprintf()
{
    unsigned long long|unsigned int v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12

    v3 = (long long)rpl_vprintf();
    if (v1 >= 0)
    {
        v2 = v3;
        return v2;
    }
    v1 = ferror(((int)stdout));
    if (v1 != 0)
    {
        v2 = v3;
        return v2;
    }
    else
    {
        error(exit_failure, *(__errno_location()), dcgettext(0x0, &g_40b7a0, 0x5));
    }
}
