typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xgetgroups()
{
    unsigned long long v2;  // rax
    struct_0 *|unsigned int v3;  // eax
    unsigned long long v4;  // r12

    v4 = (long long)mgetgroups();
    if (v3 != -1)
    {
        v2 = v4;
        return v2;
    }
    v3 = __errno_location();
    if (v3->field_0 != 12)
    {
        v2 = v4;
        return v2;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
