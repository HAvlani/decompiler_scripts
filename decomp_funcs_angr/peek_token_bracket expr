typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[8];
    unsigned long long field_68;
    char padding_70[32];
    unsigned int field_90;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

int peek_token_bracket()
{
    BOT tmp_13;  // tmp #13
    BOT tmp_20;  // tmp #20
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // edx
    unsigned int v4;  // edx
    struct_1 *v5;  // rsi
    char v6[9];  // rdi
    struct_2 *v7;  // rdi
    unsigned long long v8;  // r8
    unsigned int v9;  // cc_dep1

    v1 = v5->field_48;
    if (v5->field_68 > v5->field_48)
    {
        v8 = v5->field_8;
        v9 = ((int)v5->field_90);
        v6[0] = *(v5->field_8 + v5->field_48);
        if (v9 > 1)
        {
            if (v5->field_48 != v5->field_30)
            {
                if (*(v5->field_10 + (v5->field_48 << 2)) == -1)
                {
                    v6[8] = 1;
                    return 1;
                }
            }
        }
        if (v5->field_48 == v5->field_30 || v9 <= 1 || *(v5->field_10 + (v5->field_48 << 2)) != -1)
        {
            if (*(v5->field_8 + v5->field_48) != 92)
            {
                if (*(v5->field_8 + v5->field_48) != 91)
                {
                    if (!(*(v5->field_8 + v5->field_48) != 93))
                    {
                        v6[8] = 21;
                        return 1;
                    }
                    else if (*(v5->field_8 + v5->field_48) == 94)
                    {
                        v6[8] = 25;
                        return 1;
                    }
                    else if (*(v5->field_8 + v5->field_48) != 45)
                    {
                        v6[8] = 1;
                        return 1;
                    }
                    else
                    {
                        v6[8] = 22;
                        return 1;
                    }
                }
                if (v5->field_48 + 1 < v5->field_58)
                {
                    tmp_13 = *(v5->field_8 + v5->field_48 + 1);
                    v6[0] = *(v5->field_8 + v5->field_48 + 1);
                    if (tmp_13 != 58)
                    {
                        if (!(*(v5->field_8 + v5->field_48 + 1) != 61))
                        {
                            v6[8] = 28;
                            return 2;
                        }
                        else if (*(v5->field_8 + v5->field_48 + 1) != 46)
                        {
                            v6[8] = 1;
                            v6[0] = 91;
                            return 1;
                        }
                        else
                        {
                            v6[8] = 26;
                            return 2;
                        }
                    }
                    else
                    {
                        if ((((char)v3) & 4) == 0)
                        {
                            v6[8] = 1;
                            v6[0] = 91;
                            return 1;
                        }
                        else
                        {
                            v6[8] = 30;
                            return 2;
                        }
                    }
                }
                else
                {
                    v6[8] = 1;
                    v6[0] = 91;
                    return 1;
                }
            }
            if (!((((char)v4) & 1) != 0))
            {
                v6[8] = 1;
                return 1;
            }
            else if (v5->field_48 + 1 >= v5->field_58)
            {
                v6[8] = 1;
                return 1;
            }
            else
            {
                v5->field_48 = v5->field_48 + 1;
                v2 = ((long long)*(v8 + v1 + 1));
                v6[8] = 1;
                tmp_20 = v2;
                v6[0] = tmp_20;
                return 1;
            }
        }
    }
    v7->field_8 = 2;
    return 0;
}
