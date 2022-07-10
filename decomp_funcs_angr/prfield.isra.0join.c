typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

extern struct_0 empty_filler;

int prfield.isra.0()
{
    unsigned long v1;  // rax
    struct_0 *v2;  // rdx
    unsigned long v3;  // rsi
    unsigned long|struct_1 * v4;  // rdi

    if (v4 < v3)
    {
        v4 = v4 * 16 + v2->field_0;
        if (v4->field_8 != 0)
        {
        }
        else
        {
            if (empty_filler != 0)
            {
            }
            else
            {
                return v1;
            }
        }
    }
    else
    {
        return v1;
    }
}
