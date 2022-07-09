typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[152];
    unsigned long long field_98;
    unsigned long long field_a0;
    unsigned long long field_a8;
    char field_b0;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

int sub_41ba19()
{
    struct_1 *v0;  // [bp+0x8]
    struct_0 *v1;  // [bp+0x18]
    unsigned long|unsigned long long v2;  // [bp+0x28]
    struct_2 *v3;  // [bp+0x40]
    struct_0 *v4;  // rbx

    if ((1 << ((long long)(((char)v0->field_0) & 31)) & v1->field_a8) != 0)
    {
        v4 = v1;
        v1->field_a0 = v1->field_a0 | 1 << (((char)v0->field_0) & 31);
        v2 = (long long)create_token_tree.isra.0();
        v4->field_98 = v4->field_98 + 1;
        v4->field_b0 = v4->field_b0 | 2;
    }
    else
    {
        v2 = 0;
        v3->field_0 = 6;
    }
}
