typedef struct struct_0 {
    char padding_0[80];
    unsigned long long field_50;
} struct_0;

int free_state()
{
    struct_0 *v7;  // rbp
    unsigned long v8;  // rdi

    v7 = v8;
    rpl_free();
    rpl_free();
    if (v7->field_50 != v7 + 8)
    {
        rpl_free();
        rpl_free();
        rpl_free();
        rpl_free();
        rpl_free();
    }
    else
    {
        rpl_free();
        rpl_free();
        rpl_free();
    }
}
