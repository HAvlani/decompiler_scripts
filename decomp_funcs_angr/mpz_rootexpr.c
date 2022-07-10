extern char dummy_limb.5449;

int mpz_root()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    char v5;  // r12b
    unsigned long long v6;  // r12

    v6 = 0;
    v0 = 0;
    v1 = &dummy_limb.5449;
    mpz_rootrem();
    v5 = ((char)(((int)*((int *)(((char *)&v0) + 4))) == 0));
    if (((int)v0) != 0)
    {
        gmp_default_free();
        v3 = r12<8>;
        return v3;
    }
    v3 = r12<8>;
    return v3;
}
