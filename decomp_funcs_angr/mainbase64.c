typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[36];
    unsigned long long field_28;
} struct_3;

typedef struct struct_2 {
    char padding_0[40];
    unsigned long long field_28;
} struct_2;

extern unsigned int g_4080ba;
extern unsigned int g_4080e5;
extern unsigned int g_40810e;
extern unsigned int g_408113;
extern unsigned int g_408127;
extern unsigned int g_408132;
extern unsigned int g_40813e;
extern unsigned int g_408590;
extern unsigned int long_options;
extern struct_0 optind;
extern struct_1 stdin;
extern unsigned long long stdout[7];

int main()
{
    BOT tmp_18;  // tmp #18
    char|void * v0;  // [bp-0x90]
    unsigned long|struct_3 * v1;  // [bp-0x88]
    unsigned long v10;  // [bp-0x30]
    unsigned long v11;  // [bp-0x20]
    unsigned long v12;  // [bp-0x18]
    unsigned long v13;  // [bp-0x10]
    unsigned long v14;  // [bp-0x8]
    unsigned long long v16;  // rax
    char *v17;  // rax
    unsigned long long v18;  // rax
    char *|unsigned long long v19;  // rax
    unsigned long long [7]|unsigned long|unsigned long long v2;  // [bp-0x80]
    unsigned long long v20;  // rax
    struct_1 *|unsigned long long v22;  // rax
    unsigned long long v27;  // rcx
    unsigned int|unsigned long v28;  // rdx
    unsigned long long v29;  // rbx
    char|unsigned long v3;  // [bp-0x78]
    unsigned long long v30;  // rbx
    unsigned long v31;  // rbx
    unsigned long long v32;  // rbx
    unsigned int|struct_3 *|unsigned long long v33;  // rbp
    struct_1 *v34;  // rbp
    unsigned long long v35;  // rbp
    struct_1 *v36;  // rsi
    unsigned int|char * v37;  // rdi
    unsigned long v38;  // r10
    unsigned long long v39;  // r12
    unsigned long|void *|unsigned long long v4;  // [bp-0x70]
    unsigned long v40;  // r12
    unsigned long long v41;  // r12
    unsigned int|unsigned long|unsigned long long v42;  // r13
    unsigned long long v43;  // r14
    unsigned long|unsigned long long v44;  // r14
    unsigned long long [7]|unsigned long|unsigned long long v45;  // r15
    unsigned long long v46[7];  // r15
    unsigned int v47;  // cc_dep1
    struct_1 *v48;  // fs
    unsigned long v5;  // [bp-0x68]
    unsigned long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x50]
    unsigned int v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]

    v14 = v45;
    v13 = v44;
    v12 = v42;
    v11 = v40;
    v39 = 76;
    v34 = v36;
    v10 = v31;
    v29 = 0;
    v9 = *(v48 + 0x28);
    set_program_name();
    setlocale();
    bindtextdomain(&g_4080ba, &g_408590);
    textdomain(&g_4080ba);
    atexit();
    v0 = 0;
    while (true)
    {
        v22 = getopt_long(v37, ((int)v36), &g_40810e, &long_options, 0x0);
        if (((int)v22) == -1)
        {
            v22 = ((long long)optind);
            if (v37 - optind > 1)
            {
                v39 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_408113, 0x5));
                usage(); /* do not return */
            }
            if (((int)optind) < v37)
            {
                v37 = *(v34 + v22 * 8);
                v6 = *(v34 + v22 * 8);
                v22 = strcmp(v37, "-");
                if (v22 != 0)
                {
                    v33 = fopen(*(v36 + ((long long)optind) * 8), "rb");
                    if (v33 == 0)
                    {
                        v41 = (long long)quotearg_n_style_colon();
                        error(0x1, *(__errno_location()), "%s");
                    }
                }
            }
            else
            {
                v6 = "-";
            }
            if (v22 == 0 || ((int)optind) >= v37)
            {
                v33 = stdin;
            }
            if (v22 == 0 || ((int)optind) >= v37 || v33 != 0)
            {
                fadvise();
                if (((long long)v29) != 0)
                {
                    v2 = stdout;
                    v39 = (long long)xmalloc();
                    v4 = (long long)xmalloc();
                    v5 = &stack_base-72;
                    base64_decode_ctx_init();
                    v3 = &stack_base-80;
                    while (true)
                    {
                        v32 = 0;
                        while (true)
                        {
                            v44 = v39 + v32;
                            v42 = fread_unlocked(v39 + v32, 0x1, 0x1000 - v32, rbp<8>);
                            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) && v0 != 0)
                            {
                                v1 = rbp<8>;
                                v45 = 0;
                                while (true)
                                {
                                    v33 = ((long long)*(v44 + v45));
                                    v16 = isbase64();
                                    if (((long long)v16) == 0 && v33 != 61)
                                    {
                                        v42 -= 1;
                                        v28 = v42 - v45;
                                        memmove(v45 + 0 + v39, v39 + v45 + 0 + 1, v28);
                                        if (v42 <= v45)
                                        {
                                            break;
                                        }
                                    }
                                    if (v33 == 61 || ((long long)v16) != 0)
                                    {
                                        v45 += 1;
                                        if (v42 <= v45)
                                        {
                                            break;
                                        }
                                    }
                                }
                                v33 = v1;
                            }
                            v16 = ((long long)*(rbp<8>));
                            v32 += r13<8>;
                            v42 = ((int)(*(rbp<8>) & 32));
                            if ((((char)*(rbp<8>)) & 32) == 0)
                            {
                                v28 = ((int)(((int)v16) & 16));
                                v1 = v33;
                                v33 = v42;
                                v2 = v32;
                                v29 = v4;
                                break;
                            }
                            else
                            {
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_408127, 0x5));
                            }
                        }
                        while (true)
                        {
                            if (((long long)(v16 & 16)) == 0)
                            {
                                if (v33 != 0)
                                {
                                    v2 = v2;
                                    v4 = v29;
                                    v5 = &stack_base-72;
                                }
                            }
                            else
                            {
                                if (v33 == 2)
                                {
                                    finish_and_exit(); /* do not return */
                                }
                                else if (v33 == 1)
                                {
                                    if (v8 != 0)
                                    {
                                        v7 = 0xc00;
                                    }
                                    else
                                    {
                                        finish_and_exit(); /* do not return */
                                    }
                                }
                            }
                            if (v33 == 0 && ((long long)(v16 & 16)) == 0 || v33 != 2 && ((long long)(v16 & 16)) != 0)
                            {
                                if (((long long)(v16 & 16)) == 0 || v33 != 1)
                                {
                                    v7 = 0xc00;
                                }
                                if (((long long)(v16 & 16)) == 0 || v8 != 0 || v33 != 1)
                                {
                                    v42 = (long long)base64_decode_ctx();
                                    v18 = fwrite_unlocked(v4, 0x1, 0xc00, v2);
                                    if (v18 < v7)
                                    {
                                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                    }
                                    else if (((long long)v42) != 0)
                                    {
                                        v33 = ((long long)v33) + 1;
                                        v16 = ((long long)v1->field_0);
                                    }
                                    else
                                    {
                                        error(0x1, 0x0, dcgettext(0x0, &g_40813e, 0x5));
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    v45 = stdout;
                    v29 = 0;
                    v42 = (long long)xmalloc();
                    v2 = v39;
                    v0 = (long long)xmalloc();
                    while (true)
                    {
                        v44 = 0;
                        while (true)
                        {
                            v44 += fread_unlocked(v3 + v44, 0x1, 0x7800 - v44, v33);
                            v16 = ((long long)v33->field_0);
                            if (((long long)(((char)v33->field_0) & 48)) == 0 && v44 > 30719 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) && ((long long)(((char)v33->field_0) & 48)) != 0)
                            {
                                v1 = ((long long)((v44 + 2 >> 63 CONCAT v44 + 2) % 3)) * 4;
                                base64_encode();
                                v38 = v1;
                            }
                            if (v2 == 0 && (((long long)(((char)v33->field_0) & 48)) == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))) && (((long long)(((char)v33->field_0) & 48)) != 0 || v44 > 30719))
                            {
                                v19 = fwrite_unlocked(v0, 0x1, v1, stdout);
                                if (v1 > v19)
                                {
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                }
                            }
                            if (((long long)(((char)v33->field_0) & 48)) == 0 && v44 > 30719 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) && ((long long)(((char)v33->field_0) & 48)) != 0)
                            {
                                if (v2 != 0)
                                {
                                    v1 = v33;
                                    v35 = 0;
                                    v3 = v42;
                                    v46 = v38;
                                    v4 = v44;
                                    v43 = 0;
                                    v39 = v2;
                                    while (true)
                                    {
                                        v20 = v46 - v43;
                                        v27 = v39 - v29;
                                        tmp_18 = v46 - v43 <= v39 - v29;
                                        v29 = (v46 - v43 <= v39 - v29? v20 : v39 - v29);
                                        if ((tmp_18? v20 : v27) == 0)
                                        {
                                            v19 = v46[5];
                                            if (v46[5] < v46[6])
                                            {
                                                v46[5] = v1->field_28 + 1;
                                                *(v19) = 10;
                                            }
                                            else
                                            {
                                                v47 = __overflow(((int)v46), 0xa);
                                                if (((char)(v47 + 1 == 0)))
                                                {
                                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v19 = fwrite_unlocked(v0 + v43, 0x1, v29, stdout);
                                            if (v29 <= v19)
                                            {
                                                v43 += v29;
                                                v29 += v35;
                                            }
                                            else
                                            {
                                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                            }
                                        }
                                        if (v46[5] < v46[6] && (tmp_18? v20 : v27) == 0 || v29 <= v19 && (tmp_18? v20 : v27) != 0 || (tmp_18? v20 : v27) == 0 && !(((char)(v47 + 1 == 0))))
                                        {
                                            if (v43 < v46)
                                            {
                                                v35 = v29;
                                            }
                                            else
                                            {
                                                v46 = stdout;
                                                v33 = v1;
                                                v44 = v4;
                                                break;
                                            }
                                        }
                                    }
                                }
                                if (v1 <= v19 || v2 != 0)
                                {
                                    v16 = ((long long)v33->field_0);
                                }
                            }
                            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) && ((long long)(((char)v33->field_0) & 48)) != 0 || v1 <= v19 && ((long long)(((char)v33->field_0) & 48)) != 0 || v1 <= v19 && v44 > 30719 || ((long long)(((char)v33->field_0) & 48)) != 0 && v2 != 0 || v2 != 0 && v44 > 30719)
                            {
                                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) && v2 != 0)
                                {
                                    v17 = v45[5];
                                    if (v45[5] < v45[6])
                                    {
                                        v45[5] = *(stdout + 40) + 1;
                                        *(v17) = 10;
                                    }
                                    else
                                    {
                                        v47 = __overflow(((int)v45), 0xa);
                                        if (((char)(v47 + 1 == 0)))
                                        {
                                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                        }
                                    }
                                    if (v45[5] < v45[6] || !(((char)(v47 + 1 == 0))))
                                    {
                                        v16 = ((long long)v33->field_0);
                                    }
                                }
                                if (((long long)(v16 & 32)) != 0 && (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v2 == 0 || v45[5] < v45[6] || !(((char)(v47 + 1 == 0)))))
                                {
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_408127, 0x5));
                                    finish_and_exit(); /* do not return */
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (((int)v22) == 100)
        {
            v29 = 1;
        }
        else if (((char)(v22 <= 100)))
        {
            if (((int)v22) == -131)
            {
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v22) == -130)
            {
                usage(); /* do not return */
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else
        {
            if (((int)v22) == 105)
            {
                v0 = 1;
            }
            else if (((int)v22) == 119)
            {
                v22 = xstrtoimax();
                if (cc_dep1<4> > 1)
                {
                    v30 = (long long)quote();
                    dcgettext(0x0, &g_4080e5, 0x5);
                    error(0x1, 0x0, "%s: %s");
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-80, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                {
                    cc_dep1<4> = v22;
                    v39 = (v22 == 1? 0 : *(&stack_base-80));
                }
                else
                {
                    v30 = (long long)quote();
                    dcgettext(0x0, &g_4080e5, 0x5);
                    error(0x1, 0x0, "%s: %s");
                }
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
}
