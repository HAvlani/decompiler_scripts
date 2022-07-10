typedef struct struct_1 {
    char padding_0[12];
    char field_c;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int wait_proc()
{
    unsigned int v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    struct_1 *v3;  // rax
    unsigned int v4;  // edi
    struct_0 *v5;  // fs

    v0 = v4;
    v3 = hash_remove();
    if (v3 != 0)
    {
        v3->field_c = 2;
        reap();
        return v1 ^ *(v5 + 0x28);
    }
    return v1 ^ *(v5 + 0x28);
}
