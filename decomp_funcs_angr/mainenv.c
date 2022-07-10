typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

extern struct_0 *__environ;
extern char dev_debug;
extern unsigned long long dummy_environ.8115;
extern unsigned int exit_failure;
extern unsigned int g_4080a0;
extern unsigned int g_4080ff;
extern unsigned int g_408106;
extern unsigned int g_408167;
extern unsigned int g_4081ce;
extern unsigned int g_4081ec;
extern unsigned int g_40822b;
extern unsigned int g_4082f0;
extern unsigned int g_408928;
extern unsigned int g_408950;
extern unsigned int g_408980;
extern unsigned int g_4089b0;
extern unsigned int g_408a10;
extern unsigned int g_408ab8;
extern unsigned int g_408ae8;
extern unsigned int g_408b38;
extern unsigned int longopts;
extern unsigned long long optarg;
extern unsigned int optind;
extern char report_signal_handling;
extern unsigned int shortopts;
extern char sig_mask_changed;
extern struct_3 *signals;
extern struct_0 stderr;
extern struct_0 usvars;
extern struct_0 usvars_alloc;
extern struct_0 usvars_used;
extern struct_0 varname;
extern struct_0 vnlen;

int main()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_14;  // tmp #14
    unsigned long v0;  // [bp-0x168]
    unsigned long|unsigned long long v1;  // [bp-0x160]
    unsigned int v10;  // [bp-0x110]
    unsigned long v11;  // [bp-0x108]
    unsigned int v12;  // [bp-0x100]
    char v13;  // [bp-0xfc]
    unsigned long v14;  // [bp-0xf8]
    struct_0 *|struct_1 *|unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned int|char|struct_1 * v2;  // [bp-0x150]
    struct_0 * v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v26;  // rax
    char|unsigned long long v3;  // [bp-0x148]
    unsigned long long v30;  // rax
    unsigned int|unsigned long long v31;  // ecx
    char *|unsigned long long v32;  // rdx
    unsigned int|unsigned long long v33;  // rbx
    struct_0 *|unsigned long long v34;  // rbx
    unsigned long long|struct_0 *|char|unsigned int|char * v35;  // rbp
    unsigned long long v36;  // rbp
    unsigned int v37;  // ebp
    unsigned long|void *|unsigned long long v38;  // rsi
    unsigned int|unsigned long v39;  // edi
    unsigned long long v4;  // [bp-0x140]
    unsigned int|unsigned long|unsigned long long v40;  // r12
    unsigned long long v41;  // r12
    unsigned int|unsigned long long v42;  // r13
    unsigned long long v43;  // r13
    unsigned long long v44;  // r13
    unsigned int|char *|unsigned long|unsigned long long v45;  // r14d
    unsigned long long v46;  // r14
    char [3] v47;  // r15
    unsigned long long v48;  // r15
    unsigned int|char *|unsigned long v5;  // [bp-0x138]
    unsigned int v6;  // [bp-0x12c]
    unsigned long long v7;  // [bp-0x128]
    struct_2 *v8;  // [bp-0x120]
    unsigned long long v9;  // [bp-0x118]

    v48 = v38;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4080a0, &g_408928);
    textdomain(&g_4080a0);
    exit_failure = 125;
    atexit();
    v16 = xmalloc();
    signals = v16;
    v32 = v16 + 260;
    do
    {
        v16->field_0 = 0;
        v16 += 4;
    }
    while (v32 != v16);
    v4 = 0;
    v45 = v39;
    v3 = 0;
    v2 = 0;
    while (true)
    {
        v31 = getopt_long(v45, ((int)v48), &shortopts, &longopts, 0x0);
        if (v2 != -1)
        {
            usage(); /* do not return */
            if (v2 <= 131)
            {
                if (v2 > 66)
                {
                    v31 = ((long long)(v2 - 67));
                    switch (((int)(v2 - 67)))
                    {
                    case 0:
                        v4 = optarg;
                        break;
                    case 16:
                        v45 = ((int)(v45 - optind));
                        v6 = v45;
                        v33 = ((long long)v6) + 2;
                        v8 = optarg;
                        v10 = 1;
                        v9 = (long long)xnmalloc();
                        v11 = v33;
                        v12 = ((int)v6);
                        v13 = 1;
                        *(v9 + 8) = 0;
                        v17 = ((long long)*(v6));
                        if (((long long)*(v6)) != 0)
                        {
                            v7 = v48;
                            v42 = 0;
                            v33 = 0;
                            v47 = optarg;
                            while (true)
                            {
                                if (((char)(((long long)v17) <= 39)))
                                {
                                    if (!(((char)(((long long)v17) <= 8))))
                                    {
                                        v32 = v17 - 9;
                                        switch (v17 - 9 & 255)
                                        {
                                        case 0: case 1: case 2: case 3: case 4: case 23:
                                            if (((long long)(((char)v33) | v42)) == 0)
                                            {
                                                v42 = 0;
                                                v33 = 0;
                                                v13 = 1;
                                                v47 += strspn(((int)v47), &g_4080ff);
                                                /* goto 4205144; */
                                            }
                                        case 25:
                                            if (((long long)v42) == 0)
                                            {
                                                v33 = ((long long)(((int)v33) ^ 1));
                                                /* goto 4205372; */
                                            }
                                        case 26:
                                            if (v13 == 0)
                                            {
                                                /* goto 4205129; */
                                            }
                                            else
                                            {
                                                v48 = v7;
                                                break;
                                            }
                                        case 27:
                                            if (((long long)v42) != 0)
                                            {
                                            }
                                            else
                                            {
                                                v17 = ((long long)v47[2]);
                                                error(0x7d, 0x0, dcgettext(0x0, &g_4089b0, 0x5));
                                                break;
                                                error(0x7d, 0x0, dcgettext(0x0, &g_4089b0, 0x5));
                                                break;
                                                error(0x7d, 0x0, dcgettext(0x0, &g_4089b0, 0x5));
                                            }
                                        case 30:
                                            if (((long long)v33) == 0)
                                            {
                                                v42 = ((long long)(((int)v42) ^ 1));
                                            }
                                        }
                                        if (...)
                                        {
                                            check_start_new_arg.part.0();
                                            /* goto 4205140; */
                                        }
                                    }
                                }
                                else
                                {
                                    if (v17 == 92)
                                    {
                                        v17 = ((long long)v47[1]);
                                        if (v17 == 39 || v17 == 92 || ((long long)v42) == 0)
                                        {
                                            if (((long long)*(optarg + 1)) != 0)
                                            {
                                                switch (((long long)(((int)*(optarg + 1)) - 34)))
                                                {
                                                case 0: case 1: case 2: case 5: case 58:
                                                    break;
                                                case 61:
                                                    if (((long long)0) != 0)
                                                    {
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        v13 = 1;
                                                        v47 += 2;
                                                        /* goto 4205144; */
                                                    }
                                                case 65:
                                                    v48 = v7;
                                                    if (((long long)v33) == 0)
                                                    {
                                                        break;
                                                    }
                                                    error(0x7d, 0x0, dcgettext(0x0, &g_408950, 0x5));
                                                case 68:
                                                    break;
                                                case 76:
                                                    break;
                                                case 80:
                                                    break;
                                                case 82:
                                                    break;
                                                case 84:
                                                    break;
                                                default:
                                                    error(0x7d, 0x0, dcgettext(0x0, &g_408106, 0x5));
                                                }
                                                if (((long long)(((int)*(optarg + 1)) - 34)) > 84)
                                                {
                                                    error(0x7d, 0x0, dcgettext(0x0, &g_408106, 0x5));
                                                }
                                            }
                                            else
                                            {
                                                error(0x7d, 0x0, dcgettext(0x0, &g_408980, 0x5));
                                            }
                                        }
                                    }
                                }
                                if (...)
                                {
                                    v32 = v47 + 3;
                                    while (true)
                                    {
                                        v17 = ((long long)*(v32));
                                        if (((char)(((long long)*(v32)) <= 90)))
                                        {
                                            if (((char)(((long long)v17) <= 64)))
                                            {
                                                v17 = ((long long)(((int)v17) - 48));
                                                tmp_3 = v17;
                                                if (((long long)tmp_3) > 9)
                                                {
                                                    error(0x7d, 0x0, dcgettext(0x0, &g_4089b0, 0x5));
                                                }
                                            }
                                        }
                                        else
                                        {
                                            if ((v17 - 97 & 255) > 25)
                                            {
                                                if (v17 != 95)
                                                {
                                                    if (v17 != 125)
                                                    {
                                                        error(0x7d, 0x0, dcgettext(0x0, &g_4089b0, 0x5));
                                                    }
                                                    else
                                                    {
                                                        v46 = v32 - v47;
                                                        v32 = v32 - v47 - 2;
                                                        if (((unsigned int)v5) < vnlen)
                                                        {
                                                            break;
                                                        }
                                                        ((unsigned int)v5) = v32;
                                                        vnlen = v46 - 1;
                                                        varname = (long long)xrealloc();
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        if (((char)(((long long)*(v32)) <= 90)) && ((long long)tmp_3) <= 9 || ((char)(((long long)*(v32)) <= 90)) && !(((char)(((long long)v17) <= 64))) || v17 == 95 && !(((char)(((long long)*(v32)) <= 90))) || (v17 - 97 & 255) <= 25 && !(((char)(((long long)*(v32)) <= 90))))
                                        {
                                            v32 += 1;
                                        }
                                    }
                                    *(((unsigned int)v5) + v46 + 2) = 0;
                                    v5 = memcpy(varname, v47 + 2, ((unsigned int)v5));
                                    v45 = getenv(((unsigned int)v5));
                                    if (v45 != 0)
                                    {
                                        if (v13 != 0)
                                        {
                                            v5 = v5;
                                            check_start_new_arg.part.0();
                                            v31 = v5;
                                        }
                                        if (dev_debug != 0)
                                        {
                                            v5 = v31;
                                            quote();
                                            __fprintf_chk();
                                        }
                                        if (((long long)*(v45)) != 0)
                                        {
                                            while (true)
                                            {
                                                v45 += 1;
                                                splitbuf_append_byte();
                                                if (((long long)*(v45)) == 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else if (dev_debug != 0)
                                    {
                                        __fprintf_chk();
                                    }
                                    v47 = strchr(v47, 0x7d) + 1;
                                }
                                if (...)
                                {
                                    check_start_new_arg.part.0();
                                }
                                if (...)
                                {
                                    splitbuf_append_byte();
                                }
                                if (...)
                                {
                                    v47 = optarg + 1;
                                }
                                if (...)
                                {
                                    v17 = ((long long)v47[0]);
                                    v48 = v7;
                                    if (((long long)v42) == 0)
                                    {
                                        if (((long long)v33) == 0)
                                        {
                                            break;
                                        }
                                        error(0x7d, 0x0, dcgettext(0x0, &g_408a10, 0x5));
                                    }
                                    else
                                    {
                                        error(0x7d, 0x0, dcgettext(0x0, &g_408a10, 0x5));
                                    }
                                }
                            }
                        }
                        splitbuf_append_byte();
                        if (v10 > 1)
                        {
                            v40 = r15<8> + 16;
                            v21 = r15<8> + 8;
                            do
                            {
                                tmp_14 = v21->field_0;
                                v21 += 8;
                                *(v21 + 0x8) = tmp_14 + v11 * 8 + r15<8>;
                            }
                            while (v9 + 8 != v21);
                            *(r15<8> + None) = *(v48);
                            if (dev_debug != 0)
                            {
                                quote();
                                __fprintf_chk();
                                if (dev_debug != 0)
                                {
                                    quote();
                                    __fprintf_chk();
                                }
                                if (((int)1) != 2)
                                {
                                    do
                                    {
                                        if (dev_debug != 0)
                                        {
                                            quote();
                                            __fprintf_chk();
                                        }
                                        v40 += 8;
                                    }
                                    while (v9 + 8 != v40);
                                }
                            }
                        }
                        else
                        {
                            *(v9) = *(r15<8>);
                        }
                        v45 = ((long long)(1 + v6));
                        v38 = r15<8> + ((long long)optind) * 8;
                        r15<8> = v9;
                        memcpy(v9 + 1 * 8, v38, (((long long)v6) + 1) * 8);
                        optind = 0;
                        break;
                    case 38:
                        v2 = 1;
                        break;
                    case 50:
                        v16 = usvars_used;
                        if (usvars_used == usvars_alloc)
                        {
                            usvars = (long long)x2nrealloc();
                            v16 = usvars_used;
                        }
                        usvars_used = rax<8> + 1;
                        *(usvars + rax<8> * 8) = optarg;
                        break;
                    case 51:
                        dev_debug = 1;
                        break;
                    case 61:
                        parse_signal_action_params();
                        parse_block_signal_params();
                        break;
                    case 62:
                        parse_signal_action_params();
                        break;
                    case 63:
                        parse_block_signal_params();
                        break;
                    case 64:
                        report_signal_handling = 1;
                        break;
                    default:
                        usage(); /* do not return */
                    }
                    usage(); /* do not return */
                }
                if (v2 <= 13)
                {
                    if (v2 <= 8)
                    {
                        if (v2 == -131)
                        {
                            v1 = 0;
                            v0 = "Assaf Gordon";
                            version_etc();
                            exit(0x0); /* do not return */
                        }
                        else
                        {
                            usage(); /* do not return */
                            if (v2 == -130)
                            {
                                usage(); /* do not return */
                            }
                        }
                    }
                }
                else
                {
                    if (v2 != 32)
                    {
                        if (v2 == 48)
                        {
                            v3 = 1;
                        }
                        usage(); /* do not return */
                    }
                }
                if (v2 <= 13 && v2 > 8 || v2 == 32 && v2 > 13)
                {
                    v2 = v31;
                    error(0x0, 0x0, dcgettext(0x0, &g_408167, 0x5));
                    v38 = "use -[v]S to pass options in shebang lines";
                    error(0x0, 0x0, dcgettext(0x0, v38, 0x5));
                    usage(); /* do not return */
                }
            }
        }
        v42 = ((long long)optind);
        v33 = v45;
        if (optind < v45)
        {
            v16 = strcmp(*(v48 + ((long long)optind) * 8), "-");
            if (v16 == 0)
            {
                optind = optind + 1;
            }
        }
        if (v2 == 0 && usvars_used > 0 && (v16 != 0 || optind >= v45))
        {
            v42 = 0;
            while (true)
            {
                v36 = v42 * 8;
                if (dev_debug != 0)
                {
                    __fprintf_chk();
                }
                v35 = v36 + usvars;
                v39 = v35->field_0;
                v16 = unsetenv(v39);
                if (v16 == 0)
                {
                    v42 += 1;
                    break;
                }
                else
                {
                    v43 = (long long)quote();
                    error(0x7d, *(__errno_location()), dcgettext(0x0, &g_4081ce, 0x5));
                }
            }
        }
        if (v2 != 0 || v16 == 0 && optind < v45)
        {
            if (dev_debug != 0)
            {
                fwrite("cleaning environ\n", 0x1, 0x11, stderr);
            }
            __environ = &dummy_environ.8115;
        }
        if (((int)v42) >= v2)
        {
            break;
        }
        while (true)
        {
            v35 = strchr(*(v48 + r13<8> * 8), 0x3d);
            if (v35 != 0)
            {
                if (dev_debug != 0)
                {
                    __fprintf_chk();
                }
                v26 = putenv(((int)*(v48 + ((long long)optind) * 8)));
                if (v26 == 0)
                {
                    v16 = ((long long)optind);
                    v42 = v16 + 1;
                    optind = ((int)v16) + 1;
                }
                else
                {
                    *(v35) = 0;
                    v44 = (long long)quote();
                    error(0x7d, *(__errno_location()), dcgettext(0x0, &g_4081ec, 0x5));
                }
            }
            else
            {
                if (v2 > ((int)v42) && v3 != 0)
                {
                    v38 = "cannot specify --null (-0) with command";
                    error(0x0, 0x0, dcgettext(0x0, v38, 0x5));
                    usage(); /* do not return */
                }
                if (v2 <= ((int)v42) || v3 == 0)
                {
                    v2 = v33;
                    v42 = 1;
                    v3 = v48;
                    v34 = 4;
                    while (true)
                    {
                        v35 = ((long long)*(signals + v34));
                        if (*(signals + v34) != 0)
                        {
                            v45 = ((int)v35) - 1;
                            v37 = ((int)(((int)v35) - 2));
                            v35 = ((int)(v37 & -3));
                            v40 = sigaction();
                            v35 = ((char)(v35 != 0));
                            if (((int)v40) == 0)
                            {
                                v14 = ((long long)(1 < v45));
                                v40 = sigaction();
                                if (v40 != 0 && ((long long)v35) != 0)
                                {
                                    error(0x7d, *(__errno_location()), dcgettext(0x0, &g_408ae8, 0x5));
                                }
                            }
                            else if (((long long)v35) != 0)
                            {
                                error(0x7d, *(__errno_location()), dcgettext(0x0, &g_408ab8, 0x5));
                            }
                            if (dev_debug != 0 && (((int)v40) == 0 || ((long long)v35) == 0) && (v40 == 0 || ((long long)v35) == 0))
                            {
                                sig2str();
                                if (dev_debug != 0)
                                {
                                    v1 = v32;
                                    v0 = (v40 != 0? " (failure ignored)" : 4232817);
                                    __fprintf_chk();
                                }
                            }
                        }
                        if (((long long)v35) == 0 || *(signals + v34) == 0 || ((int)v40) == 0 && v40 == 0)
                        {
                            v42 = ((long long)v42) + 1;
                            v34 += 4;
                            v48 = v3;
                            v2 = __errno_location();
                            if (sig_mask_changed != 0)
                            {
                                v45 = 1;
                                sigemptyset(((int)&v14));
                                v22 = sigprocmask(0x0, 0x0, ((int)&v14));
                                if (v22 == 0)
                                {
                                    do
                                    {
                                        v22 = sigismember();
                                        if (v22 != 0)
                                        {
                                            sigaddset(((int)&v14));
                                        }
                                        else
                                        {
                                            v22 = sigismember();
                                            if (v22 != 0)
                                            {
                                                sigdelset(((int)&v14), v45);
                                            }
                                        }
                                        if (dev_debug != 0 && (v22 != 0 || v22 != 0))
                                        {
                                            sig2str();
                                            if (dev_debug != 0)
                                            {
                                                __fprintf_chk();
                                            }
                                        }
                                        v45 = ((int)v45) + 1;
                                    }
                                    while (v45 != 65);
                                    v16 = sigprocmask(0x2, ((int)&v14), 0x0);
                                    if (v16 != 0)
                                    {
                                        error(0x7d, v2->field_0, dcgettext(0x0, &g_408b38, 0x5));
                                    }
                                }
                                else
                                {
                                    error(0x7d, v2->field_0, dcgettext(0x0, &g_4082f0, 0x5));
                                }
                            }
                            if (sig_mask_changed == 0 || v16 == 0 && v22 == 0)
                            {
                                if (report_signal_handling != 0)
                                {
                                    list_signal_handling();
                                }
                                if (v4 != 0)
                                {
                                    if (dev_debug != 0)
                                    {
                                        quotearg_style();
                                        __fprintf_chk();
                                    }
                                    v16 = chdir(((int)v4));
                                    if (v16 != 0)
                                    {
                                        v41 = (long long)quotearg_style();
                                        error(0x7d, v2->field_0, dcgettext(0x0, &g_40822b, 0x5));
                                    }
                                }
                                if (v4 == 0 || v16 == 0)
                                {
                                    if (dev_debug != 0)
                                    {
                                        __fprintf_chk();
                                        for (v35 = ((long long)optind); v2 > ((int)v35); v35 += 1)
                                        {
                                            if (dev_debug != 0)
                                            {
                                                quote();
                                                __fprintf_chk();
                                            }
                                        }
                                    }
                                    execvp(((int)*(v48 + ((long long)optind) * 8)), ((int)(v48 + ((long long)optind) * 8)));
                                    if (v2->field_0 != 2)
                                    {
                                        quote();
                                        error(0x0, v2->field_0, "%s");
                                        v18 = 126;
                                        return v18;
                                    }
                                    else
                                    {
                                        quote();
                                        error(0x0, v2->field_0, "%s");
                                        v30 = strpbrk(((int)*(v48 + ((long long)optind) * 8)), &g_4080ff);
                                        if (v30 != 0)
                                        {
                                            error(0x0, 0x0, dcgettext(0x0, &g_408a38, 0x5));
                                            v18 = 127;
                                            return v18;
                                        }
                                        else
                                        {
                                            v18 = 127;
                                            return v18;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (v4 == 0)
    {
        v34 = __environ;
        v32 = *(__environ);
        if (*(__environ) != 0)
        {
            while (true)
            {
                v34 += 8;
                __printf_chk(0x1, "%s%c", v32, 0 - ((int)(((long long)v3) < 1)) & 10);
                v32 = v34->field_0;
                if (v34->field_0 == 0)
                {
                    break;
                }
            }
            v18 = 0;
            return v18;
        }
        v18 = 0;
        return v18;
    }
    v38 = "must specify command with --chdir (-C)";
    error(0x0, 0x0, dcgettext(0x0, v38, 0x5));
    usage(); /* do not return */
}
