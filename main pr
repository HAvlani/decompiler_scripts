typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char balance_columns;
extern struct_0 chars_per_line;
extern struct_0 chars_per_margin;
extern unsigned int col_sep_length;
extern struct_1 col_sep_string;
extern char *custom_header;
extern char *date_format;
extern char double_space;
extern char explicit_columns;
extern char extremities;
extern char failed_opens;
extern unsigned long long first_page_number;
extern char g_402ad5;
extern char g_402ae0;
extern char g_402b01;
extern char g_402b24;
extern char g_402ba0;
extern char g_402bd4;
extern char g_402bf4;
extern char g_402c30;
extern char g_402c5f;
extern char g_402c82;
extern char g_402cb1;
extern char g_402d0d;
extern char g_402d30;
extern char g_402d55;
extern char g_402e0f;
extern char g_402e39;
extern char g_402e5c;
extern char g_402f5e;
extern unsigned int g_40d075;
extern unsigned long long g_40d085;
extern unsigned int g_40d119;
extern unsigned long long g_40d142;
extern unsigned long long g_40d151;
extern char g_40d192;
extern char g_40d1a2;
extern unsigned int g_40e3c0;
extern unsigned int g_40e420;
extern unsigned int g_40e450;
extern unsigned int g_40e480;
extern unsigned int g_40e4a0;
extern unsigned int g_40e4d0;
extern unsigned int g_40e500;
extern unsigned int g_40e540;
extern char have_read_stdin;
extern char ignore_failed_opens;
extern char join_lines;
extern char keep_FF;
extern struct_0 lines_per_page;
extern struct_1 localtz;
extern unsigned int long_options;
extern char numbered_lines;
extern char *optarg;
extern struct_0 optind;
extern char parallel_files;
extern char print_across_flag;
extern unsigned int short_options;
extern char skip_count;
extern struct_0 start_line_num;
extern char storing_columns;
extern char tabify_output;
extern char truncate_lines;
extern char untabify_input;
extern char use_cntrl_prefix;
extern char use_col_separator;
extern char use_esc_sequence;
extern char use_form_feed;

int main()
{
    unsigned long long v10;  // [bp-0x48]
    unsigned long v11;  // [bp-0x8]
    unsigned long v12;  // [bp+0x0]
    char v14;  // [bp+0x15]
    char v15;  // [bp+0x16]
    struct_1 *v16;  // [bp+0x18]
    char v17;  // [bp+0x1d]
    char v18;  // [bp+0x1f]
    unsigned int v19;  // [bp+0x20]
    char v20;  // [bp+0x25]
    char v21;  // [bp+0x27]
    unsigned long long v22;  // [bp+0x28]
    unsigned long long v35;  // rax
    char * v37;  // rax
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v42;  // rdx
    unsigned int v46;  // edi
    unsigned long long v48;  // r13
    unsigned int v5;  // [bp-0x60]
    char v6;  // [bp-0x5b]
    char v7;  // [bp-0x5a]
    char v8;  // [bp-0x59]

    v20 = use_col_separator;
    v21 = use_col_separator;
    v37 = optarg;
    numbered_lines = 1;
    col_sep_length = 0;
    col_sep_string = &g_40d085;
    use_col_separator = 1;
    v21 = 0;
    rsp<8> = rsp<8> - 8;
    v12 = &g_402b01;
    dcgettext(0x0, &g_40e4a0, 0x5);
    rsp<8> = rsp<8> - 8;
    v11 = &g_402b24;
    v14 = truncate_lines;
    v15 = truncate_lines;
    v10 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40d119, &g_40e3c0);
    textdomain(&g_40d119);
    atexit();
    v4 = 0;
    extremities = 0;
    keep_FF = 1;
    ignore_failed_opens = 1;
    parallel_files = 1;
    storing_columns = 0;
    custom_header = optarg;
    join_lines = 1;
    use_form_feed = 1;
    date_format = optarg;
    balance_columns = 1;
    double_space = 1;
    use_cntrl_prefix = 1;
    print_across_flag = 1;
    storing_columns = 0;
    extremities = 0;
    keep_FF = 0;
    rsp<8> = rsp<8> - 8;
    v12 = &g_402bd4;
    dcgettext(0x0, &g_40e480, 0x5);
    rsp<8> = rsp<8> - 8;
    v11 = &g_402bf4;
    chars_per_margin = xdectoimax();
    rsp<8> = rsp<8> - 8;
    v12 = &g_402c5f;
    dcgettext(0x0, &g_40e420, 0x5);
    rsp<8> = rsp<8> - 8;
    v11 = &g_402c82;
    lines_per_page = xdectoimax();
    skip_count = 0;
    rsp<8> = rsp<8> - 8;
    v12 = &g_402d30;
    dcgettext(0x0, &g_40e450, 0x5);
    rsp<8> = rsp<8> - 8;
    v11 = &g_402d55;
    start_line_num = xdectoimax();
    truncate_lines = 1;
    rsp<8> = rsp<8> - 8;
    v12 = &g_402e39;
    dcgettext(0x0, &g_40e4d0, 0x5);
    rsp<8> = rsp<8> - 8;
    v11 = &g_402e5c;
    v15 = 0;
    chars_per_line = xdectoimax();
    rsp<8> = rsp<8> - 8;
    v12 = &g_402ad5;
    parse_column_count();
    v48 = 0;
    rsp<8> = rsp<8> - 8;
    v11 = &g_402ae0;
    rpl_free();
    v22 = 0;
    if (((long long)use_col_separator) == 0)
    {
        if (optarg != 0)
        {
            rsp<8> = rsp<8> - 8;
            v12 = &g_402ba0;
            separator_string();
            v18 = 1;
            v17 = 1;
        }
        else
        {
            v21 = 1;
            v20 = 1;
        }
    }
    if (first_page_number == 0)
    {
        if (*(optarg) == 43)
        {
            rsp<8> = rsp<8> - 8;
            v12 = &g_402f5e;
            v35 = first_last_page();
            if (((long long)v35) == 0)
            {
                v37 = optarg;
                /* goto 4205990; */
            }
        }
    }
    if (optarg != 0)
    {
        rsp<8> = rsp<8> - 8;
        v12 = &g_402c30;
        getoptarg();
        rsp<8> = rsp<8> - 8;
        v12 = &g_402cb1;
        getoptarg();
        rsp<8> = rsp<8> - 8;
        v12 = &g_402d0d;
        separator_string();
        rsp<8> = rsp<8> - 8;
        v12 = &g_402e0f;
        getoptarg();
    }
    if (((long long)truncate_lines) == 0)
    {
        chars_per_line = xdectoimax();
        v15 = 1;
        v14 = 1;
    }
    if (v46 > 1)
    {
        v4 = (long long)xnmalloc();
        /* goto 4205067; */
    }
    tabify_output = 1;
    untabify_input = 1;
    v8 = 0;
    v48 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    if (((long long)v35) == 0 || *(optarg) != 43 || first_page_number != 0)
    {
        v42 = ((long long)v19);
        *(v16 + ((long long)v19) * 8) = v37;
        v19 = ((int)v42) + 1;
    }
}
