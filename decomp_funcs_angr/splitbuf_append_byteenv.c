typedef struct struct_0 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int splitbuf_append_byte()
{
    BOT tmp_22;  // tmp #22
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_1 * v4;  // rdx
    struct_0 *v5;  // rbx
    unsigned long long v6;  // rbp
    char v7;  // sil
    struct_0 *v8;  // rdi

    tmp_22 = ((long long)v8->field_8);
    v4 = v8->field_0;
    v6 = *(v4 + tmp_22 * 8);
    v5 = v8;
    v2 = v8->field_10 * 8;
    if (v8->field_10 << 3 > *(v4 + (tmp_22 << 3)))
    {
        *(v2 + v4 + *(v8->field_0 + tmp_22 * 8)) = v7;
        v1 = v5->field_0;
        *(v5->field_0 + ((long long)v5->field_8) * 8) = v6 + 1;
        return v1;
    }
    splitbuf_grow();
    v4 = v5->field_0;
    v2 = v5->field_10 * 8;
    *(v2 + v4 + *(v8->field_0 + tmp_22 * 8)) = v7;
    v1 = v5->field_0;
    *(v5->field_0 + ((long long)v5->field_8) * 8) = v6 + 1;
    return v1;
}
