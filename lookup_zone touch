typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
    char padding_0[232];
    unsigned long long field_e8;
} struct_1;

extern unsigned long long time_zone_table;
extern unsigned long long universal_time_zone_table;

int lookup_zone()
{
    unsigned long long v1;  // rax
    struct_0 * v10;  // r12
    struct_0 * v11;  // r12
    struct_0 *v2;  // rax
    struct_0 *v3;  // rax
    char *v4;  // rbx
    struct_1 *v5;  // rbp
    char * v6;  // rsi
    char *v7;  // rsi
    char * v8;  // rsi
    unsigned long long v9;  // rdi

    v10 = &universal_time_zone_table;
    v5 = v9;
    v4 = v7;
    v6 = "GMT";
    while (true)
    {
        v1 = strcmp(v4, v6);
        if (v1 != 0)
        {
            v6 = v10->field_10;
            v10 += 16;
            v8 = v5->field_e8;
            v11 = v5 + 232;
            if (v5->field_e8 == 0)
            {
                break;
            }
            else
            {
                while (true)
                {
                    v1 = strcmp(v4, v8);
                    if (v1 != 0)
                    {
                        v8 = v11->field_10;
                        v11 += 16;
                        if (v8 == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v3 = v11;
                        return v3;
                    }
                }
            }
        }
        else
        {
            v2 = v10;
            return v2;
        }
    }
    v10 = &time_zone_table;
    v6 = "WET";
    while (true)
    {
        v1 = strcmp(v4, v6);
        if (v1 != 0)
        {
            v6 = v10->field_10;
            v10 += 16;
            return 0;
        }
        break;
    }
    v2 = v10;
    return v2;
}
