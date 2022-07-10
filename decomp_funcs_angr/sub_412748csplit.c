typedef struct struct_0 {
    char padding_0[176];
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
} struct_0;

int sub_412748()
{
    struct_0 *v1;  // [bp+0x18]
    unsigned long v2;  // [bp+0x28]
    struct_0 *v3;  // rbx

    v3 = v1;
    v2 = (long long)create_token_tree.isra.0();
    v3->field_b0 = v3->field_b0 | 2;
}
