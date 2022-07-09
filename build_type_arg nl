typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char *optarg;
extern unsigned long long rpl_re_syntax_options;

int build_type_arg()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v10;  // r8
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    char *v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7[6];  // rsi
    struct_0 *v8;  // rdi
    struct_0 *v9;  // rdi

    v5 = optarg;
    if (!(*(optarg) != 112))
    {
        v1 = v12;
        v0 = &stack_base+0;
        optarg = v5 + 1;
        v8->field_0 = v5;
        v7[0] = 0;
        v7[4] = v6;
        v7[1] = 0;
        v7[5] = 0;
        rpl_re_syntax_options = 710;
        strlen(optarg);
        if (rpl_re_compile_pattern() == 0)
        {
            v11 = v1;
            return 1;
        }
        error(0x1, 0x0, "%s");
    }
    else if (((char)(((long long)*(optarg)) <= 112)))
    {
        if (*(optarg) != 97)
        {
            v10 = 0;
            if (*(optarg) == 110)
            {
                v9->field_0 = optarg;
                v10 = 1;
                return v10;
            }
            return v10;
        }
        return 0;
        v9->field_0 = optarg;
        v10 = 1;
        return v10;
    }
    else
    {
        if (*(optarg) == 116)
        {
            v9->field_0 = optarg;
            v10 = 1;
            return v10;
        }
    }
}
