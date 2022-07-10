typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int hash_lookup()
{
    unsigned long long v1;  // rax
    struct_0 *|unsigned long long [2] v2;  // rbx
    unsigned long long v3;  // rbp
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r12

    v7 = v6;
    v3 = v5;
    v1 = safe_hasher();
    v4 = v2->field_0;
    if (v2->field_0 != 0)
    {
        v2 = v1;
        while (v4 != v6)
        {
            v6 = v3;
            v1 = *(r12<8> + 56)();
            if (((long long)v1) == 0)
            {
                v2 = v2[1];
                if (v2 != 0)
                {
                    v4 = v2[0];
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                break;
            }
        }
        return &stack_base+0;
    }
    return 0;
}
