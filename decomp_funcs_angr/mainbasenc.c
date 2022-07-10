typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned long long base16_decode_ctx;
extern unsigned long long base16_decode_ctx_init;
extern unsigned long long base16_encode;
extern unsigned long long base16_length;
extern unsigned long long base2_decode_ctx_init;
extern unsigned long long base2_length;
extern unsigned long long base2lsbf_decode_ctx;
extern unsigned long long base2lsbf_encode;
extern unsigned long long base2msbf_decode_ctx;
extern unsigned long long base2msbf_encode;
extern unsigned long long base32_decode_ctx_init_wrapper;
extern unsigned long long base32_decode_ctx_wrapper;
extern unsigned long long base32_encode;
extern unsigned long long base32_length_wrapper;
extern unsigned long long base32hex_decode_ctx_init_wrapper;
extern unsigned long long base32hex_decode_ctx_wrapper;
extern unsigned long long base32hex_encode;
extern unsigned long long base64_decode_ctx_init_wrapper;
extern unsigned long long base64_decode_ctx_wrapper;
extern unsigned long long base64_encode;
extern unsigned long long base64_length_wrapper;
extern unsigned long long base64url_decode_ctx_init_wrapper;
extern unsigned long long base64url_decode_ctx_wrapper;
extern unsigned long long base64url_encode;
extern struct_0 base_decode_ctx;
extern struct_0 base_decode_ctx_init;
extern struct_0 base_encode;
extern struct_0 base_length;
extern unsigned int g_4090f8;
extern unsigned int g_409123;
extern unsigned int g_40915e;
extern unsigned int g_409174;
extern unsigned int g_409188;
extern unsigned int g_409193;
extern unsigned int g_40919f;
extern unsigned int g_409908;
extern struct_0 isbase;
extern unsigned long long isbase16;
extern unsigned long long isbase2;
extern unsigned long long isbase32;
extern unsigned long long isbase32hex;
extern unsigned long long isbase64;
extern unsigned long long isbase64url;
extern unsigned long long isz85;
extern unsigned int long_options;
extern struct_1 optind;
extern struct_0 stdin;
extern unsigned long long stdout[7];
extern unsigned long long z85_decode_ctx;
extern unsigned long long z85_decode_ctx_init;
extern unsigned long long z85_encode;
extern unsigned long long z85_length;

