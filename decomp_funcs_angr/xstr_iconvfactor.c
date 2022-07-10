typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xstr_iconv()
{
    unsigned long long v2;  // rax
    unsigned long|struct_0 * v3;  // rax
    unsigned long long v4;  // r12

    v4 = (long long)str_iconv();
    if (v3 != 0)
    {
        v3 = v4;
        return v2;
    }
    v3 = __errno_location();
    if (v3->field_0 != 12)
    {
        v3 = v4;
        return v2;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
