typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[36];
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
    void *|char v0;  // [bp-0x90]
    unsigned long|struct_2 * v1;  // [bp-0x88]
    unsigned long v10;  // [bp-0x30]
    unsigned long v11;  // [bp-0x20]
    unsigned long v12;  // [bp-0x18]
    unsigned long v13;  // [bp-0x10]
    unsigned long v14;  // [bp-0x8]
    unsigned long long v18;  // rax
    unsigned long|unsigned long long [7]|unsigned long long v2;  // [bp-0x80]
    unsigned long|struct_1 *|unsigned long long v22;  // rax
    char *v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    char *|unsigned long long v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long|unsigned int v28;  // edx
    unsigned long long v29;  // rbx
    unsigned long|char v3;  // [bp-0x78]
    unsigned long long v30;  // rbx
    unsigned long v31;  // rbx
    unsigned long long v32;  // rbx
    unsigned long long|struct_2 *|unsigned int v33;  // rbp
    struct_1 *v34;  // rbp
    unsigned long long v35;  // rbp
    struct_1 *v36;  // rsi
    char *|unsigned int v37;  // edi
    unsigned long long v38;  // r10
    unsigned long long v39;  // r12
    unsigned long|unsigned long long|void * v4;  // [bp-0x70]
    unsigned long long v40;  // r12
    unsigned long v41;  // r12
    unsigned long|unsigned long long|unsigned int v42;  // r13
    unsigned long long v43;  // r14
    unsigned long|unsigned long long v44;  // r14
    unsigned long|unsigned long long [7]|unsigned long long v45;  // r15
    unsigned long long v46[7];  // r15
    unsigned int v47;  // cc_dep1
    struct_1 *v48;  // fs
    unsigned long v5;  // [bp-0x68]
    unsigned long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned int v8;  // [bp-0x4c]
    unsigned long v9;  // [bp-0x40]

    v14 = v45;
    v13 = v44;
    v12 = v42;
    v11 = v41;
    v40 = 76;
    v34 = v36;
    v10 = v31;
    v30 = 0;
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
                v40 = (long long)quote();
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
                        v39 = (long long)quotearg_n_style_colon();
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
            if (v22 == 0 || v33 != 0 || ((int)optind) >= v37)
            {
                fadvise();
                if (((long long)v30) != 0)
                {
                    v2 = stdout;
                    v40 = (long long)xmalloc();
                    v4 = (long long)xmalloc();
                    v5 = &stack_base-76;
                    base32_decode_ctx_init();
                    v3 = &stack_base-88;
                    while (true)
                    {
                        v29 = 0;
                        while (true)
                        {
                            v44 = v40 + v29;
                            v42 = fread_unlocked(v40 + v29, 0x1, 0x2000 - v29, rbp<8>);
                            if (v0 != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                            {
                                v1 = rbp<8>;
                                v45 = 0;
                                while (true)
                                {
                                    v33 = ((long long)*(v44 + v45));
                                    v18 = isbase32();
                                    if (((long long)v18) == 0 && v33 != 61)
                                    {
                                        v42 -= 1;
                                        v28 = v42 - v45;
                                        memmove(v45 + 0 + v40, v40 + v45 + 0 + 1, v28);
                                        if (v42 <= v45)
                                        {
                                            break;
                                        }
                                    }
                                    if (v33 == 61 || ((long long)v18) != 0)
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
                            v18 = ((long long)v33->field_0);
                            v29 += r13<8>;
                            v42 = ((int)(v33->field_0 & 32));
                            if ((((char)v33->field_0) & 32) == 0)
                            {
                                v28 = ((int)(((int)v18) & 16));
                                v1 = v33;
                                v33 = v42;
                                v2 = v29;
                                v30 = v4;
                                break;
                            }
                            else
                            {
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_408127, 0x5));
                            }
                        }
                        while (true)
                        {
                            if (((long long)(v18 & 16)) == 0)
                            {
                                if (v33 != 0)
                                {
                                    v2 = v2;
                                    v4 = v30;
                                    v5 = &stack_base-76;
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
                                        v7 = 0x1400;
                                    }
                                    else
                                    {
                                        finish_and_exit(); /* do not return */
                                    }
                                }
                            }
                            if (v33 == 0 && ((long long)(v18 & 16)) == 0 || v33 != 2 && ((long long)(v18 & 16)) != 0)
                            {
                                if (((long long)(v18 & 16)) == 0 || v33 != 1)
                                {
                                    v7 = 0x1400;
                                }
                                if (((long long)(v18 & 16)) == 0 || v8 != 0 || v33 != 1)
                                {
                                    v42 = (long long)base32_decode_ctx();
                                    v25 = fwrite_unlocked(v4, 0x1, 0x1400, v2);
                                    if (v25 < v7)
                                    {
                                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                    }
                                    else if (((long long)v42) != 0)
                                    {
                                        v33 = ((long long)v33) + 1;
                                        v18 = ((long long)v1->field_0);
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
                    v30 = 0;
                    v42 = (long long)xmalloc();
                    v2 = v40;
                    v0 = (long long)xmalloc();
                    while (true)
                    {
                        v44 = 0;
                        while (true)
                        {
                            v44 += fread_unlocked(v3 + v44, 0x1, 0x7800 - v44, v33);
                            v18 = ((long long)v33->field_0);
                            if (((long long)(((char)v33->field_0) & 48)) == 0 && v44 > 30719 || ((long long)(((char)v33->field_0) & 48)) != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                            {
                                v1 = ((long long)((v44 + 4 >> 63 CONCAT v44 + 4) % 5)) * 8;
                                base32_encode();
                                v38 = v1;
                            }
                            if (v2 == 0 && (((long long)(((char)v33->field_0) & 48)) == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))) && (v44 > 30719 || ((long long)(((char)v33->field_0) & 48)) != 0))
                            {
                                v26 = fwrite_unlocked(v0, 0x1, v1, stdout);
                                if (v1 > v26)
                                {
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                }
                            }
                            if (((long long)(((char)v33->field_0) & 48)) == 0 && v44 > 30719 || ((long long)(((char)v33->field_0) & 48)) != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                            {
                                if (v2 != 0)
                                {
                                    v1 = v33;
                                    v35 = 0;
                                    v3 = v42;
                                    v46 = v38;
                                    v4 = v44;
                                    v43 = 0;
                                    v40 = v2;
                                    while (true)
                                    {
                                        v24 = v46 - v43;
                                        v27 = v40 - v30;
                                        tmp_18 = v46 - v43 <= v40 - v30;
                                        v30 = (v46 - v43 <= v40 - v30? v24 : v40 - v30);
                                        if ((tmp_18? v24 : v27) == 0)
                                        {
                                            v26 = v46[5];
                                            if (v46[5] < v46[6])
                                            {
                                                v46[5] = v1->field_28 + 1;
                                                *(v26) = 10;
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
                                            v26 = fwrite_unlocked(v0 + v43, 0x1, v30, stdout);
                                            if (v30 <= v26)
                                            {
                                                v43 += v30;
                                                v30 += v35;
                                            }
                                            else
                                            {
                                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_408132, 0x5));
                                            }
                                        }
                                        if ((tmp_18? v24 : v27) == 0 && v46[5] < v46[6] || v30 <= v26 && (tmp_18? v24 : v27) != 0 || (tmp_18? v24 : v27) == 0 && !(((char)(v47 + 1 == 0))))
                                        {
                                            if (r14<8> < v46)
                                            {
                                                v35 = rbx<8>;
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
                                if (v1 <= v26 || v2 != 0)
                                {
                                    v18 = ((long long)v33->field_0);
                                }
                            }
                            if (v1 <= v26 && v44 > 30719 || v1 <= v26 && ((long long)(((char)v33->field_0) & 48)) != 0 || ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) && ((long long)(((char)v33->field_0) & 48)) != 0 || v44 > 30719 && v2 != 0 || v2 != 0 && ((long long)(((char)v33->field_0) & 48)) != 0)
                            {
                                if (v2 != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                                {
                                    v23 = v45[5];
                                    if (v45[5] < v45[6])
                                    {
                                        v45[5] = *(stdout + 40) + 1;
                                        *(v23) = 10;
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
                                        v18 = ((long long)v33->field_0);
                                    }
                                }
                                if (((long long)(v18 & 32)) != 0 && (v2 == 0 || v45[5] < v45[6] || ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || !(((char)(v47 + 1 == 0)))))
                                {
                                    finish_and_exit(); /* do not return */
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_408127, 0x5));
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (((int)v22) == 100)
        {
            v30 = 1;
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
                    v32 = (long long)quote();
                    dcgettext(0x0, &g_4080e5, 0x5);
                    error(0x1, 0x0, "%s: %s");
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                {
                    cc_dep1<4> = v22;
                    v40 = (v22 == 1? 0 : *(&stack_base-88));
                }
                else
                {
                    v32 = (long long)quote();
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
