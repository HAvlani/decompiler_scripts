typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int mpz_fits_ulong_p()
{
    struct_0 *v1;  // rdi

    return ((long long)(((long long)v1->field_4) <= 1));
}
