typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int ambsalign()
{
    unsigned long v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // ecx
    unsigned long long v6;  // rbp
    struct_0 *v7;  // rsi
    unsigned long long v8;  // r12

    v8 = 0;
    v3 = v7->field_0;
    v1 = v5;
    v0 = v3;
    while (true)
    {
        v6 = v3 + 1;
        v8 = realloc(v8, v3 + 1);
        if (v8 != 0)
        {
            v7->field_0 = v0;
            v3 = mbsalign();
            if (v3 != 18446744069414584319)
            {
                v4 = v8;
                return v4;
            }
            v8 = 0;
            rpl_free();
            v4 = v8;
            return v4;
        }
        rpl_free();
        v4 = v8;
        return v4;
    }
}
