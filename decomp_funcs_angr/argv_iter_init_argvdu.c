int argv_iter_init_argv()
{
    unsigned long long v1[6];  // rax
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rdi

    v2 = v3;
    v1 = malloc(0x30);
    if (v1 != 0)
    {
        v1[0] = 0;
        v1[4] = v2;
        v1[5] = v2;
        return v1;
    }
    return v1;
}
