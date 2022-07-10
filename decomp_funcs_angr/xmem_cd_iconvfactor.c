typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xmem_cd_iconv()
{
    unsigned long long v1;  // rax
    struct_0 *|unsigned int v2;  // eax
    unsigned long long v4;  // r12

    v4 = (long long)mem_cd_iconv();
    if (v2 >= 0)
    {
        v1 = v4;
        return v1;
    }
    v2 = __errno_location();
    if (v2->field_0 != 12)
    {
        v1 = v4;
        return v1;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
