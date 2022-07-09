typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int i_ring_push()
{
    unsigned int v1;  // ecx
    struct_0 *v2;  // rdx
    unsigned int v3;  // esi
    struct_0 *v4;  // rdi
    unsigned long long v5;  // r8

    v2 = ((long long)(v4->field_14 + (((int)v4->field_1c) ^ 1) & 3));
    v5 = ((long long)*(v4 + v2 * 4));
    *(v4 + v2 * 4) = v3;
    v1 = ((int)v4->field_18);
    v4->field_14 = ((int)v2);
    if (v1 == ((int)v2))
    {
        v4->field_18 = ((int)((((int)v4->field_1c) ^ 1) + v4->field_18)) & 3;
        v4->field_1c = 0;
        return v5;
    }
    v4->field_1c = 0;
    return v5;
}
