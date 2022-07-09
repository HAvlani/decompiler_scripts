typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int base32hex_decode_ctx_wrapper()
{
    BOT tmp_30;  // tmp #30
    unsigned long v0;  // [bp-0x30]
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rbx
    struct_0 *v4;  // rbp
    unsigned long long v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long v7;  // r8
    unsigned long long v8;  // r9
    unsigned long long v9;  // r12

    v9 = v2;
    v4 = v6;
    v3 = v5;
    v8 = v6->field_10;
    if (v2 > v6->field_18)
    {
        v0 = v7;
        v6->field_18 = v2 * 2;
        v6->field_10 = v6->field_10;
        v8 = (long long)xreallocarray();
    }
    if (v2 != 0)
    {
        v5 = 0;
        while (true)
        {
            v2 = ((long long)*(v3 + v5));
            if ((v2 - 65 & 255) > 21 && (((long long)*(v3 + v5)) - 48 & 255) > 9)
            {
                *(v8 + v5) = v2;
                v5 += 1;
                v4->field_0 = v4->field_4;
                return (long long)base32_decode_ctx();
            }
            if ((v2 - 65 & 255) <= 21 || (((long long)*(v3 + v5)) - 48 & 255) <= 9)
            {
                v2 = ((long long)*(base32_hex_to_norm + ((long long)(((int)v2) - 48))));
                tmp_30 = v2;
                *(v8 + v5) = tmp_30;
                v5 += 1;
                v4->field_0 = v4->field_4;
                return (long long)base32_decode_ctx();
            }
        }
    }
    v4->field_0 = v4->field_4;
    return (long long)base32_decode_ctx();
}
