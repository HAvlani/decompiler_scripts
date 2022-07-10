int di_set_alloc()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12

    v3 = malloc(0x18);
    if (v3 != 0)
    {
        v1 = hash_initialize();
        *(v3) = v1;
        if (v1 != 0)
        {
            *(v3 + 8) = 0;
            *(v3 + 16) = 0;
            v2 = v3;
            return v2;
        }
        v3 = 0;
        rpl_free();
        v2 = v3;
        return v2;
    }
    v2 = v3;
    return v2;
}
