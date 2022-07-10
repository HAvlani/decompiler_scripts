extern <missing-type> gmp_allocate_func;
extern <missing-type> gmp_default_alloc;
extern <missing-type> gmp_default_free;
extern <missing-type> gmp_default_realloc;
extern <missing-type> gmp_free_func;
extern <missing-type> gmp_reallocate_func;

int mp_set_memory_functions()
{
    unsigned long v1;  // rdx
    unsigned long v2;  // rsi
    unsigned long v3;  // rdi

    gmp_allocate_func = (v3 == 0? &gmp_default_alloc : v3);
    gmp_reallocate_func = (v2 == 0? &gmp_default_realloc : v2);
    gmp_free_func = (v1 == 0? &gmp_default_free : v1);
    return &gmp_default_free;
}
