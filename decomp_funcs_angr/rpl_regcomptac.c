typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[8];
    char field_38;
} struct_0;

int rpl_regcomp()
{
    unsigned long long v10;  // r12
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx
    struct_0 *v7;  // rbp
    char *v8;  // rsi
    struct_0 *v9;  // rdi

    v7 = v9;
    v9->field_0 = 0;
    v9->field_8 = 0;
    v9->field_10 = 0;
    v3 = malloc(0x100);
    v9->field_20 = v3;
    if (v3 != 0)
    {
        v5 = 0;
        if (((long long)(((char)v6) & 4)) != 0)
        {
            v5 = 1;
        }
        v7->field_28 = 0;
        v7->field_38 = ((char)(((int)(((long long)(((int)v6) % 8 & 1)) * 16)) | ((int)v5) * 128 | ((int)(v7->field_38 & 111))));
        strlen(v8);
        v10 = (long long)re_compile_internal();
        if (!(((int)v10) != 16))
        {
            v10 = 8;
            rpl_free();
            v7->field_20 = 0;
            v4 = v10;
            return v4;
        }
        else if (((int)v10) == 0)
        {
            rpl_re_compile_fastmap();
            v4 = v10;
            return v4;
        }
        else
        {
            rpl_free();
            v7->field_20 = 0;
            v4 = v10;
            return v4;
        }
    }
    return 12;
}