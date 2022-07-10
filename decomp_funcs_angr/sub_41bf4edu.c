typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

int sub_41bf4e()
{
    struct_2 *v0;  // [bp+0x8]
    unsigned long v1;  // [bp+0x10]
    unsigned long v2;  // [bp+0x18]
    unsigned long|unsigned long long v3;  // [bp+0x28]
    struct_0 *v4;  // [bp+0x40]
    char v5;  // cl
    unsigned long v6;  // r8
    struct_1 *v7;  // r15

    if (!(((long long)(((char)v1) & 16)) == 0))
    {
        v2 = v6;
        v7->field_48 = v7->field_48 + (long long)peek_token();
        v3 = (long long)parse_expression();
    }
    else if (v5 != 9)
    {
        v0->field_8 = 1;
        v3 = (long long)create_token_tree.isra.0();
    }
    else if ((((int)v1) & 0x20000) != 0)
    {
        v0->field_8 = 1;
        v3 = (long long)create_token_tree.isra.0();
    }
    else
    {
        v3 = 0;
        v4->field_0 = 16;
    }
}
