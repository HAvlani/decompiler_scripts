int base32hex_decode_ctx_init_wrapper()
{
    unsigned long long v1;  // rax
    unsigned long long v3[4];  // rdi

    base32_decode_ctx_init();
    v3[3] = 4200;
    v1 = xcharalloc();
    v3[2] = v1;
    return v1;
}
