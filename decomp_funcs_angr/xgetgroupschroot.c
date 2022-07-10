typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xgetgroups()
{
    struct_0 *|unsigned int v1;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r12

    v4 = (long long)mgetgroups();
    if (v1 != -1)
    {
        v3 = v4;
        return v3;
    }
    v1 = __errno_location();
    if (v1->field_0 != 12)
    {
        v3 = v4;
        return v3;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
