typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int randint_all_free()
{
    struct_0 *v2;  // rbx

    __explicit_bzero_chk();
    rpl_free();
    *(__errno_location() + None) = ((int)v2->field_0);
    return (long long)randread_free();
}
