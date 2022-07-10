typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int fd_reopen()
{
    unsigned int v1;  // [bp+0x100008]
    unsigned long long v10;  // r12
    unsigned int v11;  // r13d
    unsigned long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v4;  // rax
    unsigned short v5;  // cx
    unsigned int v6;  // edx
    struct_0 *v7;  // rbp
    char *v8;  // rsi
    unsigned int v9;  // edi

    v10 = (long long)open(v8, v6, v5);
    if (!(v9 != v3))
    {
        v4 = v10;
        return v4;
    }
    else if (v3 < 0)
    {
        v4 = v10;
        return v4;
    }
    else
    {
        v11 = ((int)v1);
        v7 = __errno_location();
        close(((int)v7));
        v7->field_0 = v11;
        return (long long)dup2(v2, v9);
    }
}
