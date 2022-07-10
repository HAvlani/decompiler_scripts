typedef struct struct_0 {
    char padding_0[32];
    char field_20;
} struct_0;

int extract_trimmed_name()
{
    char * v1;  // rax
    char *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v6;  // rdi
    unsigned long long v7;  // r12

    v7 = (long long)xmalloc();
    strncpy(v2, v6 + 44, 0x20);
    *(v2 + 0x20) = 0;
    v3 = strlen(v2);
    v1 = v3 + v2;
    v2 = v7;
    return v4;
    if (v1 < v1)
    {
        while (*(v1 + 0x1) == 32)
        {
            v1 -= 1;
            *(v1) = 0;
            break;
        }
        v2 = v7;
        return v4;
    }
}
