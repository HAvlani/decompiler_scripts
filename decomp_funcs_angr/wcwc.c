typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

extern char debug;
extern char g_40368e;
extern char g_403791;
extern char g_4037b7;
extern char g_4037de;
extern <missing-type> g_403827;
extern char g_4038a2;
extern char g_4038a7;
extern char g_403902;
extern char g_403996;
extern char g_403a62;
extern unsigned long long g_403a83;
extern unsigned long long g_403ab9;
extern char g_403af0;
extern char g_403bca;
extern char g_403c08;
extern char g_403c5b;
extern unsigned long long g_403caf;
extern char g_403cde;
extern char g_403d89;
extern <missing-type> g_403dc8;
extern <missing-type> g_403dd0;
extern <missing-type> g_403de8;
extern <missing-type> g_403e3a;
extern <missing-type> g_403e45;
extern <missing-type> g_403e5a;
extern char g_403e72;
extern char g_403e7a;
extern char g_403e92;
extern char g_403eae;
extern char g_403eca;
extern char g_403f18;
extern char g_403fb1;
extern char g_403fec;
extern char g_404001;
extern char g_404032;
extern char g_404047;
extern char g_404072;
extern <missing-type> g_40407c;
extern unsigned int g_409004;
extern unsigned int g_409041;
extern struct_3 g_409250;
extern unsigned int is_basic_table[4];
extern unsigned long long max_line_length;
extern struct_4 page_size;
extern char posixly_correct;
extern char print_bytes;
extern char print_chars;
extern char print_linelength;
extern char print_lines;
extern char print_words;
extern struct_4 total_bytes;
extern struct_4 total_chars;
extern struct_4 total_lines;
extern struct_4 total_words;
extern unsigned long long wc_lines_avx2;
extern struct_4 wc_lines_p;

