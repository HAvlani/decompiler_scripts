typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[12];
    char field_3c;
} struct_0;

int make_ancestor()
{
    unsigned int v0;  // [bp-0x1c]
    unsigned long long v3;  // rax
    struct_0 *v4;  // rdx
    unsigned int v5;  // esi

    if (v4->field_28 != 0)
    {
        *(__errno_location() + None) = 95;
    }
    v3 = mkdir(v5, 0x1ed);
    if (!(((int)v0) == 0))
    {
        return ((long long)v0);
    }
    else if (v4->field_3c == 0)
    {
        return ((long long)v0);
    }
    else
    {
        v0 = v3;
        announce_mkdir.part.0();
        return ((long long)v0);
    }
}
