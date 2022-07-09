typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int remember_copied()
{
    unsigned long long v1;  // rax
    unsigned long v10;  // rsi
    unsigned long v6;  // rdx
    unsigned long v7;  // rbx
    struct_0 *v8;  // rbx
    unsigned long long v9[3];  // rbp

    v9 = (long long)xmalloc();
    v9[0] = v10;
    v9[2] = (long long)xstrdup();
    v9[1] = v6;
    if (v7 != 0)
    {
        v7 = hash_insert();
        v1 = 0;
        if (v9 != v7)
        {
            rpl_free();
            rpl_free();
            v1 = v8->field_10;
            return v1;
        }
        return v1;
    }
    xalloc_die(); /* do not return */
}
