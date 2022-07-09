typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int base32_decode_alloc_ctx()
{
    unsigned long long v0;  // [bp-0x39]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    struct_0 *v5;  // rcx
    unsigned long v6;  // rdx
    struct_0 *v7;  // r8

    v1 = (v6 >> 3) * 5 + 5;
    v3 = malloc((v6 >> 3) * 5 + 5);
    v5->field_0 = v3;
    if (v3 != 0)
    {
        v3 = base32_decode_ctx();
        if (!(((long long)v3) != 0))
        {
            v0 = v3;
            rpl_free();
            v5->field_0 = 0;
            v3 = ((long long)v0);
            return v3;
        }
        else if (v7 != 0)
        {
            v7->field_0 = v1;
            return v3;
        }
        else
        {
            v3 = 1;
            return v3;
        }
    }
    v3 = 1;
    return v3;
}
