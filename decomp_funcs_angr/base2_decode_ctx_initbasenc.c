typedef struct struct_0 {
    unsigned int field_0;
    char field_4;
    char padding_5[11];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int base2_decode_ctx_init()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rbx
    struct_0 *v3;  // rdi

    v2 = v3;
    v3->field_18 = 4200;
    v1 = xcharalloc();
    v2->field_4 = 0;
    v2->field_10 = v1;
    v2->field_0 = 0;
    return v1;
}
