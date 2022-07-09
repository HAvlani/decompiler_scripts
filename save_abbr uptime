typedef struct struct_0 {
    char padding_0[48];
    struct struct_1 *field_30;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    char field_8;
} struct_3;

typedef struct struct_4 {
    char padding_0[8];
    char field_8;
} struct_4;

extern void g_40a0a4;

int save_abbr()
{
    struct_4 *|unsigned long long v1;  // rax
    unsigned long v2;  // rdx
    char * v3;  // rbx
    struct_3 * v4;  // rbp
    struct_0 *v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r14

    if (v5->field_30 != 0)
    {
        v4 = v6;
        if (v5 <= v5->field_30)
        {
            v1 = 1;
            if (v5->field_30 < v5 + 56)
            {
                return v1;
            }
        }
        if (v5->field_30 >= v5 + 56 || v5 > v5->field_30)
        {
            v3 = v6 + 9;
            if (v5->field_30->field_0 != 0)
            {
                while (true)
                {
                    v1 = strcmp(v3, v5->field_30);
                    while (true)
                    {
                        if (*(v3) == 0 && (v4->field_8 == 0 || v3 != v4 + 9))
                        {
                            v7 = strlen(v5->field_30);
                            v2 = v7 + 1;
                            if (v4 + 128 - v3 > v2)
                            {
                                memcpy(v3, v5->field_30, v2);
                                *(v3 + v7 + 1) = 0;
                                v5->field_30 = v3;
                                v1 = 1;
                                return v1;
                            }
                            v1 = tzalloc();
                            v4->field_0 = v1;
                            if (v1 != 0)
                            {
                                v1->field_8 = 0;
                                v3 = v1 + 9;
                                v5->field_30 = v3;
                                v1 = 1;
                                return v1;
                            }
                            else
                            {
                                v1 = 0;
                                return v1;
                            }
                        }
                        if (*(v3) != 0 || v3 == v4 + 9 && v4->field_8 != 0)
                        {
                            v3 = v3 + strlen(v3) + 1;
                            v1 = v4->field_0;
                            v3 = v4 + 9;
                            v4 = v1;
                            v1 = strcmp(v1 + 9, v5->field_30);
                            v5->field_30 = v3;
                            v1 = 1;
                            return v1;
                        }
                    }
                }
                v5->field_30 = v3;
                v1 = 1;
                return v1;
            }
            v3 = &g_40a0a4;
            v5->field_30 = v3;
            v1 = 1;
            return v1;
        }
    }
    return 1;
}
