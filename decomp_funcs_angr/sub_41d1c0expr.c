typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
} struct_0;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_2 *field_20;
} struct_1;

int sub_41d1c0()
{
    struct_3 *v1;  // rax
    unsigned long long v2;  // rdx
    struct_3 *v3;  // rdx
    unsigned long long v4[3];  // rbx
    unsigned long long v6;  // rbp
    struct_0 *v7;  // r12
    struct_1 *v8;  // r13

    v3 = v2 * 3;
    v6 = v7->field_28 + v3 * 8;
    *(v7->field_28 + v3 * 8) = 1;
    v4[1] = 1;
    v1 = malloc(0x8);
    v4[2] = v1;
    if (v1 != 0)
    {
        v1->field_0 = v8->field_20->field_38;
    }
    else
    {
        v4 = v6;
        v4[1] = 0;
        v4[0] = 0;
    }
}
