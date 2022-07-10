typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[72];
    struct struct_1 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    unsigned long long field_c0;
} struct_0;

typedef struct struct_7 {
    char padding_0[104];
    char field_68;
} struct_7;

typedef struct struct_8 {
    char padding_0[16];
    unsigned long long field_10;
} struct_8;

typedef struct struct_3 {
    char padding_0[80];
    unsigned long long field_50;
} struct_3;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int merge_state_with_log()
{
    BOT tmp_50;  // tmp #50
    unsigned long v0;  // [bp-0x68]
    struct_2 *v1;  // [bp-0x60]
    struct_4 *v10;  // rdi
    struct_8 *v11;  // r10
    struct_7 *|unsigned long long v12;  // r12
    BOT v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x48]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    struct_3 *|unsigned long long v7;  // rdx
    unsigned long long v8;  // rbp
    struct_0 *v9;  // rsi

    v8 = v9->field_48;
    v12 = v8 * 8;
    if (v9->field_c0 < v8)
    {
        *(tmp_50 + v9->field_48 * 8) = v7;
        v12 = v7;
        v9->field_c0 = v8;
    }
    else if (*(tmp_50 + (v9->field_48 << 3)) != 0)
    {
        v11 = *(*(tmp_50 + v9->field_48 * 8) + 80);
        if (v7 != 0)
        {
            v0 = v7->field_50;
            v5 = re_node_set_init_union();
            v10->field_0 = v5;
            if (v5 == 0)
            {
                re_string_context_at();
                v1 = v9->field_b8 + v9->field_48 * 8;
                v12 = (long long)re_acquire_state_context();
                v1->field_0 = v12;
                if (v0 != 0)
                {
                    rpl_free();
                }
            }
            else
            {
                v6 = v12;
                return v6;
            }
        }
        else
        {
            v2 = *(*(*(tmp_50 + v9->field_48 * 8) + 80));
            v3 = v11->field_10;
            re_string_context_at();
            *(tmp_50 + v9->field_48 * 8) = v9->field_48 * 8;
            v12 = (long long)re_acquire_state_context();
        }
    }
    else
    {
        *(tmp_50 + v9->field_48 * 8) = v7;
        v12 = v7;
    }
    if (*(tmp_50 + (v9->field_48 << 3)) == 0 || v5 == 0 || v9->field_c0 < v8 || v7 == 0)
    {
        if (v9->field_98->field_98 == 0)
        {
            v6 = v12;
            return v6;
        }
        else if (v12 != 0)
        {
            v5 = check_subexp_matching_top.isra.0();
            v10->field_0 = v5;
            if (!(v5 == 0))
            {
                v6 = v12;
                return v6;
            }
            else if (((long long)(v12->field_68 & 64)) == 0)
            {
                v6 = v12;
                return v6;
            }
            else
            {
                v5 = transit_state_bkref.isra.0();
                v10->field_0 = v5;
                if (v5 == 0)
                {
                    v6 = v12;
                    return v6;
                }
                v6 = v12;
                return v6;
            }
        }
        else
        {
            v6 = v12;
            return v6;
        }
    }
}
