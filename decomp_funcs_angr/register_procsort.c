typedef struct struct_1 {
    char padding_0[12];
    char field_c;
} struct_1;

extern struct_0 proctab;

int register_proc()
{
    unsigned long long v2;  // rax
    struct_1 *v3;  // rdi

    if (proctab != 0)
    {
        v3->field_c = 1;
        v2 = hash_insert();
        if (v2 != 0)
        {
            return v2;
        }
        xalloc_die(); /* do not return */
    }
    proctab = (long long)hash_initialize();
    if (proctab != 0)
    {
        v3->field_c = 1;
        v2 = hash_insert();
        if (v2 != 0)
        {
            return v2;
        }
        else
        {
            xalloc_die(); /* do not return */
        }
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
