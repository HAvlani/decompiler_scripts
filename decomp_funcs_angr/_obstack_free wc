typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[40];
    char field_50;
} struct_0;

int _obstack_free()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rbx
    unsigned long long v3;  // rbp
    unsigned long long [2] v4;  // rsi
    unsigned long long v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7;  // r12

    v7 = v5;
    v4 = v6->field_8;
    v2 = v6;
    if (v6->field_8 == 0)
    {
        return v1;
    }
    while (true)
    {
        if (v4 < v7)
        {
            v1 = v4[0];
            if (v4[0] >= v7)
            {
                v2->field_18 = v7;
                v2->field_10 = v7;
                v2->field_20 = v1;
                v2->field_8 = v4;
                return v1;
            }
        }
        if (v4[0] < v7 || v4 >= v7)
        {
            v3 = v4[1];
            v1 = call_freefun();
            v2->field_50 = v2->field_50 | 2;
            if (v4 != 0)
            {
                v4 = v3;
            }
            else
            {
                if (v7 == 0)
                {
                    break;
                }
            }
        }
    }
    return v1;
}
