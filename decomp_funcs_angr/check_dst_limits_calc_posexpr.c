typedef struct struct_0 {
    char padding_0[216];
    unsigned long long field_d8;
} struct_0;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
} struct_2;

int check_dst_limits_calc_pos()
{
    struct_2 *v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rsi
    struct_0 *v5;  // rdi
    unsigned long long v6;  // r8
    unsigned long long v7;  // r8
    unsigned long long v8;  // r10

    v8 = v3;
    v4 = v6;
    v1 = v8 * 48 + v5->field_d8;
    v7 = *(v8 * 48 + v5->field_d8 + 16);
    if (*((v8 + (v8 << 1) << 4) + v5->field_d8 + 16) <= v4)
    {
        v2 = v1->field_18;
        if (!(v2 >= v4))
        {
            return 1;
        }
        else if (v7 != v4)
        {
            return 0;
        }
    }
    else
    {
        return -1;
    }
}