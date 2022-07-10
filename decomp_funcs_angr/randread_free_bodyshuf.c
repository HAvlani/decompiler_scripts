typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int randread_free_body()
{
    struct_0 *v2;  // rdi

    __explicit_bzero_chk();
    rpl_free();
    if (v2->field_0 != 0)
    {
    }
    else
    {
        return 0;
    }
}
