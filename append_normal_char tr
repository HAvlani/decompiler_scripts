typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_2;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_0 *field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int append_normal_char()
{
    struct_2 *v1;  // rax
    struct_0 *v2;  // rdx
    char v3;  // sil
    struct_1 *v4;  // rdi

    v1 = xmalloc();
    v2 = v4->field_8;
    v1->field_8 = 0;
    v1->field_0 = 0;
    v1->field_10 = v3;
    if (v2 != 0)
    {
        v4->field_8->field_8 = v1;
        v4->field_8 = v1;
        return v1;
    }
    __assert_fail(); /* do not return */
}
