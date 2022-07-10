typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 active_dir_set;
extern struct_0 cwd_n_used;
extern char dired;
extern char eolbyte;
extern unsigned int exit_status;
extern char first.10693;
extern struct_2 format;
extern unsigned int g_418ae1;
extern unsigned int g_418b27;
extern unsigned int g_418b40;
extern unsigned int g_418b55;
extern unsigned int g_418b6a;
extern unsigned int g_419068;
extern unsigned int g_419090;
extern struct_0 g_4240f8;
extern struct_0 g_424100;
extern struct_0 hide_patterns;
extern struct_2 ignore_mode;
extern struct_0 ignore_patterns;
extern char print_block_size;
extern char print_dir_name;
extern char print_hyperlink;
extern char recursive;
extern struct_2 sort_type;

int print_dir()
{
    BOT tmp_9;  // tmp #9
    unsigned long long v0;  // [bp-0x398]
    unsigned long|unsigned long long v1;  // [bp-0x380]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v17;  // rax
    unsigned long|unsigned long long [2] v18;  // rax
    char *v19;  // rax
    char v2;  // [bp-0x375]
    unsigned long long v28;  // rcx
    unsigned long|unsigned long long v29;  // rdx
    unsigned int v3;  // [bp-0x374]
    char [21]|char *|unsigned long long|unsigned long long [2] v30;  // rbx
    struct_2 *v31;  // rbp
    unsigned long|unsigned int v33;  // r12
    unsigned long long v34;  // r13
    unsigned long long [2] v35;  // r14
    unsigned int v36;  // r15d
    struct_0 *v37;  // fs
    unsigned long v4;  // [bp-0x370]
    unsigned long long v5;  // [bp-0x368]
    unsigned long v6;  // [bp-0x360]
    unsigned long v7;  // [bp-0x40]
    unsigned int v8;  // [bp+0x0]

    v3 = ((int)v29);
    v2 = v29;
    v8 = 0;
    v31 = __errno_location();
    v18 = opendir();
    if (v33 != 0)
    {
        v33 = v18;
        if (active_dir_set != 0)
        {
            if ((int)dirfd(v33) >= 0)
            {
                v17 = (long long)do_statx() >> 31;
                tmp_9 = v17;
                if (((long long)tmp_9) != 0)
                {
                    dcgettext(0x0, &g_419068, 0x5);
                    file_failure();
                    closedir();
                    return v7 ^ *(v37 + 0x28);
                }
            }
            v17 = (long long)do_statx() >> 31;
            tmp_9 = v17;
            if (((long long)tmp_9) != 0)
            {
                dcgettext(0x0, &g_419068, 0x5);
                file_failure();
                closedir();
                return v7 ^ *(v37 + 0x28);
            }
            if (((long long)tmp_9) == 0)
            {
                v29 = v5;
                v4 = v6;
                v1 = v29;
                v30 = (long long)xmalloc();
                v30[0] = v4;
                v30[1] = v1;
                v13 = hash_insert();
                if (!(v13 != 0))
                {
                    xalloc_die(); /* do not return */
                }
                else if (v30 != v13)
                {
                    rpl_free();
                    v34 = (long long)quotearg_n_style_colon();
                    error(0x0, 0x0, dcgettext(0x0, &g_419090, 0x5));
                    closedir();
                    exit_status = 2;
                    return v7 ^ *(v37 + 0x28);
                }
                else
                {
                    v18 = g_4240f8;
                    v28 = v5;
                    if (g_424100 - g_4240f8 <= 15)
                    {
                        v1 = v5;
                        _obstack_newchunk();
                        v18 = g_4240f8;
                        v28 = v1;
                    }
                    g_4240f8 = v18 + 16;
                    v18[1] = v28;
                    v18[0] = v6;
                    /* goto 4242445; */
                }
            }
        }
        if (active_dir_set == 0 || v30 == v13 && ((long long)tmp_9) == 0 && v13 != 0)
        {
            clear_files();
            if (print_dir_name != 0 || recursive != 0)
            {
                if (first.10693 != 0)
                {
                    first.10693 = 0;
                }
                else
                {
                    dired_outbyte();
                    first.10693 = 0;
                }
                if (dired == 0)
                {
                    v30 = 0;
                }
                else
                {
                    v30 = 0;
                    dired_outbuf();
                }
                if (print_hyperlink != 0)
                {
                    v30 = (long long)canonicalize_filename_mode();
                    if (v30 == 0)
                    {
                        dcgettext(0x0, &g_418ae1, 0x5);
                        file_failure();
                    }
                }
                v0 = v30;
                quote_name();
                rpl_free();
                dired_outbuf();
            }
            v1 = 0;
            while (true)
            {
                v31->field_0 = 0;
                v30 = readdir();
                if (v30 != 0)
                {
                    v36 = ((int)v30) + 19;
                    if (ignore_mode != 2)
                    {
                        if (v30[19] != 46)
                        {
                            if (ignore_mode == 0)
                            {
                                v35 = hide_patterns;
                                if (hide_patterns == 0)
                                {
                                }
                                else
                                {
                                    while (true)
                                    {
                                        v12 = fnmatch(((int)v35[0]), v36, 0x4);
                                        if (v12 != 0)
                                        {
                                            v35 = v35[1];
                                        }
                                        else
                                        {
                                            break;
                                        }
                                    }
                                    if (v12 == 0)
                                    {
                                        process_signals();
                                    }
                                    else if (v12 != 0)
                                    {
                                        v35 = ignore_patterns;
                                    }
                                }
                            }
                        }
                    }
                    if (ignore_mode == 2 || v30[19] != 46 || v30 + ((long long)(v30[20] == 46))[20] != 0 && ignore_mode != 0)
                    {
                        v35 = ignore_patterns;
                        if (ignore_patterns == 0)
                        {
                        }
                        else
                        {
                            while (true)
                            {
                                v12 = fnmatch(((int)v35[0]), v36, 0x4);
                                if (v12 != 0)
                                {
                                    v35 = v35[1];
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if (v12 == 0)
                            {
                                process_signals();
                            }
                        }
                        v1 += (long long)gobble_file.constprop.0();
                        if (print_block_size == 0 && sort_type == 6 && recursive == 0 && format == 1)
                        {
                            sort_files();
                            print_current_files();
                            clear_files();
                        }
                    }
                }
                else
                {
                    if (v31->field_0 == 0)
                    {
                        break;
                    }
                    dcgettext(0x0, &g_418b40, 0x5);
                    file_failure();
                    if (v31->field_0 != 75)
                    {
                        break;
                    }
                }
                process_signals();
            }
            if (closedir() == 0)
            {
                sort_files();
            }
            else
            {
                dcgettext(0x0, &g_418b55, 0x5);
                file_failure();
                sort_files();
            }
            if (recursive != 0)
            {
                extract_dirs_from_files();
            }
            if (format == 0 || print_block_size != 0)
            {
                v30 = (long long)human_readable();
                *(v30 + 0x1) = 32;
                v19 = strlen(v30) + v30;
                *(v19) = eolbyte;
                if (dired != 0)
                {
                    dired_outbuf();
                }
                strlen(dcgettext(0x0, &g_418b6a, 0x5));
                dired_outbuf();
                dired_outbuf();
            }
            if (cwd_n_used == 0)
            {
                return v7 ^ *(v37 + 0x28);
            }
            print_current_files();
            return v7 ^ *(v37 + 0x28);
        }
    }
    dcgettext(0x0, &g_418b27, 0x5);
    file_failure();
    return v7 ^ *(v37 + 0x28);
}
