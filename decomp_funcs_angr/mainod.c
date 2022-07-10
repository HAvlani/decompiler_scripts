typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int address_base;
extern unsigned int address_pad_len;
extern unsigned long long bytes_per_block;
extern unsigned long long default_file_list;
extern struct_0 end_offset;
extern struct_0 file_list;
extern char flag_dump_strings;
extern char flag_pseudo_start;
extern struct_0 format_address;
extern unsigned long long format_address_label;
extern <missing-type> format_address_none;
extern unsigned long long format_address_paren;
extern unsigned long long format_address_std;
extern unsigned int fp_type_size;
extern char g_4036fe;
extern char g_403710;
extern char g_40371e;
extern char g_40372c;
extern char g_40373a;
extern char g_403748;
extern char g_403756;
extern void g_40c02e;
extern unsigned int g_40c040;
extern unsigned int g_40c14f;
extern unsigned int g_40c1bc;
extern struct_1 g_40c2f0;
extern unsigned int g_40d678;
extern unsigned int g_40d6e8;
extern unsigned int g_40d718;
extern unsigned int g_40d748;
extern unsigned int g_40d770;
extern unsigned int g_412130;
extern unsigned int g_412140;
extern unsigned int g_412160;
extern <missing-type> g_412164;
extern unsigned long long g_412184;
extern unsigned int g_412190;
extern unsigned int g_4121a0;
extern char have_read_stdin;
extern struct_0 in_stream;
extern unsigned int integral_type_size;
extern char limit_bytes_to_format;
extern unsigned int long_options;
extern struct_0 max_bytes_to_format;
extern unsigned long long n_bytes_to_skip;
extern unsigned long long n_specs;
extern unsigned long long n_specs_allocated;
extern struct_1 optind;
extern unsigned long long pseudo_offset;
extern unsigned int short_options;
extern unsigned long long spec;
extern unsigned long long stdout[7];
extern struct_0 string_min;
extern char traditional;
extern unsigned int width_bytes[4];

