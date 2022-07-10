typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[12];
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int i_ring_pop()
{
    struct_0 *v1;  // rax
    struct_0 *v2;  // rdi
    unsigned long long v3;  // r8

    v1 = ((long long)v2->field_14);
    v3 = ((long long)*(v2 + v1 * 4));
    *(v2 + v1 * 4) = v2->field_10;
    if (((int)v1) != v2->field_18)
    {
        v2->field_14 = ((int)v1) + 3 & 3;
        return v3;
    }
    v2->field_1c = 1;
    return v3;
}
