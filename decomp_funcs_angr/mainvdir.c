typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char G_line;
extern unsigned long long RFC3986;
extern struct_0 active_dir_set;
extern void align_variable_outer_quotes;
extern char check_symlink_mode;
extern struct_0 color_buf;
extern unsigned long long color_ext_list[5];
extern struct_0 color_indicator;
extern char color_symlink_as_referent;
extern unsigned long long current_time;
extern struct_0 cwd_file;
extern unsigned long long cwd_n_alloc;
extern unsigned long long cwd_n_used;
extern unsigned int dereference;
extern char directories_first;
extern char dired;
extern struct_0 dirname_quoting_options;
extern char eolbyte;
extern unsigned int exit_failure;
extern unsigned int exit_status;
extern unsigned int file_human_output_opts;
extern unsigned long long file_output_block_size;
extern struct_0 filename_quoting_options;
extern unsigned int format;
extern char format_needs_stat;
extern void format_needs_type;
extern char g_40539f;
extern char g_4053c6;
extern char g_405428;
extern char g_405499;
extern char g_4054be;
extern char g_4054f6;
extern char g_40551c;
extern char g_4055b0;
extern char g_4055b7;
extern char g_4055fa;
extern char g_405648;
extern char g_4056c1;
extern char g_40570b;
extern char g_405763;
extern char g_40578d;
extern char g_40579f;
extern char g_405811;
extern char g_40587f;
extern char g_4058a8;
extern char g_4058ca;
extern char g_405908;
extern char g_405922;
extern char g_405938;
extern char g_405953;
extern char g_406486;
extern char g_40679f;
extern struct_1 g_417190;
extern unsigned long long g_418a9f;
extern unsigned int g_418bf2;
extern char g_418c24;
extern unsigned int g_418c27;
extern unsigned int g_418c50;
extern char g_418cd2;
extern char g_418cd5;
extern char g_418ce0;
extern char g_418ce8;
extern char g_418cf0;
extern char g_418cfe;
extern char g_418d04;
extern unsigned int g_418d0f;
extern unsigned int g_418d37;
extern unsigned long long g_418d5d;
extern unsigned long long g_418d75;
extern unsigned long long g_418d78;
extern unsigned long long g_418d84;
extern char g_418d8e;
extern char g_418d98;
extern char g_418d9d;
extern char g_418da2;
extern unsigned int g_418da8;
extern char g_418dc0;
extern char g_418dc7;
extern unsigned int g_41afb8;
extern unsigned int g_41afe0;
extern unsigned int g_41b010;
extern unsigned int g_41b050;
extern unsigned int g_41b090;
extern unsigned int g_41b0d8;
extern unsigned int g_41b100;
extern char g_41b170;
extern unsigned int g_41b1c8;
extern char g_41b848;
extern struct_0 g_423048;
extern struct_2 *g_423068;
extern struct_0 g_423070;
extern char *g_423078;
extern struct_0 g_4230d0;
extern struct_0 g_4230d8;
extern struct_0 g_4240f0;
extern struct_0 *g_4240f8;
extern unsigned long long g_424378;
extern unsigned long long hide_patterns[2];
extern struct_0 hostname;
extern unsigned int human_output_opts;
extern unsigned int ignore_mode;
extern unsigned long long ignore_patterns[2];
extern char immediate_dirs;
extern unsigned long long indicator_name;
extern unsigned int indicator_style;
extern struct_1 indicator_style_types;
extern struct_1 interrupt_signal;
extern unsigned long long line_length;
extern struct_0 localtz;
extern unsigned int long_options;
extern struct_0 long_time_format;
extern struct_1 ls_mode;
extern <missing-type> max_idx;
extern char numeric_ids;
extern struct_0 optarg;
extern struct_1 optind;
extern unsigned long long output_block_size;
extern unsigned long long pending_dirs[4];
extern char posix_prefix.10514;
extern char print_author;
extern char print_block_size;
extern char print_dir_name;
extern char print_group;
extern char print_hyperlink;
extern char print_inode;
extern char print_owner;
extern char print_scontext;
extern char print_with_color;
extern char qmark_funny_chars;
extern struct_0 quoting_style_args;
extern struct_1 quoting_style_vals;
extern char recursive;
extern char sort_reverse;
extern unsigned int sort_type;
extern struct_1 sort_types;
extern struct_0 stderr;
extern struct_0 stdout;
extern struct_1 stop_signal_count;
extern unsigned long long tabsize;
extern unsigned long long time_style_args;
extern unsigned int time_type;
extern struct_1 time_types;
extern char used_color;
extern struct_1 when_types;

