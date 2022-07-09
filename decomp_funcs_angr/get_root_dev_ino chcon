extern unsigned int g_40c9ff;

int get_root_dev_ino()
{
    char v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long long v3[2];  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdi

    v3 = __lxstat(0x1, &g_40c9ff, ((int)&v0));
    if (v3 == 0)
    {
        v3[0] = v1;
        v3[1] = v0;
        v3 = v5;
        return v4;
    }
    v4 = 0;
    return v4;
}
