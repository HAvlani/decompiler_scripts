typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

int proctab_hasher()
{
    unsigned long v1;  // rsi
    struct_0 *v2;  // rdi

    return ((long long)((0 CONCAT ((long long)v2->field_8)) % v1 >> 64));
}
