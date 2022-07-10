typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
} struct_0;

int mb_copy()
{
    BOT tmp_16;  // tmp #16
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    struct_0 *v4;  // rbx
    struct_0 *v5;  // rbp
    void *v6;  // rsi
    struct_0 *v7;  // rsi
    void *|struct_0 * v8;  // rdi

    v5 = v8;
    v4 = v7;
    v2 = v7 + 24;
    v6 = v7->field_0;
    v3 = v4->field_8;
    if (v6 != v2)
    {
        v8->field_0 = v6;
    }
    else
    {
        v8 += 24;
        v5->field_0 = memcpy(v8, v6, v4->field_8);
    }
    v1 = ((long long)v4->field_10);
    v5->field_8 = v3;
    tmp_16 = v1;
    v5->field_10 = tmp_16;
    if (((long long)tmp_16) != 0)
    {
        v1 = ((long long)v4->field_14);
        v5->field_14 = v4->field_14;
        return v1;
    }
    return v1;
}
