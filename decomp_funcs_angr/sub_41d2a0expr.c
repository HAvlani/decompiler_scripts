typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[32];
    struct struct_2 *field_20;
    char padding_28[8];
    char field_30;
} struct_1;

int sub_41d2a0()
{
    unsigned long long [3]|unsigned long long [2] v1;  // [bp+0x20]
    unsigned long long v3[3];  // rdx
    struct_0 *v4;  // rdx
    unsigned long long v5[3];  // rdx
    unsigned long long v6[6];  // r12
    struct_1 *v7;  // r13

    *(v6[3] + v4 * 8) = v7->field_20->field_38;
    v3 = v6[5] + v4 * 24;
    v1[0] = 1;
    v1[1] = 1;
    v1 = v3;
    v5 = v1;
    v1[2] = malloc(0x8);
    v5[1] = 0;
    v5[0] = 0;
}
