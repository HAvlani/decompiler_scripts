typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int direntry_cmp_inode()
{
    struct_0 *v1;  // rsi
    struct_0 *v2;  // rdi

    return ((long long)(!(v2->field_8 <= v1->field_8) - (v2->field_8 < v1->field_8)));
}
