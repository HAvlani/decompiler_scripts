typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int set_tz()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    struct_1 *v4;  // rbx
    char *v5;  // rbp
    struct_0 *v6;  // rdi
    unsigned long long v7;  // r12

    v5 = getenv("TZ");
    if (v5 != 0)
    {
        if (v6->field_8 != 0)
        {
            v3 = strcmp(v6 + 9, v5);
            if (v3 == 0)
            {
                return 1;
            }
        }
    }
    if (v6->field_8 == 0)
    {
        return 1;
    }
    if (v5 == 0 && v6->field_8 != 0 || v6->field_8 == 0 && v5 != 0 || v3 != 0 && v5 != 0)
    {
        v7 = (long long)tzalloc();
        if (v7 != 0)
        {
            v3 = setenv_TZ();
            if (v3 != 0)
            {
                v4 = __errno_location();
                if (v7 != 1)
                {
                    tzfree.part.0();
                    v4->field_0 = v6->field_0;
                    v7 = 0;
                    v1 = v7;
                    return v1;
                }
                v4->field_0 = v6->field_0;
                v7 = 0;
                v1 = v7;
                return v1;
            }
            tzset();
            v2 = v7;
            return v2;
        }
        v1 = v7;
        return v1;
    }
}
