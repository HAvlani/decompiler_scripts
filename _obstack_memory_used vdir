typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int _obstack_memory_used()
{
    unsigned long long [2] v1;  // rax
    unsigned long long v2;  // rdx
    struct_0 *v3;  // rdi
    unsigned long long v4;  // r8

    v1 = v3->field_8;
    v4 = 0;
    if (v3->field_8 != 0)
    {
        do
        {
            v2 = v1[0] - v1;
            v1 = v1[1];
            v4 += v2;
        }
        while (v1 != 0);
        return v4;
    }
    return v4;
}
