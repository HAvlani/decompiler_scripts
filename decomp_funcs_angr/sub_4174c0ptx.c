typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[32];
    struct struct_1 *field_20;
    char padding_28[8];
    char field_30;
} struct_0;

int sub_4174c0()
{
    unsigned long long [3]|unsigned long long [2] v1;  // [bp+0x20]
    unsigned long long v3[3];  // rdx
    unsigned long long v4;  // rdx
    struct_2 *v5;  // rdx
    unsigned long long v6[6];  // r12
    struct_0 *v7;  // r13

    *(v6[3] + v5 * 8) = v7->field_20->field_38;
    v4 = v6[5] + v5 * 24;
    v1[0] = 1;
    v1[1] = 1;
    v1 = v4;
    v3 = v1;
    v1[2] = malloc(0x8);
    v3[1] = 0;
    v3[0] = 0;
}
