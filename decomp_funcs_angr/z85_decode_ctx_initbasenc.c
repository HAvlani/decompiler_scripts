int z85_decode_ctx_init()
{
    unsigned long long v1;  // rax
    unsigned long long v2[4];  // rbx
    unsigned long long v3[4];  // rdi

    v2 = v3;
    v3[3] = 4200;
    v1 = xcharalloc();
    v2[0] = 1;
    v2[2] = v1;
    return v1;
}
