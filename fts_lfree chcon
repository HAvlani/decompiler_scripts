typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int fts_lfree()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rax
    struct_1 * v5;  // rbx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v9;  // rdi

    if (v9 != 0)
    {
        v1 = &stack_base+0;
        v0 = v7;
        v5 = v9;
        while (true)
        {
            v5 = v5->field_10;
            if (*(v5 + 0x18) != 0)
            {
                closedir();
            }
            if (v5 == 0)
            {
                break;
            }
        }
        v6 = v0;
        return rpl_free();
    }
    return v3;
}
