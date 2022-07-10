typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[232];
    unsigned long long field_e8;
} struct_0;

extern unsigned long long time_zone_table;
extern unsigned long long universal_time_zone_table;

int lookup_zone()
{
    unsigned long long v1;  // rax
    struct_1 * v10;  // r12
    struct_1 * v11;  // r12
    unsigned long long v2;  // rax
    struct_1 *v3;  // rax
    char *v4;  // rbx
    struct_0 *v5;  // rbp
    char * v6;  // rsi
    char * v7;  // rsi
    char *v8;  // rsi
    unsigned long long v9;  // rdi

    v10 = &universal_time_zone_table;
    v5 = v9;
    v4 = v8;
    v7 = "GMT";
    while (true)
    {
        v1 = strcmp(v4, v7);
        if (v1 != 0)
        {
            v7 = v10->field_10;
            v10 += 16;
            v6 = v5->field_e8;
            v11 = v5 + 232;
            if (v5->field_e8 == 0)
            {
                break;
            }
            else
            {
                while (true)
                {
                    v1 = strcmp(v4, v6);
                    if (v1 != 0)
                    {
                        v6 = v11->field_10;
                        v11 += 16;
                        if (v6 == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v2 = v11;
                        return v2;
                    }
                }
            }
        }
        else
        {
            v3 = v10;
            return v3;
        }
    }
    v10 = &time_zone_table;
    v7 = "WET";
    while (true)
    {
        v1 = strcmp(v4, v7);
        if (v1 != 0)
        {
            v7 = v10->field_10;
            v10 += 16;
            return 0;
        }
        break;
    }
    v3 = v10;
    return v3;
}
