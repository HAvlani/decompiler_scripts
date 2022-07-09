typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_407086;
extern unsigned int g_4070da;
extern unsigned int g_4070de;
extern unsigned int g_4070ee;
extern unsigned int g_407360;
extern unsigned int g_407388;
extern unsigned int g_4073b8;
extern unsigned int g_407400;
extern unsigned int g_407430;
extern unsigned int g_407468;
extern unsigned int g_4074a0;
extern <missing-type> g_407d1b;
extern unsigned int longopts;
extern struct_0 optind;

int main()
{
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    struct_1 *|unsigned long long|struct_0 * v11;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rdx
    unsigned long long|struct_0 * v18;  // rbx
    unsigned long long v19;  // rbp
    unsigned long long v2;  // [bp-0xf7]
    struct_1 *|unsigned long long v20;  // rsi
    unsigned long long v21;  // rdi
    unsigned long long v22;  // r8
    unsigned long long v23;  // r10
    unsigned long long v24;  // r12
    unsigned long long v25;  // r13
    unsigned long long v26;  // r14
    unsigned long long|unsigned int v27;  // r15
    char v3;  // [bp-0xf6]
    unsigned long long v4;  // [bp-0xf5]
    unsigned int v5;  // [bp-0xf4]
    struct_1 *v6;  // [bp-0xf0]
    unsigned long long|struct_0 * v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xe0]
    char|unsigned long long v9;  // [bp-0xd8]

    v26 = 0;
    v25 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407086, &g_407360);
    textdomain(&g_407086);
    atexit();
    while (true)
    {
        v11 = getopt_long(((int)v21), ((int)v20), &g_4070da, &longopts, 0x0);
        if (((int)v11) == -1)
        {
            v11 = ((long long)optind);
            if (optind != ((int)v5))
            {
                v3 = 1;
                if (!(((char)(((long long)optind) < v21))))
                {
                    break;
                }
                if (((char)(((long long)optind) < v21)))
                {
                    v2 = v25;
                    v4 = v26;
                    v5 = ((int)v21);
                    v6 = v20;
                    while (true)
                    {
                        v19 = *(v6 + v11 * 8);
                        v27 = strlen(*(v20 + v11 * 8));
                        if (v4 != 0)
                        {
                            v21 = v19;
                            while (true)
                            {
                                v11 = strchr(v21, 0x2d);
                                if (v11 != 0)
                                {
                                    if (*(v11 + 1) != 47 && v21 != v11)
                                    {
                                        v21 = v11 + 1;
                                    }
                                    if (*(v11 + 1) == 47 || v21 == v11)
                                    {
                                        v27 = (long long)quotearg_style();
                                        error(0x0, 0x0, dcgettext(0x0, &g_407388, 0x5));
                                        break;
                                    }
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if (v11 != 0 && (*(v11 + 1) == 47 || v21 == v11))
                            {
                                v3 &= r8b<1>;
                                v11 = ((long long)(optind + 1));
                                optind = optind + 1;
                                if (((int)v11) >= v5)
                                {
                                    break;
                                }
                            }
                            else if (v11 == 0)
                            {
                                error(0x0, 0x0, dcgettext(0x0, &g_4070ee, 0x5));
                            }
                            else if (v2 == 0 && v11 == 0 && v27 != 0)
                            {
                                v11 = __lxstat(0x1, ((int)v21), ((int)&v9));
                            }
                            else if (v11 == 0 && v27 != 0)
                            {
                                v11 = strspn(((int)v21), &g_4073b8);
                            }
                        }
                        if (v4 == 0 || ((int)v11) >= v5)
                        {
                            if (v4 != 0 || v27 != 0 && v2 != 0)
                            {
                                v11 = strspn(((int)v21), &g_4073b8);
                                if (*(v21 + v11) != 0)
                                {
                                    v9 = 0;
                                    v19 = (long long)quotearg_n_style();
                                    v27 = (long long)quotearg_n_style_mem();
                                    error(0x0, 0x0, dcgettext(0x0, &g_407400, 0x5));
                                }
                                else if (v27 <= 255)
                                {
                                    v25 = 14;
                                }
                            }
                            if ((v27 == 0 || v4 != 0) && (v4 != 0 || v2 != 0))
                            {
                                error(0x0, 0x0, dcgettext(0x0, &g_4070ee, 0x5));
                            }
                            if (v11 != 0 && (v2 == 0 || v4 != 0))
                            {
                                v11 = __errno_location();
                                v18 = v11;
                                v11 = ((char)(v27 == 0));
                                v22 = ((char)(*(v11) != 2)) | ((char)(v27 == 0));
                                if (((long long)(((char)(*(v11) != 2)) | ((char)(v27 == 0)))) != 0)
                                {
                                    quotearg_n_style_colon();
                                    error(0x0, v18->field_0, "%s");
                                }
                                else
                                {
                                    v7 = v22;
                                    if (v27 > 255)
                                    {
                                        tmp_13 = ((long long)*(v21));
                                        v18->field_0 = 0;
                                        v11 = pathconf(((int)(((char)tmp_13) == 47? &g_407d1b : ".")), 0x4);
                                        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                                        {
                                            v18 = v11;
                                        }
                                        else if (v18->field_0 != 0)
                                        {
                                            error(0x0, v18->field_0, dcgettext(0x0, &g_407430, 0x5));
                                        }
                                    }
                                }
                            }
                        }
                        if (v4 == 0 && v2 == 0 || v4 != 0 && ((int)v11) >= v5)
                        {
                            v11 = __lxstat(0x1, ((int)v21), ((int)&v9));
                        }
                        if (...)
                        {
                            v19 = (long long)quotearg_style();
                            error(0x0, 0x0, dcgettext(0x0, &g_407468, 0x5));
                        }
                        if (...)
                        {
                            v11 = ((long long)*(v21));
                            v17 = v21;
                            while (true)
                            {
                                if (v11 == 47)
                                {
                                    v11 = ((long long)*(v17 + 1));
                                }
                                else
                                {
                                    v11 = ((long long)*(v17 + 1));
                                    if (*(v17 + 1) != 47 && ((long long)v11) != 0)
                                    {
                                        v16 = 1;
                                        do
                                        {
                                            v16 += 1;
                                            v11 = ((long long)*(v17 + v16));
                                            v20 = v17 + v16;
                                        }
                                        while (((long long)v11) != 0 && *(v17 + v16) != 47);
                                        if (v16 > 14)
                                        {
                                            v25 = 0;
                                            break;
                                        }
                                    }
                                }
                            }
                            if (v16 > 14)
                            {
                                v7 = v21;
                                v18 = v21;
                                v26 = 14;
                                v19 = r13<8>;
                            }
                        }
                        if (...)
                        {
                            v7 = v21;
                            v18 = v21;
                            v26 = 14;
                            v19 = r13<8>;
                            while (true)
                            {
                                v24 = ((long long)*(v18));
                                if (*(v18) == 47)
                                {
                                    v18 += 1;
                                }
                                else
                                {
                                    if (v19 == 0)
                                    {
                                        v27 = ((int)(v7 != v18? v7 : "."));
                                        *(r13<8> + None) = 0;
                                        r13<8> = __errno_location();
                                        *(v18) = 0;
                                        v11 = pathconf(v27, 0x3);
                                        *(v18) = v24;
                                        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))))
                                        {
                                            v26 = v11;
                                        }
                                        else
                                        {
                                            if (*(v7) == 0)
                                            {
                                                v26 = 18446744069414584319;
                                                /* goto 4204756; */
                                            }
                                            else if (*(v7) != 2)
                                            {
                                                *(v18) = 0;
                                                v7 = v25;
                                                quotearg_n_style_colon();
                                                error(0x0, v7->field_0, "%s");
                                                *(v18) = v24;
                                                break;
                                            }
                                            if (*(v7) == 2)
                                            {
                                                v19 = v26;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        v26 = v19;
                                    }
                                    if (*(v7) == 2 || *(v7) == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))) || v19 != 0)
                                    {
                                        v27 = ((long long)*(v18 + 1));
                                        if (((long long)v27) != 0 && *(v18 + 1) != 47)
                                        {
                                            v22 = 1;
                                            while (true)
                                            {
                                                v22 += 1;
                                                v27 = ((long long)*(v18 + v22));
                                                v23 = v18 + v22;
                                                if (*(v18 + v22) == 47)
                                                {
                                                    break;
                                                }
                                                break;
                                            }
                                        }
                                        if (((long long)v27) == 0 || *(v18 + 1) == 47)
                                        {
                                            v23 = v18 + 1;
                                            v22 = 1;
                                        }
                                        if (r14<8> >= v22)
                                        {
                                            v18 = v23;
                                        }
                                        else
                                        {
                                            *(v23) = 0;
                                            v7 = v23;
                                            v8 = v22;
                                            v19 = (long long)quote();
                                            error(0x0, 0x0, dcgettext(0x0, &g_4074a0, 0x5));
                                            *(v7) = v27;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                return ((long long)(((int)v3) ^ 1));
            }
            error(0x0, 0x0, dcgettext(0x0, &g_4070de, 0x5));
            usage(); /* do not return */
        }
        else if (((int)v11) == 80)
        {
            v26 = 1;
        }
        else if (!(((char)(v11 <= 80))))
        {
            if (((int)v11) != 112 && ((int)v11) != 128)
            {
                usage(); /* do not return */
            }
            if (((int)v11) == 128)
            {
                v26 = 1;
            }
            if (((int)v11) == 112 || ((int)v11) == 128)
            {
                v25 = 1;
            }
        }
        else if (((int)v11) == -131)
        {
            v1 = 0;
            v0 = "Jim Meyering";
            version_etc();
            exit(0x0); /* do not return */
        }
        else if (((int)v11) == -130)
        {
            usage(); /* do not return */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    return ((long long)(((int)v3) ^ 1));
}
