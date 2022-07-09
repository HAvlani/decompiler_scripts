int gl_scratch_buffer_dupfree()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v2;  // rax
    unsigned int v4;  // rsi
    unsigned long v5;  // rdi
    unsigned long long v6;  // rdi
    void *v7;  // r12

    v6 = v5 + 16;
    v7 = *(v6 + 16);
    if (*(v6 + 16) != v6)
    {
        v2 = (realloc(v7, ((unsigned int)v4)) == 0? v7 : rax<8>);
        return v2;
    }
    v0 = ((unsigned int)v4);
    v2 = malloc(((unsigned int)v4));
    if (v2 == 0)
    {
        return v2;
    }
}
