typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int get_funky_string()
{
    BOT tmp_6;  // tmp #6
    unsigned long long v1;  // rax
    char * v10;  // r11
    unsigned long long v11;  // r12
    unsigned long long v12;  // cc_dep1
    struct_0 *v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rbp
    struct_0 *v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7;  // r8
    unsigned long long v8;  // r8
    unsigned long long|char [2] v9;  // r9

    v9 = v5->field_0;
    v10 = v6->field_0;
    v1 = 0;
    while (true)
    {
        v7 = ((long long)v9[0]);
        v12 = ((long long)v9[0]);
        if (v9[0] != 92)
        {
            while (true)
            {
                if (((char)(v12 <= 92)))
                {
                    v12 = ((long long)v7);
                    if (v7 != 61)
                    {
                        if (((char)(v12 <= 61)))
                        {
                            if (((long long)v7) == 0)
                            {
                                v8 = 1;
                                v6->field_0 = v10;
                                v5->field_0 = v9;
                                v2->field_0 = v1;
                                return v8;
                            }
                            else if (v7 == 58)
                            {
                                v8 = 1;
                                v6->field_0 = v10;
                                v5->field_0 = v9;
                                v2->field_0 = v1;
                                return v8;
                            }
                        }
                    }
                    if (((long long)v3) != 0)
                    {
                        v8 = v3;
                        v6->field_0 = v10;
                        v5->field_0 = v9;
                        v2->field_0 = v1;
                        return v8;
                    }
                }
                else if (v7 == 94)
                {
                    v7 = ((long long)v9[1]);
                    v11 = v9 + 1;
                    if ((((long long)v9[1]) - 64 & 255) <= 62)
                    {
                        v7 = ((long long)(((int)v7) & 31));
                        break;
                    }
                    else if (v7 != 63)
                    {
                        v9 = v11;
                        v8 = 0;
                        v6->field_0 = v10;
                        v5->field_0 = v9;
                        v2->field_0 = v1;
                        return v8;
                    }
                    else
                    {
                        *(v10) = 127;
                        break;
                    }
                }
                if (((char)(v12 <= 92)) && ((long long)v3) == 0 && v7 == 61 || !(((char)(v12 <= 92))) && v7 != 94 || ((char)(v12 <= 92)) && !(((char)(v12 <= 61))) && v7 != 61 || ((char)(v12 <= 92)) && v7 != 58 && v7 != 61 && ((long long)v7) != 0)
                {
                    v9 += 1;
                    *(v10) = v7;
                    v1 += 1;
                    v10 += 1;
                    v7 = ((long long)v9[0]);
                    v12 = ((long long)v9[0]);
                }
            }
            if (((long long)v3) == 0 || v7 != 58 || !(((char)(v12 <= 61))) || !(((char)(v12 <= 92))) && v7 != 94)
            {
                v4 = ((long long)*(r9<8> + 1));
                v9 = r9<8> + 2;
                tmp_6 = v4;
                if (((long long)tmp_6) == 0)
                {
                    break;
                }
            }
            else if ((((long long)v9[1]) - 64 & 255) <= 62 && v7 == 94 && !(((char)(v12 <= 92))))
            {
                *(v10) = v7;
            }
            else if (v7 == 94 && v7 == 63 && !(((char)(v12 <= 92))) && (((long long)v9[1]) - 64 & 255) > 62)
            {
                v7 = ((long long)v9[0]);
                v12 = ((long long)v9[0]);
            }
        }
        if (((long long)tmp_6) != 0)
        {
            v11 = v4 - 48;
            switch (v4 - 48 & 255)
            {
            case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
                while (true)
                {
                    v7 = ((long long)v9[0]);
                    if ((((long long)v9[0]) - 48 & 255) > 7)
                    {
                        break;
                    }
                    v9 += 1;
                    v11 = v7 + v11 * 8 - 48;
                }
                *(v10) = v11;
            case 15:
                break;
            case 40: case 72:
                v7 = 0;
                while (true)
                {
                    v4 = ((long long)v9[0]);
                    if (((char)(((long long)v9[0]) <= 70)))
                    {
                        while (true)
                        {
                            if (((char)(((long long)v4) <= 64)))
                            {
                                v9 += 1;
                                v7 = v4 + v7 * 16 - 48;
                                v4 = ((long long)v9[0]);
                            }
                            else
                            {
                                v9 += 1;
                                v7 = v4 + v7 * 16 - 55;
                                break;
                            }
                        }
                        if (!(((char)(((long long)v4) <= 64))))
                        {
                            v4 = ((long long)v9[0]);
                        }
                        else if (((char)(((long long)v4) <= 64)))
                        {
                            *(v10) = v7;
                        }
                        else if ((v4 - 48 & 255) <= 9 && ((char)(((long long)v4) <= 64)))
                        {
                            if ((rbp<8> - 97 & 255) > 5)
                            {
                                break;
                            }
                        }
                    }
                    v9 = r9<8> + 1;
                    v7 = rbp<8> + v7 * 16 - 87;
                }
            case 47:
                break;
            case 49:
                break;
            case 50:
                break;
            case 53:
                break;
            case 54:
                break;
            case 62:
                break;
            case 66:
                break;
            case 68:
                break;
            case 70:
                break;
            }
            if (((v4 - 48 & 255) <= 72 || v9[0] != 92) && (((long long)*(4288544 + ((long long)r12b<1>) * 4)) + 4288544 == 4221506 || v9[0] != 92))
            {
                *(v10) = v7;
            }
        }
        if (...)
        {
            *(r11<8> + None) = v4;
        }
    }
    v8 = 0;
    v6->field_0 = v10;
    v5->field_0 = v9;
    v2->field_0 = v1;
    return v8;
}
