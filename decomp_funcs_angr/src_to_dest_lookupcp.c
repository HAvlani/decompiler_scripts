typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int src_to_dest_lookup()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    struct_0 * v3;  // rax
    unsigned long v4;  // rsi
    unsigned long v5;  // rdi

    v0 = v5;
    v1 = v4;
    v3 = hash_lookup();
    if (v3 != 0)
    {
        v3 = v3->field_10;
        return v3;
    }
    return v3;
}
