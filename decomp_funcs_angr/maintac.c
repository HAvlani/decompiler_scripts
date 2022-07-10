typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 G_buffer;
extern struct_1 G_buffer_size;
extern unsigned long long compiled_separator;
extern unsigned long long compiled_separator_fastmap;
extern unsigned long long default_file_list.7417;
extern unsigned int g_4160b2;
extern unsigned int g_4160fe;
extern unsigned int g_416103;
extern unsigned int g_41611d;
extern unsigned int g_416154;
extern unsigned int g_4164e0;
extern unsigned int g_416508;
extern unsigned long long g_41e228;
extern struct_1 g_41e240;
extern unsigned long long g_41e248;
extern char have_read_stdin;
extern unsigned int longopts;
extern unsigned long long match_length;
extern struct_1 optarg;
extern struct_0 optind;
extern unsigned long long read_size;
extern unsigned long long sentinel_length;
extern char *separator;
extern char separator_ends_record;
extern unsigned long long tempfile.7369;
extern struct_1 tmp_fp.7370;

int main()
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long|unsigned long long v1;  // [bp-0x50]
    unsigned long long v10;  // rax
    unsigned long long v12;  // rax
    unsigned long long v17;  // rax
    unsigned long long|void * v19;  // rcx
    unsigned long v2;  // [bp-0x48]
    unsigned long long v20;  // rcx
    unsigned int v21;  // edx
    struct_1 *|unsigned long long|unsigned int v22;  // rbx
    unsigned int v23;  // ebp
    unsigned long long v24;  // rsi
    unsigned long long v25;  // rsi
    char *|unsigned int v26;  // edi
    unsigned long|char *|unsigned long long v27;  // r12
    unsigned long long|char [2] v28;  // r13
    unsigned long long|unsigned int v29;  // r14
    char v3;  // [bp-0x39]
    unsigned long|unsigned long long v30;  // r15
    unsigned int v31;  // cc_dep1
    char v32;  // cc_dep2
    unsigned long v33;  // d
    unsigned long long|struct_1 * v5;  // rax
    char v9;  // al

    v23 = v26;
    v22 = v25;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4160b2, &g_4164e0);
    textdomain(&g_4160b2);
    atexit();
    sentinel_length = 1;
    separator = "\n";
    separator_ends_record = 1;
    while (true)
    {
        v10 = getopt_long(v26, ((int)v25), &g_4160fe, &longopts, 0x0);
        if (((int)v10) == -1)
        {
            if (sentinel_length != 0)
            {
                v17 = 1;
                if (((long long)*(separator)) != 0)
                {
                    v20 = 18446744069414584319;
                    v26 = separator;
                    while (v20 != 0)
                    {
                        v20 -= 1;
                        v32 = ((char)*(v26));
                        v26 += v33;
                        break;
                    }
                    v17 = !(rcx<8>) - 1;
                }
                sentinel_length = v17;
                match_length = v17;
            }
            else if (((long long)*(separator)) != 0)
            {
                v20 = 18446744069414584319;
                compiled_separator = 0;
                v26 = separator;
                g_41e240 = &compiled_separator_fastmap;
                g_41e228 = 0;
                g_41e248 = 0;
                while (v20 != 0)
                {
                    v20 -= 1;
                    v32 = ((char)*(v26));
                    v26 += v33;
                    break;
                }
                v17 = rpl_re_compile_pattern();
                if (v17 != 0)
                {
                    error(0x1, 0x0, "%s");
                }
            }
            else
            {
                error(0x1, 0x0, dcgettext(0x0, &g_416103, 0x5));
            }
            if (sentinel_length != 0 || v17 == 0 && ((long long)*(separator)) != 0)
            {
                v24 = sentinel_length;
                v21 = 50;
                v12 = 0x2000;
                read_size = 0x2000;
                if (sentinel_length <= 4095)
                {
                }
                else
                {
                    while (true)
                    {
                        v12 *= 2;
                        if (v12 >> 1 <= sentinel_length)
                        {
                            v31 = v21;
                            ((unsigned int)v21) = ((long long)v21) - 1;
                            read_size = v12;
                            xalloc_die(); /* do not return */
                        }
                        read_size = v12;
                        break;
                    }
                }
                G_buffer_size = (v12 + v24 + 1) * 2;
                v9 = ((char)(v12 + v24 + 1 << 1 <= v12 + v24 + 1));
                if (((long long)(((char)(v12 + v24 + 1 <= v12)) | ((char)(v12 + v24 + 1 << 1 <= v12 + v24 + 1)))) == 0)
                {
                    v19 = (long long)xmalloc();
                    if (sentinel_length == 0)
                    {
                        v19 += 1;
                        G_buffer = v19;
                        break;
                    }
                    else
                    {
                        G_buffer = memcpy(v19, separator, sentinel_length + 1) + sentinel_length;
                        break;
                    }
                }
                else
                {
                    xalloc_die(); /* do not return */
                }
            }
        }
        else if (((int)v10) == 98)
        {
            separator_ends_record = 0;
        }
        else if (!(((char)(v10 <= 98))))
        {
            if (((int)v10) == 114)
            {
                sentinel_length = 0;
            }
            else if (((int)v10) == 115)
            {
                separator = optarg;
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else
        {
            if (((int)v10) == -131)
            {
                v0 = 0;
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v10) == -130)
            {
                usage(); /* do not return */
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    v5 = ((long long)optind);
    if (optind < v23)
    {
        v30 = v22 + v5 * 8;
        v28 = *(v22 + v5 * 8);
        if (*(v22 + (v5 << 3)) == 0)
        {
            v3 = 1;
            /* goto 4205890; */
        }
    }
    else
    {
        v30 = &default_file_list.7417;
        v28 = "-";
    }
    if (*(v22 + (v5 << 3)) != 0 || optind >= v23)
    {
        v3 = 1;
        v1 = v30 + 8;
        do
        {
            v22 = ((int)(((int)*(r13<8>)) - 45));
            if (*(r13<8>) == 45)
            {
                v22 = ((long long)*(r13<8> + 1));
                if (*(r13<8> + 1) == 0)
                {
                    v23 = 0;
                    have_read_stdin = 1;
                    v28 = dcgettext(0x0, &g_41611d, 0x5);
                }
            }
            if (*(r13<8> + 1) != 0 || *(r13<8>) != 45)
            {
                ((unsigned int)v23) = (long long)open(r13<8>, 0x0, v21);
                if (((int)((unsigned int)v23)) < 0)
                {
                    v28 = (long long)quotearg_style();
                }
            }
            if (((int)((unsigned int)v23)) >= 0 || *(r13<8> + 1) == 0 && *(r13<8>) == 45)
            {
                v27 = lseek();
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v5 = isatty(reg_56<4>);
                    if (v5 == 0)
                    {
                        tac_seekable();
                    }
                }
                if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>)) || v5 != 0)
                {
                    if (tempfile.7369 != 0)
                    {
                        clearerr_unlocked(((int)tmp_fp.7370));
                        v5 = rpl_fseeko();
                        if (v5 >= 0)
                        {
                            v5 = ftruncate(fileno(tmp_fp.7370), 0x0);
                        }
                        if (v5 < 0 || v5 < 0)
                        {
                            v29 = (long long)quotearg_style();
                        }
                    }
                    else
                    {
                        v27 = (getenv("TMPDIR") == 0? "/tmp" : getenv("TMPDIR"));
                        tempfile.7369 = (long long)mfile_name_concat();
                        v29 = mkstemp_safer();
                        if (v29 >= 0)
                        {
                            tmp_fp.7370 = fdopen(v29, "w+");
                            if (tmp_fp.7370 != 0)
                            {
                                unlink(tempfile.7369);
                                /* goto 4205701; */
                            }
                            else
                            {
                                v2 = (long long)quotearg_style();
                                error(0x0, *(__errno_location()), dcgettext(0x0, &g_416154, 0x5));
                                close(v29);
                                unlink(tempfile.7369);
                            }
                        }
                        else
                        {
                            v29 = (long long)quotearg_style();
                            error(0x0, *(__errno_location()), dcgettext(0x0, &g_416508, 0x5));
                        }
                        if (v29 < 0 || tmp_fp.7370 == 0)
                        {
                            rpl_free();
                            tempfile.7369 = 0;
                        }
                    }
                    if ((tempfile.7369 == 0 || v5 >= 0) && (tempfile.7369 == 0 || v5 >= 0) && (tempfile.7369 != 0 || v29 >= 0) && (tempfile.7369 != 0 || tmp_fp.7370 != 0))
                    {
                        v27 = 0;
                        v2 = tempfile.7369;
                        while (true)
                        {
                            v30 = (long long)safe_read();
                            if (v30 == 0)
                            {
                                v5 = fflush_unlocked(tmp_fp.7370);
                                if (v5 == 0)
                                {
                                    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                                    {
                                        fileno(tmp_fp.7370);
                                        tac_seekable();
                                        break;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            else if (v30 != 18446744069414584319)
                            {
                                v5 = fwrite_unlocked(G_buffer, 0x1, v30, tmp_fp.7370);
                                if (v30 == v5)
                                {
                                    v27 += v30;
                                }
                            }
                            if (v30 == 18446744069414584319)
                            {
                                v29 = (long long)quotearg_n_style_colon();
                                break;
                            }
                            if ((v30 == 0 || v30 != v5) && (v30 == 0 || v30 != 18446744069414584319) && (v30 != 0 || v5 != 0))
                            {
                                v29 = (long long)quotearg_n_style_colon();
                                break;
                            }
                        }
                        if (v30 == 18446744069414584319 || v30 == 0 && v5 != 0 || v30 != v5 && v30 != 0)
                        {
                            error(0x0, *(__errno_location()), dcgettext(0x0, ((int)sentinel_length), 0x5));
                        }
                    }
                    if (tempfile.7369 != 0 || v29 >= 0 && tmp_fp.7370 != 0)
                    {
                        error(0x0, *(__errno_location()), dcgettext(0x0, ((int)sentinel_length), 0x5));
                    }
                }
            }
            if (reg_40<4> != 0 && (*(r13<8> + 1) == 0 || ((int)((unsigned int)v23)) >= 0) && (*(r13<8>) == 45 || ((int)((unsigned int)v23)) >= 0))
            {
                v5 = close(reg_56<4>);
                if (v5 != 0)
                {
                    v28 = (long long)quotearg_n_style_colon();
                }
            }
            if (((int)((unsigned int)v23)) < 0 && *(r13<8> + 1) != 0 || ((int)((unsigned int)v23)) < 0 && *(r13<8>) != 45 || v5 != 0 && reg_40<4> != 0)
            {
                v27 = dcgettext(0x0, ((int)sentinel_length), 0x5);
                error(0x0, *(__errno_location()), v27);
            }
            v1 += 8;
            v5 = v1;
            v3 &= r12b<1>;
            v28 = *(v5 + 8);
        }
        while (*(v5 + 8) != 0);
    }
    output();
    if (have_read_stdin == 0)
    {
        return ((long long)(((int)v3) ^ 1));
    }
    else if (close(0x0) >= 0)
    {
        return ((long long)(((int)v3) ^ 1));
    }
    else
    {
        error(0x0, *(__errno_location()), "-");
        v3 = 0;
        return ((long long)(((int)v3) ^ 1));
    }
}
