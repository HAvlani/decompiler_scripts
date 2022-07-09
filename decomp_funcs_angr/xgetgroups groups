typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xgetgroups()
{
    unsigned int|struct_0 * v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v4;  // r12

    v4 = (long long)mgetgroups();
    if (v1 != -1)
    {
        v2 = v4;
        return v2;
    }
    v1 = __errno_location();
    if (v1->field_0 != 12)
    {
        v2 = v4;
        return v2;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
