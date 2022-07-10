typedef struct struct_4 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[128];
    char field_b0;
} struct_4;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    struct struct_3 *field_10;
    char padding_18[8];
    struct struct_2 *field_20;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

int sub_41d210()
{
    unsigned long long v1[2];  // rax
    struct_5 *v2;  // rdx
    unsigned long long v3;  // rdx
    unsigned long long v4[3];  // rbp
    struct_4 *v5;  // r12
    struct_0 *v6;  // r13
    unsigned long long v7;  // r14
    unsigned long long v8;  // r15

    v5->field_b0 = v5->field_b0 | 1;
    if (v6->field_8 != 0)
    {
        v7 = v6->field_8->field_18->field_38;
    }
    else
    {
        v7 = v6->field_20->field_38;
    }
    if (v6->field_10 != 0)
    {
        v8 = *(v6->field_10->field_18 + 56);
    }
    else
    {
        v8 = v6->field_20->field_38;
    }
    v2 = v3 * 3;
    v4 = v5->field_28 + v2 * 8;
    *(v5->field_28 + v2 * 8) = 2;
    v1 = malloc(0x10);
    v4[2] = v1;
    if (v7 != v8)
    {
        v4[1] = 2;
        if (((char)(v7 < v8)))
        {
            v1[0] = v7;
            v1[1] = v8;
        }
        else
        {
            v1[0] = v8;
            v1[1] = v7;
        }
    }
    else
    {
        v4[1] = 1;
        v1[0] = v7;
    }
}
