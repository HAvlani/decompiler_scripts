int gl_scratch_buffer_grow_preserve()
{
    unsigned long long v1;  // rax
    unsigned long v10;  // r13
    unsigned long long v11;  // r14
    void *v2;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5[2];  // rbx
    unsigned long long v6;  // rbp
    unsigned long v7;  // rsi
    unsigned long|unsigned long long [2]|void * v8;  // rdi
    void *v9;  // r12

    v11 = v8 + 16;
    v10 = v8[1];
    v5 = v8;
    v9 = v8[0];
    v6 = v8[1] * 2;
    if (!(v8[0] != v8 + 16))
    {
        v8 = v8[1] * 2;
        v2 = malloc(v8);
        if (v2 != 0)
        {
            v4 = memcpy(v2, v9, v10);
            v5[0] = v4;
            v1 = 1;
            v5[1] = v6;
            return v1;
        }
        v1 = 0;
        return v1;
    }
    else if (v8[1] <= v8[1] << 1)
    {
        v7 = v8[1] * 2;
        v8 = v8[0];
        v4 = realloc(v8, v7);
        if (v4 != 0)
        {
            v5[0] = v4;
            v1 = 1;
            v5[1] = v6;
            return v1;
        }
        rpl_free();
        v5[0] = v11;
        v1 = 0;
        v5[1] = 0x400;
        return v1;
    }
    else
    {
        *(__errno_location() + None) = 12;
        rpl_free();
        v5[0] = v11;
        v1 = 0;
        v5[1] = 0x400;
        return v1;
    }
}