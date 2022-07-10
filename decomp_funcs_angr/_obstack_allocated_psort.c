typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int _obstack_allocated_p()
{
    unsigned long long [2] v1;  // rax
    unsigned long v2;  // rsi
    struct_0 *v3;  // rdi

    v1 = v3->field_8;
    if (v3->field_8 != 0)
    {
        while (true)
        {
            if (v1[0] >= v2 && v2 > v1)
            {
                return 1;
            }
            if (v1[0] < v2 || v2 <= v1)
            {
                v1 = v1[1];
                return 0;
            }
        }
    }
    return v3->field_8;
}
