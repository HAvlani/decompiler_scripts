typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int exclude_add_pattern_buffer()
{
    unsigned long long v1[2];  // rax
    unsigned long long v2;  // rdx
    struct_0 *v3;  // rbx
    unsigned long v4;  // rsi
    unsigned long long v5;  // rdi

    v3 = v5;
    v1 = xmalloc();
    v2 = v3->field_8;
    v1[1] = v4;
    v1[0] = v2;
    v3->field_8 = v1;
    return v1;
}
