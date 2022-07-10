typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xreadlink()
{
    struct_0 *|unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r12

    v4 = (long long)areadlink();
    if (v2 != 0)
    {
        v2 = v4;
        return v3;
    }
    v2 = __errno_location();
    if (v2->field_0 != 12)
    {
        v2 = v4;
        return v3;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
