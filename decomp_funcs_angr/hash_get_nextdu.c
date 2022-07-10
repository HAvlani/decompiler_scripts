typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int hash_get_next()
{
    struct_1 * v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long [2] v3;  // rdx
    unsigned long v4;  // rsi
    struct_0 *v5;  // rdi
    unsigned long long v6;  // r8

    v1 = safe_hasher();
    v3 = v1;
    while (true)
    {
        v2 = v3[0];
        v3 = v3[1];
        if (v2 == v4 && v3 != 0)
        {
            return v3[0];
        }
        if (v3 == 0)
        {
            while (true)
            {
                v1 += 16;
                if (v5->field_8 > v1)
                {
                    v6 = v1->field_0;
                    if (v1->field_0 != 0)
                    {
                        break;
                    }
                    return v6;
                }
                v6 = 0;
                break;
            }
        }
    }
    return v6;
}
