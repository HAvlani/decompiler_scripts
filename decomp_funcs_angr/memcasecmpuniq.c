typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int memcasecmp()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    char *v10;  // rsi
    unsigned long long v11;  // rdi
    struct_1 *v12;  // r8
    struct_1 *v13;  // r9
    unsigned long long v14;  // r12
    unsigned long v15;  // r12
    unsigned long v2;  // [bp-0x8]
    unsigned long long v4;  // rax
    char *v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long v8;  // rbx
    char *v9;  // rbp

    if (v6 != 0)
    {
        v2 = v15;
        v1 = &stack_base+0;
        v9 = v11;
        v0 = v8;
        v12 = *(__ctype_toupper_loc());
        while (true)
        {
            v13 = ((long long)*(v10 + rcx<8>));
            v4 = ((long long)(*(v12 + ((long long)*(v9 + rcx<8>)) * 4) - *(v12 + v13 * 4)));
            if (*(v12 + (((long long)*(v9 + rcx<8>)) << 2)) == *(v12 + (v13 << 2)))
            {
                v5 = rcx<8> + 1;
                v7 = v0;
                v14 = v2;
                return v4;
            }
            v7 = v0;
            v14 = v2;
            return v4;
        }
    }
    return 0;
}
