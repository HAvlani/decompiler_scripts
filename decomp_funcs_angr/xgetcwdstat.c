typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xgetcwd()
{
    unsigned long long v1;  // rax
    unsigned long|struct_0 * v2;  // rax
    unsigned long long v4;  // r12

    v4 = getcwd(0x0, 0x0);
    if (v2 != 0)
    {
        v2 = v4;
        return v1;
    }
    v2 = __errno_location();
    if (v2->field_0 != 12)
    {
        v2 = v4;
        return v1;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
