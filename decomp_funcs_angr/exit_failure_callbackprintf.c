extern unsigned int g_40b3d8;
extern unsigned int g_40b408;

int exit_failure_callback()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    unsigned long v4;  // rbx
    unsigned int v5;  // rsi
    unsigned long v6;  // r12

    v1 = v6;
    v0 = v4;
    if (((unsigned int)v5) != 0)
    {
        v3 = dcgettext(0x0, ((unsigned int)v5), 0x5);
        error(0x1, 0x0, dcgettext(0x0, &g_40b408, 0x5));
    }
    else
    {
        error(0x1, 0x0, dcgettext(0x0, &g_40b3d8, 0x5));
    }
}
