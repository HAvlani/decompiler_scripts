typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpz_set_ui.part.0()
{
    struct_1 *v1;  // rax
    struct_1 *v2;  // rax
    unsigned int v3;  // eax
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi

    v3 = ((int)v6->field_0);
    v6->field_4 = 1;
    if (v3 > 0)
    {
        v2 = v6->field_8;
        *(v6->field_8 + None) = v5;
        return v2;
    }
    v1 = mpz_realloc();
    v1->field_0 = v5;
    return v1;
}
