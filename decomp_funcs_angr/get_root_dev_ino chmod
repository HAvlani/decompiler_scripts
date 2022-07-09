extern unsigned int g_40c51b;

int get_root_dev_ino()
{
    char v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long long v3;  // rax
    unsigned long long v4[2];  // rax
    unsigned long long v5;  // rdi

    v4 = __lxstat(0x1, &g_40c51b, ((int)&v0));
    if (v4 == 0)
    {
        v4[0] = v1;
        v4[1] = v0;
        v4 = v5;
        return v3;
    }
    v3 = 0;
    return v3;
}
