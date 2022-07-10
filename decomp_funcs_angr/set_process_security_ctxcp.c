typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[1];
    char field_31;
    char padding_32[1];
    char field_33;
    char field_34;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int g_414c10;

int set_process_security_ctx()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    char v3;  // cl
    struct_0 *v4;  // rbx
    struct_0 *v5;  // r8
    unsigned long v6;  // r12
    char v7;  // r12b
    unsigned long|unsigned int v8;  // r12
    struct_1 *v9;  // r13

    v4 = v5;
    if (v5->field_33 != 0)
    {
        v9 = __errno_location();
        if (v5->field_31 == 0)
        {
            v9->field_0 = 95;
            v8 = (long long)quotearg_style();
            error(0x0, v9->field_0, dcgettext(0x0, &g_414c10, 0x5));
            v8 = ((int)v5->field_34);
            v1 = ((long long)(v8 ^ 1));
            return v1;
        }
        v8 = ((long long)v4->field_34);
        if (((long long)v4->field_34) != 0)
        {
            v9->field_0 = 95;
            v8 = (long long)quotearg_style();
            error(0x0, v9->field_0, dcgettext(0x0, &g_414c10, 0x5));
            v8 = ((int)v5->field_34);
            v1 = ((long long)(v8 ^ 1));
            return v1;
        }
        else
        {
            v9->field_0 = 95;
            v1 = ((long long)(v8 ^ 1));
            return v1;
        }
    }
    v7 = ((char)(v5->field_28 != 0)) & v3;
    if (((long long)(((char)(v5->field_28 != 0)) & v3)) == 0)
    {
        return 1;
    }
    else
    {
        *(__errno_location() + None) = 95;
        v2 = v6;
        return v2;
    }
}
