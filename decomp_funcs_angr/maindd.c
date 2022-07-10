typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    char padding_0[1];
    char field_1;
} struct_3;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char ascii_to_ebcdic;
extern char ascii_to_ibm;
extern struct_2 caught_signals;
extern char close_stdout_required;
extern struct_0 col;
extern unsigned long long conversion_blocksize;
extern struct_1 conversions_mask;
extern char ebcdic_to_ascii;
extern char final_op_was_seek;
extern unsigned int g_40e122;
extern unsigned int g_40e1c0;
extern unsigned int g_40e1ce;
extern unsigned int g_40e1ee;
extern unsigned int g_40e1fe;
extern unsigned int g_40e27c;
extern unsigned int g_40e2ba;
extern unsigned int g_40e2e7;
extern unsigned int g_40e300;
extern unsigned int g_40e30f;
extern unsigned int g_40e321;
extern unsigned int g_40e331;
extern unsigned int g_40f200;
extern unsigned int g_40f228;
extern unsigned int g_40f268;
extern unsigned int g_40f298;
extern unsigned int g_40f2c0;
extern unsigned int g_40f2e0;
extern unsigned int g_40f300;
extern unsigned int g_40f328;
extern unsigned int g_40f378;
extern unsigned int g_40f3b0;
extern unsigned int g_40f3d8;
extern unsigned int g_40f408;
extern unsigned int g_40f430;
extern unsigned int g_40f450;
extern struct_2 g_414290;
extern struct_2 g_4142a0;
extern struct_2 g_4142b0;
extern struct_2 g_4142c0;
extern struct_2 g_4142d0;
extern struct_2 g_4142e0;
extern struct_2 g_4142f0;
extern char g_41438d;
extern char i_nocache;
extern char i_nocache_eof;
extern unsigned long long ibuf;
extern unsigned long long input_blocksize;
extern struct_0 input_file;
extern struct_1 input_flags;
extern unsigned long long input_offset;
extern unsigned int input_seek_errno;
extern char input_seekable;
extern char interrupt_handler;
extern unsigned long long iread;
extern struct_0 iread_fnc;
extern struct_0 max_bytes;
extern unsigned long long max_records;
extern char newline_character;
extern struct_0 next_time;
extern char o_nocache;
extern char o_nocache_eof;
extern struct_0 obuf;
extern struct_0 oc;
extern struct_1 optind;
extern unsigned long long output_blocksize;
extern struct_0 output_file;
extern struct_1 output_flags;
extern struct_0 page_size;
extern struct_0 r_full;
extern struct_0 r_partial;
extern struct_0 reported_w_bytes;
extern struct_0 seek_bytes;
extern unsigned long long seek_records;
extern char siginfo_handler;
extern struct_0 skip_bytes;
extern unsigned long long skip_records;
extern char space_character;
extern struct_0 start_time;
extern struct_1 status_level;
extern unsigned long long trans_table;
extern char translation_needed;
extern char usage;
extern struct_0 w_bytes;
extern struct_0 w_full;
extern struct_0 w_partial;
extern char warn_partial_read;