int main()
{
    BOT tmp_16;  // tmp #16
    BOT tmp_9;  // tmp #9
    BOT tmp_22;  // tmp #22
    BOT tmp_14;  // tmp #14
    unsigned long|unsigned long long|unsigned int|char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    struct_1 * v10;  // rax
    unsigned long|unsigned int [4]|unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned int v2;  // [bp-0x74]
    unsigned long long|struct_1 * v20;  // rax
    struct_1 * v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v27;  // rax
    unsigned long long|void * v28;  // rcx
    unsigned long long|unsigned int v29;  // rdx
    unsigned long v3;  // [bp-0x70]
    unsigned long|unsigned long long|unsigned int v30;  // rbx
    unsigned long long v32;  // rbp
    unsigned long long|unsigned int v33;  // rsi
    unsigned long long|unsigned int|struct_1 * v34;  // rdi
    unsigned long long|unsigned int v35;  // r8
    unsigned long long v36;  // r9
    unsigned long long v37;  // r10
    unsigned long long v38;  // r11
    unsigned long long|unsigned int v39;  // r12
    unsigned int v4;  // [bp-0x68]
    unsigned long long v41;  // r14
    unsigned long long v42;  // r15
    unsigned long|unsigned long long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp+0x0]

    v39 = v33;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40c14f, &g_40d678);
    textdomain(&g_40c14f);
    atexit();
    v10 = &integral_type_size;
    /* goto 4204736; */
    rsp<8> = rsp<8> - 8;
    v8 = &g_403710;
    fwrite_unlocked("\\v", ((unsigned int)v33), ((unsigned int)v29), v28);
    rsp<8> = rsp<8> - 8;
    v8 = &g_40371e;
    fwrite_unlocked("\\n", ((unsigned int)v33), ((unsigned int)v29), v28);
    rsp<8> = rsp<8> - 8;
    v8 = &g_40372c;
    fwrite_unlocked("\\t", ((unsigned int)v33), ((unsigned int)v29), v28);
    rsp<8> = rsp<8> - 8;
    v8 = &g_40373a;
    fwrite_unlocked("\\b", ((unsigned int)v33), ((unsigned int)v29), v28);
    rsp<8> = rsp<8> - 8;
    v8 = &g_403748;
    fwrite_unlocked("\\a", ((unsigned int)v33), ((unsigned int)v29), v28);
    rsp<8> = rsp<8> - 8;
    v8 = &g_403756;
    fwrite_unlocked("\\r", ((unsigned int)v33), ((unsigned int)v29), v28);
    v10->field_0 = 0;
    v10 += 4;
    if (v10 == 4268452)
    {
        g_412190 = 3;
        g_4121a0 = 5;
        g_412184 = 8589934593;
        v24 = &fp_type_size;
        /* goto 0x402900; */
        if (v24 == 4268388)
        {
            v0 = 0;
            g_412130 = 6;
            g_412160 = 8;
            g_412140 = 7;
            n_specs = 0;
            n_specs_allocated = 0;
            spec = 0;
            format_address = &format_address_std;
            address_base = 8;
            address_pad_len = 7;
            flag_dump_strings = 0;
            v4 = -1;
            v20 = getopt_long(v34, ((int)v33), &short_options, &long_options, ((int)&v4));
            if (v20 != -1)
            {
                if (!(v20 <= 129))
                {
                    usage(); /* do not return */
                }
                else if (v20 > 64)
                {
                    v20 = ((long long)v20) - 65;
                    if (((int)v20) <= 64)
                    {
                        v12 = ((long long)*(g_40c2f0 + v20 * 4)) + &g_40c2f0;
                        /* goto v12; */
                    }
                    else
                    {
                        usage(); /* do not return */
                    }
                }
                else
                {
                    if (v20 == -131)
                    {
                        version_etc();
                        exit(0x0); /* do not return */
                    }
                    else if (v20 != -130)
                    {
                        usage(); /* do not return */
                    }
                    if (v20 == -130)
                    {
                        usage(); /* do not return */
                    }
                }
            }
            else
            {
                if (((long long)1) != 0)
                {
                    if (flag_dump_strings != 0)
                    {
                        if (n_specs != 0)
                        {
                            error(0x1, 0x0, dcgettext(0x0, &g_40d6e8, 0x5));
                        }
                    }
                    if (n_specs == 0 || flag_dump_strings == 0)
                    {
                        if (((long long)0) == 0)
                        {
                            if (v34 - optind != 2)
                            {
                            }
                            else
                            {
                                if (((long long)traditional) == 0)
                                {
                                    if (*(*(v33 + (((long long)optind) << 3) + 8)) != 43)
                                    {
                                        if (((int)*(*(v33 + (((long long)optind) << 3) + 8))) - 48 <= 9)
                                        {
                                            /* goto 4207525; */
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (((long long)traditional) != 0)
                            {
                                if (v34 - optind != 2)
                                {
                                }
                                else
                                {
                                    /* goto 4207525; */
                                }
                                if (v34 - optind == 1)
                                {
                                    /* goto 4206331; */
                                }
                            }
                        }
                    }
                }
                else
                {
                    1 = 1;
                    return 1;
                }
            }
        }
    }
    if (v10 == 4268452 || v24 != 4268388)
    {
        v24->field_0 = 0;
        v24 += 4;
    }
    if (v20 == -1 && v24 == 4268388 && v10 == 4268452 && ((long long)1) != 0 && ((long long)traditional) != 0 && ((long long)0) != 0 && (n_specs == 0 || flag_dump_strings == 0) && v34 - optind != 2 && v34 - optind == 3 || v20 == -1 && v24 == 4268388 && ((long long)0) == 0 && v10 == 4268452 && ((long long)1) != 0 && (n_specs == 0 || flag_dump_strings == 0) && v34 - optind != 2 && v34 - optind == 3 && ((long long)traditional) != 0)
    {
        v20 = parse_old_offset();
        if (((long long)v20) != 0)
        {
            v20 = parse_old_offset();
            if (((long long)v20) != 0)
            {
                flag_pseudo_start = 1;
                n_bytes_to_skip = v4;
                v3 = v5;
                *(v39 + ((long long)optind) * 8 + 16) = *(v39 + ((long long)optind) * 8);
                v39 += 16;
            }
        }
    }
    if (...)
    {
        if (v34 - optind > 1)
        {
            v39 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_40c1bc, 0x5));
            dcgettext(0x0, &g_40d718, 0x5);
            error(0x0, 0x0, "%s");
            usage(); /* do not return */
        }
    }
    if (...)
    {
        v20 = parse_old_offset();
        if (((long long)v20) != 0)
        {
            v39 = v33 + 8;
            n_bytes_to_skip = v4;
        }
    }
    if (...)
    {
        v20 = parse_old_offset();
        if (traditional != 0)
        {
            v20 = parse_old_offset();
            if (((long long)v20) != 0)
            {
                flag_pseudo_start = 1;
                v39 = v33 + 16;
                n_bytes_to_skip = v4;
                v3 = v5;
            }
        }
    }
    if (...)
    {
        if (traditional != 0)
        {
            v39 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_40c1bc, 0x5));
            dcgettext(0x0, &g_40d718, 0x5);
            error(0x0, 0x0, "%s");
            usage(); /* do not return */
        }
    }
    if (...)
    {
        n_bytes_to_skip = v5;
        *(v39 + ((long long)optind) * 8 + 8) = *(v39 + ((long long)optind) * 8);
        v39 += 8;
    }
    if (...)
    {
        if (flag_pseudo_start != 0)
        {
            if (format_address != 4209360)
            {
                format_address = &format_address_label;
            }
            else
            {
                address_base = 8;
                address_pad_len = 7;
                format_address = &format_address_paren;
            }
        }
    }
    if (...)
    {
        if (limit_bytes_to_format != 0)
        {
            end_offset = max_bytes_to_format + n_bytes_to_skip;
            if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Load(addr=0x4121e8<64>, size=8, endness=Iend_LE), Load(addr=0x4121f8<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40d748, 0x5));
            }
        }
    }
    if (...)
    {
        if (n_specs == 0)
        {
            decode_format_string.part.0();
        }
    }
    if (...)
    {
        &default_file_list = &default_file_list;
        if (((int)(v34 - optind)) > 0)
        {
            &default_file_list = v39 + ((long long)optind) * 8;
        }
    }
    if (...)
    {
        file_list = &default_file_list;
        v30 = (long long)open_next_file();
        if (in_stream != 0)
        {
            v30 = ((long long)(((int)v30) & skip()));
            tmp_16 = v30;
            v2 = ((int)tmp_16);
            v11 = 0;
            if (flag_pseudo_start != 0)
            {
                v11 = v3 - n_bytes_to_skip;
            }
        }
    }
    if (...)
    {
        v38 = n_specs;
        pseudo_offset = v11;
        if (n_specs != 0)
        {
            v30 = spec;
            v35 = 1;
            v34 = spec + 4;
        }
        else
        {
            v35 = 1;
            if (v0 != 0)
            {
                if (v1 == 0)
                {
                    v30 = 1;
                    v35 = 1;
                    /* goto 4206714; */
                }
            }
        }
    }
    if (...)
    {
        v11 = ((long long)v34->field_0);
        v28 = ((long long)v35);
        v39 = ((long long)width_bytes[v11]);
        v29 = ((long long)width_bytes[v11]);
    }
    if (...)
    {
        tmp_9 = v28;
        v28 = v29;
        v29 = ((long long)((0 CONCAT tmp_9) % v29 >> 64));
        if (v29 == 0)
        {
            v34 += 40;
            ((unsigned int)v35) = ((long long)(((int)((0 CONCAT v39) % v28)) * 1));
            if (spec + n_specs * 40 + 4 == spec + 44)
            {
                if (v0 != 0)
                {
                    v30 = ((unsigned int)v35);
                }
                else if (((int)((unsigned int)v35)) > 15)
                {
                    bytes_per_block = ((long long)((unsigned int)v35));
                    /* goto 4206793; */
                }
            }
        }
    }
    if (...)
    {
        bytes_per_block = ((long long)(((unsigned int)v35) * ((int)(16 % ((int)((unsigned int)v35))))));
        /* goto 4206774; */
    }
    if (...)
    {
        bytes_per_block = v1;
        /* goto 4206774; */
    }
    if (...)
    {
        v0 = ((unsigned int)v35);
        error(0x0, 0x0, dcgettext(0x0, &g_40d770, 0x5));
        bytes_per_block = v30;
        v38 = n_specs;
    }
    if (...)
    {
        v30 = spec;
    }
    if (...)
    {
        v38 *= 40;
        v28 = v30 + 4;
        v35 = bytes_per_block;
        v34 = 0;
        v33 = v30 + 4;
        v37 = v30 + v38 + 4;
    }
    if (...)
    {
        v30 = ((long long)*(v33 + 24));
        v11 = ((long long)(((int)((0 CONCAT v35) % ((long long)width_bytes[((long long)*(v33))]))) * (((int)v30) + 1)));
        v34 = (...? v11 : v34);
        v33 += 40;
    }
    if (...)
    {
        tmp_22 = ((long long)*(v28));
        v28 += 40;
        *(v28 + 12) = ((int)v34) - *(v28 + 16) * ((int)((0 CONCAT v35) % ((long long)width_bytes[tmp_22])));
    }
    if (...)
    {
        v30 = ((long long)flag_dump_strings);
        if (((long long)flag_dump_strings) != 0)
        {
            v5 = (100 <= string_min? string_min : 100);
            v32 = n_bytes_to_skip;
            v0 = (long long)xmalloc();
            v3 = &stack_base-96;
        }
        else
        {
            v27 = xnmalloc();
            ((unsigned int)v39) = ((long long)limit_bytes_to_format);
            v0 = v27;
            v42 = n_bytes_to_skip;
            v6 = v27;
            v25 = v27 + bytes_per_block;
            v7 = v25;
            if (((long long)limit_bytes_to_format) != 0)
            {
            }
            else
            {
                v41 = 0;
                v39 = 1;
            }
        }
    }
    ((unsigned int)v39) = ((long long)(v39 & read_block()));
    if (end_offset > v42)
    {
        v41 = ((long long)v30);
        v39 = ((int)(v39 & read_block()));
        if (v5 >= bytes_per_block)
        {
            if (((char)(v5 == bytes_per_block)))
            {
                v30 = ((long long)(((int)v30) ^ 1));
                write_block();
                v42 += v5;
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
    }
    else
    {
        v5 = 0;
        /* goto 4207789; */
    }
    if (!(v5 >= bytes_per_block))
    {
        v36 = v33;
        if (v33 != 0)
        {
            v32 = spec;
            v37 = 0;
            v34 = 1;
        }
    }
    else if (((char)(v5 == bytes_per_block)))
    {
        v30 = ((long long)(((int)v30) ^ 1));
        tmp_14 = v30;
        v41 = ((long long)tmp_14);
        write_block();
        v42 += v5;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
    if (v29 != 0 || v37 != n_specs)
    {
        v28 = v29;
        v29 = ((long long)((0 CONCAT v25) % v29 >> 64));
        v25 = v28;
    }
    if (v37 != n_specs)
    {
        v33 = ((long long)width_bytes[((long long)*(v32 + v37 * 40 + 4))]);
        v25 = v34;
        v29 = ((long long)width_bytes[((long long)*(v32 + v37 * 40 + 4))]);
        /* goto 4208016; */
        if (v29 == 0)
        {
            v37 = 1;
            v34 = ((long long)(((int)((0 CONCAT v33) % v25)) * 1));
        }
    }
    else
    {
        v1 = v36;
        memset(*(&v0 + v41 * 8 + 48) + v1, 0x0, v34 * ((long long)((0 CONCAT v34 + v1 - 1) % v34)) - v1);
        write_block();
        v42 += v5;
    }
    if (end_offset <= v42 || v37 == n_specs || v5 < bytes_per_block && v33 == 0)
    {
        v33 = 10;
        v34 = v42;
        *(0x412200)();
    }
    if (limit_bytes_to_format != 0)
    {
        if (v5 < bytes_per_block || end_offset <= v42 || v37 == n_specs)
        {
            if (end_offset <= v42 || v33 == 0 || v37 == n_specs)
            {
                if (v42 >= end_offset)
                {
                    v39 = ((int)(v39 & check_and_close()));
                }
            }
        }
    }
    if (limit_bytes_to_format != 0 && (v5 < bytes_per_block || end_offset <= v42 || v37 == n_specs) && (end_offset <= v42 || v33 == 0 || v37 == n_specs) && v42 >= end_offset || (end_offset <= v42 || v37 == n_specs || v5 < bytes_per_block && v33 == 0) && limit_bytes_to_format == 0 || limit_bytes_to_format != 0 && (v5 < bytes_per_block || end_offset <= v42 || v37 == n_specs) && (end_offset <= v42 || v33 == 0 || v37 == n_specs) && v42 < end_offset)
    {
        v30 = v39;
        rpl_free();
    }
}
