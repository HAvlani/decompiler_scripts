typedef struct struct_1 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[1];
    char field_31;
    char padding_32[1];
    char field_33;
    char field_34;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_418530;

int set_process_security_ctx()
{
    unsigned long long v1;  // rax
    struct_0 *v10;  // r13
    unsigned long long v2;  // rax
    char v3;  // cl
    struct_1 *v4;  // rbx
    struct_1 *v5;  // r8
    char v6;  // r12b
    unsigned long|unsigned int v7;  // r12
    unsigned long long v8;  // r12
    unsigned long long v9;  // r12

    v4 = v5;
    if (v5->field_33 != 0)
    {
        v10 = __errno_location();
        if (v5->field_31 == 0)
        {
            v10->field_0 = 95;
            v9 = (long long)quotearg_style();
            error(0x0, v10->field_0, dcgettext(0x0, &g_418530, 0x5));
            v7 = ((long long)v5->field_34);
            v2 = ((long long)(v7 ^ 1));
            return v2;
        }
        v7 = ((int)v4->field_34);
        if (((long long)v4->field_34) != 0)
        {
            v10->field_0 = 95;
            v9 = (long long)quotearg_style();
            error(0x0, v10->field_0, dcgettext(0x0, &g_418530, 0x5));
            v7 = ((long long)v5->field_34);
            v2 = ((long long)(v7 ^ 1));
            return v2;
        }
        else
        {
            v10->field_0 = 95;
            v2 = ((long long)(v7 ^ 1));
            return v2;
        }
    }
    v6 = ((char)(v5->field_28 != 0)) & v3;
    if (((long long)(((char)(v5->field_28 != 0)) & v3)) == 0)
    {
        return 1;
    }
    else
    {
        *(__errno_location() + None) = 95;
        v1 = v8;
        return v1;
    }
}
