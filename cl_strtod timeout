typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int cl_strtod()
{
    unsigned long v0;  // [bp-0x50]
    char * v1;  // [bp-0x40]
    struct_0 *v10;  // fs
    unsigned long v11;  // xmm0lq
    unsigned long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    struct_0 *v6;  // rsi
    struct_1 *v7;  // r12
    unsigned int v9;  // r13d

    strtod();
    if (*(v1) != 0)
    {
        v0 = v11;
        v9 = ((int)v7->field_0);
        c_strtod();
        if (v1 < v2)
        {
            v1 = v2;
        }
        else
        {
            *(__errno_location() + None) = v9;
        }
    }
    if (v6 != 0)
    {
        v6->field_0 = v1;
        return v3 ^ *(v10 + 0x28);
    }
    return v3 ^ *(v10 + 0x28);
}
