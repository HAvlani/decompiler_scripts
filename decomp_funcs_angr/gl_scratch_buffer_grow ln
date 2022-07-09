int gl_scratch_buffer_grow()
{
    unsigned long|unsigned long long v1;  // rax
    unsigned long long v3[2];  // rbx
    unsigned long v4;  // rbp
    unsigned long long v5[2];  // rdi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r12

    v3 = v5;
    v1 = v5[1];
    v6 = v5[0];
    v7 = v3 + 16;
    v4 = v1 * 2;
    if (v6 != v3 + 16)
    {
        rpl_free();
        v1 = v3[1];
    }
    if (v1 <= v4)
    {
        v1 = malloc(v4);
        if (v1 != 0)
        {
            v3[0] = v1;
            v3[1] = v4;
            return 1;
        }
        v3[0] = v7;
        v3[1] = 0x400;
        return 0;
    }
    *(__errno_location() + None) = 12;
    v3[0] = v7;
    v3[1] = 0x400;
    return 0;
}
