typedef struct struct_0 {
    char padding_0[32];
    char field_20;
} struct_0;

int extract_trimmed_name()
{
    unsigned long long v1;  // rax
    unsigned long long v3;  // rax
    char * v4;  // rax
    char *v5;  // rax
    unsigned long v6;  // rdi
    unsigned long long v7;  // r12

    v7 = (long long)xmalloc();
    strncpy(v5, v6 + 44, 0x20);
    *(v5 + 0x20) = 0;
    v1 = strlen(v5);
    v4 = v1 + v5;
    v5 = v7;
    return v3;
    if (v4 < v4)
    {
        while (*(v4 + 0x1) == 32)
        {
            v4 -= 1;
            *(v4) = 0;
            break;
        }
        v5 = v7;
        return v3;
    }
}
