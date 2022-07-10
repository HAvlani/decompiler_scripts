typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[1];
    char field_5;
    char padding_6[10];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int base16_decode_ctx_init()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rbx
    struct_0 *v3;  // rdi

    v2 = v3;
    v3->field_18 = 4200;
    v1 = xcharalloc();
    v2->field_5 = 0;
    v2->field_10 = v1;
    v2->field_0 = 1;
    return v1;
}