int main()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_1;  // tmp #1
    BOT tmp_4;  // tmp #4
    BOT tmp_9;  // tmp #9
    BOT tmp_17;  // tmp #17
    BOT tmp_6;  // tmp #6
    BOT tmp_28;  // tmp #28
    unsigned long v0;  // [bp-0x178]
    unsigned long v1;  // [bp-0x170]
    unsigned long|unsigned long long|unsigned int v10;  // [bp-0x118]
    unsigned long|unsigned long long|unsigned int v11;  // [bp-0x110]
    char|unsigned int v12;  // [bp-0x108]
    unsigned long long|unsigned int v13;  // [bp-0x104]
    unsigned long long v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    unsigned long long v16;  // [bp-0xf0]
    char [2]|struct_3 * v17;  // [bp-0xe8]
    char|unsigned long v18;  // [bp-0xe0]
    unsigned long v19;  // [bp-0xd8]
    unsigned long v2;  // [bp-0x168]
    BOT v20;  // [bp-0xd0]
    BOT v21;  // [bp-0xc0]
    BOT v22;  // [bp-0xb0]
    BOT v23;  // [bp-0xa0]
    BOT v24;  // [bp-0x90]
    BOT v25;  // [bp-0x80]
    BOT v26;  // [bp-0x70]
    BOT v27;  // [bp-0x60]
    unsigned int v28;  // [bp-0x50]
    unsigned long v29;  // [bp-0x40]
    unsigned long v3;  // [bp-0x160]
    unsigned long long|char *|unsigned int v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned int v34;  // eax
    unsigned long long v37;  // rax
    unsigned long long v4;  // [bp-0x158]
    unsigned long long v40;  // rax
    unsigned long long|char * v41;  // rax
    unsigned long long v48;  // rax
    char|unsigned long long|struct_1 * v5;  // [bp-0x140]
    unsigned long long|char * v53;  // rax
    unsigned long long|char * v55;  // rax
    unsigned long long|char * v56;  // rax
    unsigned long|unsigned long long|char *|unsigned int v58;  // rcx
    unsigned int v59;  // ecx
    unsigned long long|unsigned int v6;  // [bp-0x138]
    unsigned long|unsigned int|char|unsigned long long|char * v60;  // rdx
    unsigned long v61;  // rdx
    unsigned long long|struct_0 * v62;  // rbx
    unsigned long long v63;  // rbx
    unsigned long long|char * v64;  // rbp
    void *|unsigned long long|unsigned int v65;  // rsi
    char [2]|unsigned long|void *|unsigned long long|char * v66;  // rdi
    unsigned long long v67;  // r8
    unsigned long long v68;  // r9
    unsigned long long v69;  // r9
    char|unsigned int v7;  // [bp-0x12c]
    unsigned long long v70;  // r10d
    unsigned int v71;  // r11d
    unsigned long long v72;  // r11d
    unsigned long long|unsigned int v74;  // r12
    unsigned long long v75;  // r12
    unsigned long long v76;  // r12
    unsigned long long v77;  // r13
    unsigned long long|void *|char * v78;  // r14
    unsigned long long v79;  // cc_dep1
    unsigned long long v8;  // [bp-0x128]
    struct_0 *v80;  // fs
    unsigned long v9;  // [bp-0x120]

    v74 = v66;
    v64 = v65;
    v29 = *(v80 + 0x28);
    v62 = getenv("POSIXLY_CORRECT");
    sigemptyset(&caught_signals);
    if (v62 == 0)
    {
        sigaddset(&caught_signals, 0xa);
    }
    v9 = &stack_base-216;
    sigaction();
    if (v19 != 1)
    {
        sigaddset(&caught_signals, 0x2);
    }
    v20 = caught_signals;
    v21 = g_414290;
    v22 = g_4142a0;
    v23 = g_4142b0;
    v24 = g_4142c0;
    v25 = g_4142d0;
    v26 = g_4142e0;
    v27 = g_4142f0;
    if (sigismember(&caught_signals, 0xa) != 0)
    {
        v19 = &siginfo_handler;
        v28 = 0;
        sigaction();
    }
    if (sigismember(&caught_signals, 0x2) != 0)
    {
        v19 = &interrupt_handler;
        v28 = 0xc0000000;
        sigaction();
    }
    set_program_name();
    setlocale();
    bindtextdomain(&g_40e122, &g_40f200);
    textdomain(&g_40e122);
    atexit();
    v4 = 0;
    page_size = getpagesize();
    v3 = "Stuart Kemp";
    v2 = "David MacKenzie";
    v1 = "Paul Rubin";
    v0 = &usage;
    parse_gnu_standard_options_only();
    close_stdout_required = 0;
    v31 = 0;
    do
    {
        *(v31 + 4276576) = v31;
        v31 += 1;
    }
    while (v31 != 0x100);
    v15 = 0;
    if (((int)v66) > optind)
    {
        v60 = ((long long)optind);
        v12 = 0;
        v77 = 9223372036854775807;
        v5 = 0;
        v62 = v64 + v60 * 8;
        v7 = 0;
        v31 = ((long long)(!(((int)v60)) + ((int)v66))) + v60;
        v8 = 0;
        v74 = v64 + v31 * 8 + 8;
        v6 = 0;
    }
    else
    {
        v6 = 0;
        v77 = 9223372036854775807;
        v5 = 0;
        v7 = 0;
        v8 = 0;
        v12 = 0;
        /* goto 4208009; */
    }
    v78 = v62->field_0;
    v56 = strchr(v62->field_0, 0x3d);
    v31 = v78;
    v58 = 105;
    v60 = "ibs";
    while (true)
    {
        v31 += 1;
        v60 += 1;
        if (*(v31 + 0x1) == v58)
        {
            v58 = ((long long)*(v60));
            if (((long long)*(v60)) == 0)
            {
                v31 = ((long long)*(v31));
                tmp_3 = v31;
            }
        }
        if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
        {
            v31 = v78;
            v58 = 111;
            v60 = "obs";
            while (true)
            {
                v31 += 1;
                v60 += 1;
                if (*(v31 + 0x1) == v58)
                {
                    v58 = ((long long)*(v60));
                    if (((long long)*(v60)) == 0)
                    {
                        v31 = ((long long)*(v31));
                        tmp_3 = v31;
                        if (v31 == 61 || ((long long)tmp_3) == 0)
                        {
                            break;
                        }
                    }
                }
                if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                {
                    v31 = v78;
                    v58 = 98;
                    v60 = "bs";
                    while (true)
                    {
                        v31 += 1;
                        v60 += 1;
                        if (*(v31 + 0x1) == v58)
                        {
                            v58 = ((long long)*(v60));
                            if (((long long)*(v60)) == 0)
                            {
                                v31 = ((long long)*(v31));
                                tmp_3 = v31;
                                if (v31 == 61 || ((long long)tmp_3) == 0)
                                {
                                    break;
                                }
                            }
                        }
                        if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                        {
                            v55 = v78;
                            v58 = 99;
                            v60 = "cbs";
                            while (true)
                            {
                                v55 += 1;
                                v60 += 1;
                                if (*(v55 + 0x1) == v58)
                                {
                                    v58 = ((long long)*(v60));
                                    if (((long long)*(v60)) == 0)
                                    {
                                        v55 = ((long long)*(v55));
                                        tmp_3 = v55;
                                        if (((long long)tmp_3) == 0 || v55 == 61)
                                        {
                                            v31 = &conversion_blocksize;
                                            v60 = 1;
                                            break;
                                        }
                                    }
                                }
                                if (*(v55 + 0x1) != v58 || ((long long)*(v60)) == 0 && ((long long)tmp_3) != 0 && v55 != 61)
                                {
                                    v11 = v5;
                                    v10 = v69;
                                    v79 = strchr(v64, 0x42);
                                    v58 = "skip";
                                    v53 = v78;
                                    v60 = ((char)(v78 != 0));
                                    while (true)
                                    {
                                        v53 += 1;
                                        v58 += 1;
                                        if (*(v53 + 0x1) == sil<1>)
                                        {
                                            v65 = ((long long)*(v58));
                                            if (((long long)*(v58)) == 0)
                                            {
                                                v53 = ((long long)*(v53));
                                                tmp_3 = v53;
                                            }
                                        }
                                        if (*(v53 + 0x1) != sil<1> || ((long long)*(v58)) == 0 && ((long long)tmp_3) != 0 && v53 != 61)
                                        {
                                            v53 = v78;
                                            v65 = 105;
                                            v58 = "iseek";
                                            while (true)
                                            {
                                                v53 += 1;
                                                v58 += 1;
                                                if (*(v53 + 0x1) == v65)
                                                {
                                                    v65 = ((long long)*(v58));
                                                    v53 = ((long long)*(v53));
                                                    tmp_1 = v53;
                                                }
                                                v65 = 115;
                                                v58 = "seek";
                                                v41 = ((long long)(*(v78) == 111)) + v78;
                                                while (true)
                                                {
                                                    v41 += 1;
                                                    v58 += 1;
                                                    if (*(v41 + 0x1) == v65)
                                                    {
                                                        v65 = ((long long)*(v58));
                                                        if (((long long)*(v58)) == 0)
                                                        {
                                                            v41 = ((long long)*(v41));
                                                            tmp_1 = v41;
                                                            if (tmp_1 == 61 || ((long long)v41) == 0)
                                                            {
                                                                v12 = v5;
                                                                v31 = 0;
                                                                v60 = 0;
                                                                v8 = v6;
                                                            }
                                                        }
                                                    }
                                                    if (*(v41 + 0x1) != v65 || ((long long)*(v58)) == 0 && tmp_1 != 61 && ((long long)v41) != 0)
                                                    {
                                                        v56 = v78;
                                                        v65 = 99;
                                                        v58 = "count";
                                                        while (true)
                                                        {
                                                            v56 += 1;
                                                            v58 += 1;
                                                            if (*(v56 + 0x1) != v65)
                                                            {
                                                                v76 = (long long)quote();
                                                                dcgettext(0x0, &g_40e27c, 0x5);
                                                                nl_error();
                                                                usage(); /* do not return */
                                                            }
                                                            v65 = ((long long)*(v58));
                                                            v56 = ((long long)*(v56));
                                                            tmp_1 = v56;
                                                            if (tmp_1 != 61 && ((long long)v56) != 0)
                                                            {
                                                                v76 = (long long)quote();
                                                                dcgettext(0x0, &g_40e27c, 0x5);
                                                                nl_error();
                                                                usage(); /* do not return */
                                                            }
                                                            if (tmp_1 == 61 || ((long long)v56) == 0)
                                                            {
                                                                v7 = v5;
                                                                v77 = v6;
                                                                v31 = 0;
                                                                v60 = 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if (*(v53 + 0x1) == v65 && ((long long)*(v58)) == 0)
                                            {
                                                v5 = v60;
                                                v31 = 0;
                                                v60 = 0;
                                                v6 = v69;
                                            }
                                        }
                                        v5 = v60;
                                        v31 = 0;
                                        v60 = 0;
                                        v6 = v69;
                                    }
                                }
                            }
                            break;
                        }
                    }
                    if (v5 == 0 && v69 >= v60 && (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58) && (v31 != 61 || *(v31 + 0x1) != v58) && (((long long)tmp_3) != 0 || *(v31 + 0x1) != v58))
                    {
                        *(v31) = v69;
                        break;
                    }
                    else if (v5 == 0 && v69 >= v60 && (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58) && (v31 != 61 || *(v31 + 0x1) != v58) && (((long long)tmp_3) != 0 || *(v31 + 0x1) != v58) && v31 == 0)
                    {
                        v62 += 8;
                    }
                    else if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                    {
                        v62 = (long long)quote();
                        v58 = dcgettext(0x0, &g_40e2e7, 0x5);
                        break;
                    }
                    else if (v69 >= v60 && (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58) && (v31 != 61 || *(v31 + 0x1) != v58) && (((long long)tmp_3) != 0 || *(v31 + 0x1) != v58))
                    {
                        v5 = v70;
                        v62 = (long long)quote();
                        v58 = dcgettext(0x0, &g_40e2e7, 0x5);
                        break;
                    }
                }
            }
            if (*(v31 + 0x1) == v58 && ((long long)*(v60)) != 0)
            {
                if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                {
                    v5 = v70;
                    v62 = (long long)quote();
                }
                else if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                {
                    v62 = (long long)quote();
                }
                else if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                {
                    v62 += 8;
                }
            }
        }
        if (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58)
        {
            v62 = (long long)quote();
            if (v69 == 9223372036854775807)
            {
                v62 = (long long)quote();
                v58 = dcgettext(0x0, &g_40e2e7, 0x5);
            }
            nl_error();
        }
        if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v5 != 0 && v69 != 9223372036854775807 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
        {
            v5 = v70;
            v62 = (long long)quote();
        }
    }
    if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0 || v5 == 0 && ((long long)*(v60)) == 0 && v69 != 9223372036854775807 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
    {
        v62 += 8;
    }
    else if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))) || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
    {
        v66 = v17;
    }
    v66 = v17;
    v62 += 8;
    if (v17[0] == 120)
    {
        v66 = v17 + 1;
        /* goto 4211853; */
    }
    if (!(v17[0] != 66))
    {
        v31 = v66 + 1;
        v17 = v66 + 1;
    }
    else if (v17[0] == 120)
    {
        /* goto 4211360; */
    }
    if (v15 != 0)
    {
        output_blocksize = 0;
        input_blocksize = 0;
    }
    if (((int)v66) <= optind || v15 == 0)
    {
        conversions_mask = conversions_mask | 0x800;
        if (input_blocksize == 0)
        {
            input_blocksize = 0x200;
        }
        if (output_blocksize == 0)
        {
            output_blocksize = 0x200;
        }
    }
    if (conversion_blocksize == 0)
    {
        conversions_mask = conversions_mask & -25;
    }
    if ((((int)input_flags) & 0x101000) != 0)
    {
        input_flags = input_flags | 0x101000;
    }
    v65 = ((long long)output_flags);
    if (...)
    {
        if (v17[1] == 120)
        {
            v66 = v17 + 2;
            if (*(v31 + 1) != 66)
            {
                /* goto 4211360; */
            }
        }
    }
    if (v17[0] == 120 || v17[0] == 66 && *(v31 + 1) == 66 && v17[1] == 120 && v66[1] != 0 || *(v31 + 1) == 66 && ((long long)(((char)output_flags) & 1)) == 0 && v17[1] == 120 && (((int)conversions_mask) & 7 & ((int)(((long long)(conversions_mask & 7)) - 1))) != 0)
    {
        v13 = v70;
        v11 = v69;
        v10 = v66;
        v31 = strchr(v66, 0x42);
        v70 = ((long long)v13);
    }
    if (...)
    {
        v10 = v70;
        v31 = xstrtoumax();
        v58 = v72;
        v71 = ((int)(v72 & -2));
        if ((v10 & -2) == 0)
        {
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
            {
                if ([D] amd64g_calculate_condition(0x0<64>, 0x30<64>, Load(addr=stack_base-240, size=8, endness=Iend_LE), Load(addr=stack_base-224, size=8, endness=Iend_LE), cc_ndep<8>) == 0)
                {
                    v68 = ((long long)(v16 * v18));
                    if (((long long)(v16 * v18)) == 0)
                    {
                        v10 = v71;
                        v11 = v68;
                        v31 = strncmp(rbp<8>, "0x", 0x2);
                        v72 = ((long long)v10);
                        v69 = v11;
                        if (v31 == 0)
                        {
                            v14 = v11;
                            v13 = ((int)v72);
                            v11 = (long long)quote_n();
                            v10 = (long long)quote_n();
                            dcgettext(0x0, &g_40f228, 0x5);
                            nl_error();
                            v72 = ((int)v13);
                            v69 = v14;
                            /* goto 4211499; */
                        }
                    }
                    else
                    {
                        v58 = ((int)(v58 | v10));
                        v69 = (v58 != 2? 9223372036854775807 : ((long long)(v16 * v18)));
                        v72 = ((long long)(v58 != 2));
                        /* goto 4211499; */
                    }
                }
            }
            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) || [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, Load(addr=stack_base-240, size=8, endness=Iend_LE), Load(addr=stack_base-224, size=8, endness=Iend_LE), cc_ndep<8>) != 0)
            {
                v69 = 9223372036854775807;
                v72 = 1;
            }
        }
        else
        {
            v72 = v31;
            v69 = 0;
        }
        v70 = v72;
        /* goto 4211196; */
    }
    if (v56 != 0)
    {
        v64 = v56 + 1;
        v58 = 105;
        v31 = v78;
        v60 = "if";
        while (true)
        {
            v31 += 1;
            v60 += 1;
            if (*(v31 + 0x1) == v58)
            {
                v58 = ((long long)*(v60));
                if (((long long)*(v60)) == 0)
                {
                    v31 = ((long long)*(v31));
                    tmp_1 = v31;
                    if (((long long)v31) == 0 || tmp_1 == 61)
                    {
                        input_file = v64;
                        break;
                    }
                }
            }
            if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && ((long long)v31) != 0 && tmp_1 != 61)
            {
                v31 = v78;
                v58 = 111;
                v60 = "of";
                while (true)
                {
                    v31 += 1;
                    v60 += 1;
                    if (*(v31 + 0x1) == v58)
                    {
                        v58 = ((long long)*(v60));
                        if (((long long)*(v60)) == 0)
                        {
                            v31 = ((long long)*(v31));
                            tmp_3 = v31;
                            if (v31 == 61 || ((long long)tmp_3) == 0)
                            {
                                output_file = v64;
                                break;
                            }
                        }
                    }
                    if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                    {
                        v31 = v78;
                        v58 = 99;
                        v60 = "conv";
                        while (true)
                        {
                            v31 += 1;
                            v60 += 1;
                            if (*(v31 + 0x1) == v58)
                            {
                                v58 = ((long long)*(v60));
                                if (((long long)*(v60)) == 0)
                                {
                                    v31 = ((long long)*(v31));
                                    tmp_3 = v31;
                                    if (v31 == 61 || ((long long)tmp_3) == 0)
                                    {
                                        conversions_mask = conversions_mask | parse_symbols();
                                        break;
                                    }
                                }
                            }
                            if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                            {
                                v31 = v78;
                                v58 = 105;
                                v60 = "iflag";
                                while (true)
                                {
                                    v31 += 1;
                                    v60 += 1;
                                    if (*(v31 + 0x1) == v58)
                                    {
                                        v58 = ((long long)*(v60));
                                        if (((long long)*(v60)) == 0)
                                        {
                                            v31 = ((long long)*(v31));
                                            tmp_3 = v31;
                                            if (v31 == 61 || ((long long)tmp_3) == 0)
                                            {
                                                input_flags = input_flags | parse_symbols();
                                                break;
                                            }
                                        }
                                    }
                                    if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                                    {
                                        v31 = v78;
                                        v58 = 111;
                                        v60 = "oflag";
                                        while (true)
                                        {
                                            v31 += 1;
                                            v60 += 1;
                                            if (*(v31 + 0x1) == v58)
                                            {
                                                v58 = ((long long)*(v60));
                                                if (((long long)*(v60)) == 0)
                                                {
                                                    v31 = ((long long)*(v31));
                                                    tmp_1 = v31;
                                                    if (((long long)v31) == 0 || tmp_1 == 61)
                                                    {
                                                        output_flags = output_flags | parse_symbols();
                                                        break;
                                                    }
                                                }
                                            }
                                            if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && ((long long)v31) != 0 && tmp_1 != 61)
                                            {
                                                v31 = v78;
                                                v58 = 115;
                                                v60 = "status";
                                                while (true)
                                                {
                                                    v31 += 1;
                                                    v60 += 1;
                                                    if (v58 == *(v31 + 0x1))
                                                    {
                                                        v58 = ((long long)*(v60));
                                                        if (((long long)*(v60)) == 0)
                                                        {
                                                            v31 = ((long long)*(v31));
                                                            tmp_3 = v31;
                                                            if (v31 == 61 || ((long long)tmp_3) == 0)
                                                            {
                                                                status_level = parse_symbols();
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    if (v58 != *(v31 + 0x1) || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                                                    {
                                                        v10 = &stack_base-232;
                                                        v16 = 0;
                                                        v70 = xstrtoumax();
                                                        v31 = ((int)(v70 & -2));
                                                    }
                                                }
                                                if (v58 != *(v31 + 0x1) || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                                                {
                                                    v66 = v17;
                                                }
                                                else if (v58 == *(v31 + 0x1) && ((long long)*(v60)) == 0 && (v31 == 61 || ((long long)tmp_3) == 0))
                                                {
                                                    v62 += 8;
                                                }
                                            }
                                        }
                                        if (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58)
                                        {
                                            v62 += 8;
                                        }
                                        else if (*(v31 + 0x1) == v58 && (((long long)v31) == 0 || tmp_1 == 61 || ((long long)*(v60)) != 0))
                                        {
                                            if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && ((long long)v31) != 0 && tmp_1 != 61)
                                            {
                                                v66 = v17;
                                            }
                                        }
                                    }
                                }
                                if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                                {
                                    v66 = v17;
                                }
                                else if (*(v31 + 0x1) == v58 && (v31 == 61 || ((long long)tmp_3) == 0 || ((long long)*(v60)) != 0))
                                {
                                    if (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58)
                                    {
                                        v62 += 8;
                                    }
                                }
                            }
                        }
                        if (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58)
                        {
                            v62 += 8;
                        }
                        else if (*(v31 + 0x1) == v58 && (v31 == 61 || ((long long)tmp_3) == 0 || ((long long)*(v60)) != 0))
                        {
                            if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                            {
                                v66 = v17;
                            }
                        }
                    }
                }
                if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && v31 != 61 && ((long long)tmp_3) != 0)
                {
                    v66 = v17;
                }
                else if (*(v31 + 0x1) == v58 && (v31 == 61 || ((long long)tmp_3) == 0 || ((long long)*(v60)) != 0))
                {
                    if (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58)
                    {
                        v62 += 8;
                    }
                }
            }
        }
        if (((long long)*(v60)) == 0 || *(v31 + 0x1) != v58)
        {
            v62 += 8;
        }
        else if (*(v31 + 0x1) == v58 && (((long long)v31) == 0 || tmp_1 == 61 || ((long long)*(v60)) != 0))
        {
            if (*(v31 + 0x1) != v58 || ((long long)*(v60)) == 0 && ((long long)v31) != 0 && tmp_1 != 61)
            {
                v66 = v17;
            }
        }
    }
    else
    {
        v76 = (long long)quote();
        dcgettext(0x0, &g_40e27c, 0x5);
        nl_error();
        usage(); /* do not return */
    }
    if (((long long)(((char)output_flags) & 1)) == 0)
    {
        if (v5 != 0)
        {
            input_flags = input_flags | 8;
        }
        v59 = ((int)input_flags);
        v37 = v6;
        if (((long long)(((char)input_flags) & 8)) != 0)
        {
            if (skip_records != 0)
            {
                tmp_4 = (skip_records >> 63 CONCAT skip_records) % input_blocksize;
                skip_records = ((long long)((skip_records >> 63 CONCAT skip_records) % input_blocksize));
                skip_bytes = ((long long)(tmp_4 >> 64));
            }
        }
        else
        {
            if (skip_records != 0)
            {
                skip_records = v37;
            }
        }
        v58 = ((long long)(0 == 0? ((int)rcx<8>) : ((int)rcx<8>) | 4));
        if (((long long)(((char)(0 == 0? input_flags : input_flags | 4)) & 4)) != 0)
        {
            if (r13<8> != 9223372036854775807)
            {
                max_records = ((long long)((r13<8> >> 63 CONCAT r13<8>) % input_blocksize));
                max_bytes = ((long long)((r13<8> >> 63 CONCAT r13<8>) % input_blocksize >> 64));
            }
        }
        else
        {
            if (r13<8> != 9223372036854775807)
            {
                max_records = r13<8>;
            }
        }
        if (v12 != 0)
        {
            v65 = ((long long)(((int)output_flags) | 16));
            output_flags = output_flags | 16;
        }
        if (((long long)(sil<1> & 16)) != 0)
        {
            if (seek_records != 0)
            {
                tmp_4 = (seek_records >> 63 CONCAT seek_records) % output_blocksize;
                seek_records = ((long long)((seek_records >> 63 CONCAT seek_records) % output_blocksize));
                seek_bytes = ((long long)(tmp_4 >> 64));
            }
        }
        else
        {
            if (seek_records != 0)
            {
                seek_records = 0;
            }
        }
        v62 = ((long long)conversions_mask);
        v34 = ((int)(((int)v58) & 1));
        if ((conversions_mask & 0x800 | ((int)v58) & 1) == 0)
        {
            if (skip_records == 0)
            {
                if (max_records - 1 > 9223372036854775805)
                {
                    if (((long long)(((char)((((int)v58) | ((int)rsi<8>)) >> 8)) & 64)) == 0)
                    {
                        warn_partial_read = 0;
                        v40 = &iread;
                        /* goto 4206078; */
                    }
                }
            }
            if (max_records - 1 <= 9223372036854775805 || ((long long)(((char)((((int)v58) | ((int)rsi<8>)) >> 8)) & 64)) != 0 || skip_records != 0)
            {
                warn_partial_read = 1;
                v40 = &iread;
            }
        }
        else
        {
            warn_partial_read = 0;
            v40 = (v34 == 0? &iread : 4218912);
        }
        iread_fnc = rax<8>;
        input_flags = ((int)v58) & -2;
        if ((((int)conversions_mask) & 7 & ((int)(((long long)(conversions_mask & 7)) - 1))) == 0)
        {
            if (!((((int)conversions_mask) & 24 & ((int)(((long long)(conversions_mask & 24)) - 1))) == 0))
            {
                dcgettext(0x0, &g_40f298, 0x5);
                nl_error();
            }
            else if ((((int)conversions_mask) & 96 & ((int)(((long long)(conversions_mask & 96)) - 1))) == 0)
            {
                if ((((int)conversions_mask) & 0x3000 & ((int)(((long long)(conversions_mask & 0x3000)) - 1))) == 0)
                {
                    v60 = ((long long)(((int)rsi<8>) & 16386));
                    v12 = ((int)(((long long)(((int)v58) & 16386)) - 1)) & ((int)v58) & 16386 | ((int)v60) - 1 & ((int)rsi<8>) & 16386;
                    if ((((int)(((long long)(((int)v58) & 16386)) - 1)) & ((int)v58) & 16386 | ((int)(v60 - 1)) & ((int)rsi<8>) & 16386) == 0)
                    {
                        if (((long long)(v58 & 2)) != 0)
                        {
                            i_nocache = 1;
                            i_nocache_eof = ((char)((max_records | max_bytes) == 0));
                            input_flags = ((int)v58) & -0x4;
                        }
                        if (((long long)(sil<1> & 2)) != 0)
                        {
                            o_nocache = 1;
                            o_nocache_eof = ((char)((max_records | max_bytes) == 0));
                            output_flags = ((int)rsi<8>) & -3;
                        }
                        if (((long long)(((char)conversions_mask) & 1)) != 0)
                        {
                            v40 = &trans_table;
                            do
                            {
                                tmp_9 = ((long long)*(v40));
                                v40 += 1;
                                *(v40 + 1) = *(tmp_9 + 4256928);
                            }
                            while (v40 != 4276832);
                            translation_needed = 1;
                        }
                        if (((long long)(((char)conversions_mask) & 64)) != 0)
                        {
                            v65 = *(__ctype_toupper_loc());
                            v40 = &trans_table;
                            do
                            {
                                tmp_9 = ((long long)*(v40));
                                v40 += 1;
                                *(v40 + 1) = ((char)*(v65 + tmp_9 * 4));
                            }
                            while (v40 != 4276832);
                        }
                        else if (((long long)(((char)conversions_mask) & 32)) != 0)
                        {
                            v65 = *(__ctype_tolower_loc());
                            v40 = &trans_table;
                            do
                            {
                                tmp_9 = ((long long)*(v40));
                                v40 += 1;
                                *(v40 + 1) = ((char)*(v65 + tmp_9 * 4));
                            }
                            while (v40 != 4276832);
                        }
                        if (((long long)(((char)conversions_mask) & 64)) != 0 || ((long long)(((char)conversions_mask) & 32)) != 0)
                        {
                            translation_needed = 1;
                        }
                        if (((long long)(((char)conversions_mask) & 2)) != 0)
                        {
                            v40 = &trans_table;
                            do
                            {
                                tmp_9 = ((long long)*(v40));
                                v40 += 1;
                                *(v40 + 1) = *(tmp_9 + 4257440);
                            }
                            while (v40 != 4276832);
                        }
                        else if (((long long)(((char)conversions_mask) & 4)) != 0)
                        {
                            v40 = &trans_table;
                            do
                            {
                                tmp_9 = ((long long)*(v40));
                                v40 += 1;
                                *(v40 + 1) = *(tmp_9 + 4257184);
                            }
                            while (v40 != 4276832);
                        }
                        if (((long long)(((char)conversions_mask) & 2)) != 0 || ((long long)(((char)conversions_mask) & 4)) != 0)
                        {
                            translation_needed = 1;
                            newline_character = 37;
                            space_character = 64;
                        }
                        v5 = __errno_location();
                        if (input_file != 0)
                        {
                            v48 = ifd_reopen();
                        }
                        else
                        {
                            input_file = dcgettext(0x0, &g_40e300, 0x5);
                            set_fd_flags();
                            /* goto 4206544; */
                        }
                    }
                }
            }
            if ((((int)conversions_mask) & 96 & ((int)(((long long)(conversions_mask & 96)) - 1))) != 0 || (((int)conversions_mask) & 24 & ((int)(((long long)(conversions_mask & 24)) - 1))) != 0)
            {
                dcgettext(0x0, &g_40f2c0, 0x5);
                nl_error();
            }
            if ((((int)conversions_mask) & 96 & ((int)(((long long)(conversions_mask & 96)) - 1))) != 0 || (((int)conversions_mask) & 0x3000 & ((int)(((long long)(conversions_mask & 0x3000)) - 1))) != 0 || (((int)conversions_mask) & 24 & ((int)(((long long)(conversions_mask & 24)) - 1))) != 0)
            {
                dcgettext(0x0, &g_40f2e0, 0x5);
                nl_error();
            }
            if ((((int)conversions_mask) & 96 & ((int)(((long long)(conversions_mask & 96)) - 1))) != 0 || (((int)conversions_mask) & 0x3000 & ((int)(((long long)(conversions_mask & 0x3000)) - 1))) != 0 || (((int)conversions_mask) & 24 & ((int)(((long long)(conversions_mask & 24)) - 1))) != 0 || (((int)(((long long)(((int)v58) & 16386)) - 1)) & ((int)v58) & 16386 | ((int)(v60 - 1)) & ((int)rsi<8>) & 16386) != 0)
            {
                dcgettext(0x0, &g_40f300, 0x5);
                nl_error();
            }
            if (...)
            {
                v74 = (long long)quotearg_style();
                dcgettext(0x0, &g_40e30f, 0x5);
                nl_error();
            }
            if (...)
            {
                v32 = lseek(0x0, 0x0, 0x1);
                input_seekable = ((char)(!(rax<8>) >> 63));
                input_offset = (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))? 0 : rax<8>);
                input_seek_errno = v5->field_0;
                if (!(output_file != 0))
                {
                    output_file = dcgettext(0x0, &g_40e321, 0x5);
                    set_fd_flags();
                }
                else if (seek_records == 0)
                {
                    /* goto 4206709; */
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                {
                    /* goto 4209772; */
                }
            }
            if (...)
            {
                if (((long long)(((char)(conversions_mask >> 8)) & 2)) == 0)
                {
                    dcgettext(0x0, &g_40f328, 0x5);
                    nl_error();
                    __stack_chk_fail(); /* do not return */
                }
            }
            if (...)
            {
                v32 = ifd_reopen();
            }
            if (...)
            {
                v32 = ifd_reopen();
            }
            if (...)
            {
                if (seek_records != 0)
                {
                    if (((long long)(g_41438d & 2)) == 0)
                    {
                        v32 = iftruncate.constprop.0();
                        if (v32 != 0)
                        {
                            v32 = ifstat();
                            if (!(v32 == 0))
                            {
                                v74 = (long long)quotearg_style();
                                dcgettext(0x0, &g_40e1ce, 0x5);
                                nl_error();
                            }
                            else if (((((int)v21) & 0xf000) - 0x4000 & -0x5000) == 0)
                            {
                                v62 = (long long)quotearg_style();
                                dcgettext(0x0, &g_40f378, 0x5);
                                nl_error();
                            }
                        }
                    }
                }
            }
            if (...)
            {
                v74 = (long long)quotearg_style();
                dcgettext(0x0, &g_40e30f, 0x5);
                nl_error();
                dcgettext(0x0, &g_40f328, 0x5);
                nl_error();
                __stack_chk_fail(); /* do not return */
            }
            if (...)
            {
                start_time = (long long)gethrxtime();
                next_time = start_time + 0x3b9aca00;
                if (!(skip_records == 0))
                {
                    v74 = 1;
                    v62 = input_blocksize * v60;
                }
                else if (skip_bytes != 0)
                {
                    v62 = 0;
                }
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                {
                    v74 = 0;
                    v62 = rbx<8> + skip_bytes;
                    v74 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, Load(addr=0x4143b0<64>, size=8, endness=Iend_LE), Conv(1->64, ((Load(addr=0x41438c<64>, size=4, endness=Iend_LE) & 0x200<32>) < 0x1<32>))));
                }
                if (skip_records != 0 || skip_bytes != 0)
                {
                    v32 = skip();
                    if (v32 != 0 || reg_112<4> != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))) || rbx<8> != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                    {
                        if (status_level != 1)
                        {
                            v74 = (long long)quotearg_n_style_colon();
                            dcgettext(0x0, &g_40f3b0, 0x5);
                            nl_error();
                        }
                    }
                }
                if ((seek_records | seek_bytes) != 0)
                {
                    v18 = seek_bytes;
                    v62 = (long long)skip();
                    if (v62 != 0)
                    {
                        v60 = output_blocksize;
                    }
                    else
                    {
                        v60 = v18;
                        if (v18 == 0)
                        {
                            /* goto 4207136; */
                        }
                    }
                    if (v62 != 0 || v18 != 0)
                    {
                        memset(obuf, 0x0, rdx<8>);
                        while (true)
                        {
                            if (v62 != 0)
                            {
                                v32 = iwrite.constprop.0();
                                if (output_blocksize == v32)
                                {
                                    v62 -= 1;
                                    v62 = v18;
                                    if (v18 == 0)
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    v75 = (long long)quotearg_style();
                                    dcgettext(0x0, &g_40e1c0, 0x5);
                                    nl_error();
                                    quit.constprop.0(); /* do not return */
                                }
                            }
                            else
                            {
                                v62 = v18;
                            }
                            if (v62 == 0 || output_blocksize == v32)
                            {
                                v32 = iwrite.constprop.0();
                                if (v32 == v62)
                                {
                                    break;
                                }
                                v75 = (long long)quotearg_style();
                                dcgettext(0x0, &g_40e1c0, 0x5);
                                nl_error();
                                quit.constprop.0(); /* do not return */
                            }
                        }
                    }
                }
                v6 = 0;
                if ((max_records | max_bytes) != 0)
                {
                    if (ibuf == 0)
                    {
                        alloc_ibuf.part.0();
                    }
                    alloc_obuf();
                    v6 = 0;
                    v7 = -1;
                    while (true)
                    {
                        if (status_level == 4)
                        {
                            v32 = gethrxtime();
                            if (v32 >= next_time)
                            {
                                print_xfer_stats();
                                next_time = next_time + 0x3b9aca00;
                            }
                        }
                        v65 = ((int)conversions_mask);
                        if (False)
                        {
                            v74 = (long long)quotearg_style();
                            dcgettext(0x0, &g_40e1fe, 0x5);
                            nl_error();
                            print_stats();
                            v64 = input_blocksize - 0;
                            invalidate_cache();
                            if (input_seekable == 0)
                            {
                                if (input_seek_errno != 29)
                                {
                                    v5->field_0 = input_seek_errno;
                                    v74 = (long long)quotearg_n_style_colon();
                                    dcgettext(0x0, &g_40e1ee, 0x5);
                                    nl_error();
                                }
                            }
                            else
                            {
                                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                                {
                                    input_offset = input_offset + input_blocksize - 0;
                                    v32 = lseek(0x0, 0x0, 0x1);
                                    if (input_offset + input_blocksize != v32)
                                    {
                                        v74 = input_offset + input_blocksize - 0 - v32;
                                        if (status_level != 1 && (((char)(input_offset + input_blocksize - 0 - v32 >> 63)) || input_blocksize < v74))
                                        {
                                            dcgettext(0x0, &g_40f3d8, 0x5);
                                            nl_error();
                                        }
                                        v32 = lseek(0x0, ((int)v74), 0x1);
                                    }
                                }
                                else
                                {
                                    v74 = (long long)quotearg_style();
                                    dcgettext(0x0, &g_40f450, 0x5);
                                    nl_error();
                                    /* goto 4208429; */
                                }
                            }
                            if (False)
                            {
                                input_offset = 18446744069414584319;
                                if (v5->field_0 == 0)
                                {
                                    dcgettext(0x0, &g_40f408, 0x5);
                                    nl_error();
                                }
                            }
                            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) && input_seekable != 0 || input_seekable == 0 && input_seek_errno != 29)
                            {
                                input_seekable = 0;
                                input_seek_errno = 29;
                                v6 = 1;
                            }
                            v74 = 0;
                            v6 = 1;
                        }
                        if (r_full + r_partial < ((long long)(max_bytes != 0)) + max_records)
                        {
                            v67 = ibuf;
                            if ((((short)conversions_mask) & 0x500) == 0x500)
                            {
                                ((unsigned int)v65) = ((long long)((v65 & 24) != 0? 32 : v65 & 24));
                                v67 = memset(ibuf, ((unsigned int)v65), input_blocksize);
                            }
                            if (r_full + r_partial >= max_records)
                            {
                                v60 = max_bytes;
                                v65 = v67;
                                v66 = 0;
                                v32 = *(0x414260)();
                                v74 = v32;
                                v79 = v32;
                            }
                            else
                            {
                                v60 = input_blocksize;
                                v65 = v67;
                                v66 = 0;
                                v32 = *(0x414260)();
                                v74 = v32;
                                v79 = v32;
                            }
                            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                            {
                                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                                {
                                    v32 = input_offset + r12<8>;
                                    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                                    {
                                        input_offset = v32;
                                    }
                                    else
                                    {
                                        input_offset = 18446744069414584319;
                                    }
                                }
                                if (i_nocache != 0)
                                {
                                    invalidate_cache();
                                }
                                if (r12<8> < input_blocksize)
                                {
                                    r_partial = r_partial + 1;
                                    if ((((short)conversions_mask) & 0x400) != 0)
                                    {
                                        if ((((short)conversions_mask) & 0x100) == 0)
                                        {
                                            v61 = rdx<8> - v74;
                                            v65 = ((long long)(conversions_mask & 24));
                                            if ((((char)conversions_mask) & 24) != 0)
                                            {
                                                v65 = 32;
                                            }
                                            memset(ibuf + v74, v65, v61);
                                            v60 = input_blocksize;
                                        }
                                    }
                                }
                                else
                                {
                                    r_full = r_full + 1;
                                }
                                v78 = ibuf;
                                v66 = obuf;
                                if (ibuf != obuf)
                                {
                                    if (translation_needed != 0)
                                    {
                                        if (r12<8> != 0)
                                        {
                                            v58 = v78 + r12<8>;
                                            v32 = v78;
                                            do
                                            {
                                                tmp_9 = ((long long)*(v32));
                                                v32 += 1;
                                                *(v32 + 1) = *(tmp_9 + 4276576);
                                            }
                                            while (v32 != v58);
                                        }
                                    }
                                    if (((long long)(((char)conversions_mask) & 128)) != 0)
                                    {
                                        if ((translation_needed == 0 || r12<8> != 0) && (r12<8> != 0 || translation_needed != 0))
                                        {
                                            v65 = -1;
                                            if (((char)(((int)r12<8>) & 1)) != ((char)(((long long)!(*(&stack_base-300))) >> 31)))
                                            {
                                                v74 = r12<8> - 1;
                                                v65 = ((long long)*(ibuf + v74));
                                            }
                                            v32 = r12<8>;
                                            if (r12<8> > 1)
                                            {
                                                do
                                                {
                                                    *(v78 + v32) = *(v78 + v32 + 2);
                                                    v32 -= 2;
                                                }
                                                while (v32 > 1);
                                            }
                                            if (v7 != -1)
                                            {
                                                v32 = ((long long)((char)v7));
                                                v7 = reg_64<4>;
                                                tmp_17 = v32;
                                                *(ibuf + 1) = tmp_17;
                                            }
                                            else
                                            {
                                                v7 = reg_64<4>;
                                                v78 = ibuf + 1;
                                            }
                                        }
                                    }
                                    if (((long long)(dl<1> & 8)) != 0)
                                    {
                                        copy_with_block();
                                    }
                                    else if ((((char)((int)rdx<8>)) & 16) != 0)
                                    {
                                        copy_with_unblock();
                                    }
                                    else
                                    {
                                        while (true)
                                        {
                                            v65 = v78;
                                            tmp_6 = v74;
                                            tmp_28 = v74 < output_blocksize - oc;
                                            v66 += oc;
                                            ((unsigned int)v60) = (v74 < output_blocksize - oc? v74 : output_blocksize - oc);
                                            v74 -= (v74 < output_blocksize - oc? v74 : output_blocksize - oc);
                                            v78 += (tmp_28? tmp_6 : output_blocksize - oc);
                                            memcpy(v66, v65, ((unsigned int)v60));
                                            oc = (tmp_28? tmp_6 : output_blocksize - oc) + oc;
                                            if (oc >= output_blocksize)
                                            {
                                                write_output();
                                            }
                                            if (v74 == 0)
                                            {
                                                break;
                                            }
                                            v66 = obuf;
                                        }
                                    }
                                }
                                else
                                {
                                    v32 = iwrite.constprop.0();
                                    w_bytes = w_bytes + v32;
                                    if (v32 == v74)
                                    {
                                        if (input_blocksize != v74)
                                        {
                                            w_partial = w_partial + 1;
                                        }
                                        else
                                        {
                                            w_full = w_full + 1;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                i_nocache_eof = i_nocache_eof | i_nocache;
                                if (o_nocache != 0)
                                {
                                    v12 = ((int)(((long long)(((char)(conversions_mask >> 8)) & 2)) == 0));
                                }
                                o_nocache_eof = ((char)(v12 | ((int)o_nocache_eof)));
                                o_nocache_eof = o_nocache_eof & 1;
                            }
                        }
                        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) || r_full + r_partial >= ((long long)(max_bytes != 0)) + max_records)
                        {
                            if (v7 != -1)
                            {
                                v18 = ((char)v7);
                                if (((long long)(v32 & 8)) != 0)
                                {
                                    copy_with_block();
                                }
                                else if (((long long)(v32 & 16)) == 0)
                                {
                                    v60 = oc + 1;
                                    *(obuf + oc) = ((char)v7);
                                    oc = oc + 1;
                                    if (v60 >= output_blocksize)
                                    {
                                        write_output();
                                    }
                                }
                                else
                                {
                                    copy_with_unblock();
                                }
                            }
                            if (((long long)(v32 & 8)) != 0)
                            {
                                v62 = col;
                                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
                                {
                                    if (conversion_blocksize <= col)
                                    {
                                    }
                                    else
                                    {
                                        do
                                        {
                                            v32 = oc + 1;
                                            *(obuf + oc) = space_character;
                                            oc = oc + 1;
                                            if (v32 >= output_blocksize)
                                            {
                                                write_output();
                                            }
                                            v62 += 1;
                                        }
                                        while (v62 < conversion_blocksize);
                                    }
                                }
                            }
                            if (((long long)(v32 & 16)) != 0 && (conversion_blocksize <= col || col != 0) && (col != 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)))) && (col != 0 || ((long long)(v32 & 8)) != 0))
                            {
                                v32 = oc + 1;
                                *(obuf + oc) = newline_character;
                                oc = oc + 1;
                                if (v32 >= output_blocksize)
                                {
                                    write_output();
                                }
                            }
                            if (oc != 0)
                            {
                                v32 = iwrite.constprop.0();
                                w_bytes = w_bytes + v32;
                                if (v32 != 0)
                                {
                                    w_partial = w_partial + 1;
                                }
                            }
                        }
                        if (ibuf == obuf && r_full + r_partial < ((long long)(max_bytes != 0)) + max_records && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))) && v32 != v74 || oc != 0 && (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) || r_full + r_partial >= ((long long)(max_bytes != 0)) + max_records) && v32 != oc)
                        {
                            v74 = (long long)quotearg_style();
                            dcgettext(0x0, &g_40e331, 0x5);
                            nl_error();
                            v6 = 1;
                            break;
                        }
                        if (oc == 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) || v32 == oc && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) || oc == 0 && r_full + r_partial >= ((long long)(max_bytes != 0)) + max_records || v32 == oc && r_full + r_partial >= ((long long)(max_bytes != 0)) + max_records)
                        {
                            if (final_op_was_seek != 0)
                            {
                                v32 = ifstat();
                                if (v32 != 0)
                                {
                                    v74 = (long long)quotearg_style();
                                    dcgettext(0x0, &g_40e1ce, 0x5);
                                    nl_error();
                                }
                                else if ((((short)((int)v21)) & 0xf000) == 0x8000)
                                {
                                    v77 = lseek(0x1, 0x0, 0x1);
                                    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))) && v77 > ((long long)*((long long *)(((char *)&v22) + 8))))
                                    {
                                        v32 = iftruncate.constprop.0();
                                        if (v32 != 0)
                                        {
                                            v62 = (long long)quotearg_style();
                                            dcgettext(0x0, &g_40f378, 0x5);
                                            nl_error();
                                        }
                                    }
                                }
                                if (((((short)((int)v21)) & 0xf000) == 0x8000 || v32 != 0) && (v32 != 0 || v32 != 0) && (v32 != 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)))) && (v32 != 0 || v77 > ((long long)*((long long *)(((char *)&v22) + 8)))))
                                {
                                    v6 = 1;
                                    break;
                                }
                            }
                            if (final_op_was_seek == 0 || v32 == 0 && v32 == 0 || v32 == 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) || v32 == 0 && v77 <= ((long long)*((long long *)(((char *)&v22) + 8))) || v32 == 0 && (((short)((int)v21)) & 0xf000) != 0x8000)
                            {
                                if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (Load(addr=stack_base-240, size=8, endness=Iend_LE) Mull Load(addr=stack_base-224, size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>)) || (((short)conversions_mask) & 0xc000) == 0 || status_level != 4 || reported_w_bytes >= w_bytes)
                                {
                                    break;
                                }
                                print_xfer_stats();
                                break;
                            }
                        }
                    }
                }
                v33 = synchronize_output();
                v6 = (v33 == 0? v6 : ((int)rax<8>));
                if ((max_records | max_bytes) == 0)
                {
                    if (((long long)i_nocache) != 0)
                    {
                        v33 = invalidate_cache();
                        if (((long long)v33) == 0)
                        {
                            v74 = (long long)quotearg_n_style_colon();
                            dcgettext(0x0, &g_40f430, 0x5);
                            nl_error();
                            v6 = 1;
                        }
                    }
                    if (o_nocache == 0)
                    {
                        process_signals();
                        cleanup();
                        print_stats();
                        if ((v29 ^ *(v80 + 0x28)) == 0)
                        {
                            return ((long long)v6);
                        }
                        __stack_chk_fail(); /* do not return */
                    }
                    v33 = invalidate_cache();
                    if (((long long)v33) != 0)
                    {
                        process_signals();
                        cleanup();
                        print_stats();
                        if ((v29 ^ *(v80 + 0x28)) == 0)
                        {
                            return ((long long)v6);
                        }
                        else
                        {
                            __stack_chk_fail(); /* do not return */
                        }
                    }
                    else
                    {
                        v74 = (long long)quotearg_n_style_colon();
                        dcgettext(0x0, &g_40f430, 0x5);
                        nl_error();
                        v6 = 1;
                        process_signals();
                        cleanup();
                        print_stats();
                        if ((v29 ^ *(v80 + 0x28)) == 0)
                        {
                            return ((long long)v6);
                        }
                        else
                        {
                            __stack_chk_fail(); /* do not return */
                        }
                    }
                }
                if (i_nocache_eof != 0 || ((long long)i_nocache) != 0)
                {
                    invalidate_cache();
                }
                if (o_nocache == 0)
                {
                    if (o_nocache_eof == 0)
                    {
                        process_signals();
                        cleanup();
                        print_stats();
                        if ((v29 ^ *(v80 + 0x28)) == 0)
                        {
                            return ((long long)v6);
                        }
                        else
                        {
                            __stack_chk_fail(); /* do not return */
                        }
                    }
                }
                if (o_nocache != 0 || o_nocache_eof != 0)
                {
                    invalidate_cache();
                    process_signals();
                    cleanup();
                    print_stats();
                    if ((v29 ^ *(v80 + 0x28)) == 0)
                    {
                        return ((long long)v6);
                    }
                    else
                    {
                        __stack_chk_fail(); /* do not return */
                    }
                }
            }
        }
        dcgettext(0x0, &g_40f268, 0x5);
        v31 = nl_error();
    }
    else
    {
        v63 = (long long)quote();
        dcgettext(0x0, &g_40e2ba, 0x5);
        nl_error();
        usage(); /* do not return */
    }
}
