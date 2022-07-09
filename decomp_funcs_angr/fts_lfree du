typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int fts_lfree()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbx
    struct_0 * v7;  // rbx
    unsigned long long v9;  // rdi

    if (v9 != 0)
    {
        v1 = &stack_base+0;
        v0 = v6;
        v7 = v9;
        while (true)
        {
            v7 = v7->field_10;
            if (*(v7 + 0x18) != 0)
            {
                closedir();
            }
            if (v7 == 0)
            {
                break;
            }
        }
        v5 = v0;
        return rpl_free();
    }
    return v4;
}
