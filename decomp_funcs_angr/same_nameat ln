int same_nameat()
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long long v2;  // rax
    unsigned int v4;  // edi
    unsigned long v6;  // r13

    v0 = v4;
    v6 = (long long)base_len();
    v2 = base_len();
    if (v6 != v2)
    {
        return 0;
    }
    v2 = memcmp((long long)last_component(), (long long)last_component(), v6);
    if (v2 != 0)
    {
        return 0;
    }
}
