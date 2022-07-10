typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int fd_safer_flag()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rbx
    unsigned int v3;  // rdi

    if (((int)((unsigned int)v3)) > 2)
    {
        return v3;
    }
    close(((unsigned int)v3));
    *(__errno_location() + None) = ((int)v2->field_0);
    return v1;
}
