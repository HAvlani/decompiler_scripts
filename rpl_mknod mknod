int rpl_mknod()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // esi
    unsigned int v5;  // edi

    if (!((((short)v4) & 0xf000) == 0x1000))
    {
        v0 = v3;
        v2 = __xmknod(0x0, v5, v4, ((int)&v0));
        return v2;
    }
    else if (v3 != 0)
    {
        v0 = v3;
        v2 = __xmknod(0x0, v5, v4, ((int)&v0));
        return v2;
    }
    else
    {
        v2 = mkfifo();
        return v2;
    }
}
