typedef struct struct_0 {
    unsigned long long field_0;
    char field_8;
} struct_0;

int samedir_template()
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned int v5;  // ebp
    unsigned long long v6;  // rsi
    unsigned long v7;  // rdi
    unsigned int v9;  // r12d

    v5 = ((int)v7);
    v4 = v6;
    v3 = (long long)last_component() - v7;
    v9 = ((int)v3);
    if (v3 + 9 > 0x100)
    {
        v4 = malloc(v3 + 9);
        if (v4 != 0)
        {
            v1 = mempcpy(((int)v4), v5, v9);
            v1->field_0 = 6365935209750754627;
            v1->field_8 = 0x6e6567002e2e2f00;
            v2 = v4;
            return v2;
        }
        v2 = 0;
        return v2;
    }
    v1 = mempcpy(((int)v4), v5, v9);
    v1->field_0 = 6365935209750754627;
    v1->field_8 = 0x6e6567002e2e2f00;
    v2 = v4;
    return v2;
}