int wc()
{
    BOT tmp_26;  // tmp #26
    unsigned long v0;  // [bp-0x10e8]
    unsigned long|unsigned long long v1;  // [bp-0x10e0]
    unsigned long long v10;  // [bp-0x10a8]
    unsigned long v11;  // [bp-0x10a0]
    unsigned long long v12;  // [bp-0x109a]
    unsigned int v13;  // [bp-0x1094]
    unsigned long|unsigned int v14;  // [bp-0x1090]
    char v15;  // [bp-0x1089]
    unsigned long v16;  // [bp-0x1088]
    unsigned int v17;  // [bp-0x1084]
    char v18;  // [bp-0x1081]
    unsigned long|unsigned int v19;  // [bp-0x1080]
    unsigned long|unsigned long long v2;  // [bp-0x10d8]
    unsigned long v20;  // [bp-0x1078]
    unsigned long v21;  // [bp-0x1070]
    char|unsigned long long v22;  // [bp-0x1068]
    unsigned long long v23;  // [bp-0x1060]
    unsigned long long v24;  // [bp-0x1058]
    unsigned long v25;  // [bp-0x1030]
    unsigned long v26;  // [bp-0x30]
    unsigned long v27;  // [bp-0x20]
    unsigned long v28;  // [bp-0x18]
    unsigned long v29;  // [bp-0x10]
    unsigned long|unsigned long long v3;  // [bp-0x10d0]
    unsigned long v30;  // [bp-0x8]
    unsigned long v32;  // [bp+0x50]
    unsigned long v33;  // [bp+0x2fc0]
    unsigned long long|struct_3 * v35;  // rax
    unsigned long v4;  // [bp-0x10c8]
    unsigned long long v41;  // rax
    unsigned long long v42;  // rcx
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rbx
    unsigned long v45;  // rbx
    unsigned long|unsigned long long v47;  // rbp
    unsigned long|unsigned long long v48;  // rsi
    unsigned long|unsigned long long|unsigned int v49;  // edi
    char|unsigned long v5;  // [bp-0x10c0]
    char|unsigned long|unsigned long long v50;  // r9b
    unsigned long long v51;  // r12
    unsigned long v53;  // r12
    unsigned long|unsigned long long v55;  // r13
    unsigned long v58;  // r13
    unsigned long|unsigned long long|unsigned int v59;  // r14
    unsigned long v6;  // [bp-0x10b8]
    unsigned long|unsigned long long v61;  // r14
    unsigned long long v62;  // r15
    unsigned long long v63;  // r15
    struct_4 *v65;  // fs
    char v7;  // [bp-0x10b2]
    unsigned long|unsigned long long v8;  // [bp-0x10b0]
    char v9;  // [bp-0x10aa]

    v30 = v62;
    v29 = v61;
    v28 = v55;
    v27 = v53;
    rsp<8> = &stack_base-48;
    v26 = v45;
    /* goto 4208178; */
    v55 = v58 + 1;
    v32 += 1;
    v55 = 0;
    rsp<8> = rsp<8> - 0x1000;
    v25 = v25;
    if (rsp<8> == &stack_base-16432)
    {
        rsp<8> = rsp<8> - 120;
        v19 = v49;
        v44 = v43;
        v47 = v42;
        v20 = v48;
        v33 = *(v65 + 0x28);
        v21 = v48;
        if (v48 == 0)
        {
            rsp<8> = rsp<8> - 8;
            v8 = &g_403d89;
            v20 = dcgettext(0x0, &g_409004, 0x5);
        }
        v24 = 0;
        v23 = 0;
        rsp<8> = rsp<8> - 8;
        v8 = &g_40368e;
        v51 = ((long long)print_bytes);
        if (__ctype_get_mb_cur_max() > 1)
        {
            v18 = print_chars;
        }
        else
        {
            v18 = 0;
            v51 = ((long long)(((long long)print_bytes) == 0? ((int)print_chars) : ((int)print_bytes)));
        }
        if (print_words == 0)
        {
            if (((long long)print_linelength) == 0)
            {
                if (v51 == 1)
                {
                    if (v18 == 0)
                    {
                        if (print_lines != 0)
                        {
                            rsp<8> = rsp<8> - 8;
                            v6 = &g_404072;
                            fdadvise();
                        }
                    }
                }
                if (v18 != 0 || v51 != 1)
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_403f18;
                    fdadvise();
                    if (v15 != 1)
                    {
                        if (((long long)v51) == 0)
                        {
                            if (v15 != 0)
                            {
                                /* goto 4208802; */
                            }
                        }
                    }
                }
            }
        }
        if (((long long)print_linelength) != 0 || print_words != 0)
        {
            rsp<8> = rsp<8> - 8;
            v6 = &g_4038a2;
            fdadvise();
        }
        if (v15 == 1 || ((long long)v51) == 0 || ((long long)print_linelength) != 0 || print_words != 0)
        {
            if (v15 == 1 || ((long long)print_linelength) != 0 || v15 != 0 || print_words != 0)
            {
                if (((long long)print_linelength) != 0 || print_words != 0 || v18 != 0 || v51 != 1)
                {
                    rsp<8> = rsp<8> - 8;
                    v5 = &g_4038a7;
                    v35 = __ctype_get_mb_cur_max();
                    if (v35 > 1)
                    {
                        v61 = 0;
                        v62 = 0;
                        v47 = 0;
                        v22 = 0;
                        v44 = 0;
                        v51 = 0;
                        v10 = 0;
                        v8 = 0;
                        v11 = rsp<8> + 96;
                        /* goto 4208872; */
                    }
                    else
                    {
                        v55 = 0;
                        v47 = 0;
                        v11 = rsp<8> + 96;
                        v51 = 0;
                    }
                }
            }
        }
    }
    if (((long long)print_linelength) == 0 && print_words == 0 && rsp<8> == &stack_base-16432 && v18 == 0 && v51 == 1 && print_lines != 0 || ((long long)print_linelength) == 0 && print_words == 0 && rsp<8> == &stack_base-16432 && v15 != 1 && (v18 != 0 || v51 != 1) && ((long long)v51) != 0)
    {
        if (print_lines != 0)
        {
            /* goto 4210496; */
        }
    }
    if (...)
    {
        v35 = ((long long)*(v44));
        if (*(v44) > 0)
        {
            v48 = ((long long)v14);
            rsp<8> = rsp<8> - 8;
            v5 = &g_403eae;
            v35 = __fxstat(0x1, v48, ((int)v44) + 8);
            *(v44) = v35;
        }
    }
    if (...)
    {
        [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
        [D] MBusEvent-Imbe_Fence
        if (debug != 0)
        {
            v48 = "failed to get cpuid";
            rsp<8> = rsp<8> - 8;
            v5 = &g_403fec;
            dcgettext(0x0, v48, 0x5);
            rsp<8> = rsp<8> - 8;
            v4 = &g_404001;
            error(0x0, 0x0, "%s");
            /* goto 4210573; */
        }
    }
    if (False)
    {
        [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
        [D] MBusEvent-Imbe_Fence
        [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
        [D] MBusEvent-Imbe_Fence
        [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
        [D] MBusEvent-Imbe_Fence
        v48 = "avx2 support not detected";
        rsp<8> = rsp<8> - 8;
        v5 = &g_404032;
        dcgettext(0x0, &g_409041, 0x5);
        rsp<8> = rsp<8> - 8;
        v4 = &g_404047;
        error(0x0, 0x0, "%s");
        v41 = &wc_lines_avx2;
        wc_lines_p = &wc_lines_avx2;
        /* goto 4210580; */
    }
    if (...)
    {
        if (v35 == 0)
        {
            if ((((short)*(v44 + 32)) & 0xd000) == 0x8000)
            {
                v51 = *(v44 + 56);
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v42 = *(v43 + 56);
                    if (!(v47 != 18446744069414584319))
                    {
                        v49 = ((long long)v14);
                        v8 = *(v43 + 56);
                        rsp<8> = rsp<8> - 8;
                        v5 = &g_403eca;
                        v47 = lseek(v49, 0x0, 0x1);
                        if (((long long)((0 CONCAT v6) % page_size >> 64)) != 0)
                        {
                            if (v47 > *(v43 + 56))
                            {
                                v42 = 0;
                                /* goto 4210414; */
                            }
                            else
                            {
                                v42 = *(v43 + 56) - v47;
                                /* goto 4210414; */
                            }
                        }
                        else
                        {
                            v48 = !(rbp<8>) >> 63;
                            /* goto 4208457; */
                        }
                    }
                    else if (((long long)((0 CONCAT *(v43 + 56)) % page_size >> 64)) == 0)
                    {
                        v48 = 1;
                        v47 = 0;
                        /* goto 4208457; */
                    }
                }
            }
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v4 = &g_403902;
        v35 = safe_read();
        if (v35 == 18446744069414584319)
        {
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_403dc8;
            v62 = (long long)quotearg_n_style_colon();
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_403dd0;
            v48 = ((long long)*(__errno_location()));
            rsp<8> = rsp<8> - 8;
            *(rsp<8> + None) = &g_403de8;
            error(0x0, v48, "%s");
            /* goto 4210073; */
        }
        if (!(v35 != 0))
        {
            /* goto 4210073; */
        }
        else if (v35 != 18446744069414584319)
        {
            v20 += v35;
            v59 = v61 + v35;
            v55 = v10;
            v50 = v62;
            v63 = v59;
        }
    }
    if (((long long)(tmp_26 & 64)) != 0)
    {
        v47 += 1;
        if (((long long)(v35 & 32)) == 0)
        {
            v44 = ((long long)v59);
            /* goto 4209088; */
        }
    }
    if (v35 == 0)
    {
        v55 += rdx<8>;
        v63 -= rdx<8>;
        v51 += 1;
        if (r15<8> != 0)
        {
            if (((long long)v50) == 0)
            {
                v42 = ((long long)*(v55));
                v59 = ((long long)(...));
                if (...)
                {
                    v17 = ((int)v42);
                    v35 = v42 - 9;
                    switch (v42 - 9 & 255)
                    {
                    case 0:
                        break;
                    case 1:
                        /* goto 4209189; */
                    case 2:
                        /* goto 4209144; */
                    case 3: case 4:
                        /* goto 4209125; */
                    default:
                        v12 = v50;
                        v5 = v42;
                        rsp<8> = rsp<8> - 8;
                        v3 = &g_403996;
                        v35 = ((long long)*(*(__ctype_b_loc()) + ((long long)((char)v4)) * 2));
                        tmp_26 = v35;
                    }
                }
            }
            if (...)
            {
                v59 = ((int)rsp<8>) + 88;
                v5 = v20;
                rsp<8> = rsp<8> - 8;
                v3 = &g_403a62;
                v35 = rpl_mbrtowc();
                if (v35 == 18446744069414584319)
                {
                    v55 += 1;
                    v63 -= 1;
                    v50 = 1;
                }
                if (v35 != 18446744069414584318)
                {
                    if (v35 != 18446744069414584319)
                    {
                        v4 = v35;
                        rsp<8> = rsp<8> - 8;
                        v2 = &g_403a83;
                        v50 = ((char)(mbsinit(v59) == 0));
                        if (v3 == 0)
                        {
                            v13 = 0;
                            v59 = 0;
                            v43 = 1;
                            /* goto 4209319; */
                        }
                        else
                        {
                            ((unsigned int)v59) = ((long long)((int)*((int *)(((char *)&v11) + 4))));
                            v35 = ((unsigned int)v59) - 9;
                            switch (((int)(((unsigned int)v59) - 9)))
                            {
                            case 0:
                                break;
                            case 1:
                                v14 = v16 + 1;
                                /* goto 4209125; */
                            case 2:
                                v4 = v5 + v44;
                                v44 = 0;
                                /* goto 4209088; */
                            case 3: case 4:
                                v5 = (v47 <= v5? v5 : v47);
                                break;
                            case 23:
                                break;
                            default:
                                v9 = v50;
                                v3 = rdx<8>;
                                rsp<8> = rsp<8> - 8;
                                v1 = &g_403ab9;
                                v35 = iswprint(v59);
                                v43 = v2;
                                v50 = ((long long)((char)*((char *)(((char *)&v6) + 6))));
                            }
                            if (((int)(((unsigned int)v59) - 9)) <= 23)
                            {
                                v35 = ((long long)*(g_409250 + v35 * 4)) + &g_409250;
                            }
                        }
                    }
                }
                else
                {
                    v61 = v63;
                    v19 = v3;
                    if (v63 == 0x4000)
                    {
                        v55 = ((int)v55) + 1;
                        v61 = 16383;
                        /* goto 4209589; */
                    }
                    if (v63 != 0)
                    {
                        if (v63 != 0x4000)
                        {
                            v49 = v6;
                            rsp<8> = rsp<8> - 8;
                            v1 = &g_403bca;
                            __memmove_chk(v49, v55, ((int)v61), 0x4001);
                        }
                    }
                    else
                    {
                        v62 = 1;
                        /* goto 4208872; */
                    }
                }
            }
        }
        else
        {
            v61 = v63;
            v62 = r9<8>;
            /* goto 4208872; */
        }
    }
    else if (print_linelength == 0)
    {
        v59 = ((long long)((int)*((int *)(((char *)&v11) + 4))));
        v7 = v50;
        v2 = v43;
        v49 = v59;
        rsp<8> = rsp<8> - 8;
        v0 = &g_403af0;
        v35 = iswspace(v49);
        v43 = v1;
        if (v35 == 0)
        {
            if (!(((long long)posixly_correct) == 0))
            {
                v44 = ((long long)posixly_correct);
                /* goto 4209088; */
            }
            else if (v49 != 160)
            {
                if (v49 != 8199)
                {
                    if (v49 != 8239)
                    {
                        if (v49 != 8288)
                        {
                            v44 = 1;
                            /* goto 4209088; */
                        }
                    }
                }
            }
        }
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v0 = &g_403c08;
        v47 = (((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(64->64, Call(0x4026f0<64>, <SimCCSystemVAMD64>: [], ret: reg_16<8>)), 0x0<64>, cc_ndep<8>))? wcwidth() + v47 : v47);
        /* goto 4209369; */
    }
    if (...)
    {
        v41 = wc_lines_p;
        v42 = &v22;
        v48 = ((long long)((int)v14));
        v49 = v19;
        v43 = &v21;
        rsp<8> = rsp<8> - 8;
        v5 = &g_403fb1;
        rax<8>();
    }
    if (...)
    {
        v51 -= ((long long)((0 CONCAT v51) % (*(v44 + 64) - 1 <= 2305843009213693951? *(v44 + 64) + 1 : 513) >> 64));
        if (v51 > v47)
        {
            if (((long long)v48) != 0)
            {
                v49 = ((long long)v14);
                rsp<8> = rsp<8> - 8;
                v5 = &g_403791;
                v35 = lseek(v49, ((int)v51), 0x1);
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v51 -= v47;
                    v21 = v51;
                    /* goto 4208542; */
                }
            }
        }
    }
    if (...)
    {
        v22 = v42;
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v5 = &g_4037b7;
        fdadvise();
    }
    rsp<8> = rsp<8> - 8;
    v4 = &g_4037de;
    v35 = safe_read();
    if (v35 == 18446744069414584319)
    {
        rsp<8> = rsp<8> - 8;
        v2 = &g_403e72;
        v51 = (long long)quotearg_n_style_colon();
        rsp<8> = rsp<8> - 8;
        v1 = &g_403e7a;
        v48 = ((long long)*(__errno_location()));
        rsp<8> = rsp<8> - 8;
        v0 = &g_403e92;
        error(0x0, v48, "%s");
    }
    if (v35 != 18446744069414584319)
    {
        v20 += v35;
        /* goto 4208591; */
    }
}
