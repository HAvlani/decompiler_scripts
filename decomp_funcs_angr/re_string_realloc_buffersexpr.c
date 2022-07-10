typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[32];
    unsigned long long field_40;
    char padding_48[67];
    char field_8b;
    char padding_8c[4];
    unsigned int field_90;
} struct_0;

int re_string_realloc_buffers()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rbx
    unsigned long v3;  // rbp
    unsigned long v4;  // rsi
    void *|struct_0 * v5;  // rdi

    v3 = v4;
    v2 = v5;
    if (v5->field_90 > 1)
    {
        if (v4 <= 2305843009213693951)
        {
            v5 = v5->field_10;
            v4 *= 4;
            v1 = realloc(v5, v4);
            if (v1 != 0)
            {
                v5 = v2->field_18;
                v2->field_10 = v1;
                if (v5 != 0)
                {
                    v1 = realloc(v5, v3 * 8);
                    if (v1 != 0)
                    {
                        v2->field_18 = v1;
                    }
                    else
                    {
                        return 12;
                    }
                }
            }
            else
            {
                return 12;
            }
        }
        else
        {
            return 12;
        }
    }
    if (v5->field_90 <= 1 || v4 <= 2305843009213693951 && v5 == 0 && v1 != 0 || v4 <= 2305843009213693951 && v1 != 0 && v1 != 0)
    {
        if (v2->field_8b == 0)
        {
            v2->field_40 = v3;
            return 0;
        }
        v1 = realloc(v2->field_8, v3);
        if (v1 != 0)
        {
            v2->field_8 = v1;
            v2->field_40 = v3;
            return 0;
        }
        else
        {
            return 12;
        }
    }
}
