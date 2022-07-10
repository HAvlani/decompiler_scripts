int argv_iter_init_stream()
{
    unsigned long long v1[5];  // rax
    unsigned long v2;  // rdi

    v1 = malloc(0x30);
    if (v1 != 0)
    {
        v1[0] = v2;
        v1[2] = 0;
        v1[3] = 0;
        v1[1] = 0;
        v1[4] = 0;
        return v1;
    }
    return v1;
}
