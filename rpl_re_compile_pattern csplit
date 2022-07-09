typedef struct struct_1 {
    char padding_0[56];
    char field_38;
} struct_1;

extern struct_0 rpl_re_syntax_options;

int rpl_re_compile_pattern()
{
    struct_1 *v2;  // rdx

    v2->field_38 = ((char)(((int)(((long long)(((int)(rpl_re_syntax_options >> 25)) & 1)) * 16)) | -128 | ((int)(v2->field_38 & 111))));
    if (re_compile_internal() != 0)
    {
    }
    else
    {
        return 0;
    }
}
