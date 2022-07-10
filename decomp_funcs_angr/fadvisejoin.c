int fadvise()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    void *v4;  // rdi
    unsigned long v5;  // r12

    if (v4 != 0)
    {
        v0 = v5;
        fileno(v4);
    }
    else
    {
        return v2;
    }
}
