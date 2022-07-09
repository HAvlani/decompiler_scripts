int ino_map_alloc()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // rdi
    unsigned long long v4;  // r12

    v4 = malloc(0x18);
    if (v4 != 0)
    {
        v2 = hash_initialize();
        *(v4) = v2;
        if (v2 != 0)
        {
            *(v4 + 8) = v3;
            *(v4 + 16) = 0;
            v1 = v4;
            return v1;
        }
        v4 = 0;
        rpl_free();
        v1 = v4;
        return v1;
    }
    v1 = v4;
    return v1;
}
