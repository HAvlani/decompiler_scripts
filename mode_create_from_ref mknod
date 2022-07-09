int mode_create_from_ref()
{
    char v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0x90]
    unsigned long long v3;  // rax
    unsigned int v4;  // edi
    unsigned int v5;  // r8d

    v5 = __xstat(0x1, v4, ((int)&v0));
    v3 = 0;
    if (v5 == 0)
    {
        v3 = xmalloc();
        *(v3) = 317;
        *(v3 + 4) = 4095;
        *(v3 + 8) = v1;
        *(v3 + 12) = 4095;
        *(v3 + 17) = 0;
        return v3;
    }
    return v3;
}
