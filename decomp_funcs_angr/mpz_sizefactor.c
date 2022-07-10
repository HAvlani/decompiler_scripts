typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int mpz_size()
{
    struct_0 *v1;  // rdi

    return ((long long)((v1->field_4 ^ ((int)(((long long)v1->field_4) >> 31))) - ((int)(((long long)v1->field_4) >> 31))));
}
