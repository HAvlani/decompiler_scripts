typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int fd_reopen()
{
    unsigned int v1;  // [bp+0x100008]
    unsigned long long v10;  // r12
    unsigned int v2;  // eax
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned short v5;  // cx
    unsigned int v6;  // edx
    char *v7;  // rsi
    unsigned int v8;  // edi
    struct_0 *v9;  // rdi

    v10 = (long long)open(v7, v6, v5);
    if (!(v8 != v2))
    {
        v4 = v10;
        return v4;
    }
    else if (v2 < 0)
    {
        v4 = v10;
        return v4;
    }
    else
    {
        close(v8);
        v9->field_0 = ((int)v1);
        return (long long)dup2(v3, (int)__errno_location());
    }
}