int main()
{
    unsigned int v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x90]
    unsigned long v12;  // [bp-0x18]
    unsigned long|unsigned long long v13;  // [bp-0x10]
    struct_3 *|unsigned long|unsigned long long v14;  // [bp-0x8]
    unsigned long|unsigned int v15;  // [bp+0x0]
    unsigned int v16;  // [bp+0x8]
    unsigned long|unsigned int v17;  // [bp+0x10]
    unsigned int v18;  // [bp+0x14]
    unsigned long v19;  // [bp+0x18]
    unsigned int v2;  // [bp-0x8c]
    unsigned long v20;  // [bp+0x20]
    unsigned long v21;  // [bp+0x28]
    unsigned long v22;  // [bp+0x30]
    unsigned long|unsigned long long|unsigned int v27;  // rax
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v39;  // rax
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long v53;  // rax
    struct_3 *v58;  // rcx
    unsigned long|unsigned int v59;  // rdx
    unsigned long long v60;  // rbx
    unsigned long v63;  // rsi
    unsigned long long v64;  // rdi
    unsigned long v65;  // r8
    unsigned long v66;  // r9
    unsigned long v67;  // r10
    unsigned long v72;  // r13
    unsigned long long v74;  // r14
    unsigned long long v75;  // r15

    ignore_mode = 2;
    v39 = ((long long)ls_mode);
    rsp<8> = rsp<8> - 8;
    v15 = &g_405908;
    v27 = decode_line_length();
    v17 = v27;
    rsp<8> = rsp<8> - 8;
    v15 = &g_4058ca;
    v27 = human_options();
    v16 = 7;
    ignore_mode = 2;
    print_scontext = 1;
    v17 = 1;
    v17 = 6;
    v17 = 3;
    recursive = 1;
    v16 = 5;
    v16 = 0;
    dereference = 4;
    dereference = 2;
    print_group = 0;
    dired = 1;
    ignore_mode = 1;
    directories_first = 1;
    indicator_style = 2;
    dereference = 3;
    print_author = 1;
    v17 = 4;
    time_type = 2;
    v17 = 5;
    print_block_size = 1;
    sort_reverse = 1;
    v18 = 1;
    indicator_style = 1;
    print_inode = 1;
    immediate_dirs = 1;
    time_type = 1;
    eolbyte = 0;
    print_with_color = 0;
    v16 = 0;
    v18 = 0;
    v20 = optarg;
    human_output_opts = 144;
    file_human_output_opts = 144;
    output_block_size = 1;
    file_output_block_size = 1;
    v20 = "full-iso";
    print_group = 0;
    numeric_ids = 1;
    human_output_opts = 176;
    file_human_output_opts = 176;
    output_block_size = 1;
    file_output_block_size = 1;
    print_owner = 0;
    rsp<8> = rsp<8> - 8;
    v15 = &g_406486;
    usage(); /* do not return */
    v22 = optarg;
    rsp<8> = rsp<8> - 8;
    v15 = &g_405428;
    *(ignore_patterns) = v21;
    *(ignore_patterns + 8) = ignore_patterns;
    ignore_patterns = (long long)xmalloc();
    v15 = v66;
    v14 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v13 = &g_4055fa;
    v27 = ((int)*(time_types + (long long)__xargmatch_internal() * 4));
    time_type = v27;
    v15 = v27;
    v14 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v13 = &g_405648;
    v16 = *(sort_types + (long long)__xargmatch_internal() * 4);
    v15 = v59;
    v14 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v13 = &g_4056c1;
    v27 = ((int)*(quoting_style_vals + (long long)__xargmatch_internal() * 4));
    v15 = v27;
    v15 = v64;
    v14 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v13 = &g_40570b;
    v27 = ((int)*(indicator_style_types + (long long)__xargmatch_internal() * 4));
    indicator_style = v27;
    rsp<8> = rsp<8> - 8;
    v15 = &g_40579f;
    *(hide_patterns) = optarg;
    hide_patterns = (long long)xmalloc();
    *(hide_patterns + 8) = v59;
    v15 = v63;
    v14 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v13 = &g_405811;
    rsp<8> = rsp<8> - 8;
    v15 = &g_40539f;
    dcgettext(0x0, &g_418c50, 0x5);
    v14 = v58;
    v13 = 2;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v12 = &g_4053c6;
    v19 = (long long)xnumtoumax();
    rsp<8> = rsp<8> - 8;
    v15 = &g_4054f6;
    *(ignore_patterns) = "*~";
    *(ignore_patterns + 8) = ignore_patterns;
    ignore_patterns = (long long)xmalloc();
    rsp<8> = rsp<8> - 8;
    v14 = &g_40551c;
    *(ignore_patterns) = ".*~";
    *(ignore_patterns + 8) = ignore_patterns;
    ignore_patterns = (long long)xmalloc();
    v75 = v64;
    v74 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_418bf2, &g_41afb8);
    textdomain(&g_418bf2);
    exit_failure = 2;
    atexit();
    print_dir_name = 1;
    exit_status = 0;
    pending_dirs = 0;
    current_time = 0x8000000000000000;
    g_424378 = 18446744069414584319;
    v3 = 18446744069414584319;
    v5 = 18446744069414584319;
    v1 = -1;
    v0 = -1;
    v2 = -1;
    v4 = 0;
    if (((int)v72) == 0)
    {
        /* goto 4217410; */
    }
    if (optarg != 0)
    {
        v15 = v65;
        v14 = 1;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v13 = &g_405499;
        rsp<8> = rsp<8> + 8 + 8;
        v27 = ((int)*(when_types + (long long)__xargmatch_internal() * 4));
        v15 = v67;
        v14 = 1;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v13 = &g_405763;
        v59 = ((int)*(when_types + (long long)__xargmatch_internal() * 4));
        rsp<8> = rsp<8> + 8 + 8;
        v15 = v53;
        v14 = 1;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v13 = &g_40587f;
        v59 = ((int)*(when_types + (long long)__xargmatch_internal() * 4));
        rsp<8> = rsp<8> + 8 + 8;
        if (v59 != 1)
        {
            v27 = 0;
        }
        if (v59 != 1)
        {
            v27 = 0;
        }
        if (v27 == 2)
        {
            rsp<8> = rsp<8> - 8;
            v14 = &g_4054be;
            v27 = stdout_isatty();
        }
        if (v59 == 2)
        {
            rsp<8> = rsp<8> - 8;
            v14 = &g_40578d;
            v27 = (long long)stdout_isatty();
            /* goto 4217547; */
        }
        if (v59 == 2)
        {
            rsp<8> = rsp<8> - 8;
            v14 = &g_4058a8;
            v27 = (long long)stdout_isatty();
            /* goto 4217570; */
        }
    }
    if (ls_mode != 1)
    {
        v39 = "vdir";
        v15 = v39;
        v14 = 0;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v13 = &g_4055b0;
        version_etc();
        rsp<8> = rsp<8> - 8;
        v12 = &g_4055b7;
        exit(0x0); /* do not return */
    }
    v15 = v39;
    v14 = 0;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v13 = &g_4055b0;
    version_etc();
    rsp<8> = rsp<8> - 8;
    v12 = &g_4055b7;
    exit(0x0); /* do not return */
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
    {
        rsp<8> = rsp<8> - 8;
        v14 = &g_405922;
        v60 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v13 = &g_405938;
        dcgettext(0x0, &g_418c27, 0x5);
        rsp<8> = rsp<8> - 8;
        v12 = &g_405953;
        error(0x2, 0x0, "%s: %s");
    }
    if (v27 == 0)
    {
        file_human_output_opts = human_output_opts;
        file_output_block_size = output_block_size;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v14 = &g_40679f;
        xstrtol_fatal();
        __assert_fail(); /* do not return */
    }
    print_with_color = 0;
    print_hyperlink = 0;
    print_block_size = 0;
    v17 = 6;
    if (v59 == 1 || optarg == 0)
    {
        v27 = 1;
        /* goto 4217547; */
    }
    if (optarg == 0 || v59 == 1)
    {
        v27 = 1;
        /* goto 4217570; */
    }
    if (v27 == 1 || optarg == 0 || v27 == 2 && ((long long)v27) != 0)
    {
        indicator_style = 3;
    }
    print_hyperlink = v27;
    print_hyperlink = print_hyperlink & 1;
    print_with_color = v27;
    print_with_color = print_with_color & 1;
}
