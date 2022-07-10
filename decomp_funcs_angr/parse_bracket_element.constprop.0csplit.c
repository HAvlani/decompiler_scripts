typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[24];
    unsigned long long field_68;
    char padding_70[27];
    char field_8b;
    char field_8c;
    char padding_8d[3];
    unsigned int field_90;
} struct_3;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_4;

typedef struct struct_5 {
    unsigned int field_0;
} struct_5;

typedef struct struct_6 {
    char field_0;
} struct_6;

int parse_bracket_element.constprop.0()
{
    BOT tmp_13;  // tmp #13
    char v0;  // [bp-0x40]
    unsigned long long v10;  // r8
    unsigned long long|char v11;  // r9
    struct_3 *v12;  // r10
    struct_6 *|char * v13;  // r11
    struct_5 *|unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r14
    char *|unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rcx
    struct_6 *|unsigned long long|char [9] v5;  // rdx
    struct_4 *v6;  // rbx
    char v7[9];  // rbp
    struct_3 *v8;  // rsi
    struct_0 *v9;  // rdi

    v12 = v8;
    v7 = v5;
    v6 = v9;
    v14 = v8->field_48;
    if (v8->field_90 != 1)
    {
        v2 = re_string_char_size_at.part.0();
        if (((int)v2) > 1)
        {
            tmp_13 = v12->field_10;
            v6->field_0 = 1;
            v6->field_8 = *(tmp_13 + v14 * 4);
            v12->field_48 = v2 + v14;
            return v2;
        }
    }
    if (((int)v2) <= 1 || v8->field_90 == 1)
    {
        v2 = ((long long)v5[8]);
        v13 = v4 + v8->field_48;
        v8->field_48 = v4 + v8->field_48;
        if (((char)(((int)v2) & -5)) != 26)
        {
            if (v5[8] != 28)
            {
                if (!(v5[8] == 22))
                {
                    v2 = ((long long)v5[0]);
                    v6->field_0 = 0;
                    tmp_13 = v2;
                    v6->field_8 = tmp_13;
                    return v2;
                }
                else if (((long long)v11) != 0)
                {
                    v2 = ((long long)v5[0]);
                    v6->field_0 = 0;
                    tmp_13 = v2;
                    v6->field_8 = tmp_13;
                    return v2;
                }
                else
                {
                    peek_token_bracket();
                    if (v0 == 21)
                    {
                        v2 = ((long long)v5[0]);
                        v6->field_0 = 0;
                        tmp_13 = v2;
                        v6->field_8 = tmp_13;
                        return v2;
                    }
                    return v2;
                }
            }
        }
        if (v5[8] == 28 || ((char)(((int)v2) & -5)) == 26)
        {
            v14 = v12->field_68;
            if (v4 + v8->field_48 < v12->field_68)
            {
                v15 = ((long long)v5[0]);
                v11 = 0;
                while (true)
                {
                    v16 = v11;
                    if (v2 == 30 && v12->field_8b != 0)
                    {
                        if (v12->field_8c == 0)
                        {
                            v2 = v13 + 1;
                            v13 = v13 + v12->field_0 + v12->field_28;
                            v12->field_48 = v2;
                            v10 = ((long long)*(v13));
                        }
                        else if (v13 == v12->field_30 || *(v12->field_10 + (v13 << 2)) != -1)
                        {
                            v10 = ((long long)*(*(v12->field_18 + v13 * 8) + v12->field_0 + v12->field_28));
                            if (((long long)(*(*(v12->field_18 + (v13 << 3)) + v12->field_0 + v12->field_28) & 128)) == 0)
                            {
                                v3 = 1;
                                if (v12->field_90 != 1)
                                {
                                    v3 = re_string_char_size_at.part.0();
                                }
                                v2 = v3 + v13;
                                v12->field_48 = v2;
                            }
                        }
                    }
                    if (...)
                    {
                        v5 = v12->field_8;
                        v2 = v13 + 1;
                        v12->field_48 = v13 + 1;
                        v10 = ((long long)*(v5 + v13));
                    }
                    if (v14 > v2)
                    {
                        return v2;
                        if (*(v12->field_8 + v2) == 93 && v15 == r8b<1>)
                        {
                            v12->field_48 = v2 + 1;
                            *(v9->field_8 + v16) = 0;
                            v5 = ((long long)v7[8]);
                            if (v7[8] == 28)
                            {
                                v9->field_0 = 2;
                                return v2;
                            }
                            else if (v5 == 30)
                            {
                                v9->field_0 = 4;
                                return v2;
                            }
                            else if (v5 != 26)
                            {
                                return v2;
                            }
                            else
                            {
                                v9->field_0 = 3;
                                break;
                            }
                        }
                        if (*(v12->field_8 + v2) != 93 || v15 != r8b<1>)
                        {
                            *(v9->field_8 + v11) = r8b<1>;
                            v11 += 1;
                            if (v11 != 32)
                            {
                                v2 = ((long long)v7[8]);
                                v13 = v12->field_48;
                                v14 = v12->field_68;
                                return v2;
                            }
                        }
                    }
                }
                return v2;
            }
            return v2;
        }
    }
}
