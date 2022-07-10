typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_4 {
    char field_0;
    char padding_1[7];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_4;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

extern unsigned int CSWTCH.56[4];
extern unsigned int exit_failure;
extern unsigned int g_4090a2;
extern unsigned int g_4090e3;
extern unsigned int g_409101;
extern unsigned int g_409107;
extern unsigned int g_409164;
extern unsigned int g_409185;
extern unsigned int g_409748;
extern unsigned int g_4097d8;
extern unsigned int longopts;
extern char optarg[2];
extern struct_2 optind;
extern struct_0 program_name;
extern struct_0 program_path;
extern struct_5 stdbuf;

int main()
{
    struct_2 *|unsigned long|struct_5 *|unsigned int v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    char *|unsigned long long|unsigned int v10;  // rax
    unsigned long long v12;  // rax
    unsigned long long v18;  // rax
    char v2;  // [bp-0x110]
    unsigned long long v21;  // rax
    unsigned int [4]|unsigned int v22;  // ecx
    unsigned long long|unsigned int v23;  // rdx
    struct_2 *v24;  // rbx
    struct_4 *|struct_0 * v25;  // rbx
    unsigned int v26;  // ebp
    unsigned int v27;  // ebp
    unsigned long v28;  // rsi
    unsigned long long|char [2]|unsigned int v29;  // rdi
    char v3;  // [bp-0x108]
    unsigned long long v30;  // r8
    struct_5 *v31;  // r9
    unsigned long long v32;  // r12
    unsigned long long v33;  // r12
    struct_0 *v34;  // r12
    unsigned long long v35;  // r12
    unsigned long long v36;  // r12
    unsigned long long v38;  // r13
    unsigned int v39;  // r13d
    unsigned long v4;  // [bp-0x100]
    char v40;  // r13b
    unsigned long long v42;  // r13
    unsigned int v43;  // r15d
    unsigned int v45;  // cc_dep1
    unsigned long|char v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe8]
    char v8;  // [bp-0xd8]

    v27 = v29;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4090a2, &g_409748);
    textdomain(&g_4090a2);
    exit_failure = 125;
    atexit();
    while (true)
    {
        v10 = getopt_long(v27, ((int)v28), &g_409101, &longopts, 0x0);
        if (((int)v10) == -1)
        {
            v34 = v28 + ((long long)optind) * 8;
            v27 = ((int)(v27 - optind));
            v25 = &stdbuf;
            v23 = 0;
            if (v27 > 0)
            {
                while (true)
                {
                    v10 = v25->field_10;
                    if (v25->field_10 != 0)
                    {
                        v22 = ((int)v25->field_8);
                        v23 = ((int)(((long long)v25->field_8) + 128));
                        if (*(v10) != 76)
                        {
                            v30 = v25->field_0;
                            if (v23 <= 383)
                            {
                                v1 = v30;
                                v0 = v22;
                                v10 = *(__ctype_toupper_loc());
                            }
                            v12 = rpl_asprintf();
                        }
                        else
                        {
                            if (v23 <= 383)
                            {
                                v0 = ((int)v0);
                                v10 = *(__ctype_toupper_loc());
                            }
                            v12 = rpl_asprintf();
                        }
                        if (v12 >= 0)
                        {
                            v10 = putenv(((int)v2));
                            if (v10 == 0)
                            {
                                v23 = 1;
                            }
                            else
                            {
                                v42 = (long long)quote();
                                error(0x7d, *(__errno_location()), dcgettext(0x0, &g_4097d8, 0x5));
                            }
                        }
                        else
                        {
                            xalloc_die(); /* do not return */
                        }
                    }
                    if (v25->field_10 == 0 || v10 == 0 && v12 >= 0)
                    {
                        v25 += 24;
                        if (((long long)v23) != 0)
                        {
                            v21 = strchr(program_name, 0x2f);
                            if (v21 != 0)
                            {
                                program_path = (long long)dir_name();
                            }
                            else
                            {
                                v38 = (long long)xreadlink();
                                if (v38 != 0)
                                {
                                    program_path = (long long)dir_name();
                                }
                                else
                                {
                                    v38 = getenv("PATH");
                                    if (v38 != 0)
                                    {
                                        for (v29 = strtok((int)xstrdup(), &g_409107); v29 != 0; v29 = strtok(0x0, &g_409107))
                                        {
                                            if (access((long long)file_name_concat(), 0x1) != 0)
                                            {
                                                rpl_free();
                                            }
                                            else
                                            {
                                                program_path = (long long)dir_name();
                                                rpl_free();
                                                break;
                                            }
                                        }
                                    }
                                }
                                rpl_free();
                                if (program_path == 0)
                                {
                                    program_path = (long long)xstrdup();
                                }
                            }
                            v25 = &v5;
                            v7 = 0;
                            v5 = program_path;
                            v6 = "/root/coreutils-builder/libexec/coreutils";
                            while (true)
                            {
                                if (*(rdx<8>) != 0)
                                {
                                    v12 = rpl_asprintf();
                                    if (v12 >= 0)
                                    {
                                        v21 = __xstat(0x1, ((int)v4), ((int)&v8));
                                        if (v21 != 0)
                                        {
                                            v25 = &v6;
                                            rpl_free();
                                            v23 = v6;
                                            v33 = (long long)quote();
                                            error(0x7d, 0x0, dcgettext(0x0, &g_409164, 0x5));
                                        }
                                    }
                                    else
                                    {
                                        xalloc_die(); /* do not return */
                                    }
                                }
                                else
                                {
                                    v4 = (long long)xstrdup();
                                }
                                if (*(rdx<8>) == 0 || v21 == 0 && v12 >= 0)
                                {
                                    if (getenv("LD_PRELOAD") != 0)
                                    {
                                        v12 = rpl_asprintf();
                                    }
                                    else
                                    {
                                        v12 = rpl_asprintf();
                                    }
                                    if (v12 >= 0)
                                    {
                                        rpl_free();
                                        v26 = putenv(((int)v3));
                                        v24 = __errno_location();
                                        if (v26 == 0)
                                        {
                                            v39 = 0;
                                            rpl_free();
                                            execvp(((int)v34->field_0), ((int)v34));
                                            v40 = ((char)(v24->field_0 == 2));
                                            v35 = (long long)quote();
                                            error(0x0, v24->field_0, dcgettext(0x0, &g_409185, 0x5));
                                            break;
                                        }
                                        else
                                        {
                                            v32 = (long long)quote();
                                            error(0x7d, v24->field_0, dcgettext(0x0, &g_4097d8, 0x5));
                                        }
                                    }
                                    else
                                    {
                                        xalloc_die(); /* do not return */
                                    }
                                }
                            }
                            v18 = ((long long)reg_120<4>) + 126;
                            return v18;
                        }
                        v28 = "you must specify a buffering mode option";
                        error(0x0, 0x0, dcgettext(0x0, v28, 0x5));
                        usage(); /* do not return */
                    }
                }
            }
            v28 = "missing operand";
            error(0x0, 0x0, dcgettext(0x0, v28, 0x5));
            break;
        }
        else if (((int)v10) == -130)
        {
            usage(); /* do not return */
        }
        else if (((int)v10) < -129)
        {
            if (((int)v10) != -131)
            {
                break;
            }
            if (((int)v10) == -131)
            {
                version_etc();
                exit(0x0); /* do not return */
            }
            usage(); /* do not return */
        }
        else
        {
            v22 = v10 - 101;
            if (((int)(v10 - 101)) > 10)
            {
                break;
            }
            if (((int)(v10 - 101)) <= 10)
            {
                if ((((short)((int)(1 << (v22 & 63)))) & 1041) == 0)
                {
                    break;
                }
                if ((((short)((int)(1 << (v22 & 63)))) & 1041) == 0)
                {
                    usage(); /* do not return */
                }
                v31 = ((long long)CSWTCH.56[v22]);
                if (CSWTCH.56[v22] <= 2)
                {
                    v29 = optarg;
                    *(&stdbuf + v0 * 24 + 8) = ((int)v10);
                    while (true)
                    {
                        v23 = ((long long)v29[0]);
                        if (((char)(((long long)v29[0]) <= 13)))
                        {
                            if (((char)(((long long)v23) <= 8)))
                            {
                                break;
                            }
                        }
                        else
                        {
                            if (v23 != 32)
                            {
                                break;
                            }
                        }
                        v29 += 1;
                        optarg = v29;
                    }
                    *(&stdbuf + v0 * 24 + 16) = v29;
                    if (v29[0] == 76 && ((int)v10) == 105)
                    {
                        v28 = "line buffering stdin is meaningless";
                        error(0x0, 0x0, dcgettext(0x0, v28, 0x5));
                        usage(); /* do not return */
                    }
                    if (v29[0] != 76 || ((int)v10) != 105)
                    {
                        v0 = v31;
                        v43 = xstrtoumax();
                        v30 = __errno_location();
                        if (v45 == 0)
                        {
                            v0->field_0 = 0;
                            *(stdbuf + v0 * 24) = v4;
                        }
                        else
                        {
                            v45 = v43;
                            if (v43 != 1)
                            {
                                v10 = ((int)v0->field_0);
                                v0->field_0 = v10;
                                v0 = v30;
                                v36 = (long long)quote();
                                error(0x7d, v0->field_0, dcgettext(0x0, &g_4090e3, 0x5));
                            }
                            else
                            {
                                v10 = 75;
                                v0->field_0 = v10;
                                v0 = v30;
                                v36 = (long long)quote();
                                error(0x7d, v0->field_0, dcgettext(0x0, &g_4090e3, 0x5));
                            }
                        }
                    }
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    usage(); /* do not return */
}
