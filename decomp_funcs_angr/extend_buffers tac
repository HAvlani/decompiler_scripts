typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[24];
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[16];
    unsigned long long field_58;
    char padding_60[24];
    unsigned long long field_78;
    char padding_80[8];
    char field_88;
    char padding_89[7];
    unsigned int field_90;
    char padding_94[36];
    unsigned long long field_b8;
} struct_0;

int extend_buffers()
{
    BOT tmp_40;  // tmp #40
    unsigned long|char *|unsigned long long|unsigned int v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    char *|unsigned long long v5;  // rcx
    unsigned long v6;  // rsi
    struct_0 *|unsigned long long [24] v7;  // rdi
    unsigned long long v8;  // r12

    if (v7[8] <= 1152921504606846974)
    {
        v8 = (long long)re_string_realloc_buffers();
        if (((int)v1) == 0)
        {
            v7 = v7[23];
            if (v7->field_b8 != 0)
            {
                v1 = realloc(v7, v7->field_40 * 8 + 8);
                if (v1 != 0)
                {
                    v7->field_b8 = v1;
                }
                else
                {
                    return 12;
                }
            }
            if (v7->field_b8 == 0 || v1 != 0)
            {
                v1 = ((int)v7->field_90);
                if (v7->field_88 != 0)
                {
                    if (v1 > 1)
                    {
                    }
                    else
                    {
                        build_upper_buffer();
                        return v2;
                    }
                }
                if (v1 <= 1)
                {
                    v5 = v7->field_78;
                    if (v7->field_78 == 0)
                    {
                        v1 = v8;
                        return v4;
                    }
                    else
                    {
                        v1 = v7->field_30;
                        v6 = (v7->field_40 <= v7->field_58? v7->field_40 : v7->field_58);
                        if ((v7->field_40 <= v7->field_58? v7->field_40 : v7->field_58) <= v7->field_30)
                        {
                            v7->field_30 = v1;
                            v7->field_38 = v1;
                            v1 = v8;
                            return v4;
                        }
                        else
                        {
                            while (true)
                            {
                                v5 = ((long long)*(v5 + ((long long)*(v7->field_0 + v1 + v7->field_28))));
                                tmp_40 = v5;
                                *(v7->field_8 + v1) = tmp_40;
                                v1 += 1;
                                if (v6 == v1)
                                {
                                    break;
                                }
                                v5 = v7->field_78;
                            }
                            v7->field_30 = v6;
                            v7->field_38 = v6;
                            v1 = v8;
                            return v4;
                        }
                    }
                }
                else
                {
                    build_wcs_buffer();
                    return v3;
                }
            }
        }
        v1 = v8;
        return v4;
    }
    return 12;
}
