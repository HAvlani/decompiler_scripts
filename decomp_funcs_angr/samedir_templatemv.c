typedef struct struct_0 {
    unsigned long long field_0;
    char field_8;
} struct_0;

int samedir_template()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned long long v4;  // rbx
    unsigned int v5;  // ebp
    unsigned long long v6;  // rsi
    unsigned long v7;  // rdi
    unsigned int v9;  // r12d

    v5 = ((int)v7);
    v4 = v6;
    v2 = (long long)last_component() - v7;
    v9 = ((int)v2);
    if (v2 + 9 > 0x100)
    {
        v4 = malloc(v2 + 9);
        if (v4 != 0)
        {
            v3 = mempcpy(((int)v4), v5, v9);
            v3->field_0 = 6365935209750754627;
            v3->field_8 = 0x53007e00312e3900;
            v1 = v4;
            return v1;
        }
        v1 = 0;
        return v1;
    }
    v3 = mempcpy(((int)v4), v5, v9);
    v3->field_0 = 6365935209750754627;
    v3->field_8 = 0x53007e00312e3900;
    v1 = v4;
    return v1;
}
