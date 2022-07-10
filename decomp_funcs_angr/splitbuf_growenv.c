typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int splitbuf_grow()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rbx
    struct_0 *v4;  // rdi
    unsigned long v5;  // r12

    v1 = v5;
    v0 = v3;
    v4->field_0 = (long long)xpalloc();
}
