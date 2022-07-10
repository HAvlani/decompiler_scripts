typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
} struct_0;

extern struct_0 *pending_dirs;

int queue_directory()
{
    struct_0 *v1;  // rax
    char v2;  // dl
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long v6;  // rdi
    unsigned long long v7;  // r12

    v7 = v5;
    v4 = v6;
    v3 = (long long)xmalloc();
    if (v5 != 0)
    {
        v7 = (long long)xstrdup();
    }
    *(pending_dirs + 8) = v7;
    if (v6 != 0)
    {
        v4 = (long long)xstrdup();
        v1 = pending_dirs;
        *(pending_dirs) = v4;
        *(pending_dirs + 16) = v2;
        *(pending_dirs + 24) = pending_dirs;
        pending_dirs = v3;
        return v1;
    }
    v1 = pending_dirs;
    *(pending_dirs) = v4;
    *(pending_dirs + 16) = v2;
    *(pending_dirs + 24) = pending_dirs;
    pending_dirs = v3;
    return v1;
}
