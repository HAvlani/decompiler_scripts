int mpz_out_str()
{
    unsigned long long v1;  // rax
    void *v3;  // rbp
    void *v4;  // rdi
    unsigned long long v5;  // r12

    v5 = 0;
    if (&stack_base+0 != 0)
    {
        v3 = mpz_get_str();
        v5 = fwrite(v3, 0x1, strlen(v3), v4);
        gmp_default_free();
        v1 = v5;
        return v1;
    }
    v1 = v5;
    return v1;
}