int main()
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x40]
    unsigned long v12;  // [bp-0x30]
    unsigned long v13;  // [bp-0x20]
    unsigned long v14;  // [bp-0x18]
    unsigned long v15;  // [bp-0x10]
    unsigned long v16;  // [bp-0x8]
    unsigned long long v18;  // rax
    unsigned long|void * v2;  // [bp-0xa8]
    unsigned long long v23;  // rax
    char *v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long|char * v26;  // rax
    struct_2 *|unsigned long long v29;  // rax
    char|unsigned long long v3;  // [bp-0xa0]
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v35;  // rcx
    unsigned long|unsigned long long v36;  // rdx
    unsigned long v37;  // rbx
    unsigned long long|unsigned int v38;  // rbx
    unsigned long long v39;  // rbx
    struct_1 *|unsigned long long [7]|unsigned long long v4;  // [bp-0x98]
    struct_2 *v40;  // rbp
    struct_1 * v41;  // rbp
    unsigned long long v42;  // rbp
    unsigned long long|struct_2 *|void * v43;  // rsi
    void *|unsigned long long|char *|unsigned int v44;  // rdi
    unsigned long long v45;  // rdi
    unsigned long long v46;  // rdi
    unsigned long long v47;  // rdi
    unsigned long long v48;  // r8
    unsigned long long v49;  // r12
    unsigned long long v5;  // [bp-0x90]
    unsigned long v50;  // r12
    unsigned long long v51;  // r12
    unsigned long long v52;  // r12
    unsigned long long v53;  // r12
    unsigned long long v54;  // r12
    unsigned long long [7]|unsigned long long v55;  // r13
    unsigned long v56;  // r13
    unsigned long long v57;  // r13
    unsigned long long [7]|unsigned long|unsigned long long|unsigned int v58;  // r14
    unsigned long v59;  // r14
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v60;  // r14
    unsigned long|unsigned long long|char * v61;  // r15
    unsigned long long v62;  // r15
    unsigned int v63;  // cc_dep1
    struct_0 *v64;  // fs
    unsigned long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x70]
    char v9;  // [bp-0x68]

    v16 = v61;
    v15 = v59;
    v58 = 0;
    v14 = v56;
    v13 = v50;
    v49 = 0;
    v40 = v43;
    v12 = v37;
    v38 = 76;
    v11 = *(v64 + 0x28);
    set_program_name();
    setlocale();
    bindtextdomain(&g_4090f8, &g_409908);
    textdomain(&g_4090f8);
    atexit();
    v3 = 0;
    while (true)
    {
        v32 = getopt_long(v44, ((int)v43), &g_409159, &long_options, 0x0);
        if (((int)v32) == -1)
        {
            v58 = ((long long)v58) - 128;
            switch (((int)v58))
            {
            case 0:
                base_length = &base64_length_wrapper;
                isbase = &isbase64;
                base_encode = &base64_encode;
                base_decode_ctx_init = &base64_decode_ctx_init_wrapper;
                base_decode_ctx = &base64_decode_ctx_wrapper;
                break;
            case 1:
                base_length = &base64_length_wrapper;
                isbase = &isbase64url;
                base_encode = &base64url_encode;
                base_decode_ctx_init = &base64url_decode_ctx_init_wrapper;
                base_decode_ctx = &base64url_decode_ctx_wrapper;
                break;
            case 2:
                base_length = &base32_length_wrapper;
                isbase = &isbase32;
                base_encode = &base32_encode;
                base_decode_ctx_init = &base32_decode_ctx_init_wrapper;
                base_decode_ctx = &base32_decode_ctx_wrapper;
                break;
            case 3:
                base_length = &base32_length_wrapper;
                isbase = &isbase32hex;
                base_encode = &base32hex_encode;
                base_decode_ctx_init = &base32hex_decode_ctx_init_wrapper;
                base_decode_ctx = &base32hex_decode_ctx_wrapper;
                break;
            case 4:
                base_length = &base16_length;
                isbase = &isbase16;
                base_encode = &base16_encode;
                base_decode_ctx_init = &base16_decode_ctx_init;
                base_decode_ctx = &base16_decode_ctx;
                break;
            case 5:
                base_length = &base2_length;
                isbase = &isbase2;
                base_encode = &base2msbf_encode;
                base_decode_ctx_init = &base2_decode_ctx_init;
                base_decode_ctx = &base2msbf_decode_ctx;
                break;
            case 6:
                base_length = &base2_length;
                isbase = &isbase2;
                base_encode = &base2lsbf_encode;
                base_decode_ctx_init = &base2_decode_ctx_init;
                base_decode_ctx = &base2lsbf_decode_ctx;
                break;
            case 7:
                base_length = &z85_length;
                isbase = &isz85;
                base_encode = &z85_encode;
                base_decode_ctx_init = &z85_decode_ctx_init;
                base_decode_ctx = &z85_decode_ctx;
                break;
            default:
                error(0x0, 0x0, dcgettext(0x0, &g_40915e, 0x5));
                usage(); /* do not return */
            }
        }
        else if (((int)v32) == 105)
        {
            v3 = 1;
        }
        else if (((char)(v32 <= 105)))
        {
            if (((int)v32) == -130)
            {
                usage(); /* do not return */
            }
            else if (((int)v32) == 100)
            {
                v49 = 1;
            }
            else if (((int)v32) != -131)
            {
                usage(); /* do not return */
            }
            else
            {
                v1 = "diw:";
                v0 = 0;
                version_etc();
                exit(0x0); /* do not return */
            }
        }
        else
        {
            if (((int)v32) == 119)
            {
                v32 = xstrtoimax();
                if (cc_dep1<4> > 1)
                {
                    v39 = (long long)quote();
                    dcgettext(0x0, &g_409123, 0x5);
                    error(0x1, 0x0, "%s: %s");
                }
                else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))))
                {
                    cc_dep1<4> = v32;
                    v38 = (v32 == 1? 0 : *(&stack_base-112));
                }
                else
                {
                    v39 = (long long)quote();
                    dcgettext(0x0, &g_409123, 0x5);
                    error(0x1, 0x0, "%s: %s");
                }
            }
            else if (((int)(v32 - 128)) > 7)
            {
                usage(); /* do not return */
            }
            else
            {
                v58 = ((int)v32);
            }
        }
    }
    v29 = ((long long)optind);
    if (v44 - optind <= 1)
    {
        if (((int)optind) < v44)
        {
            v44 = *(v40 + v29 * 8);
            v7 = *(v40 + v29 * 8);
            v29 = strcmp(v44, "-");
            if (v29 != 0)
            {
                v41 = fopen(*(v43 + ((long long)optind) * 8), "rb");
                if (v41 == 0)
                {
                    v51 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            v7 = "-";
        }
        if (v29 == 0 || ((int)optind) >= v44)
        {
            v41 = stdin;
        }
        if (v29 == 0 || ((int)optind) >= v44 || v41 != 0)
        {
            fadvise();
            if (((long long)v49) != 0)
            {
                v46 = 4200;
                v4 = stdout;
                *(0x40e0f0)();
                v53 = (long long)xmalloc();
                v10 = 0;
                v55 = (long long)xmalloc();
                v5 = &stack_base-104;
                v44 = &stack_base-104;
                *(0x40e0d8)();
                while (true)
                {
                    v6 = v55;
                    v38 = 0;
                    while (true)
                    {
                        v45 = 4200;
                        v60 = fread_unlocked(v43 + v38, 0x1, *(0x40e0f0)() - v38, v41);
                        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))) && v3 != 0)
                        {
                            v55 = 0;
                            do
                            {
                                v36 = v38 + v55;
                                v61 = v43 + v38 + v55;
                                v2 = v38 + v55;
                                v45 = ((long long)*(v43 + v38 + v55));
                                v18 = *(0x40e0e8)();
                                if (((long long)v18) == 0)
                                {
                                    v36 = v2;
                                    if (*(v61) != 61)
                                    {
                                        v60 -= 1;
                                        v43 = v43 + v36 + 1;
                                        v36 = v60 - v55;
                                        memmove(v61, v43, v36);
                                    }
                                }
                                if (*(v61) == 61 || ((long long)v18) != 0)
                                {
                                    v55 += 1;
                                }
                            }
                            while (r14<8> > r13<8>);
                        }
                        v38 += r14<8>;
                        v58 = ((long long)(v41->field_0 & 32));
                        if ((((char)v41->field_0) & 32) == 0)
                        {
                            v44 = 4200;
                            v18 = *(0x40e0f0)();
                            if (v38 < v18)
                            {
                                v55 = v6;
                                break;
                            }
                            else
                            {
                                v55 = v6;
                                v18 = ((long long)v41->field_0);
                            }
                        }
                        else
                        {
                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_409188, 0x5));
                        }
                    }
                    while (true)
                    {
                        if (v58 != 2)
                        {
                            finish_and_exit(); /* do not return */
                            if (v58 != 1)
                            {
                                v8 = 4200;
                                v33 = base_decode_ctx;
                                v36 = (v58 == 0? v38 : 0);
                            }
                            else if (v9 != 0)
                            {
                                finish_and_exit(); /* do not return */
                                v8 = 4200;
                                v33 = base_decode_ctx;
                                v36 = 0;
                            }
                            if (v9 != 0 || v58 != 1)
                            {
                                v44 = v5;
                                v35 = r13<8>;
                                v48 = &stack_base-112;
                                v43 = v53;
                                v61 = rax<8>();
                                v25 = fwrite_unlocked(r13<8>, 0x1, 0x1068, stdout);
                                v18 = ((long long)v41->field_0);
                                v58 = ((int)v58) + 1;
                            }
                        }
                    }
                    if (v58 == 1 && v9 != 0 || v58 != 2 && v58 != 1)
                    {
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_409193, 0x5));
                    }
                    else if (v25 >= v8 && (v58 == 1 || v58 != 2) && (v9 != 0 || v58 != 1))
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_40919f, 0x5));
                    }
                    error(0x1, 0x0, dcgettext(0x0, &g_40919f, 0x5));
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_409193, 0x5));
                }
            }
            else
            {
                v55 = stdout;
                v53 = 0;
                v58 = (long long)xmalloc();
                *(0x40e0f0)();
                v3 = v38;
                v2 = (long long)xmalloc();
                while (true)
                {
                    v61 = 0;
                    while (true)
                    {
                        v61 += fread_unlocked(*(v43 + ((long long)optind) * 8) + v61, 0x1, 0x7800 - v61, v41);
                        v18 = ((long long)v41->field_0);
                        if (((long long)(((char)v41->field_0) & 48)) == 0 && v61 > 30719 || !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))) && ((long long)(((char)v41->field_0) & 48)) != 0)
                        {
                            v36 = v2;
                            v43 = v61;
                            v47 = v58;
                            v35 = *(0x40e0f0)();
                            *(0x40e0e0)();
                            v44 = v61;
                            v26 = *(0x40e0f0)();
                        }
                        if (v3 == 0 && (((long long)(((char)v41->field_0) & 48)) == 0 || !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)))) && (((long long)(((char)v41->field_0) & 48)) != 0 || v61 > 30719))
                        {
                            v44 = v2;
                            v4 = v38;
                            v26 = fwrite_unlocked(v44, 0x1, v38, stdout);
                            if (v4 > v26)
                            {
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_409193, 0x5));
                            }
                        }
                        if (((long long)(((char)v41->field_0) & 48)) == 0 && v61 > 30719 || !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))) && ((long long)(((char)v41->field_0) & 48)) != 0)
                        {
                            if (v3 != 0)
                            {
                                v38 = v26;
                                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))))
                                {
                                    v4 = v41;
                                    v42 = v3;
                                    v5 = v47;
                                    v58 = stdout;
                                    v57 = 0;
                                    v52 = v38;
                                    v6 = v61;
                                    v62 = 0;
                                    while (true)
                                    {
                                        v23 = v42 - v57;
                                        ((unsigned int)v38) = (v42 - v57 < v52 - v62? v23 : v52 - v62);
                                        if ((v42 - v57 < v52 - v62? v23 : v52 - v62) == 0)
                                        {
                                            v26 = v58[5];
                                            if (v58[5] < v58[6])
                                            {
                                                v58[5] = *(stdout + 40) + 1;
                                                *(v26) = 10;
                                            }
                                            else
                                            {
                                                v63 = __overflow(((int)v58), 0xa);
                                                if (((char)(v63 + 1 == 0)))
                                                {
                                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_409193, 0x5));
                                                }
                                            }
                                            if (v58[5] < v58[6] || !(((char)(v63 + 1 == 0))))
                                            {
                                                v57 = 0;
                                            }
                                        }
                                        else
                                        {
                                            v26 = fwrite_unlocked(v2 + v62, 0x1, ((unsigned int)v38), stdout);
                                            if (((unsigned int)v38) <= v26)
                                            {
                                                v57 += ((unsigned int)v38);
                                                v62 += ((unsigned int)v38);
                                            }
                                            else
                                            {
                                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_409193, 0x5));
                                            }
                                        }
                                        if (v58[5] < v58[6] && (v42 - v57 < v52 - v62? v23 : v52 - v62) == 0 || ((unsigned int)v38) <= v26 && (v42 - v57 < v52 - v62? v23 : v52 - v62) != 0 || (v42 - v57 < v52 - v62? v23 : v52 - v62) == 0 && !(((char)(v63 + 1 == 0))))
                                        {
                                            v53 = v57;
                                            v41 = v4;
                                            v55 = stdout;
                                            v61 = v6;
                                            break;
                                        }
                                    }
                                }
                            }
                            if (v4 <= v26 || v3 != 0)
                            {
                                v18 = ((long long)v41->field_0);
                            }
                        }
                        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)) && ((long long)(((char)v41->field_0) & 48)) != 0 || v4 <= v26 && ((long long)(((char)v41->field_0) & 48)) != 0 || v4 <= v26 && v61 > 30719 || ((long long)(((char)v41->field_0) & 48)) != 0 && v3 != 0 || v61 > 30719 && v3 != 0)
                        {
                            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))) && v3 != 0)
                            {
                                v24 = v55[5];
                                if (v55[5] < v55[6])
                                {
                                    v55[5] = *(stdout + 40) + 1;
                                    *(v24) = 10;
                                }
                                else
                                {
                                    v63 = __overflow(((int)v55), 0xa);
                                    if (((char)(v63 + 1 == 0)))
                                    {
                                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_409193, 0x5));
                                    }
                                }
                                if (v55[5] < v55[6] || !(((char)(v63 + 1 == 0))))
                                {
                                    v18 = ((long long)v41->field_0);
                                }
                            }
                            if (((long long)(v18 & 32)) != 0 && (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)) || v55[5] < v55[6] || v3 == 0 || !(((char)(v63 + 1 == 0)))))
                            {
                                finish_and_exit(); /* do not return */
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_409188, 0x5));
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        v54 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_409174, 0x5));
        usage(); /* do not return */
    }
}
