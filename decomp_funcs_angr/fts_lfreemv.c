typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int fts_lfree()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rax
    unsigned long long v5;  // rbx
    struct_0 * v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v9;  // rdi

    if (v9 != 0)
    {
        v1 = &stack_base+0;
        v0 = v7;
        v6 = v9;
        while (true)
        {
            v6 = v6->field_10;
            if (*(v6 + 0x18) != 0)
            {
                closedir();
            }
            if (v6 == 0)
            {
                break;
            }
        }
        v5 = v0;
        return rpl_free();
    }
    return v3;
}
