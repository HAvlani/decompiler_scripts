typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_5 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_5;

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
} struct_4;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
    char field_11;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
} struct_1;

extern unsigned long long char_class_name;
extern char g_4046ca;
extern char g_4046ed;
extern unsigned long long g_4092c0;
extern unsigned int g_409510;
extern unsigned int g_409578;
extern unsigned int g_409618;
extern unsigned int g_409688;

int parse_str()
{
    BOT tmp_23;  // tmp #23
    BOT tmp_4;  // tmp #4
    BOT tmp_31;  // tmp #31
    BOT tmp_14;  // tmp #14
    BOT tmp_21;  // tmp #21
    BOT tmp_18;  // tmp #18
    struct_3 *v0;  // [bp-0xb8]
    unsigned int|unsigned long long v1;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0x70]
    unsigned long v11;  // [bp-0x68]
    unsigned long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    unsigned long v16;  // [bp-0x28]
    unsigned long v17;  // [bp-0x20]
    unsigned long v18;  // [bp-0x18]
    unsigned long v19;  // [bp-0x10]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v20;  // [bp-0x8]
    unsigned long v21;  // [bp+0x0]
    unsigned long v22;  // [bp+0x8]
    unsigned int v23;  // [bp+0x10]
    unsigned int v24;  // [bp+0x18]
    unsigned long long v25;  // [bp+0x20]
    char v26;  // [bp+0x46]
    char v27;  // [bp+0x4e]
    struct_5 *|struct_2 *|struct_1 *|unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    char v3;  // [bp-0xa0]
    unsigned long long v30;  // rax
    unsigned long long v35;  // rax
    unsigned long|unsigned long long v36;  // rcx
    unsigned long|char *|unsigned long long|struct_4 * v37;  // rdx
    unsigned long long v38;  // rdx
    unsigned int|char [2]|unsigned long long v39;  // rbx
    unsigned int v4;  // [bp-0x98]
    unsigned long long v40;  // rbp
    unsigned long v41;  // rsi
    char *v42;  // rdi
    unsigned long long v43;  // r8
    char|unsigned long long v44;  // r9b
    char *|unsigned long long v45;  // r10
    unsigned long long v46;  // r11
    unsigned long long v47;  // r12
    unsigned long long v48;  // r12
    unsigned long long v49;  // r13
    char v5[2];  // [bp-0x90]
    char v50[2];  // r13
    char *|unsigned long long v51;  // r14
    unsigned long long v52;  // r15
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    char v8;  // [bp-0x72]
    char v9;  // [bp-0x71]

    v49 = 7;
    /* goto 4210783; */
    /* goto 4210786; */
    /* goto 4210786; */
    /* goto 4210786; */
    /* goto 4210786; */
    /* goto 4210786; */
    /* goto 4210786; */
    /* goto 4210786; */
    v43 = ((long long)*(v45 + v36 + 2));
    v41 = v43 - 48;
    v0 = v41;
    v48 = strlen(v42);
    v29 = xmalloc();
    v13 = v29;
    v40 = v29;
    v30 = xcalloc();
    v14 = v30;
    v47 = v30;
    v28 = ((long long)*(v45));
    if (((int)(v43 - 48)) <= 7)
    {
        v49 = v41 + v37 * 8;
        tmp_23 = ((long long)*(v45 + v36 + 3));
        v23 = ((int)*(v45 + v36 + 3));
        if (((int)(tmp_23 - 48)) <= 7)
        {
            if (((int)(((long long)*(v45 + v36 + 3)) - 48 + (((long long)v49) << 3))) <= 255)
            {
                /* goto 4210786; */
            }
            else
            {
                v25 = v45;
                v27 = v44;
                v24 = ((int)v43);
                rsp<8> = rsp<8> - 8;
                v21 = &g_4046ca;
                v35 = dcgettext(0x0, &g_409510, 0x5);
                v36 = ((long long)v26);
                v20 = v35;
                v19 = ((long long)((int)v22));
                v18 = ((long long)v23);
                v17 = v36;
                rsp<8> = rsp<8> - 8 - 8 - 8 - 8 - 8;
                v16 = &g_4046ed;
                error(0x0, 0x0, v35);
                rsp<8> = rsp<8> + 32;
                v46 = &g_4092c0;
                v45 = v23;
                /* goto 4210786; */
            }
        }
    }
    if (((long long)*(v45)) != 0)
    {
        v36 = 0;
        v51 = 0;
        v46 = &g_4092c0;
        v45 = v42;
        /* goto 4210707; */
    }
    else
    {
        v3 = 1;
        rpl_free();
        rpl_free();
        return ((long long)v3);
    }
    while (true)
    {
        *(rbx<8> + None) = v49;
        v36 = v35;
        v28 = ((long long)*(r10<8> + v35));
        tmp_4 = v28;
        if (((long long)tmp_4) != 0)
        {
            while (true)
            {
                v37 = v51;
                v41 = v36 + 1;
                v51 = ((long long)(((int)v51) + 1));
                v44 = ((long long)*(v45 + v36 + 1));
                v39 = v40 + v37;
                if (v28 != 92)
                {
                    v39[0] = v28;
                    v28 = v44;
                    v36 = v41;
                }
                else
                {
                    v50 = v47 + v37;
                    *(v47 + v37) = 1;
                    if (((long long)v28) != 0)
                    {
                        v37 = v28 - 48;
                        v49 = v28;
                        /* goto ((long long)*(r11<8> + ((long long)dl<1>) * 4)) + r11<8>; */
                    }
                    else
                    {
                        v2 = v45;
                        v1 = ((int)v36);
                        error(0x0, 0x0, dcgettext(0x0, &g_409578, 0x5));
                        v50[0] = 0;
                        v45 = v2;
                        v49 = 92;
                        v35 = ((long long)v1) + 1;
                        break;
                    }
                }
            }
            if (v28 == 92 && ((long long)v28) != 0)
            {
                v35 = v36 + 2;
            }
            else if (((long long)v28) == 0 && v28 == 92)
            {
                *(rbx<8> + None) = v49;
                v36 = v35;
                v28 = ((long long)*(r10<8> + v35));
                tmp_4 = v28;
            }
            else if (v28 != 92)
            {
                v2 = v51;
                v15 = v51;
            }
        }
        v2 = v51;
        v15 = v51;
        if (((int)v51) > 2)
        {
            v49 = 2;
            v51 = 0;
            while (true)
            {
                v28 = ((long long)*(v40 + v51));
                v39 = ((long long)*(v40 + v51 + 1));
                v1 = v51 + 1;
                tmp_31 = v28;
                v8 = tmp_31;
                if (tmp_31 == 91)
                {
                    tmp_14 = *(v47 + v51);
                    v3 = *(v47 + v51);
                    if (((long long)tmp_14) == 0)
                    {
                        if (*(v47 + v1) == 0 && v2 - 1 > v49 && (v39 == 61 || v39 == 58))
                        {
                            v28 = v49;
                            while (true)
                            {
                                v36 = ((long long)*(v40 + v28));
                                v52 = v28;
                                v28 += 1;
                                tmp_4 = v36;
                                if (*(v47 + v52 + 1) == 0 && tmp_4 == v39 && *(v40 + v52 + 1) == 93 && *(v47 + v28 + 1) == 0)
                                {
                                    v5 = v40 + 2;
                                    ((unsigned int)v4) = v52 - 0 - 2;
                                    if (v52 == 2)
                                    {
                                        v41 = "missing character class name '[::]'";
                                        if (v39 != 58)
                                        {
                                            v41 = "missing equivalence class character '[==]'";
                                            error(0x0, 0x0, dcgettext(0x0, v41, 0x5));
                                            rpl_free();
                                            rpl_free();
                                            return ((long long)v3);
                                        }
                                        error(0x0, 0x0, dcgettext(0x0, v41, 0x5));
                                        rpl_free();
                                        rpl_free();
                                        return ((long long)v3);
                                    }
                                    else if (v39 == 58)
                                    {
                                        v7 = 0;
                                        v6 = 2;
                                        v9 = v39;
                                        v10 = v52;
                                        v52 = 0;
                                        while (true)
                                        {
                                            v51 = *(char_class_name + v52 * 8);
                                            v28 = strncmp(v5, *(char_class_name + v52 * 8), ((unsigned int)v4));
                                            if (v28 == 0)
                                            {
                                                v28 = strlen(v51);
                                                if (((unsigned int)v4) == v28)
                                                {
                                                    v39 = ((int)v52);
                                                    v52 = v10;
                                                    v28 = xmalloc();
                                                    v28->field_8 = 0;
                                                    v37 = v0->field_8;
                                                    v28->field_0 = 2;
                                                    v28->field_10 = v39;
                                                    __assert_fail(); /* do not return */
                                                }
                                            }
                                            if (v28 != 0 || ((unsigned int)v4) != v28)
                                            {
                                                v52 += 1;
                                                v49 = v6;
                                                v51 = v7;
                                                v39 = ((long long)v9);
                                                v28 = star_digits_closebracket();
                                                v49 = (long long)make_printable_str();
                                                v51 = (long long)quote();
                                                break;
                                            }
                                        }
                                        if (v52 == 12 && ((long long)v28) == 0 && (v28 != 0 || ((unsigned int)v4) != v28))
                                        {
                                            v37 = dcgettext(0x0, v41, 0x5);
                                            break;
                                        }
                                        else if (v28 == 0 && ((unsigned int)v4) == v28)
                                        {
                                            v37->field_8 = v28;
                                            v51 = v52 + 2;
                                            v0->field_8 = v28;
                                            break;
                                        }
                                    }
                                    else if (((unsigned int)v4) != 1)
                                    {
                                        v28 = star_digits_closebracket();
                                        v49 = (long long)make_printable_str();
                                        v37 = dcgettext(0x0, &g_409618, 0x5);
                                        error(0x0, 0x0, v37);
                                        rpl_free();
                                        rpl_free();
                                        rpl_free();
                                        return ((long long)v3);
                                    }
                                    else
                                    {
                                        v28 = xmalloc();
                                        v28->field_8 = 0;
                                        v38 = ((long long)v5[0]);
                                        v28->field_0 = 3;
                                        tmp_21 = v38;
                                        v28->field_10 = tmp_21;
                                        v37 = v0->field_8;
                                        if (v0->field_8 == 0)
                                        {
                                            __assert_fail(); /* do not return */
                                        }
                                    }
                                }
                            }
                        }
                        if (*(v47 + r13<8>) == 0 && (v2 - 1 <= v49 || v51 + 2 >= v2 || *(v47 + v1) != 0 || v39 != 61) && (v2 - 1 <= v49 || v51 + 2 >= v2 || *(v47 + v1) != 0 || v39 != 58))
                        {
                            v52 = r14<8> + 3;
                            if (v2 <= r14<8> + 3)
                            {
                            }
                            else
                            {
                                while (true)
                                {
                                    if (*(v40 + v52) != 93)
                                    {
                                        v52 += 1;
                                    }
                                    else
                                    {
                                        v49 = v52 - v1 - 2;
                                        if (v52 - v1 != 2)
                                        {
                                            v51 = v40 + 3;
                                            v28 = xstrtoumax();
                                            if (v28 == 0)
                                            {
                                                v37 = v11;
                                            }
                                            if (v11 == 18446744069414584319 || v28 != 0 || v12 != v51 + v49)
                                            {
                                                v49 = (long long)make_printable_str();
                                                v51 = (long long)quote();
                                                break;
                                            }
                                        }
                                        else
                                        {
                                            v11 = 0;
                                            v37 = 0;
                                        }
                                        if (v52 - v1 == 2 || v28 == 0 && v12 == v51 + v49 && v11 != 18446744069414584319)
                                        {
                                            v1 = v37;
                                            v28 = xmalloc();
                                            v28->field_8 = 0;
                                            v28->field_18 = v1;
                                            v37 = v0->field_8;
                                            v28->field_0 = 4;
                                            v28->field_10 = v39;
                                            if (v37 != 0)
                                            {
                                                v0->field_8->field_8 = v28;
                                                v0->field_8 = v28;
                                            }
                                            else
                                            {
                                                append_repeated_char.part.0(); /* do not return */
                                            }
                                        }
                                    }
                                }
                                if ((*(v40 + v52) == 93 && v28 == 0 && *(v47 + v52) == 0 && v11 != 18446744069414584319 && v52 - v1 != 2 && v12 == v51 + v49 || *(v40 + v52) == 93 && *(v47 + v52) == 0 && v52 - v1 == 2) && v37 != 0)
                                {
                                    v28 = ((long long)*(v40 + v51));
                                    v39 = ((long long)*(v40 + v51 + 1));
                                    v1 = v51 + 1;
                                    tmp_31 = v28;
                                    v8 = tmp_31;
                                }
                                else if (!(*(v40 + v52) == 93 && v28 == 0 && *(v47 + v52) == 0 && v52 - v1 != 2 && v11 == 18446744069414584319 || *(v40 + v52) == 93 && *(v47 + v52) == 0 && v52 - v1 != 2 && v28 != 0 || *(v40 + v52) == 93 && v28 == 0 && *(v47 + v52) == 0 && v11 != 18446744069414584319 && v52 - v1 != 2 && v12 != v51 + v49))
                                {
                                    if ((*(v40 + v52) == 93 && v28 == 0 && *(v47 + v52) == 0 && v11 != 18446744069414584319 && v52 - v1 != 2 && v12 == v51 + v49 || *(v40 + v52) == 93 && *(v47 + v52) == 0 && v52 - v1 == 2) && v37 != 0)
                                    {
                                        v52 = v51;
                                    }
                                }
                            }
                        }
                    }
                }
                if (...)
                {
                    tmp_18 = *(v47 + v1);
                    v3 = *(v47 + v1);
                    if (((long long)tmp_18) == 0)
                    {
                        v39 = ((long long)*(v40 + 2));
                        if (((long long)*(v40 + 2)) >= ((long long)v8))
                        {
                            v28 = xmalloc();
                            v28->field_8 = 0;
                            v37 = v0->field_8;
                            v28->field_0 = 1;
                            v28->field_10 = v8;
                            v28->field_11 = v39;
                            if (v37 != 0)
                            {
                                v0->field_8->field_8 = v28;
                                v51 = 3;
                                v0->field_8 = v28;
                            }
                            else
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                        else
                        {
                            v51 = (long long)make_printable_char();
                            v49 = (long long)make_printable_char();
                            error(0x0, 0x0, dcgettext(0x0, &g_409688, 0x5));
                            rpl_free();
                            rpl_free();
                            rpl_free();
                            rpl_free();
                            return ((long long)v3);
                        }
                    }
                }
                if (...)
                {
                    error(0x0, 0x0, v37);
                    rpl_free();
                    rpl_free();
                    rpl_free();
                    return ((long long)v3);
                }
                if (...)
                {
                    append_normal_char();
                    v51 = v1;
                }
                if (...)
                {
                    v52 = v51;
                }
            }
        }
        else
        {
            v52 = 0;
        }
        v49 = v40 + v52;
        v39 = v40 + v2;
        if (v2 > v52)
        {
            v3 = 1;
            rpl_free();
            rpl_free();
            return ((long long)v3);
            while (true)
            {
                v49 += 1;
                append_normal_char();
                if (v39 == v49)
                {
                    break;
                }
            }
            v3 = 1;
            rpl_free();
            rpl_free();
            return ((long long)v3);
        }
    }
    v35 = v36 + 2;
}
