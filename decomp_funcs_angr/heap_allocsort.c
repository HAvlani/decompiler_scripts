typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

extern <missing-type> heap_default_compare;

int heap_alloc()
{
    struct_0 *v1;  // rax
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rbx
    unsigned long long v5;  // rbp
    unsigned long v6;  // rsi
    unsigned long v7;  // rdi

    v5 = v7;
    v3 = v6;
    v2 = xnmalloc();
    v2[1] = (v3 == 0? 1 : v3);
    v2[0] = 0;
    v2[0] = v2;
    v2[2] = 0;
    v2 = (long long)xmalloc();
    v2[3] = (v5 == 0? &heap_default_compare : v5);
    return v1;
}
