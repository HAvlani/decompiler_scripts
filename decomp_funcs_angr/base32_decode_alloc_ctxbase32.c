typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int base32_decode_alloc_ctx()
{
    unsigned long long v0;  // [bp-0x39]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v4;  // rax
    struct_0 *v5;  // rcx
    unsigned long v6;  // rdx
    struct_0 *v7;  // r8

    v1 = (v6 >> 3) * 5 + 5;
    v4 = malloc((v6 >> 3) * 5 + 5);
    v5->field_0 = v4;
    if (v4 != 0)
    {
        v4 = base32_decode_ctx();
        if (!(((long long)v4) != 0))
        {
            v0 = v4;
            rpl_free();
            v5->field_0 = 0;
            v4 = ((long long)v0);
            return v4;
        }
        else if (v7 != 0)
        {
            v7->field_0 = v1;
            return v4;
        }
        else
        {
            v4 = 1;
            return v4;
        }
    }
    v4 = 1;
    return v4;
}
