typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int rpl_free()
{
    BOT tmp_8;  // tmp #8
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned long v2;  // [bp-0x20]
    struct_1 *v4;  // rbx
    void *v5;  // rdi
    struct_0 *v6;  // fs

    v4 = __errno_location();
    tmp_8 = ((long long)v4->field_0);
    v4->field_0 = 0;
    v0 = ((int)tmp_8);
    v1 = ((int)tmp_8);
    free(v5);
    v4->field_0 = *(&stack_base-40 + ((long long)(v4->field_0 == 0)) * 4);
    return v2 ^ *(v6 + 0x28);
}
