typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
    char field_1c;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int check_start_new_arg.part.0()
{
    unsigned long long v1;  // rax
    struct_1 *v3;  // rbx
    struct_2 *v4;  // rbp
    unsigned long v5;  // rdi

    v3 = v5;
    splitbuf_append_byte();
    v4 = ((long long)v3->field_8);
    if (v3->field_10 > ((long long)(v3->field_18 + v3->field_8 + 1)))
    {
        v1 = v3->field_0;
        *(v3->field_0 + v4 * 8 + 8) = *(v3->field_0 + v4 * 8);
        v3->field_8 = ((int)v4) + 1;
        v3->field_1c = 0;
        return v1;
    }
    splitbuf_grow();
    v1 = v3->field_0;
    *(v3->field_0 + v4 * 8 + 8) = *(v3->field_0 + v4 * 8);
    v3->field_8 = ((int)v4) + 1;
    v3->field_1c = 0;
    return v1;
}
