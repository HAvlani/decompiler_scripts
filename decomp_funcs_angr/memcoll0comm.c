int memcoll0()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rcx
    void *v3;  // rdx
    unsigned int v4;  // rsi
    void *v5;  // rdi

    if (((unsigned int)v4) == v2)
    {
        v1 = memcmp(v5, v3, ((unsigned int)v4));
        if (v1 == 0)
        {
            *(__errno_location() + None) = 0;
            return 0;
        }
    }
}
