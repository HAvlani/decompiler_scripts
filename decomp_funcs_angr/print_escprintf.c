typedef struct struct_1 {
    char padding_0[1];
    char field_1;
} struct_1;

extern unsigned int g_40a008;
extern unsigned int g_40a030;
extern unsigned long long stdout[7];

int print_esc()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_7;  // tmp #7
    unsigned int v0;  // [bp-0x2c]
    unsigned long|unsigned long long v10;  // rcx
    unsigned long|unsigned long long|char * v11;  // rdx
    unsigned long long|char * v12;  // rbx
    char v13;  // bl
    char * v14;  // rbp
    unsigned long|unsigned long long v15;  // rsi
    struct_1 *|unsigned long long [7]|unsigned long long v16;  // rdi
    unsigned long long v17;  // r8
    unsigned long long v19;  // r9
    char *v2;  // rax
    unsigned long long v20;  // r9
    unsigned long long|char * v21;  // r12
    unsigned long long v22;  // r12
    struct_1 *v23;  // r13
    unsigned long long v3;  // rax
    unsigned long long|char * v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long|unsigned int v7;  // rax

    v23 = v16;
    v12 = ((long long)v16->field_1);
    if (!(v16->field_1 != 120))
    {
        v12 = v16 + 2;
        v17 = *(__ctype_b_loc());
        while (true)
        {
            v11 = ((long long)*(v12));
            v7 = ((long long)*(v12));
            if (((long long)(*(v17 + (((long long)*(v12)) << 1) + 1) & 16)) != 0)
            {
                v15 = v10 * 16;
                if ((v7 - 97 & 255) <= 5)
                {
                    v11 = ((long long)(((int)v11) - 87));
                    v12 += 1;
                    v10 = v15 + v11;
                }
                else
                {
                    v7 = ((long long)(((int)v7) - 65));
                    tmp_5 = v7;
                    v11 = ((long long)(((char)(((long long)tmp_5) > 5))? ((int)(v11 - 48)) : ((int)(v11 - 55))));
                    v12 += 1;
                    v10 = v15 + v11;
                }
            }
            else
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40a008, 0x5));
            }
            v16 = stdout;
            v4 = *(stdout + 40);
            if (*(stdout + 40) >= *(stdout + 48))
            {
                v16[5] = v4 + 1;
                *(v4) = v10;
                v3 = v21;
                return v3;
                __overflow();
                break;
            }
        }
        v3 = v21;
        return v3;
    }
    else if ((((long long)v16->field_1) - 48 & 255) <= 7)
    {
        v10 = 0;
        v11 = v16 + (v15 & ((long long)(v16->field_1 == 48))) + 1;
        v21 = v16 + (v15 & ((long long)(v16->field_1 == 48))) + 1 + 3;
        while (true)
        {
            v5 = ((long long)*(v11));
            if ((((long long)*(v11)) - 48 & 255) <= 7)
            {
                v11 += 1;
                v10 = v5 + v10 * 8 - 48;
            }
            else
            {
                v21 = v11;
            }
            v16 = stdout;
            v4 = *(stdout + 40);
            if (*(stdout + 40) >= *(stdout + 48))
            {
                v16[5] = v4 + 1;
                *(v4) = v10;
                v3 = v21;
                return v3;
                __overflow();
                break;
            }
        }
        v3 = v21;
        return v3;
    }
    else
    {
        if (((long long)v16->field_1) != 0)
        {
            v21 = ((long long)v16->field_1);
            v7 = strchr("\"\\abcefnrtv", ((int)v16->field_1));
            if (v7 != 0)
            {
                v7 = v12 - 97;
                switch (v12 - 97 & 255)
                {
                case 0:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 7;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                case 1:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 8;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                case 2:
                    exit(0x0); /* do not return */
                case 4:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 27;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                case 5:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 12;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                case 13:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 10;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                case 17:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 13;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                case 19:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 9;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                case 21:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 11;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                default:
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = v12;
                        v3 = v21;
                        return v3;
                    }
                    __overflow();
                    v3 = v21;
                    return v3;
                }
            }
            else if (((char)(((int)v16->field_1) & -33)) == 85)
            {
                v14 = v16 + 2;
                v13 = ((char)(v16->field_1 != 117));
                tmp_7 = ((long long)v13);
                v12 = ((long long)v13) * 4 + 4;
                v16 = *(__ctype_b_loc());
                v15 = v23 + tmp_7 * 4 + 4 - 1 + 3;
                while (true)
                {
                    v11 = ((long long)*(v14));
                    v7 = ((int)*(v14));
                    if (((long long)(*(v16 + (((long long)*(v14)) << 1) + 1) & 16)) != 0)
                    {
                        v20 = v19 * 16;
                        if ((v11 - 97 & 255) <= 5)
                        {
                            v11 = ((long long)(((int)v11) - 87));
                            v14 += 1;
                            v19 = ((long long)(v20 + v11));
                        }
                        else
                        {
                            v7 = ((long long)v7) - 65;
                            tmp_5 = v7;
                            v14 += 1;
                            v19 = ((long long)(((int)v20) + (((char)(((long long)tmp_5) > 5))? ((int)(v11 - 48)) : ((int)(v11 - 55)))));
                        }
                        if ((((int)v19) & -33) == 64 && ((int)v19) <= 159 && ((int)v19) != 36)
                        {
                            v22 = v12 + 1;
                            print_unicode_char();
                            v6 = v22;
                            return v6;
                        }
                        if (((int)(v19 - 0xd800)) > 2047 && (((int)v19) == 36 || ((int)v19) > 159))
                        {
                            v22 = v12 + 1;
                            print_unicode_char();
                            v6 = v22;
                            return v6;
                        }
                        if (((int)(v19 - 0xd800)) <= 2047 && ((int)v19) == 36 || ((int)(v19 - 0xd800)) <= 2047 && ((int)v19) > 159 || ((int)v19) <= 159 && ((int)v19) != 36 && (((int)v19) & -33) != 64)
                        {
                            v0 = ((int)v19);
                            error(0x1, 0x0, dcgettext(0x0, &g_40a030, 0x5));
                        }
                        error(0x1, 0x0, dcgettext(0x0, &g_40a008, 0x5));
                    }
                }
            }
        }
        if (((long long)v16->field_1) == 0 || v7 == 0 && ((char)(((int)v16->field_1) & -33)) != 85)
        {
            v2 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v2) = 92;
            }
            else
            {
                __overflow();
            }
            v4 = ((long long)v23->field_1);
            if (((long long)v23->field_1) == 0)
            {
                v3 = v21;
                return v3;
            }
            v11 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v11) = v4;
                v3 = v21;
                return v3;
            }
            else
            {
                __overflow();
                v3 = v21;
                return v3;
            }
        }
    }
}
