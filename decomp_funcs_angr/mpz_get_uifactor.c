typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_get_ui()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = 0;
    if (v2->field_4 != 0)
    {
        v1 = v2->field_8->field_0;
        return v1;
    }
    return v1;
}
