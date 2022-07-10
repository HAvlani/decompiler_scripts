typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[120];
    unsigned int field_90;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int check_node_accept_bytes.isra.0()
{
    unsigned long long v1;  // rax
    struct struct_5 **v10;  // r10
    char v11;  // r11b
    unsigned long long v12;  // r12
    unsigned long long v2;  // rax
    unsigned long long [12]|struct_3 * v3;  // rcx
    char *|unsigned long long v4;  // rdx
    unsigned long v5;  // rdx
    unsigned long long v6;  // rbp
    struct_4 *|unsigned long long v7;  // rsi
    unsigned long|unsigned long long v8;  // rdi
    struct_0 *|char * v9;  // r8

    v4 = v5 * 16;
    if (!(*(v8 + v4 + 8) != 7))
    {
        v1 = v3[1];
        if (((long long)*(v3[1] + v9)) <= 193)
        {
            v2 = v12;
            return v2;
        }
        if (v9 + 1 >= *(v3 + 0x58))
        {
            v2 = v12;
            return v2;
        }
        else
        {
            if (((long long)*(v3[1] + v9)) > 223)
            {
                if (((long long)*(v3[1] + v9)) <= 239)
                {
                    if (*(v3[1] + v9) == 224)
                    {
                        if (((long long)*(v3[1] + v9 + 1)) <= 159)
                        {
                            v2 = v12;
                            return v2;
                        }
                    }
                    if (*(v3[1] + v9) != 224 || ((long long)*(v3[1] + v9 + 1)) > 159)
                    {
                        v8 = 3;
                    }
                }
                else
                {
                    if (((long long)*(v3[1] + v9)) <= 247)
                    {
                        if (*(v3[1] + v9) == 240)
                        {
                            if (((long long)*(v3[1] + v9 + 1)) <= 143)
                            {
                                v2 = v12;
                                return v2;
                            }
                        }
                        if (*(v3[1] + v9) != 240 || ((long long)*(v3[1] + v9 + 1)) > 143)
                        {
                            v8 = 4;
                        }
                    }
                    else
                    {
                        if (((long long)*(v3[1] + v9)) <= 251)
                        {
                            if (*(v3[1] + v9) == 248)
                            {
                                if (((long long)*(v3[1] + v9 + 1)) <= 135)
                                {
                                    v2 = v12;
                                    return v2;
                                }
                            }
                            if (*(v3[1] + v9) != 248 || ((long long)*(v3[1] + v9 + 1)) > 135)
                            {
                                v8 = 5;
                            }
                        }
                        else
                        {
                            if (((long long)*(v3[1] + v9)) > 253)
                            {
                                v2 = v12;
                                return v2;
                            }
                            else
                            {
                                if (*(v3[1] + v9) == 252)
                                {
                                    if (((long long)*(v3[1] + v9 + 1)) <= 131)
                                    {
                                        v2 = v12;
                                        return v2;
                                    }
                                }
                                if (((long long)*(v3[1] + v9 + 1)) > 131 || *(v3[1] + v9) != 252)
                                {
                                    v8 = 6;
                                }
                            }
                        }
                    }
                }
                if (...)
                {
                    if (*(v3 + 0x58) < v9 + v8)
                    {
                        v2 = v12;
                        return v2;
                    }
                    else
                    {
                        v4 = v1 + v9 + 1;
                        v1 = v1 + v9 + v8;
                        while (true)
                        {
                            if ((((long long)*(v4)) - 128 & 255) <= 63)
                            {
                                v4 += 1;
                                v2 = v12;
                                return v2;
                            }
                        }
                        v2 = v12;
                        return v2;
                    }
                }
            }
            else
            {
                if (((long long)(((int)*(v3[1] + v9 + 1)) - 128)) <= 63)
                {
                    v2 = v12;
                    return v2;
                }
                else
                {
                    v2 = v12;
                    return v2;
                }
            }
        }
    }
    else if (v3->field_90 != 1)
    {
        v1 = re_string_char_size_at.part.0();
        if (v11 != 5)
        {
            if (!(v11 == 6))
            {
                v2 = v12;
                return v2;
            }
            else if (v1 == 1)
            {
                v2 = v12;
                return v2;
            }
            else
            {
                v7 = v10[0]->field_40;
                if ((v10[0]->field_28 | v10[0]->field_48) != 0 || v10[0]->field_40 != 0)
                {
                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        v1 = 0;
                        while (true)
                        {
                            v1 += 1;
                        }
                        v6 = 0;
                        while (true)
                        {
                            v1 = iswctype(*(v3->field_10 + v9 * 4), ((int)*(v10[0]->field_18 + v6 * 8)));
                            if (v1 == 0)
                            {
                                v6 += 1;
                                v7 = v10[0]->field_40;
                                break;
                            }
                            else
                            {
                                break;
                            }
                        }
                        v1 = 0;
                        while (true)
                        {
                            v1 += 1;
                        }
                        if (((long long)(v10[0]->field_20 & 1)) != 0)
                        {
                            v2 = v12;
                            return v2;
                        }
                        v2 = v12;
                        return v2;
                    }
                }
                if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) || ((long long)(v10[0]->field_20 & 1)) != 0 || (v10[0]->field_28 | v10[0]->field_48) == 0 && v10[0]->field_40 == 0)
                {
                    if (((long long)(v10[0]->field_20 & 1)) != 0)
                    {
                        v2 = v12;
                        return v2;
                    }
                    v2 = v12;
                    return v2;
                }
            }
        }
        if (v1 == 1)
        {
            v2 = v12;
            return v2;
        }
        else
        {
            if (((long long)(((char)v7->field_0) & 64)) == 0)
            {
                if (*(v3->field_8 + v9) == 10)
                {
                    v2 = v12;
                    return v2;
                }
            }
            if (*(v3->field_8 + v9) != 10 || ((long long)(((char)v7->field_0) & 64)) != 0)
            {
                if (((long long)(((char)v7->field_0) & 128)) == 0)
                {
                    v2 = v12;
                    return v2;
                }
                else if (*(v3->field_8 + v9) == 0)
                {
                    v2 = v12;
                    return v2;
                }
                else
                {
                    v2 = v12;
                    return v2;
                }
            }
        }
    }
    else
    {
        v2 = v12;
        return v2;
    }
}
