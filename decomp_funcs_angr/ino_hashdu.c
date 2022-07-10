typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int ino_hash()
{
    unsigned long v1;  // rsi
    struct_0 *v2;  // rdi

    return ((long long)((0 CONCAT v2->field_0) % v1 >> 64));
}
