typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char dummy_limb.5449;

int mpz_add_ui()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x20]
    unsigned long v6;  // rdx
    struct_0 *v7;  // fs

    v0 = 0;
    v1 = &dummy_limb.5449;
    if (v6 != 0)
    {
        mpz_set_ui.part.0();
    }
    mpz_add();
    if (((int)v0) != 0)
    {
        gmp_default_free();
        return v2 ^ *(v7 + 0x28);
    }
    return v2 ^ *(v7 + 0x28);
}
