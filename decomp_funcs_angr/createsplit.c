typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_0 filter_command;
extern struct_1 filter_pid;
extern unsigned int g_40a020;
extern unsigned int g_40a032;
extern unsigned int g_40a044;
extern unsigned int g_40a05f;
extern unsigned int g_40a064;
extern unsigned int g_40a07c;
extern unsigned int g_40a092;
extern unsigned int g_40a0a5;
extern unsigned int g_40a0b9;
extern unsigned int g_40a0cb;
extern unsigned int g_40a0de;
extern unsigned int g_40a0e1;
extern unsigned int g_40a0f9;
extern unsigned int g_40a428;
extern unsigned int g_40a450;
extern unsigned int g_40a478;
extern struct_0 g_40f308;
extern struct_0 in_stat_buf;
extern struct_0 n_open_pipes;
extern unsigned int oldblocked;
extern struct_1 *open_pipes;
extern struct_0 open_pipes_alloc;
extern char verbose;

int create()
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb4]
    unsigned long long v10;  // rax
    struct_1 * v11;  // rdx
    unsigned long long v12;  // rbx
    struct_1 *v14;  // rbx
    unsigned int v15;  // edi
    struct_1 * v16;  // rdi
    unsigned long long v17;  // r12
    unsigned long long v18;  // r12
    unsigned int v19;  // r12d
    unsigned long v2;  // [bp-0xb0]
    unsigned long long v20;  // r13
    unsigned int v21;  // r13d
    unsigned long long v22;  // r13
    unsigned long long v23;  // r13
    unsigned long long v24;  // r13
    unsigned int v3;  // [bp-0xa0]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v9;  // rax

    if (filter_command != 0)
    {
        v21 = ((int)(getenv("SHELL") == 0? "/bin/sh" : getenv("SHELL")));
        v7 = setenv(&g_40a05f, v15, 0x1);
        if (v7 == 0)
        {
            if (verbose != 0)
            {
                v17 = (long long)quotearg_n_style_colon();
                dcgettext(0x0, &g_40a064, 0x5);
                __fprintf_chk();
            }
            v6 = pipe(((int)&v0));
            if (!(v6 == 0))
            {
                error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a07c, 0x5));
            }
            else if (!(filter_pid != 0))
            {
                v12 = 0;
                if (n_open_pipes != 0)
                {
                    while (true)
                    {
                        v6 = close(*(open_pipes + v12 * 4));
                        if (v6 == 0)
                        {
                            v12 += 1;
                            if (n_open_pipes <= v12)
                            {
                                break;
                            }
                        }
                        else
                        {
                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a092, 0x5));
                        }
                    }
                }
                v19 = close(v1);
                v14 = __errno_location();
                if (v19 == 0)
                {
                    if (v0 != 0)
                    {
                        v5 = dup2(v0, 0x0);
                        if (v5 == 0)
                        {
                            v6 = close(v0);
                            if (v6 == 0)
                            {
                                sigprocmask(0x2, &oldblocked, 0x0);
                                execl(v21, last_component(), &g_40a0de, ((int)filter_command), 0x0);
                                error(0x1, v14->field_0, dcgettext(0x0, &g_40a478, 0x5));
                            }
                            else
                            {
                                error(0x1, v14->field_0, dcgettext(0x0, &g_40a0cb, 0x5));
                            }
                        }
                        else
                        {
                            error(0x1, v14->field_0, dcgettext(0x0, &g_40a0b9, 0x5));
                        }
                    }
                    else
                    {
                        sigprocmask(0x2, &oldblocked, 0x0);
                        execl(v21, last_component(), &g_40a0de, ((int)filter_command), 0x0);
                        error(0x1, v14->field_0, dcgettext(0x0, &g_40a478, 0x5));
                    }
                }
                else
                {
                    error(0x1, v14->field_0, dcgettext(0x0, &g_40a0a5, 0x5));
                }
            }
            else if (filter_pid != -1)
            {
                v9 = close(v0);
                if (v9 == 0)
                {
                    v11 = n_open_pipes;
                    filter_pid = fork();
                    v16 = open_pipes;
                    if (n_open_pipes != open_pipes_alloc)
                    {
                        n_open_pipes = v11 + 1;
                        *(v16 + v11 * 4) = v1;
                        v23 = ((long long)v1);
                        v10 = v23;
                        return v10;
                    }
                    v9 = x2nrealloc();
                    v11 = n_open_pipes;
                    open_pipes = v9;
                    v16 = v9;
                    n_open_pipes = v11 + 1;
                    *(v16 + v11 * 4) = v1;
                    v23 = ((long long)v1);
                    v10 = v23;
                    return v10;
                }
                error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a0f9, 0x5));
            }
            else
            {
                error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a0e1, 0x5));
            }
        }
        else
        {
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a450, 0x5));
        }
    }
    else
    {
        if (verbose != 0)
        {
            v22 = (long long)quotearg_style();
            dcgettext(0x0, &g_40a020, 0x5);
            __fprintf_chk();
        }
        v23 = (long long)open_safer();
        if (((int)v23) < 0)
        {
            v10 = v23;
            return v10;
        }
        else if (__fxstat(0x1, ((int)v23), ((int)&v0)) == 0)
        {
            if (g_40f308 == v2)
            {
                if (in_stat_buf == v0)
                {
                    v18 = (long long)quotearg_style();
                    error(0x1, 0x0, dcgettext(0x0, &g_40a428, 0x5));
                }
            }
            if (g_40f308 != v2 || in_stat_buf != v0)
            {
                v9 = ftruncate(((int)v23), 0x0);
                if (v9 == 0)
                {
                    v10 = v23;
                    return v10;
                }
                else if ((((short)v3) & 0xf000) != 0x8000)
                {
                    v10 = v23;
                    return v10;
                }
                else
                {
                    v24 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a044, 0x5));
                }
            }
        }
        else
        {
            v20 = (long long)quotearg_style();
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_40a032, 0x5));
        }
    }
}
