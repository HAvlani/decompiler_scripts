typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 gmp_allocate_func;
extern struct_0 gmp_free_func;
extern struct_0 gmp_reallocate_func;

int mp_get_memory_functions()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdx
    struct_0 *v3;  // rsi
    struct_0 *v4;  // rdi

    if (v4 != 0)
    {
        v1 = gmp_allocate_func;
        v4->field_0 = gmp_allocate_func;
    }
    if (v3 != 0)
    {
        v1 = gmp_reallocate_func;
        v3->field_0 = gmp_reallocate_func;
    }
    if (v2 != 0)
    {
        v1 = gmp_free_func;
        v2->field_0 = gmp_free_func;
        return v1;
    }
    return v1;
}
