typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_2 {
    char padding_0[40];
    unsigned long long field_28;
} struct_2;

typedef struct struct_0 {
    char padding_0[32];
    struct struct_1 *field_20;
} struct_0;

int sub_413f30()
{
    struct_3 *v1;  // rax
    unsigned long long v2;  // rdx
    struct_3 *v3;  // rdx
    unsigned long long v5[3];  // rbx
    unsigned long long v6;  // rbp
    struct_2 *v7;  // r12
    struct_0 *v8;  // r13

    v3 = v2 * 3;
    v6 = v7->field_28 + v3 * 8;
    *(v7->field_28 + v3 * 8) = 1;
    v5[1] = 1;
    v1 = malloc(0x8);
    v5[2] = v1;
    if (v1 != 0)
    {
        v1->field_0 = v8->field_20->field_38;
    }
    else
    {
        v5 = v6;
        v5[1] = 0;
        v5[0] = 0;
    }
}
