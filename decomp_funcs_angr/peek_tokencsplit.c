typedef struct struct_3 {
    char field_0;
    char padding_1[7];
    char field_8;
    char padding_9[1];
    char field_a;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[8];
    unsigned long long field_68;
    char padding_70[27];
    char field_8b;
    char field_8c;
    char padding_8d[3];
    unsigned int field_90;
} struct_1;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern <missing-type> g_400000;
extern <missing-type> g_800008;

int peek_token()
{
    BOT tmp_30;  // tmp #30
    BOT tmp_8;  // tmp #8
    BOT tmp_60;  // tmp #60
    BOT tmp_124;  // tmp #124
    BOT tmp_59;  // tmp #59
    BOT tmp_2;  // tmp #2
    BOT tmp_75;  // tmp #75
    BOT tmp_73;  // tmp #73
    unsigned int v0;  // [bp-0x5c]
    char v1;  // [bp-0x50]
    unsigned long|unsigned long long|struct_3 * v10;  // rdi
    struct_6 * v11;  // r8
    struct_1 *v12;  // r12
    unsigned long long v13;  // r13
    struct_4 *v14;  // r14
    unsigned long long v15;  // r15
    unsigned long long|unsigned int|char v3;  // rax
    unsigned long long|struct_6 *|char v4;  // cl
    char *|unsigned long long|struct_6 *|char v5;  // dl
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbx
    struct_3 *v8;  // rbp
    char *|struct_1 *|struct_4 *|unsigned long long|unsigned int v9;  // esi

    v8 = v10;
    v14 = v9->field_48;
    if (v9->field_68 > v14)
    {
        v15 = v9->field_8;
        v3 = ((int)v9->field_90);
        v12 = v9;
        v13 = v5;
        v7 = ((long long)*(v9->field_8 + v9->field_48));
        v10->field_a = v10->field_a & 159;
        tmp_30 = v7;
        v10->field_0 = tmp_30;
        if (v3 > 1)
        {
            if (v9->field_48 != v9->field_30)
            {
                if (*(v9->field_10 + (v9->field_48 << 2)) == -1)
                {
                    v10->field_8 = v10->field_8 & -0x200100 | 2097153;
                    return rax<8>;
                }
            }
            if (v9->field_48 == v9->field_30 || *(v9->field_10 + (v9->field_48 << 2)) != -1)
            {
                if (*(v9->field_8 + v9->field_48) != 92)
                {
                    tmp_8 = v9->field_10;
                    v10->field_8 = 1;
                    v10 = ((long long)*(tmp_8 + v14 * 4));
                    v0 = *(tmp_8 + v14 * 4);
                    v3 = iswalnum(v10);
                    v5 = ((long long)v0);
                    v3 = ((char)(((int)v3) != 0));
                    v5 = ((char)(v0 == 95));
                    tmp_60 = rdx<8>;
                    tmp_124 = ((int)tmp_60);
                    tmp_59 = tmp_124;
                    v8->field_a = ((char)(((int)v8->field_a) & -65 | ((int)(((long long)(((int)rax<8>) | tmp_59)) * 64))));
                }
            }
        }
        else if (*(v9->field_8 + v9->field_48) != 92)
        {
            v11 = __ctype_b_loc();
            v5 = v11->field_0;
            v3 = ((long long)*(v11->field_0 + ((long long)v7) * 2));
            tmp_2 = v3;
            v5 = ((char)(v7 == 95));
            tmp_75 = rdx<8>;
            v8->field_8 = ((int)(((long long)((((int)(((long long)tmp_2) >> 3)) | ((int)tmp_75)) & 1)) * &g_400000)) | 1 | v8->field_8 & -0x400100;
        }
        if (v9->field_48 == v9->field_30 || v3 <= 1 || *(v9->field_10 + (v9->field_48 << 2)) != -1)
        {
            if (*(v9->field_8 + v9->field_48) == 92)
            {
                v4 = v14 + 1;
                if (v14 + 1 >= v9->field_58)
                {
                    v10->field_8 = 36;
                    return rax<8>;
                }
                if (v9->field_8b != 0)
                {
                    if (v9->field_90 > 1)
                    {
                        v10 = v12->field_10;
                        v5 = v4 * 4;
                        v9 = v12->field_10 + v4 * 4;
                        if ((*(v10 + v5 + 4) == -1 || *(v12->field_10 + (v4 << 2)) == -1) && (*(v12->field_10 + (v4 << 2)) == -1 || v12->field_30 != v14 + 2))
                        {
                            v3 = ((long long)*(v15 + v14 + 1));
                            v8->field_8 = 1;
                            v8->field_0 = ((char)v7);
                            v7 = v3;
                            v0 = ((int)v7);
                            /* goto 4266164; */
                        }
                    }
                    if (v9->field_90 <= 1 || v12->field_30 == v14 + 2 && *(v12->field_10 + (v4 << 2)) != -1 || *(v10 + v5 + 4) != -1 && *(v12->field_10 + (v4 << 2)) != -1)
                    {
                        v6 = v12->field_0;
                        v9 = v12->field_28;
                        if (v12->field_8c != 0)
                        {
                            v5 = v6 + v9 + *(v12->field_18 + v4 * 8);
                            v9 = ((long long)*(v5));
                            v0 = ((int)*(v5));
                            v7 = v9;
                            tmp_30 = ((char)v7);
                        }
                        else
                        {
                            v5 = v6 + v4;
                            v9 = ((int)*(v5 + v9));
                            v0 = v9;
                            v7 = ((long long)v0);
                            /* goto 4266139; */
                        }
                    }
                }
                if (v9->field_8b == 0 || v9->field_90 <= 1 && v12->field_8c != 0 && ((long long)(tmp_30 & 128)) != 0 || v12->field_30 == v14 + 2 && v12->field_8c != 0 && *(v12->field_10 + (v4 << 2)) != -1 && ((long long)(tmp_30 & 128)) != 0 || *(v10 + v5 + 4) != -1 && v12->field_8c != 0 && *(v12->field_10 + (v4 << 2)) != -1 && ((long long)(tmp_30 & 128)) != 0)
                {
                    v9 = ((long long)*(v15 + v14 + 1));
                    v0 = ((int)*(v15 + v14 + 1));
                    v7 = v9;
                }
                if (v9->field_8b == 0 || v9->field_90 <= 1 || v12->field_30 == v14 + 2 && *(v12->field_10 + (v4 << 2)) != -1 || *(v10 + v5 + 4) != -1 && *(v12->field_10 + (v4 << 2)) != -1)
                {
                    v8->field_0 = v7;
                    v8->field_8 = 1;
                }
                if (v9->field_8b == 0 || v9->field_90 <= 1 || v12->field_30 == v14 + 2 && *(v12->field_10 + (v4 << 2)) != -1 || *(v10 + v5 + 4) != -1 && *(v12->field_10 + (v4 << 2)) != -1)
                {
                    if (v3 > 1)
                    {
                        v9 = v12->field_10 + v4 * 4;
                    }
                    else
                    {
                        v11 = __ctype_b_loc();
                        v4 = v11->field_0;
                        v3 = ((long long)*(v11->field_0 + ((long long)v7) * 2));
                        tmp_2 = v3;
                        v4 = ((char)(v7 == 95));
                        tmp_73 = rcx<8>;
                        v8->field_a = ((char)(((int)(((long long)(((int)(((long long)tmp_2) >> 3)) & 1 | ((int)tmp_73))) * 64)) | ((int)v8->field_a) & -65));
                        /* goto 4266206; */
                    }
                }
                if (v3 > 1 || *(v12->field_10 + (v4 << 2)) == -1 && v9->field_8b != 0 && v9->field_90 > 1 || *(v10 + v5 + 4) == -1 && v12->field_30 != v14 + 2 && v9->field_8b != 0 && v9->field_90 > 1)
                {
                    v3 = iswalnum(v9->field_0);
                    v3 = ((char)(((int)v3) != 0));
                    v8->field_a = ((char)(((int)v8->field_a) & -65 | ((int)(((long long)(((int)rax<8>) | v4)) * 64))));
                }
                v5 = v7 - 39;
                switch (v7 - 39 & 255)
                {
                case 0:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 128;
                        break;
                        return rax<8>;
                    }
                case 1:
                    if ((((short)((int)v13)) & 0x2000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 8;
                        break;
                        return rax<8>;
                    }
                case 2:
                    if ((((short)((int)v13)) & 0x2000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 9;
                        break;
                        return rax<8>;
                    }
                case 4:
                    v13 = ((long long)(((int)v13) & 1026));
                    if (v13 != 2)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 18;
                        break;
                        return rax<8>;
                    }
                case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
                    if ((((short)((int)v13)) & 0x4000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 4;
                        v8->field_0 = ((long long)(v0 - 49));
                        break;
                        return rax<8>;
                    }
                case 21:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 6;
                        break;
                        return rax<8>;
                    }
                case 23:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 9;
                        break;
                        return rax<8>;
                    }
                case 24:
                    v13 = ((long long)(((int)v13) & 1026));
                    if (v13 != 2)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 19;
                        break;
                        return rax<8>;
                    }
                case 27:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 0x200;
                        break;
                        return rax<8>;
                    }
                case 44:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 35;
                        break;
                        return rax<8>;
                    }
                case 48:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 33;
                        break;
                        return rax<8>;
                    }
                case 57:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 64;
                        break;
                        return rax<8>;
                    }
                case 59:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 0x100;
                        break;
                        return rax<8>;
                    }
                case 76:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 34;
                        break;
                        return rax<8>;
                    }
                case 80:
                    if ((((int)((int)v13)) & 0x80000) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 32;
                        break;
                        return rax<8>;
                    }
                case 84:
                    v13 = ((long long)(((int)v13) & 0x1200));
                    if (v13 != 0x200)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 23;
                        break;
                        return rax<8>;
                    }
                case 85:
                    if ((((short)((int)v13)) & 0x8400) != 0)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 10;
                        break;
                        return rax<8>;
                    }
                case 86:
                    v13 = ((long long)(((int)v13) & 0x1200));
                    if (v13 != 0x200)
                    {
                        return rax<8>;
                    }
                    else
                    {
                        v8->field_8 = 24;
                        break;
                        return rax<8>;
                    }
                default:
                    break;
                    return rax<8>;
                }
                return rax<8>;
                v5 = ((long long)v5);
            }
            else if (((long long)v7) <= 63)
            {
                return rax<8>;
                if (((long long)v7) > 9)
                {
                    switch (((long long)(((int)*(v9->field_8 + v9->field_48)) - 10)))
                    {
                    case 0:
                        if ((((short)((int)v13)) & 0x800) == 0)
                        {
                            return rax<8>;
                        }
                    case 26:
                        if (!(((long long)(v13 & 8)) == 0))
                        {
                            v8->field_8 = 12;
                            v8->field_0 = 32;
                            break;
                            return rax<8>;
                        }
                        else if (v9->field_48 + 1 != v9->field_58)
                        {
                            v9->field_48 = v9->field_48 + 1;
                            peek_token();
                            v12->field_48 = v12->field_48 - 1;
                            if ((((long long)v1) - 9 & 255) > 1)
                            {
                                return rax<8>;
                            }
                            v8->field_8 = 12;
                            v8->field_0 = 32;
                            break;
                            return rax<8>;
                        }
                        else
                        {
                            v8->field_8 = 12;
                            v8->field_0 = 32;
                            break;
                            return rax<8>;
                        }
                    case 30:
                        if ((((short)((int)v13)) & 0x2000) == 0)
                        {
                            return rax<8>;
                        }
                    case 31:
                        if ((((short)((int)v13)) & 0x2000) == 0)
                        {
                            return rax<8>;
                        }
                    case 32:
                        v8->field_8 = 11;
                        break;
                        return rax<8>;
                    case 33:
                        if ((((short)((int)v13)) & 1026) != 0)
                        {
                            return rax<8>;
                        }
                    case 36:
                        v8->field_8 = 5;
                        break;
                        return rax<8>;
                    case 53:
                        if ((((short)((int)v13)) & 1026) != 0)
                        {
                            return rax<8>;
                        }
                    default:
                        break;
                        return rax<8>;
                    }
                    return rax<8>;
                }
            }
            else
            {
                return rax<8>;
                if (((long long)(((int)*(v9->field_8 + v9->field_48)) - 91)) <= 34)
                {
                    /* goto ...; */
                    return rax<8>;
                    if (True)
                    {
                        v8->field_8 = 20;
                    }
                    return rax<8>;
                    if (True)
                    {
                        v13 = ((long long)(((int)v13) & 0x8400));
                    }
                    if (True)
                    {
                        return rax<8>;
                    }
                    v8->field_8 = 10;
                    return rax<8>;
                    v13 = ((long long)(((int)v13) & 0x1200));
                    if (v13 != 0x1200)
                    {
                        return rax<8>;
                    }
                    v8->field_8 = 23;
                    return rax<8>;
                    v13 = ((long long)(((int)v13) & 0x1200));
                    v8->field_8 = 24;
                    return rax<8>;
                    if (v13 != 0x1200)
                    {
                        return rax<8>;
                    }
                    if (!((((int)((int)v13)) & 8388616) == 0))
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 16;
                        return rax<8>;
                    }
                    else if (v9->field_48 != 0)
                    {
                        if (True)
                        {
                            return rax<8>;
                        }
                        if (*(v9->field_8 + v9->field_48 + 1) == 10)
                        {
                            if ((((short)((int)v13)) & 0x800) != 0)
                            {
                                v8->field_8 = 12;
                                v8->field_0 = 16;
                                return rax<8>;
                            }
                            if (True)
                            {
                                return rax<8>;
                            }
                        }
                    }
                    else
                    {
                        v8->field_8 = 12;
                        v8->field_0 = 16;
                        return rax<8>;
                    }
                }
                /* goto ...; */
            }
        }
    }
    else
    {
        v10->field_8 = 2;
        return rax<8>;
    }
}
