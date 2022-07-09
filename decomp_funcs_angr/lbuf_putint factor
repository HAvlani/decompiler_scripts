typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 g_4220f8;

int lbuf_putint()
{
    unsigned long v0;  // [bp-0x20]
    char v1;  // [bp-0x14]
    unsigned long long v10;  // r8
    struct_0 *v11;  // fs
    unsigned long long v3;  // rcx
    char * v4;  // rdx
    unsigned long v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rsi
    void *v8;  // rsi
    void * v9;  // rdi

    v6 = v7;
    v8 = (long long)umaxtostr();
    v3 = v8 - &stack_base-56;
    v9 = g_4220f8;
    v5 = 20 - (v8 - &stack_base-56);
    if (v5 < v6)
    {
        v10 = &v1;
        v4 = v9;
        v3 = v6 + v9 + &v1;
        do
        {
            *(v4) = 48;
            v4 += 1;
        }
        while (v4 != v3);
        v9 += v10 + v6;
        g_4220f8 = memcpy(v9, v8, v5) + v5;
        return v0 ^ *(v11 + 0x28);
    }
    g_4220f8 = memcpy(v9, v8, v5) + v5;
    return v0 ^ *(v11 + 0x28);
}
