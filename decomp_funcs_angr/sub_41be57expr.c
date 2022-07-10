typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int sub_41be57()
{
    char v1;  // [bp+0x98]
    struct_0 *v2;  // rax
    struct_0 *v3;  // r13

    v2 = ((long long)(((int)(((long long)v1) >> 3)) & 24));
    *(v3 + v2) = *(v3 + v2) | 1 << (v1 & 63);
}
