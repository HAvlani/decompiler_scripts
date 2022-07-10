typedef struct struct_3 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
    char field_11;
    char padding_12[1];
    unsigned short field_13;
    char padding_15[1];
    unsigned short field_16;
} struct_3;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_10 {
    char padding_0[12];
    char field_c;
    char padding_d[3];
    char field_10;
    char padding_11[7];
    unsigned int field_18;
} struct_10;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_13 {
    char padding_0[16];
    unsigned long long field_10;
} struct_13;

typedef struct struct_12 {
    unsigned long long field_0;
    char padding_8[4];
    char field_c;
    char padding_d[3];
    char field_10;
    char padding_11[7];
    unsigned int field_18;
} struct_12;

typedef struct struct_11 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    char field_8;
    char padding_9[3];
    unsigned int field_c;
    char field_10;
    char field_11;
    char padding_12[1];
    unsigned short field_13;
    char padding_15[1];
    unsigned short field_16;
} struct_11;

extern char control_info;
extern unsigned int current_col;
extern unsigned int g_40d282;
extern unsigned long long g_412e78;
extern char g_413060;
extern struct_4 max_col;
extern unsigned long long mode_info;
extern struct_4 tcsetattr_options;

int apply_settings()
{
    BOT tmp_45;  // tmp #45
    BOT tmp_10;  // tmp #10
    BOT tmp_17;  // tmp #17
    BOT tmp_11;  // tmp #11
    BOT tmp_37;  // tmp #37
    BOT tmp_15;  // tmp #15
    BOT tmp_39;  // tmp #39
    unsigned long long v0;  // [bp-0xa0]
    unsigned int|unsigned long long v1;  // [bp-0x98]
    struct_4 *|unsigned int|unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned int|unsigned long long v17;  // rcx
    struct_11 *|struct_4 *|unsigned long|unsigned long long v18;  // rdx
    char v19;  // dh
    struct_3 *v2;  // [bp-0x90]
    struct_13 *|struct_10 *|struct_12 *|unsigned long long v20;  // rbx
    unsigned long long v21;  // rbp
    char *|unsigned long|struct_3 *|unsigned long long v22;  // rsi
    char * v23;  // rdi
    unsigned long long v24;  // r8
    char *v25;  // r9
    unsigned int|char *|struct_4 *|unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    struct_9 *|unsigned long long v28;  // r13
    char *|struct_9 * v29;  // r14
    char *v3;  // [bp-0x88]
    unsigned long long v30;  // r15
    unsigned int|unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // cc_dep2
    unsigned long v33;  // d
    struct_9 *v34;  // fs
    unsigned long v4;  // [bp-0x70]
    char *v5;  // [bp-0x60]
    unsigned int v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x40]
    unsigned long v9;  // [bp+0x8]

    tmp_45 = v9;
    v4 = v22;
    v0 = v18;
    v2 = v24;
    v3 = tmp_45;
    if (v17 > 1)
    {
        v21 = 1;
        while (true)
        {
            v17 = v0;
            v30 = *(v0 + v21 * 8);
            v1 = v21 * 8;
            if (v30 != 0)
            {
                v26 = 0;
                if (*(v30) == 45)
                {
                    v30 += 1;
                    v26 = 1;
                }
                v17 = 6;
                v22 = r15<8>;
                v23 = "drain";
                while (v17 != 0)
                {
                    v17 -= 1;
                    v31 = ((long long)*(v22));
                    v32 = ((long long)*(v23));
                    v23 += v33;
                    v22 += v33;
                    break;
                }
                v31 = ((long long)(((char)(v31 > v32)) - 0 - ((char)(v31 < v32))));
                if (((char)v31) == 0)
                {
                    v26 = ((long long)(((int)v26) ^ 1));
                    tmp_10 = v26;
                    tcsetattr_options = ((int)tmp_10);
                }
                else
                {
                    v28 = &g_413060;
                    v20 = 0;
                    v29 = "parenb";
                    while (true)
                    {
                        v10 = strcmp(v30, v29);
                        if (v10 != 0)
                        {
                            v29 = v28->field_0;
                            v28 += 32;
                            v20 = ((long long)(((int)v20) + 1));
                            if (v29 == 0)
                            {
                                if (((long long)v26) == 0)
                                {
                                    v29 = &g_412e78;
                                    v20 = 0;
                                    v26 = "intr";
                                    while (true)
                                    {
                                        v10 = strcmp(v30, v26);
                                        if (v10 != 0)
                                        {
                                            v26 = v29->field_0;
                                            v29 += 24;
                                            v20 = ((long long)(((int)v20) + 1));
                                        }
                                        else if (v17 - 1 != ((int)1))
                                        {
                                            v27 = (long long)quote();
                                            error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                            usage(); /* do not return */
                                            if (*(v0 + v1 + 8) != 0)
                                            {
                                                v17 = 4;
                                                v22 = v26;
                                                v23 = "min";
                                                while (v17 != 0)
                                                {
                                                    v17 -= 1;
                                                    v31 = ((long long)*(v22));
                                                    v32 = ((long long)*(v23));
                                                    v23 += v33;
                                                    v22 += v33;
                                                    break;
                                                }
                                                v20 = &control_info + v20 * 24;
                                                v31 = ((long long)(((char)(v31 > v32)) - 0 - ((char)(v31 < v32))));
                                                if (((char)v31) != 0)
                                                {
                                                    v17 = 5;
                                                    v23 = "time";
                                                    v22 = v26;
                                                    while (v17 != 0)
                                                    {
                                                        v17 -= 1;
                                                        v31 = ((long long)*(v22));
                                                        v32 = ((long long)*(v23));
                                                        v23 += v33;
                                                        v22 += v33;
                                                        break;
                                                    }
                                                    v31 = ((long long)(((char)(v31 > v32)) - 0 - ((char)(v31 < v32))));
                                                    if (((char)v31) != 0)
                                                    {
                                                        if (((long long)*(*(v0 + v1 + 8) + 1)) != 0 && ((long long)*(*(v0 + v1 + 8))) != 0)
                                                        {
                                                            v26 = 0;
                                                            v10 = strcmp(*(v0 + 1 * 8 + 8), "^-");
                                                            if (v10 != 0)
                                                            {
                                                                v10 = strcmp(*(v0 + 1 * 8 + 8), "undef");
                                                                if (*(*(v0 + v1 + 8)) == 94 && v10 != 0)
                                                                {
                                                                    if (*(*(v0 + v1 + 8) + 1) != 63)
                                                                    {
                                                                        v26 = ((long long)(*(*(v0 + v1 + 8) + 1) & 159));
                                                                    }
                                                                    else
                                                                    {
                                                                        v26 = 127;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if (((long long)*(*(v0 + v1 + 8) + 1)) == 0 || ((long long)*(*(v0 + v1 + 8))) == 0)
                                                        {
                                                            v26 = ((long long)*(*(v0 + v1 + 8)));
                                                        }
                                                    }
                                                }
                                                if (...)
                                                {
                                                    v26 = (long long)integer_arg();
                                                }
                                                *(v24 + v20->field_10 + 17) = v26;
                                                *(v3) = 1;
                                                break;
                                                v27 = (long long)quote();
                                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                usage(); /* do not return */
                                            }
                                        }
                                    }
                                    if (v10 != 0)
                                    {
                                        v17 = 7;
                                        v23 = "ispeed";
                                        v22 = v30;
                                        break;
                                    }
                                    else if (...)
                                    {
                                        v21 = ((long long)(((int)rbp<8>) + 1));
                                    }
                                }
                                else
                                {
                                    v27 = (long long)quote();
                                    error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                    usage(); /* do not return */
                                }
                            }
                        }
                        else
                        {
                            v20 = v20 * 32 + &mode_info;
                            v10 = ((long long)v20->field_c);
                            v31 = ((long long)(v20->field_c & 16));
                            if (((char)v31) == 0)
                            {
                                if (((long long)v26) == 0)
                                {
                                    v10 = mode_type_flag();
                                    if (v10 != 0)
                                    {
                                        v10->field_0 = !(v20->field_18) & v10->field_0 | v20->field_10;
                                        *(v3) = 1;
                                        break;
                                    }
                                    else
                                    {
                                        v10 = strcmp(v29, "evenp");
                                        if (v10 != 0)
                                        {
                                            v10 = strcmp(v29, "parity");
                                            if (v10 != 0)
                                            {
                                                v10 = strcmp(v29, "oddp");
                                                if (v10 == 0)
                                                {
                                                    tmp_17 = ((long long)*(v24 + 8));
                                                    v1 = *(v24 + 8);
                                                    *(v24 + 8) = ((int)tmp_17) & -817 | 800;
                                                    *(v3) = 1;
                                                    break;
                                                }
                                            }
                                        }
                                        if (v10 == 0 || v10 == 0)
                                        {
                                            tmp_17 = ((long long)*(v24 + 8));
                                            v1 = *(v24 + 8);
                                            *(v24 + 8) = ((int)tmp_17) & -817 | 288;
                                            *(v3) = 1;
                                            break;
                                        }
                                    }
                                }
                                else if (((long long)(v10 & 4)) != 0)
                                {
                                    v10 = mode_type_flag();
                                    if (v10 != 0)
                                    {
                                        v10->field_0 = v10->field_0 & !(((int)*(rbx<8> + 16)) | *(rbx<8> + 24));
                                        *(v3) = 1;
                                        break;
                                    }
                                    else
                                    {
                                        v10 = strcmp(v29, "evenp");
                                        if (v10 != 0)
                                        {
                                            v10 = strcmp(v29, "parity");
                                            if (v10 != 0)
                                            {
                                                v10 = strcmp(v29, "oddp");
                                                if (v10 != 0)
                                                {
                                                    /* goto 4219168; */
                                                }
                                            }
                                        }
                                        if (v10 == 0 || v10 == 0 || v10 == 0)
                                        {
                                            tmp_17 = ((long long)*(v24 + 8));
                                            v1 = *(v24 + 8);
                                            *(v24 + 8) = ((int)tmp_17) & -305 | 48;
                                            *(v3) = 1;
                                            break;
                                        }
                                    }
                                }
                                else
                                {
                                    *(v3) = 1;
                                    v27 = (long long)quote();
                                    error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                    usage(); /* do not return */
                                }
                            }
                        }
                        if ((v29 == 0 || v10 == 0) && (((long long)v26) == 0 || v10 == 0) && (v10 == 0 || v17 > ((int)v21)) && (((char)v31) != 0 || v10 != 0))
                        {
                            while (v17 != 0)
                            {
                                v17 -= 1;
                                v31 = ((long long)*(v22));
                                v32 = ((long long)*(v23));
                                v23 += v33;
                                v22 += v33;
                                break;
                            }
                            v31 = ((long long)(((char)(v31 > v32)) - 0 - ((char)(v31 < v32))));
                            if (((char)v31) != 0)
                            {
                                v17 = 7;
                                v23 = "ospeed";
                                v22 = v30;
                                while (v17 != 0)
                                {
                                    v17 -= 1;
                                    v31 = ((long long)*(v22));
                                    v32 = ((long long)*(v23));
                                    v23 += v33;
                                    v22 += v33;
                                    break;
                                }
                                v31 = ((long long)(((char)(v31 > v32)) - 0 - ((char)(v31 < v32))));
                                if (((char)v31) != 0)
                                {
                                    v17 = 5;
                                    v23 = "rows";
                                    v22 = v30;
                                    while (v17 != 0)
                                    {
                                        v17 -= 1;
                                        v31 = ((long long)*(v22));
                                        v32 = ((long long)*(v23));
                                        v23 += v33;
                                        v22 += v33;
                                        break;
                                    }
                                    v31 = ((long long)(((char)(v31 > v32)) - 0 - ((char)(v31 < v32))));
                                    if (((char)v31) != 0)
                                    {
                                        v17 = 5;
                                        v23 = "cols";
                                        v22 = v30;
                                        while (v17 != 0)
                                        {
                                            v17 -= 1;
                                            v31 = ((long long)*(v22));
                                            v32 = ((long long)*(v23));
                                            v23 += v33;
                                            v22 += v33;
                                            break;
                                        }
                                        v31 = ((long long)(((char)(v31 > v32)) - 0 - ((char)(v31 < v32))));
                                        if (((char)v31) != 0)
                                        {
                                            v10 = strcmp(v30, "columns");
                                            if (v10 != 0)
                                            {
                                                v10 = strcmp(v30, "size");
                                                if (v10 != 0)
                                                {
                                                    v10 = strcmp(v30, "line");
                                                    if (v10 != 0)
                                                    {
                                                        v10 = strcmp(v30, "speed");
                                                        if (v10 != 0)
                                                        {
                                                            v26 = (int)string_to_baud();
                                                            if (v26 != -1)
                                                            {
                                                                cfsetispeed(((int)v24), v26);
                                                                /* goto 4218623; */
                                                            }
                                                            else
                                                            {
                                                                v20 = v30;
                                                                v28 = 0;
                                                                v26 = __errno_location();
                                                                while (true)
                                                                {
                                                                    v26->field_0 = 0;
                                                                    v10 = strtoul();
                                                                    if (v26->field_0 != 0)
                                                                    {
                                                                        v27 = (long long)quote();
                                                                        error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                        usage(); /* do not return */
                                                                    }
                                                                    else if (*(v5) != 58)
                                                                    {
                                                                        v27 = (long long)quote();
                                                                        error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                        usage(); /* do not return */
                                                                    }
                                                                    else if (v5 != v20)
                                                                    {
                                                                        v17 = v10;
                                                                        if (False)
                                                                        {
                                                                            v27 = (long long)quote();
                                                                            error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                            usage(); /* do not return */
                                                                        }
                                                                        v6 = ((int)v17);
                                                                        v28 += 1;
                                                                        v20 = v5 + 1;
                                                                        tmp_11 = v6;
                                                                        v18 = v24;
                                                                        v1 = 1;
                                                                        v28 = 0;
                                                                        v21 = v20;
                                                                        v18->field_0 = tmp_11;
                                                                        v20 = 58;
                                                                        v18->field_8 = v7;
                                                                        while (true)
                                                                        {
                                                                            v26->field_0 = 0;
                                                                            v10 = strtoul();
                                                                            if (v26->field_0 != 0)
                                                                            {
                                                                                v27 = (long long)quote();
                                                                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                                usage(); /* do not return */
                                                                            }
                                                                            else if (*(v5) != v20)
                                                                            {
                                                                                v27 = (long long)quote();
                                                                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                                usage(); /* do not return */
                                                                            }
                                                                            else if (v21 != v5)
                                                                            {
                                                                                v27 = (long long)quote();
                                                                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                                usage(); /* do not return */
                                                                                if ((v10 & 0xfffffffeffffff00) == 0)
                                                                                {
                                                                                    v21 = v5 + 1;
                                                                                    *(v24 + v28 + 17) = v10;
                                                                                    v28 += 1;
                                                                                    if (v28 != 32)
                                                                                    {
                                                                                        v20 = ((long long)(v28 == 31? ((int)v18) : 58));
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        *(v3) = 1;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    v27 = (long long)quote();
                                                                                    error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                                    usage(); /* do not return */
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        v27 = (long long)quote();
                                                                        error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                                        usage(); /* do not return */
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            max_col = screen_columns();
                                                            display_speed();
                                                            break;
                                                        }
                                                    }
                                                    else if (v17 - 1 == ((int)1))
                                                    {
                                                        v27 = (long long)quote();
                                                        error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                        usage(); /* do not return */
                                                    }
                                                    else if (*(v0 + v1 + 8) != 0)
                                                    {
                                                        v10 = integer_arg();
                                                        *(v24 + 16) = v10;
                                                        if ((v10 & 0xfffffffeffffff00) != 0)
                                                        {
                                                            v26 = (long long)quote();
                                                            error(0x0, 0x0, dcgettext(0x0, &g_40d282, 0x5));
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v27 = (long long)quote();
                                                        error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                                        usage(); /* do not return */
                                                    }
                                                }
                                                else
                                                {
                                                    current_col = 0;
                                                    max_col = screen_columns();
                                                    display_window_size();
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else if (v17 - 1 == ((int)1))
                                    {
                                        v27 = (long long)quote();
                                        error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                        usage(); /* do not return */
                                    }
                                    else if (*(v0 + v1 + 8) != 0)
                                    {
                                        integer_arg();
                                        set_window_size();
                                        break;
                                    }
                                    else
                                    {
                                        v27 = (long long)quote();
                                        error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                        usage(); /* do not return */
                                    }
                                }
                                else if (v17 - 1 == ((int)1))
                                {
                                    v27 = (long long)quote();
                                    error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                    usage(); /* do not return */
                                }
                                else if (*(v0 + v1 + 8) != 0)
                                {
                                    v22 = (long long)string_to_baud();
                                    /* goto 4218623; */
                                }
                                else
                                {
                                    v27 = (long long)quote();
                                    error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                    usage(); /* do not return */
                                }
                            }
                            else if (v17 - 1 == ((int)1))
                            {
                                v27 = (long long)quote();
                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                usage(); /* do not return */
                            }
                            else if (*(v0 + v1 + 8) != 0)
                            {
                                v21 = 3;
                                cfsetispeed(((int)v24), string_to_baud());
                                *(v25) = 1;
                                *(v3) = 1;
                                return v8 ^ *(v34 + 0x28);
                            }
                            else
                            {
                                v27 = (long long)quote();
                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                usage(); /* do not return */
                            }
                        }
                        if (((char)v31) == 0 && v10 == 0 && v10 == 0 && v10 != 0 && ((long long)v26) != 0 && ((long long)(v10 & 4)) != 0 && v10 != 0 && v10 != 0 || ((long long)v26) == 0 && ((char)v31) == 0 && v10 == 0 && v10 == 0 && v10 != 0 && v10 != 0 && v10 != 0)
                        {
                            v10 = strcmp(v29, "nl");
                            if (v10 == 0)
                            {
                                v22 = v24;
                                if (((long long)v26) != 0)
                                {
                                    v18 = ((long long)(v2->field_0 & -449));
                                    v19 = ((char)((v2->field_0 & -449) >> 8)) | 1;
                                    v22->field_4 = *(v24 + 4) & -45 | 4;
                                    tmp_37 = rdx<8>;
                                    v22->field_0 = ((int)tmp_37);
                                    *(v3) = 1;
                                    break;
                                }
                                else
                                {
                                    *(v24) = 18446744052234714879 & v2->field_0;
                                    *(v3) = 1;
                                    break;
                                }
                            }
                            else
                            {
                                v10 = strcmp(v29, "ek");
                                if (v10 == 0)
                                {
                                    *(v24 + 19) = 5503;
                                    *(v3) = 1;
                                    break;
                                }
                                else
                                {
                                    v13 = strcmp(v29, "sane");
                                    if (v13 != 0)
                                    {
                                        v10 = strcmp(v29, "cbreak");
                                        if (v10 != 0)
                                        {
                                            v10 = strcmp(v29, "pass8");
                                            if (v10 == 0)
                                            {
                                                v17 = v24;
                                                v1 = *(v24 + 8);
                                                if (((long long)v26) != 0)
                                                {
                                                    v31 = ((int)(v2->field_0 | 32));
                                                    *(v17 + 8) = ((int)tmp_15) & -305 | 288;
                                                    *(v17) = v31;
                                                    *(v3) = 1;
                                                    break;
                                                }
                                                else
                                                {
                                                    v31 = ((int)(v2->field_0 & -33));
                                                    *(v24 + 8) = ((int)tmp_15) & -305 | 48;
                                                    *(v24) = v31;
                                                    *(v3) = 1;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                v10 = strcmp(v29, "litout");
                                                if (v10 == 0)
                                                {
                                                    v22 = v24;
                                                    v18 = 18446744065119616991 & v2->field_0;
                                                    v1 = *(v24 + 8);
                                                    if (((long long)v26) != 0)
                                                    {
                                                        v22->field_0 = 4294967328 | v2->field_0;
                                                        v22->field_8 = ((int)tmp_39) & -305 | 288;
                                                        *(v3) = 1;
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        *(v24 + 8) = ((int)tmp_39) & -305 | 48;
                                                        *(v24) = v18;
                                                        *(v3) = 1;
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v11 = strcmp(v29, "raw");
                                                    if (v11 != 0)
                                                    {
                                                        v11 = strcmp(v29, "cooked");
                                                        if (v11 != 0)
                                                        {
                                                            v10 = strcmp(v29, "decctlq");
                                                            if (v10 != 0)
                                                            {
                                                                v10 = strcmp(v29, "tabs");
                                                                if (v10 != 0)
                                                                {
                                                                    v14 = strcmp(v29, "lcase");
                                                                    if (v14 != 0)
                                                                    {
                                                                        v14 = strcmp(v29, "LCASE");
                                                                        if (v14 != 0)
                                                                        {
                                                                            v10 = strcmp(v29, "crt");
                                                                            if (v10 == 0)
                                                                            {
                                                                                *(v24 + 12) = *(v24 + 12) | 2576;
                                                                                *(v3) = 1;
                                                                                break;
                                                                            }
                                                                            else
                                                                            {
                                                                                v10 = strcmp(v29, "dec");
                                                                                if (v10 == 0)
                                                                                {
                                                                                    *(v24) = v2->field_0 & -2049;
                                                                                    *(v24 + 12) = *(v24 + 12) | 2576;
                                                                                    *(v24 + 17) = 3;
                                                                                    *(v24 + 19) = 5503;
                                                                                    *(v3) = 1;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else if (((long long)v26) != 0)
                                                                {
                                                                    *(v24 + 4) = ((int)*(v24 + 4));
                                                                    *(v3) = 1;
                                                                    break;
                                                                }
                                                                else
                                                                {
                                                                    *(v24 + 4) = ((int)*(v24 + 4));
                                                                    *(v3) = 1;
                                                                    break;
                                                                }
                                                            }
                                                            else if (((long long)v26) != 0)
                                                            {
                                                                *(v24) = ((int)v2->field_0);
                                                                *(v3) = 1;
                                                                break;
                                                            }
                                                            else
                                                            {
                                                                *(v24) = ((int)v2->field_0);
                                                                *(v3) = 1;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (((long long)v26) != 0)
                                        {
                                            *(v24 + 12) = *(v24 + 12) | 2;
                                            *(v3) = 1;
                                            break;
                                        }
                                        else
                                        {
                                            *(v24 + 12) = *(v24 + 12) & -3;
                                            *(v3) = 1;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        v10 = &control_info;
                                        while (true)
                                        {
                                            v10 += 24;
                                            if (*(v10 + 24) == 0)
                                            {
                                                break;
                                            }
                                            *(v24 + *(v10 + 8) + 17) = *(v10 + 16);
                                        }
                                        for (v20 = &mode_info; v20->field_0 != 0; v20 += 32)
                                        {
                                            v10 = ((long long)v20->field_c);
                                            if (((long long)(v20->field_c & 16)) == 0)
                                            {
                                                if (((long long)(v10 & 1)) != 0)
                                                {
                                                    v18 = (long long)mode_type_flag();
                                                    if (v18 != 0)
                                                    {
                                                        v18->field_0 = !(v20->field_18) & v18->field_0 | v20->field_10;
                                                    }
                                                    else
                                                    {
                                                        __assert_fail(); /* do not return */
                                                    }
                                                }
                                                else if (((long long)(v10 & 2)) != 0)
                                                {
                                                    v10 = mode_type_flag();
                                                    if (v10 != 0)
                                                    {
                                                        v10->field_0 = v10->field_0 & !(((int)*(rbx<8> + 16)) | *(rbx<8> + 24));
                                                    }
                                                    else
                                                    {
                                                        __assert_fail(); /* do not return */
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (...)
                        {
                            if (v17 - 1 == ((int)1))
                            {
                                v27 = (long long)quote();
                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                usage(); /* do not return */
                            }
                            else if (*(v0 + v1 + 8) != 0)
                            {
                                integer_arg();
                                set_window_size();
                                break;
                            }
                            else
                            {
                                v27 = (long long)quote();
                                error(0x0, 0x0, dcgettext(0x0, v22, 0x5));
                                usage(); /* do not return */
                            }
                        }
                        if (...)
                        {
                            v10 = ((long long)*(v29));
                        }
                        if (...)
                        {
                            cfsetospeed();
                            *(v25) = 1;
                            *(v3) = 1;
                            break;
                        }
                        if (...)
                        {
                            *(v24 + 4) = *(v24 + 4) & -2;
                            *(v24 + 12) = *(v24 + 12) & -8;
                            *(v24) = 0;
                            *(v24 + 22) = 0x100;
                        }
                        if (...)
                        {
                            *(v24) = v2->field_0 | 4294968614;
                            *(v24 + 12) = *(v24 + 12) | 3;
                            *(v3) = 1;
                            break;
                        }
                        if (...)
                        {
                            v22 = v24;
                            v10 = ((int)*(v24 + 12));
                            v18 = 0x200000200 | v2->field_0;
                            if (((long long)v26) != 0)
                            {
                                v22->field_0 = 18446744060824649215 & v2->field_0;
                                v22->field_c = v10 & -5;
                                *(v3) = 1;
                                break;
                            }
                            else
                            {
                                *(v24 + 12) = *(v24 + 12) | 4;
                                *(v24) = v18;
                                *(v3) = 1;
                                break;
                            }
                        }
                        if (...)
                        {
                            *(v3) = 1;
                            break;
                        }
                    }
                    if (...)
                    {
                        v21 = ((long long)(((int)rbp<8>) + 1));
                    }
                    else if (...)
                    {
                        v17 = v0;
                        v30 = *(v0 + v21 * 8);
                        v1 = v21 * 8;
                    }
                }
            }
            v21 = ((long long)(((int)rbp<8>) + 1));
        }
        return v8 ^ *(v34 + 0x28);
    }
    return v8 ^ *(v34 + 0x28);
}
