typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int di_set_free()
{
    struct_0 *v3;  // rdi

    hash_free();
    if (v3->field_8 != 0)
    {
        ino_map_free();
        rpl_free();
    }
    else
    {
        rpl_free();
    }
}
