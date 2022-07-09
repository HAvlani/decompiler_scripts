typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned int field_30;
    char field_34;
    char field_35;
    char field_36;
    char padding_37[1];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern char disable_inotify;
extern struct_0 follow_mode;
extern unsigned int g_40d0c1;
extern unsigned int g_40d0dc;
extern unsigned int g_40d458;
extern unsigned int g_40d490;
extern unsigned int g_40d4c0;
extern unsigned int g_40d520;
extern char reopen_inaccessible_files;

int recheck()
{
    BOT tmp_6;  // tmp #6
    char v0;  // [bp-0xe1]
    unsigned long v1;  // [bp-0xe0]
    unsigned long long v13;  // rax
    char v2;  // [bp-0xd8]
    struct_1 *v22;  // rbx
    unsigned long|struct_0 *|unsigned long long|unsigned int v23;  // rbp
    unsigned long|unsigned int v24;  // esi
    struct_1 *v25;  // rdi
    char v26[2];  // rdi
    unsigned long long v27;  // r12
    unsigned long|unsigned long long|unsigned int v28;  // r13d
    unsigned long|unsigned long long v29;  // r14
    unsigned long v3;  // [bp-0xd0]
    unsigned long long v30;  // r15
    struct_2 *v31;  // fs
    unsigned int v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x40]
    unsigned long|struct_0 *|unsigned int|char|unsigned long long v9;  // rax

    v28 = v24;
    v22 = v25;
    v26 = v25->field_0;
    v23 = ((long long)(((int)v26[0]) - 45));
    if (v26[0] == 45)
    {
        v23 = ((int)v26[1]);
    }
    v29 = ((long long)v22->field_3c);
    v0 = v22->field_36;
    if (v23 != 0)
    {
        v27 = open_safer();
        v9 = ((int)v22->field_3c);
    }
    else
    {
        v9 = v29;
        v27 = 0;
    }
    v9 = ((char)(v9 == 0));
    if (((char)(v22->field_38 == -1)) != ((char)(v9 == 0)))
    {
        if (((long long)reopen_inaccessible_files) == 0)
        {
            v22->field_36 = 1;
            if (((long long)disable_inotify) == 0)
            {
                v9 = __lxstat(0x1, ((int)v22->field_0), ((int)&v2));
                if (v9 == 0)
                {
                    if ((((short)v4) & 0xf000) == 0xa000)
                    {
                        /* goto 4221280; */
                    }
                }
            }
        }
        else if (v27 != -1)
        {
            v22->field_36 = 1;
            if (((long long)disable_inotify) == 0)
            {
                v24 = v22->field_0;
                v1 = &v2;
                v9 = __lxstat(0x1, v24, ((int)&v2));
                if (v9 == 0)
                {
                    if ((((short)v4) & 0xf000) == 0xa000)
                    {
                        /* goto 4221280; */
                    }
                }
            }
        }
        else
        {
            v22->field_36 = 0;
            v28 = v22->field_0;
            if (((long long)disable_inotify) != 0)
            {
                v9 = ((int)*(__errno_location()));
                v22->field_3c = v9;
            }
            else
            {
                v9 = __lxstat(0x1, v28, ((int)&v2));
                if (v9 == 0)
                {
                    if ((((short)v4) & 0xf000) == 0xa000)
                    {
                        /* goto 4221280; */
                    }
                }
            }
        }
        if (v27 != -1 && (((long long)reopen_inaccessible_files) == 0 || ((long long)disable_inotify) != 0 || (((short)v4) & 0xf000) != 0xa000 || v9 != 0) && (((long long)disable_inotify) != 0 || (((short)v4) & 0xf000) != 0xa000 || v9 != 0 || ((long long)reopen_inaccessible_files) != 0))
        {
            v9 = __fxstat(0x1, v27);
            if (v9 >= 0)
            {
                if (((v4 & 0xf000) - 0x1000 & -0x2000) != 0)
                {
                    if (((int)(v4 & 0xb000)) != 0x8000)
                    {
                        v22->field_3c = -1;
                        v22->field_36 = 0;
                        if (((long long)reopen_inaccessible_files) != 0)
                        {
                            if (follow_mode == 1)
                            {
                                v22->field_34 = 0;
                                if (v0 != 0)
                                {
                                    /* goto 4221146; */
                                }
                                else if (((char)(((int)v9) + 1 == 0)))
                                {
                                    pretty_name.isra.0();
                                    close_fd();
                                    pretty_name.isra.0();
                                    close_fd();
                                    v22->field_38 = -1;
                                    return v7 ^ *(v31 + 0x28);
                                }
                            }
                        }
                        if (((long long)reopen_inaccessible_files) == 0 || follow_mode != 1)
                        {
                            v22->field_34 = 1;
                        }
                        if (((long long)reopen_inaccessible_files) == 0 && v0 != 0 || ((long long)reopen_inaccessible_files) == 0 && ((int)v9) != -1 || v0 != 0 && follow_mode != 1 || follow_mode != 1 && ((int)v9) != -1)
                        {
                            v23 = dcgettext(0x0, &g_40d0dc, 0x5);
                        }
                        if (v0 != 0 || ((long long)reopen_inaccessible_files) == 0 && ((int)v9) != -1 || follow_mode != 1 && ((int)v9) != -1 || follow_mode == 1 && !(((char)(((int)v9) + 1 == 0))) && ((long long)reopen_inaccessible_files) != 0)
                        {
                            pretty_name.isra.0();
                            v28 = (long long)quotearg_style();
                            error(0x0, 0x0, dcgettext(0x0, &g_40d490, 0x5));
                        }
                        if (((long long)reopen_inaccessible_files) == 0 || v0 != 0 || follow_mode != 1 || !(((char)(((int)v9) + 1 == 0))))
                        {
                            pretty_name.isra.0();
                            close_fd();
                            pretty_name.isra.0();
                            close_fd();
                            v22->field_38 = -1;
                            return v7 ^ *(v31 + 0x28);
                        }
                    }
                }
                if (((int)(v4 & 0xb000)) == 0x8000 || ((v4 & 0xf000) - 0x1000 & -0x2000) == 0)
                {
                    pretty_name.isra.0();
                    v13 = fremote();
                    v22->field_35 = v13;
                    if (((long long)v13) != 0)
                    {
                        if (disable_inotify == 0)
                        {
                            v22->field_3c = -1;
                            pretty_name.isra.0();
                            v28 = (long long)quotearg_style();
                            error(0x0, 0x0, dcgettext(0x0, &g_40d4c0, 0x5));
                            v22->field_34 = 257;
                            pretty_name.isra.0();
                            close_fd();
                            pretty_name.isra.0();
                            close_fd();
                            v22->field_38 = -1;
                            return v7 ^ *(v31 + 0x28);
                        }
                    }
                    if (((long long)v13) == 0 || disable_inotify != 0)
                    {
                        v22->field_3c = 0;
                        if ((((int)v9) & -3) != 0)
                        {
                            if (v13 == -1)
                            {
                                pretty_name.isra.0();
                                v29 = (long long)quotearg_style();
                            }
                            else
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                        else
                        {
                            if (v13 != -1)
                            {
                                if (v22->field_28 == v3)
                                {
                                    if (v22->field_20 == v2)
                                    {
                                        pretty_name.isra.0();
                                        close_fd();
                                        return v7 ^ *(v31 + 0x28);
                                    }
                                }
                                if (v22->field_28 != v3 || v22->field_20 != v2)
                                {
                                    pretty_name.isra.0();
                                    v29 = (long long)quotearg_style();
                                    error(0x0, 0x0, dcgettext(0x0, &g_40d520, 0x5));
                                    pretty_name.isra.0();
                                    close_fd();
                                    v22->field_38 = v27;
                                    v22->field_34 = 0;
                                    v22->field_8 = 0;
                                    v22->field_10 = v5;
                                    v22->field_40 = (v23 == 0? -1 : ((int)r13b<1>));
                                    v22->field_18 = v6;
                                    v22->field_58 = 0;
                                    v22->field_20 = v2;
                                    v22->field_28 = v3;
                                    v22->field_30 = v4;
                                    pretty_name.isra.0();
                                    xlseek();
                                    return v7 ^ *(v31 + 0x28);
                                }
                            }
                            pretty_name.isra.0();
                            v29 = (long long)quotearg_style();
                        }
                        if (v13 == -1)
                        {
                            error(0x0, 0x0, dcgettext(0x0, v24, 0x5));
                            v22->field_38 = v27;
                            v22->field_34 = 0;
                            v22->field_8 = 0;
                            v22->field_10 = v5;
                            v22->field_40 = (v23 == 0? -1 : ((int)r13b<1>));
                            v22->field_18 = v6;
                            v22->field_58 = 0;
                            v22->field_20 = v2;
                            v22->field_28 = v3;
                            v22->field_30 = v4;
                            pretty_name.isra.0();
                            xlseek();
                            return v7 ^ *(v31 + 0x28);
                        }
                    }
                }
            }
        }
        if (((long long)disable_inotify) == 0 && (((short)v4) & 0xf000) == 0xa000 && (v9 == 0 || ((long long)reopen_inaccessible_files) != 0) && (v27 == -1 || ((long long)reopen_inaccessible_files) == 0 || v9 == 0) && (v9 == 0 || ((long long)reopen_inaccessible_files) == 0 || v27 != -1))
        {
            v22->field_3c = -1;
            v22->field_34 = 1;
            pretty_name.isra.0();
            v28 = (long long)quotearg_style();
            error(0x0, 0x0, dcgettext(0x0, &g_40d458, 0x5));
            pretty_name.isra.0();
            close_fd();
            pretty_name.isra.0();
            close_fd();
            v22->field_38 = -1;
            return v7 ^ *(v31 + 0x28);
        }
        if (...)
        {
            v9 = __errno_location();
            v30 = ((long long)v22->field_36);
            v23 = v9;
            v9 = ((int)v9->field_0);
            v22->field_3c = v9->field_0;
            tmp_6 = v30;
            if (((long long)tmp_6) != 0)
            {
                if (v9 == ((int)v9))
                {
                    pretty_name.isra.0();
                    close_fd();
                    pretty_name.isra.0();
                    close_fd();
                    v22->field_38 = -1;
                    return v7 ^ *(v31 + 0x28);
                }
                pretty_name.isra.0();
                quotearg_n_style_colon();
                error(0x0, v23->field_0, "%s");
                pretty_name.isra.0();
                close_fd();
                pretty_name.isra.0();
                close_fd();
                v22->field_38 = -1;
                return v7 ^ *(v31 + 0x28);
            }
        }
        if (...)
        {
            if (v0 == 0)
            {
                pretty_name.isra.0();
                close_fd();
                pretty_name.isra.0();
                close_fd();
                v22->field_38 = -1;
                return v7 ^ *(v31 + 0x28);
            }
            pretty_name.isra.0();
            v28 = (long long)quotearg_style();
            error(0x0, v22->field_3c, dcgettext(0x0, &g_40d0c1, 0x5));
            pretty_name.isra.0();
            close_fd();
            pretty_name.isra.0();
            close_fd();
            v22->field_38 = -1;
            return v7 ^ *(v31 + 0x28);
        }
    }
    __assert_fail(); /* do not return */
}
