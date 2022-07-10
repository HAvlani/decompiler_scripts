typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char block_mode;
extern unsigned int g_4070a4;
extern unsigned int g_4070cd;
extern unsigned int g_4070ea;
extern unsigned int g_407109;
extern unsigned int g_407144;
extern unsigned int g_407153;
extern unsigned int g_40716d;
extern unsigned int g_407198;
extern unsigned int g_407700;
extern unsigned int g_4077c0;
extern unsigned int longopts;
extern char no_create;
extern char *optarg;
extern struct_0 optind;
extern char *ref_file;

int main()
{
    BOT tmp_2;  // tmp #2
    BOT tmp_4;  // tmp #4
    char|struct_0 * v0;  // [bp-0x110]
    unsigned long|unsigned int v1;  // [bp-0x108]
    unsigned long long|char * v12;  // rax
    char * v17;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v2;  // [bp-0x100]
    unsigned int v20;  // edx
    unsigned long long v21;  // rbx
    struct_0 *|unsigned long|unsigned long long|unsigned int v22;  // rbp
    unsigned long long v23;  // rbp
    unsigned long|unsigned long long v24;  // rsi
    unsigned long v25;  // rsi
    unsigned long long|char *|unsigned int v26;  // edi
    unsigned long long|char * v27;  // r12
    unsigned long long v28;  // r12
    unsigned long long|unsigned long long [2] v29;  // r13
    unsigned long|unsigned long long v3;  // [bp-0xf8]
    unsigned long long v30;  // r13
    unsigned long long v31;  // r13
    unsigned int v32;  // r14d
    unsigned long long|unsigned int v33;  // r15
    unsigned long long v34;  // cc_dep1
    unsigned long v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    unsigned long v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8]
    unsigned int v8;  // [bp-0xc0]
    unsigned long long v9;  // [bp-0xa8]

    v32 = v26;
    v29 = v24;
    v28 = 0;
    v21 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4070a4, &g_407700);
    textdomain(&g_4070a4);
    atexit();
    while (true)
    {
        v12 = getopt_long(v32, ((int)v29), &g_407109, &longopts, 0x0);
        if (((int)v12) == -1)
        {
            v29 += ((long long)optind) * 8;
            v32 = ((int)(v32 - optind));
            if (ref_file != 0)
            {
                if (((int)v21) == 0 && ((long long)v28) != 0)
                {
                    v21 = (long long)quote_n();
                    v28 = (long long)quote_n();
                    error(0x0, 0x0, dcgettext(0x0, v24, 0x5));
                    usage(); /* do not return */
                }
                if (((long long)v28) == 0 && block_mode != 1 || ((int)v21) != 0 && ((long long)v28) != 0)
                {
                    if (v32 > 0)
                    {
                        v12 = __xstat(0x1, ((int)ref_file), ((int)&v7));
                        if (v12 != 0)
                        {
                            v31 = (long long)quotearg_style();
                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_407144, 0x5));
                        }
                        else if ((((short)v8) & 0xd000) == 0x8000)
                        {
                            v33 = v9;
                            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)))
                            {
                                v30 = (long long)quotearg_style();
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_407153, 0x5));
                            }
                        }
                        else
                        {
                            v32 = open(ref_file, 0x0, ((short)optind));
                            v0 = __errno_location();
                            if (v32 >= 0)
                            {
                                v33 = lseek(v32, 0x0, 0x2);
                                v1 = v0->field_0;
                                close(v32);
                                if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)))
                                {
                                    v0->field_0 = v1;
                                    v30 = (long long)quotearg_style();
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_407153, 0x5));
                                }
                            }
                            else
                            {
                                v30 = (long long)quotearg_style();
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_407153, 0x5));
                            }
                        }
                    }
                    else
                    {
                        v25 = "missing file operand";
                        error(0x0, 0x0, dcgettext(0x0, v25, 0x5));
                        usage(); /* do not return */
                    }
                }
                if (block_mode == 1 && ((long long)v28) == 0)
                {
                    v21 = (long long)quote_n();
                    v28 = (long long)quote_n();
                    error(0x0, 0x0, dcgettext(0x0, v24, 0x5));
                    usage(); /* do not return */
                }
            }
            else if (((long long)v28) == 0)
            {
                v21 = (long long)quote_n();
                v28 = (long long)quote_n();
                error(0x0, 0x0, dcgettext(0x0, v24, 0x5));
                usage(); /* do not return */
            }
            else if (v32 <= 0)
            {
                v25 = "missing file operand";
                error(0x0, 0x0, dcgettext(0x0, v25, 0x5));
                usage(); /* do not return */
            }
            else
            {
                v3 = 18446744069414584319;
            }
            if (...)
            {
                v3 = 18446744069414584319;
                if (((long long)v28) != 0)
                {
                    v3 = v33;
                    v33 = v22;
                }
                v22 = v33;
            }
            if (...)
            {
                v27 = v29[0];
                v0 = 0;
                if (v27 == 0)
                {
                    break;
                }
                if (v27 != 0)
                {
                    v2 = v22;
                    v4 = &v7;
                    v5 = v3 >> 63;
                    do
                    {
                        v33 = open(v27, (0 - ((int)(((long long)no_create) < 1)) & 64) + 2049, 0x1b6);
                        if (v33 < 0)
                        {
                            v22 = __errno_location();
                            if (no_create == 0 || v22->field_0 != 2)
                            {
                                v27 = (long long)quotearg_style();
                                error(0x0, v22->field_0, dcgettext(0x0, &g_40716d, 0x5));
                                v0 = 1;
                            }
                        }
                        else
                        {
                            if (block_mode == 0)
                            {
                                if (((int)v21) != 0)
                                {
                                    if (((char)v5) != 0)
                                    {
                                        v12 = __fxstat(0x1, v33, ((int)&v7));
                                        if (v12 == 0)
                                        {
                                            v22 = v2;
                                        }
                                    }
                                    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)) && (((char)v5) == 0 || v12 == 0) && (v3 + 1 == 0 || ((char)v5) != 0))
                                    {
                                        if ((((short)v8) & 0xd000) == 0x8000)
                                        {
                                            v23 = (long long)quotearg_style();
                                        }
                                        else
                                        {
                                            v1 = (long long)quotearg_style();
                                        }
                                    }
                                }
                                if (((int)v21) == 0 || ((char)v5) == 0)
                                {
                                    v22 = v2;
                                }
                            }
                            else
                            {
                                v12 = __fxstat(0x1, v33, ((int)&v7));
                                if (v12 == 0)
                                {
                                    v22 = (!(*(&stack_base-160) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-160)) * v2;
                                    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)))
                                    {
                                        v1 = (!(*(&stack_base-160) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-160));
                                        v22 = (long long)quotearg_style();
                                        v22 = 0;
                                        error(0x0, 0x0, dcgettext(0x0, &g_4077c0, 0x5));
                                        /* goto 4205514; */
                                    }
                                }
                            }
                            if (block_mode == 0 && ((int)v21) != 0 || v12 != 0 && block_mode != 0)
                            {
                                if ((((char)v5) != 0 || block_mode != 0) && (block_mode != 0 || v12 != 0))
                                {
                                    v1 = (long long)quotearg_style();
                                }
                                if ((((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)) || ((char)v5) != 0 || block_mode != 0) && (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)) || block_mode != 0 || v12 != 0) && (v3 + 1 == 0 || ((char)v5) != 0 || block_mode != 0) && ((((short)v8) & 0xd000) != 0x8000 || ((char)v5) != 0 || block_mode != 0) && ((((short)v8) & 0xd000) != 0x8000 || block_mode != 0 || v12 != 0))
                                {
                                    v22 = 0;
                                    error(0x0, *(__errno_location()), rdx<8>);
                                }
                            }
                            if (((int)v21) != 0 && (v12 == 0 || block_mode == 0) && (block_mode == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>)))))
                            {
                                if (((char)v5) == 0 || block_mode != 0)
                                {
                                    v19 = v3;
                                }
                                if (((char)v5) == 0 && v3 + 1 == 0 || v3 + 1 == 0 && block_mode != 0 || block_mode == 0 && v12 == 0 && ((char)v5) != 0)
                                {
                                    if ((((short)v8) & 0xd000) == 0x8000)
                                    {
                                        v19 = v9;
                                    }
                                    else
                                    {
                                        v19 = lseek(v33, 0x0, 0x2);
                                    }
                                }
                                if (((char)v5) == 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))) || ((char)v5) == 0 && v3 + 1 != 0 || v12 == 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))) || block_mode != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))))
                                {
                                    if (((int)v21) == 2)
                                    {
                                        /* goto 4205658; */
                                    }
                                    else if (((int)v21) != 3)
                                    {
                                        if (((int)v21) != 4)
                                        {
                                            if (((int)v21) == 5)
                                            {
                                                if (((long long)((rcx<8> >> 63 CONCAT rcx<8>) % v22 >> 64)) != 0)
                                                {
                                                }
                                                else
                                                {
                                                    /* goto 4205658; */
                                                }
                                            }
                                        }
                                    }
                                    if (((int)v21) == 3)
                                    {
                                        /* goto 4205658; */
                                    }
                                    if (((int)v21) == 4)
                                    {
                                        /* goto 4205658; */
                                    }
                                }
                            }
                            if (...)
                            {
                                v23 = (long long)quotearg_style();
                            }
                            if (...)
                            {
                                tmp_2 = rbp<8>;
                                v22 = 1;
                                v1 = (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t2, 0x0<64>, Conv(1->64, (Conv(8->64, Load(addr=0x40b0d9<64>, size=1, endness=Iend_LE)) < 0x1<64>))))? tmp_2 : 0);
                                v12 = ftruncate(v33, ((int)(((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t2, 0x0<64>, Conv(1->64, (Conv(8->64, Load(addr=0x40b0d9<64>, size=1, endness=Iend_LE)) < 0x1<64>))))? tmp_2 : 0)));
                                if (v12 != 0)
                                {
                                    v6 = v1;
                                    v1 = (long long)quotearg_style();
                                    v22 = 0;
                                    error(0x0, *(__errno_location()), rdx<8>);
                                    /* goto 4205514; */
                                }
                            }
                            if (...)
                            {
                                v22 = 0;
                                error(0x0, 0x0, dcgettext(0x0, v24, 0x5));
                            }
                            v12 = close(v33);
                            if (v12 == 0)
                            {
                                v22 = ((long long)(v22 ^ 1));
                                tmp_4 = v22;
                                v0 |= tmp_4;
                            }
                            else
                            {
                                v33 = (long long)quotearg_style();
                                error(0x0, *(__errno_location()), dcgettext(0x0, &g_407198, 0x5));
                                v0 = 1;
                            }
                        }
                        v27 = v29[1];
                        v29 += 8;
                    }
                    while (v27 != 0);
                }
                else
                {
                    return ((long long)v0);
                }
            }
        }
        else if (((int)v12) == 111)
        {
            block_mode = 1;
        }
        else if (((char)(v12 <= 111)))
        {
            if (((int)v12) == -130)
            {
                usage(); /* do not return */
            }
            else if (((int)v12) == 99)
            {
                no_create = 1;
            }
            else if (((int)v12) != -131)
            {
                usage(); /* do not return */
            }
            else
            {
                version_etc();
                exit(0x0); /* do not return */
            }
        }
        else
        {
            if (((int)v12) == 114)
            {
                ref_file = optarg;
            }
            else if (((int)v12) != 115)
            {
                usage(); /* do not return */
            }
            else
            {
                v19 = *(__ctype_b_loc());
                v17 = optarg;
                while (true)
                {
                    v24 = ((long long)*(v17));
                    v26 = v17;
                    v17 += 1;
                    v34 = ((long long)(*(v19 + v24 * 2 + 1) & 32));
                    if (((char)v34) == 0)
                    {
                        break;
                    }
                    optarg = v17;
                }
                v34 = ((long long)v24);
                if (v24 == 60)
                {
                    v26 += 1;
                    v21 = 3;
                    optarg = v26;
                }
                else if (((char)(v34 <= 60)))
                {
                    if (v24 == 37)
                    {
                        v26 += 1;
                        v21 = 5;
                        optarg = v26;
                    }
                    else if (v24 == 47)
                    {
                        v26 += 1;
                        v21 = 4;
                        optarg = v26;
                    }
                }
                else
                {
                    if (v24 == 62)
                    {
                        v26 += 1;
                        v21 = 2;
                        optarg = v26;
                        /* goto 4204528; */
                    }
                }
                v12 = optarg;
                while (true)
                {
                    v24 = ((long long)*(v12));
                    v12 += 1;
                    v20 = ((int)v24);
                    v34 = ((long long)(*(v19 + v24 * 2 + 1) & 32));
                    if (((char)v34) == 0)
                    {
                        break;
                    }
                    optarg = v12;
                }
                if ((((char)(v20 - 43)) & 253) != 0)
                {
                    dcgettext(0x0, &g_4070cd, 0x5);
                    v22 = (long long)xdectoimax();
                    if (v22 == 0 && ((int)(v21 - 4)) <= 1)
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_4070ea, 0x5));
                    }
                    if (v22 != 0 || ((int)(v21 - 4)) > 1)
                    {
                        v28 = 1;
                    }
                }
                else if (((int)v21) == 0)
                {
                    v28 = 1;
                    dcgettext(0x0, &g_4070cd, 0x5);
                    v22 = (long long)xdectoimax();
                }
                else
                {
                    v25 = "multiple relative modifiers specified";
                    error(0x0, 0x0, dcgettext(0x0, v25, 0x5));
                    usage(); /* do not return */
                }
            }
        }
    }
    return ((long long)v0);
}
