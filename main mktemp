typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_407085;
extern unsigned int g_4070da;
extern unsigned int g_4070e2;
extern unsigned int g_4070f5;
extern unsigned int g_407117;
extern unsigned int g_4077b0;
extern unsigned int g_4077d8;
extern unsigned int g_407808;
extern unsigned int g_407838;
extern unsigned int g_407870;
extern struct_0 g_407908;
extern unsigned int longopts;
extern struct_1 optarg;
extern struct_0 optind;
extern char stdout_closed;

int main()
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x68]
    char v10;  // [bp+0x17]
    unsigned long v11;  // [bp+0x18]
    unsigned long|char *|unsigned long long v12;  // rax
    unsigned long long v17;  // rax
    char *v18;  // rax
    char v2;  // [bp-0x5a]
    struct_0 *|unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rcx
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rcx
    char * v28;  // rbx
    unsigned long long v29;  // rbp
    char v3;  // [bp-0x59]
    void *|unsigned long long v30;  // rbp
    char *v31;  // rbp
    unsigned long|struct_1 * v32;  // rsi
    unsigned long long v33;  // rdi
    unsigned int|char * v34;  // edi
    char * v35;  // rdi
    void *|char * v36;  // rdi
    unsigned long long v37;  // r12
    unsigned long long v38;  // r12
    unsigned long|unsigned long long v39;  // r12
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v40;  // r12
    unsigned long long v41;  // r12
    unsigned long long v42;  // r12
    unsigned long long v43;  // r13
    unsigned long long v44;  // r14
    unsigned long long v45;  // r15
    unsigned long long v46;  // cc_dep1
    char v47;  // cc_dep2
    unsigned long v48;  // d
    unsigned long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    void *v7;  // [bp-0x40]
    unsigned long v8;  // [bp+0x8]
    char v9;  // [bp+0x16]

    v44 = 1;
    /* goto 4204406; */
    v9 = 1;
    /* goto 4204406; */
    v10 = 1;
    /* goto 4204406; */
    v39 = 1;
    v11 = optarg;
    /* goto 4204406; */
    v8 = optarg;
    /* goto 4204406; */
    v44 = 0;
    v39 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407085, &g_4077b0);
    textdomain(&g_407085);
    atexit();
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v4 = 0;
    v20 = getopt_long(v34, ((int)v32), &g_4070da, &longopts, 0x0);
    if (v20 != -1)
    {
        if (!(v20 <= 128))
        {
            usage(); /* do not return */
        }
        else if (v20 > 85)
        {
            v20 = ((long long)v20) - 86;
            if (((int)v20) <= 42)
            {
                v17 = ((long long)*(g_407908 + v20 * 4)) + &g_407908;
                /* goto v17; */
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else if (v20 == -131)
        {
            v0 = 0;
            version_etc();
            exit(0x0); /* do not return */
        }
        else if (v20 == -130)
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
        if (v34 - optind <= 1)
        {
            if (v34 - optind != 0)
            {
                v32 = *(v32 + ((long long)optind) * 8);
                if (v1 != 0)
                {
                    v26 = 18446744069414584319;
                    v34 = v32;
                    while (v26 != 0)
                    {
                        v26 -= 1;
                        v47 = ((char)*(v34));
                        v34 += v48;
                        break;
                    }
                    v46 = !(rcx<8>);
                    v29 = !(rcx<8>) - 1;
                    if (!(v46 != 1))
                    {
                        v42 = (long long)quote();
                        error(0x1, 0x0, dcgettext(0x0, &g_4077d8, 0x5));
                    }
                    else if (*(v32 + v29 + 1) != 88)
                    {
                        v42 = (long long)quote();
                        error(0x1, 0x0, dcgettext(0x0, &g_4077d8, 0x5));
                    }
                }
            }
            else
            {
                v39 = 1;
                if (v1 != 0)
                {
                    v29 = 14;
                    v39 = 1;
                    v32 = "tmp.XXXXXXXXXX";
                    /* goto 4204737; */
                }
            }
            if (v1 == 0)
            {
                v28 = (long long)xstrdup();
                v12 = strrchr();
                v30 = v12 + 1;
                if (v12 == 0)
                {
                    v24 = 18446744069414584319;
                    v34 = v28;
                    while (v24 != 0)
                    {
                        v24 -= 1;
                        v47 = ((char)*(v34));
                        v34 += v48;
                        break;
                    }
                    v30 = v28 + !(rcx<8>) - 1;
                }
                v23 = 18446744069414584319;
                v36 = v30;
                while (v23 != 0)
                {
                    v23 -= 1;
                    v47 = ((char)*(v36));
                    v36 += v48;
                    break;
                }
                v5 = !(rcx<8>) - 1;
            }
            if (v1 != 0 && (v34 - optind == 0 || *(v32 + v29 + 1) == 88) && (v34 - optind == 0 || v46 != 1))
            {
                v7 = v32;
                v33 = v1;
                v27 = 18446744069414584319;
                while (v27 != 0)
                {
                    v27 -= 1;
                    v47 = ((char)*(v33));
                    v33 += v48;
                    break;
                }
                v23 = !(rcx<8>);
                v6 = v23;
                v5 = v6 - 1;
                v28 = (long long)xcharalloc();
                memcpy(v28, v7, v29);
                v30 = v29 + v28;
                v36 = v30;
                memcpy(v36, NULL, v6);
            }
            if (v1 == 0 || v34 - optind == 0 || *(v32 + v29 + 1) == 88 && v46 != 1)
            {
                if (v5 != 0)
                {
                    v12 = last_component();
                    if (v30 != v12)
                    {
                        v37 = (long long)quote();
                        error(0x1, 0x0, dcgettext(0x0, &g_407808, 0x5));
                    }
                }
                if (v30 == v12 || v5 == 0)
                {
                    v45 = 0;
                    v35 = v30 - v28;
                    if (v30 == v28)
                    {
                        v41 = (long long)quote();
                        error(0x1, 0x0, dcgettext(0x0, &g_4070f5, 0x5));
                    }
                    else
                    {
                        do
                        {
                            v35 -= 1;
                            v45 += 1;
                        }
                        while (*(v28 + v35) == 88 && v35 != 0);
                        if (v45 > 2)
                        {
                            if (((long long)v39) != 0)
                            {
                                if (((long long)0) == 0)
                                {
                                    if (v4 == 0 || *(v4) == 0)
                                    {
                                        v12 = getenv("TMPDIR");
                                    }
                                    if (*(v28) == 47)
                                    {
                                        v38 = (long long)quote();
                                        error(0x1, 0x0, dcgettext(0x0, &g_407870, 0x5));
                                    }
                                }
                                else
                                {
                                    v18 = getenv("TMPDIR");
                                    v12 = last_component();
                                    if (v28 != v12)
                                    {
                                        v40 = (long long)quote();
                                        error(0x1, 0x0, dcgettext(0x0, &g_407838, 0x5));
                                    }
                                }
                                if ((((long long)0) == 0 || v28 == v12) && (((long long)0) != 0 || *(v28) != 47))
                                {
                                    v30 = (long long)file_name_concat();
                                    rpl_free();
                                }
                            }
                            if (((long long)v39) == 0 || ((long long)0) == 0 && *(v28) != 47 || v28 == v12 && ((long long)0) != 0)
                            {
                                v31 = (long long)xstrdup();
                                if (v2 != 0)
                                {
                                    if (v3 == 0)
                                    {
                                        v12 = gen_tempname_len();
                                    }
                                    else
                                    {
                                        v39 = (long long)gen_tempname_len();
                                        if (((int)v39) == 0)
                                        {
                                            puts(v31);
                                            v21 = v39;
                                            return v21;
                                        }
                                    }
                                    if (v3 == 0 && v12 != 0 || v3 != 0 && ((int)v39) != 0)
                                    {
                                        if (((long long)v44) == 0)
                                        {
                                            v43 = (long long)quote();
                                        }
                                        else
                                        {
                                            v39 = 1;
                                            v21 = v39;
                                            return v21;
                                        }
                                    }
                                }
                                else
                                {
                                    if (v3 == 0)
                                    {
                                        v12 = gen_tempname_len();
                                        if (v12 >= 0)
                                        {
                                            v12 = close(v12);
                                        }
                                    }
                                    else
                                    {
                                        v12 = gen_tempname_len();
                                        if (v12 >= 0)
                                        {
                                            v39 = 0;
                                            puts(v31);
                                            v21 = v39;
                                            return v21;
                                        }
                                    }
                                    if (v3 == 0 && v12 < 0 || v3 == 0 && v12 != 0 || v12 < 0 && v3 != 0)
                                    {
                                        if (((long long)v44) != 0)
                                        {
                                            v39 = 1;
                                            v21 = v39;
                                            return v21;
                                        }
                                        v43 = (long long)quote();
                                    }
                                }
                                if (v3 == 0 && (v2 == 0 || v12 == 0) && (v12 == 0 || v2 != 0) && (v2 != 0 || v12 >= 0))
                                {
                                    puts(v31);
                                    stdout_closed = 1;
                                    v39 = (long long)close_stream();
                                    if (((int)v39) == 0)
                                    {
                                        v21 = v39;
                                        return v21;
                                    }
                                    v39 = ((long long)*(__errno_location()));
                                    remove(((int)v31));
                                    if (((long long)v44) != 0)
                                    {
                                        v39 = 1;
                                        v21 = v39;
                                        return v21;
                                    }
                                    else
                                    {
                                        v32 = v39;
                                        v39 = 1;
                                        error(0x0, v32, dcgettext(0x0, &g_407117, 0x5));
                                        v21 = v39;
                                        return v21;
                                    }
                                }
                                if (((long long)v44) == 0 && (v3 == 0 || v12 < 0 || v2 != 0) && (v3 == 0 || v2 == 0 || ((int)v39) != 0) && (v2 == 0 || v3 != 0 || v12 != 0) && (v12 < 0 || v3 != 0 || v12 != 0 || v2 != 0))
                                {
                                    error(0x0, *(__errno_location()), dcgettext(0x0, v32, 0x5));
                                    v39 = 1;
                                    v21 = v39;
                                    return v21;
                                }
                            }
                        }
                        v41 = (long long)quote();
                        error(0x1, 0x0, dcgettext(0x0, &g_4070f5, 0x5));
                    }
                }
            }
        }
        else
        {
            error(0x0, 0x0, dcgettext(0x0, &g_4070e2, 0x5));
            usage(); /* do not return */
        }
    }
}
