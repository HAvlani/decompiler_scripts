typedef struct struct_0 {
    char padding_0[200];
    unsigned long long field_c8;
    char padding_d0[24];
    unsigned long long field_e8;
    char padding_f0[8];
    struct struct_1 **field_f8;
} struct_0;

typedef struct struct_2 {
    char padding_0[200];
    unsigned long long field_c8;
    char padding_d0[24];
    unsigned long long field_e8;
    char padding_f0[8];
    struct struct_3 **field_f8;
} struct_2;

int match_ctx_clean()
{
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    struct_0 *v6;  // rdi
    unsigned long long v7[5];  // r12
    unsigned long long v8;  // r13
    struct_2 *v9;  // r14

    v9 = v6;
    if (v6->field_e8 > 0)
    {
        v8 = 0;
        while (true)
        {
            v7 = v9->field_f8[v8];
            if (v9->field_f8[v8]->field_20 > 0)
            {
                v5 = 0;
                while (true)
                {
                    v5 += 1;
                    rpl_free();
                    rpl_free();
                    if (v6->field_f8[0]->field_20 <= v5)
                    {
                        break;
                    }
                }
            }
            rpl_free();
            if (v7[2] != 0)
            {
                rpl_free();
                rpl_free();
            }
            v8 += 1;
            v4 = rpl_free();
            if (v9->field_e8 <= v8)
            {
                break;
            }
        }
        v9->field_e8 = 0;
        v9->field_c8 = 0;
        return v4;
    }
    v9->field_e8 = 0;
    v9->field_c8 = 0;
    return v4;
}
