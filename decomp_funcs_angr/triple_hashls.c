typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int triple_hash()
{
    unsigned long v1;  // rdx
    unsigned long v2;  // rsi
    struct_0 *v3;  // rdi

    v1 = ((long long)((0 CONCAT (long long)hash_pjw() ^ v3->field_8) % v2 >> 64));
    return v1;
}
