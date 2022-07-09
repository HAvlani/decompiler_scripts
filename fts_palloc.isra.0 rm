typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int fts_palloc.isra.0()
{
    unsigned long long v1;  // rax
    unsigned long v4;  // rdx
    struct_1 *v5;  // rbx
    struct_1 *v6;  // rsi
    struct_1 *v7;  // rdi
    void *v8;  // rdi
    unsigned long v9;  // r8

    v5 = v7;
    v8 = v7->field_0;
    v9 = v6->field_0 + v4 + 0x100;
    if (v6->field_0 <= v6->field_0 + v4 + 0x100)
    {
        v6->field_0 = v6->field_0 + v4 + 0x100;
        v1 = realloc(v8, v9);
        if (v1 != 0)
        {
            v5->field_0 = v1;
            return 1;
        }
        rpl_free();
        v5->field_0 = 0;
        return 0;
    }
    rpl_free();
    v5->field_0 = 0;
    *(__errno_location() + None) = 36;
    return 0;
}
