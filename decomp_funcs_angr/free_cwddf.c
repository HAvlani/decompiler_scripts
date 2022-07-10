typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int free_cwd()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v3;  // rbx
    struct_0 *v4;  // rdi
    unsigned long v5;  // rdi

    v0 = v3;
    v5 = ((long long)v4->field_0);
    if (((int)v5) >= 0)
    {
        close(v5);
    }
}
