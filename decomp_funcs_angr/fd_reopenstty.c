typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int fd_reopen()
{
    unsigned int v1;  // [bp+0x100008]
    unsigned long long v10;  // r12
    unsigned int v2;  // eax
    unsigned long long v3;  // rax
    unsigned long v4;  // rax
    unsigned short v5;  // cx
    unsigned int v6;  // edx
    char *v7;  // rsi
    struct_0 *v8;  // rdi
    unsigned int v9;  // edi

    v10 = (long long)open(v7, v6, v5);
    if (!(v9 != v2))
    {
        v3 = v10;
        return v3;
    }
    else if (v2 < 0)
    {
        v3 = v10;
        return v3;
    }
    else
    {
        close(v9);
        v8->field_0 = ((int)v1);
        return (long long)dup2(v4, (int)__errno_location());
    }
}
