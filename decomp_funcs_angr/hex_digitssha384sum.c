extern struct_1 digest_hex_bytes;

int hex_digits()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    char * v4;  // rbx
    unsigned long long v5;  // rdi

    v4 = v5;
    if (digest_hex_bytes != 0)
    {
        v2 = *(__ctype_b_loc());
        v1 = 0;
        while (true)
        {
            if (((long long)(*(v2 + (((long long)*(v4)) << 1) + 1) & 16)) != 0)
            {
                v3 = v1 + 1;
                v4 += 1;
                v1 += 1;
                return v1;
            }
        }
        return 0;
    }
    return v1;
}
