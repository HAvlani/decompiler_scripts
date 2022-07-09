typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[8];
    unsigned long long field_18;
    unsigned long long field_20;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int make_ancestor()
{
    unsigned long long v1;  // rax
    struct_1 *v3;  // rdx
    struct_0 *v4;  // rbx
    struct_1 *v5;  // rbp
    unsigned int v6;  // esi
    unsigned long long v7;  // r12

    v5 = v3;
    if (v3->field_18 != 0)
    {
        *(__errno_location() + None) = 95;
    }
    if (v5->field_8 != v5->field_c)
    {
        umask();
    }
    v7 = mkdir(v6, 0x1ff);
    if (v5->field_8 != v5->field_c)
    {
        umask();
        *(__errno_location() + None) = ((int)v4->field_0);
    }
    if (((int)v7) == 0)
    {
        v7 = ((long long)(((int)(((long long)v5->field_8) >> 8)) & 1));
        if (v5->field_20 != 0)
        {
            announce_mkdir.part.0();
            v1 = v7;
            return v1;
        }
        v1 = v7;
        return v1;
    }
    v1 = v7;
    return v1;
}
