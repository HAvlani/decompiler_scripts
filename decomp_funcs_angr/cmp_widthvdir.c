typedef struct struct_0 {
    char padding_0[200];
    unsigned long long field_c8;
} struct_0;

int cmp_width()
{
    unsigned long long v1;  // rax
    unsigned int v10;  // cc_dep2
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rsi
    struct_0 *v7;  // rdi
    struct_0 *v8;  // r12
    unsigned int v9;  // cc_dep1

    v8 = v6;
    v3 = v7->field_c8;
    v4 = fileinfo_name_width.part.0();
    v2 = v8->field_c8;
    if (v8->field_c8 != 0)
    {
        v9 = ((int)v4);
        v10 = ((int)v2);
        v5 = ((long long)(v4 - v2));
        v1 = v5;
        if (v9 == v10)
        {
            /* goto rdx<8>; */
        }
        else
        {
            return v1;
        }
    }
    else
    {
        v2 = fileinfo_name_width.part.0();
        v9 = ((int)v4);
        v10 = ((int)v2);
        v5 = ((long long)(v4 - v2));
        v1 = v5;
        if (v9 == v10)
        {
            /* goto rdx<8>; */
        }
        else
        {
            return v1;
        }
    }
}
