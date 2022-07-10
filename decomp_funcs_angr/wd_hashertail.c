typedef struct struct_0 {
    char padding_0[68];
    unsigned int field_44;
} struct_0;

int wd_hasher()
{
    unsigned long v1;  // rsi
    struct_0 *v2;  // rdi

    return ((long long)((0 CONCAT ((long long)v2->field_44)) % v1 >> 64));
}
