typedef struct struct_2 {
    unsigned short field_0;
    char padding_2[2];
    unsigned int field_4;
    char padding_8[36];
    char field_2c;
    char padding_2d[289];
    unsigned short field_14e;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 comment.8090;
extern struct_0 exitstr.8070;
extern unsigned int g_40a026;
extern unsigned int g_40a079;
extern unsigned int g_40a087;
extern unsigned int g_40a08c;
extern unsigned int g_40a094;
extern unsigned int g_40a098;
extern unsigned int g_40a09d;
extern unsigned int g_40a0a2;
extern unsigned int g_40a0a7;
extern unsigned int g_40a0b2;
extern unsigned int g_40a0bc;
extern unsigned int g_40a0c2;
extern unsigned int g_40a0c8;
extern unsigned int g_40a0e6;
extern unsigned int g_40a0ec;
extern unsigned int g_40a0f2;
extern unsigned int g_40a0f8;
extern unsigned long long g_40b141;
extern char include_heading;
extern char my_line_only;
extern char need_boottime;
extern char need_clockchange;
extern char need_deadprocs;
extern char need_initspawn;
extern char need_login;
extern char need_runlevel;
extern char need_users;
extern struct_0 runlevline.8089;
extern char short_list;

int who()
{
    unsigned long v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0]
    unsigned long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x4c]
    unsigned long v13;  // [bp-0x40]
    unsigned long long|char * v15;  // rax
    unsigned long v2;  // [bp-0xa8]
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rcx
    unsigned int v26;  // edx
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rbp
    unsigned long v29;  // rsi
    unsigned long v3;  // [bp-0xa0]
    char * v30;  // rdi
    char * v31;  // rdi
    struct_2 * v33;  // r12
    unsigned long long v34;  // r12
    unsigned long long v35;  // r14
    unsigned int v36;  // r14d
    unsigned int v37;  // r15d
    char v38;  // cc_dep2
    unsigned long v39;  // d
    unsigned long v4;  // [bp-0x98]
    struct_0 *v40;  // fs
    unsigned long v5;  // [bp-0x90]
    char * v6;  // [bp-0x88]
    unsigned long|unsigned int v7;  // [bp-0x80]
    unsigned long v8;  // [bp-0x78]
    unsigned int v9;  // [bp-0x6c]

    v15 = read_utmp();
    if (v15 == 0)
    {
        v33 = v11;
        v35 = v10;
        if (short_list == 0)
        {
            if (include_heading != 0)
            {
                v8 = dcgettext(0x0, &g_40a087, 0x5);
                v7 = dcgettext(0x0, &g_40a08c, 0x5);
                v28 = dcgettext(0x0, &g_40a09d, 0x5);
                v27 = dcgettext(0x0, &g_40a0a2, 0x5);
                dcgettext(0x0, &g_40a0a7, 0x5);
                v5 = v8;
                v4 = v7;
                v3 = dcgettext(0x0, &g_40a094, 0x5);
                v2 = dcgettext(0x0, &g_40a098, 0x5);
                print_line();
            }
            if (my_line_only != 0)
            {
                v15 = ttyname(0x0);
                v6 = v15;
                v27 = v15;
                if (v15 == 0)
                {
                    rpl_free();
                    return v13 ^ *(v40 + 0x28);
                }
                v15 = strncmp(v15, "/dev/", 0x5);
                if (v15 == 0)
                {
                    v6 = v27 + 5;
                }
            }
            if (my_line_only == 0 || v15 != 0)
            {
                v28 = v35 - 1;
                if (v35 != 0)
                {
                    do
                    {
                        v35 = ((long long)v33->field_0);
                        if (my_line_only != 0)
                        {
                            v15 = strncmp(v6, v33 + 8, 0x20);
                        }
                        if (my_line_only == 0 || v15 == 0)
                        {
                            if (v35 == 7 && v33->field_2c != 0 && need_users != 0)
                            {
                                print_user();
                            }
                            if (v33->field_2c == 0 || need_users == 0 || v35 != 7)
                            {
                                if (v35 == 1 && need_runlevel != 0)
                                {
                                    v36 = ((int)((v33->field_4 >> 31 CONCAT v33->field_4) % 0x100));
                                    if (runlevline.8089 == 0)
                                    {
                                        v30 = dcgettext(0x0, &g_40a0b2, 0x5);
                                        while (rcx<8> != 0)
                                        {
                                            v23 = rcx<8> - 1;
                                            v38 = ((char)*(v30));
                                            v30 += v39;
                                            break;
                                        }
                                        runlevline.8089 = (long long)xmalloc();
                                    }
                                    __sprintf_chk(((int)runlevline.8089), 0x1, 0xffffffff, &g_40a0bc, dcgettext(0x0, &g_40a0b2, 0x5));
                                    if (comment.8090 == 0)
                                    {
                                        v30 = dcgettext(0x0, &g_40a0c2, 0x5);
                                        while (v23 != 0)
                                        {
                                            v23 -= 1;
                                            v38 = ((char)*(v30));
                                            v30 += v39;
                                            break;
                                        }
                                        comment.8090 = (long long)xmalloc();
                                    }
                                    v37 = ((int)v36) - 32;
                                    __sprintf_chk(((int)comment.8090), 0x1, 0xffffffff, &g_40a0c8, dcgettext(0x0, &g_40a0c2, 0x5));
                                    v35 = &g_40b141;
                                    if (v37 <= 94)
                                    {
                                        v35 = comment.8090;
                                    }
                                    time_string.isra.0();
                                    v5 = &g_40b141;
                                    v4 = v35;
                                    v3 = &g_40b141;
                                    v2 = &g_40b141;
                                    print_line();
                                }
                                if (need_runlevel == 0 || v35 != 1)
                                {
                                    if (v35 == 2 && need_boottime != 0)
                                    {
                                        v35 = (long long)time_string.isra.0();
                                        /* goto 4208761; */
                                    }
                                    if (v35 == 3 && need_clockchange != 0 && (need_boottime == 0 || v35 != 2))
                                    {
                                        v35 = (long long)time_string.isra.0();
                                        /* goto 4208761; */
                                    }
                                    if (need_clockchange == 0 && need_boottime == 0 || need_clockchange == 0 && v35 != 2 || need_boottime == 0 && v35 != 3 || v35 != 3 && v35 != 2)
                                    {
                                        if (v35 == 5 && need_initspawn != 0)
                                        {
                                            __sprintf_chk(((int)&v12), 0x1, 0xc, &g_40a026, ((int)v33->field_4));
                                            v5 = &g_40b141;
                                            v4 = (long long)make_id_equals_comment();
                                            (long long)time_string.isra.0() = (long long)time_string.isra.0();
                                            v3 = &v12;
                                            v2 = &g_40b141;
                                            /* goto 4208949; */
                                        }
                                        if (v35 == 6 && need_login != 0 && (need_initspawn == 0 || v35 != 5))
                                        {
                                            __sprintf_chk(((int)&v12), 0x1, 0xc, &g_40a026, ((int)v33->field_4));
                                            v7 = (long long)time_string.isra.0();
                                            v5 = &g_40b141;
                                            v4 = (long long)make_id_equals_comment();
                                            v29 = dcgettext(0x0, &g_40a0e6, 0x5);
                                            v3 = &v12;
                                            v2 = &g_40b141;
                                            /* goto 4208949; */
                                        }
                                        if (!(need_initspawn == 0 && need_login == 0 || need_initspawn == 0 && v35 != 6 || need_login == 0 && v35 != 5 || v35 != 6 && v35 != 5))
                                        {
                                            print_line();
                                            rpl_free();
                                        }
                                        else if (need_deadprocs != 0)
                                        {
                                            if (v35 != 8)
                                            {
                                            }
                                            else
                                            {
                                                v35 = (long long)make_id_equals_comment();
                                                __sprintf_chk(((int)&v12), 0x1, 0xc, &g_40a026, ((int)v33->field_4));
                                                if (exitstr.8070 == 0)
                                                {
                                                    v31 = dcgettext(0x0, &g_40a0ec, 0x5);
                                                    v24 = 18446744069414584319;
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v38 = ((char)*(v31));
                                                        v31 += v39;
                                                        break;
                                                    }
                                                    v7 = !(rcx<8>) - 1;
                                                    v30 = dcgettext(0x0, &g_40a0f2, 0x5);
                                                    v23 = 18446744069414584319;
                                                    while (v23 != 0)
                                                    {
                                                        v23 -= 1;
                                                        v38 = ((char)*(v30));
                                                        v30 += v39;
                                                        break;
                                                    }
                                                    exitstr.8070 = (long long)xmalloc();
                                                }
                                                v9 = ((int)v33->field_14e);
                                                v8 = dcgettext(0x0, &g_40a0f2, 0x5);
                                                v7 = (long long)time_string.isra.0();
                                                v5 = ((long long)v9);
                                                v4 = v8;
                                                __sprintf_chk(((int)exitstr.8070), 0x1, 0xffffffff, &g_40a0f8, dcgettext(0x0, &g_40a0ec, 0x5));
                                                v7 = exitstr.8070;
                                                time_string.isra.0();
                                                v3 = v7;
                                                v2 = v35;
                                                v1 = &v12;
                                                v0 = &g_40b141;
                                                print_line();
                                                rpl_free();
                                            }
                                        }
                                    }
                                    else
                                    {
                                        dcgettext(0x0, dcgettext(0x0, &g_40a0e6, 0x5), 0x5);
                                        v5 = &g_40b141;
                                        v4 = &g_40b141;
                                        v3 = &g_40b141;
                                        v2 = &g_40b141;
                                        print_line();
                                    }
                                }
                            }
                        }
                        v28 -= 1;
                        v33 += 384;
                    }
                    while (v28 != 18446744069414584319);
                    rpl_free();
                    return v13 ^ *(v40 + 0x28);
                }
                rpl_free();
                return v13 ^ *(v40 + 0x28);
            }
        }
        v27 = v35 - 1;
        if (v35 != 0)
        {
            v35 = 0;
            do
            {
                if (v33->field_0 == 7 && v33->field_2c != 0)
                {
                    v35 += 1;
                    __printf_chk(0x1, "%s%s", v26, (int)extract_trimmed_name());
                    rpl_free();
                }
                v27 -= 1;
                v33 += 384;
            }
            while (v27 != 18446744069414584319);
            __printf_chk(0x1, dcgettext(0x0, &g_40a079, 0x5));
            rpl_free();
            return v13 ^ *(v40 + 0x28);
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40a079, 0x5));
            rpl_free();
            return v13 ^ *(v40 + 0x28);
        }
    }
    v34 = (long long)quotearg_n_style_colon();
    error(0x1, *(__errno_location()), "%s");
}
