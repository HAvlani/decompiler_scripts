typedef struct struct_1 {
    char padding_0[24];
    unsigned long long field_18;
} struct_1;

extern struct_0 devlist_table;

int devlist_for_dev()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    struct_1 *v3;  // rax
    unsigned long v4;  // rdi

    if (devlist_table != 0)
    {
        v0 = v4;
        v3 = hash_lookup();
        if (v3 != 0)
        {
            v2 = v3->field_18;
            return v2;
        }
        v2 = 0;
        return v2;
    }
    v2 = 0;
    return v2;
}
