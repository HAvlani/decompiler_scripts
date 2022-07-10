typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_0 blank_join;
extern struct_0 body_del;
extern struct_0 body_del_len;
extern unsigned long long body_regex;
extern struct_0 body_type;
extern struct_0 current_regex;
extern struct_0 current_type;
extern struct_0 footer_del;
extern struct_0 footer_del_len;
extern char g_4029b2;
extern char g_4029d5;
extern char g_4029f3;
extern char g_402a20;
extern char g_402a6b;
extern char g_402a82;
extern char g_402ab0;
extern char g_402ad8;
extern char g_402af7;
extern char g_402b24;
extern char g_402b4a;
extern char g_402b5e;
extern char g_402b8c;
extern char g_402ba0;
extern char g_402bc0;
extern char g_402bf4;
extern char g_402c08;
extern char g_402c20;
extern char g_402c31;
extern char g_402ea0;
extern unsigned int g_416096;
extern unsigned int g_4160bf;
extern unsigned int g_4160dc;
extern unsigned int g_41611e;
extern char g_416134;
extern unsigned int g_416a28;
extern unsigned int g_416ac8;
extern unsigned int g_416af0;
extern struct_1 g_416b38;
extern char have_read_stdin;
extern struct_0 header_del;
extern struct_0 header_del_len;
extern struct_0 line_no;
extern struct_0 lineno_format;
extern struct_1 lineno_width;
extern unsigned int longopts;
extern char optarg[3];
extern struct_1 optind;
extern struct_0 page_incr;
extern struct_0 print_no_line_fmt;
extern char reset_numbers;
extern char section_del[3];
extern char separator_str[3];
extern struct_0 starting_line_number;

int main()
{
    unsigned long v1;  // [bp-0x20]
    unsigned long long v14;  // rax
    unsigned long v2;  // [bp-0x18]
    unsigned long long v20;  // rbx
    unsigned int v24;  // esi
    unsigned long long v25;  // rdi
    unsigned long long v28;  // r13
    unsigned long long v29;  // r14
    unsigned long v3;  // [bp-0x10]
    char [3]|unsigned long long v31;  // r15
    unsigned long v4;  // [bp-0x8]
    unsigned long v5;  // [bp+0x0]

    rsp<8> = rsp<8> - 8;
    v5 = &g_402b4a;
    v14 = build_type_arg();
    rsp<8> = rsp<8> - 8;
    v5 = &g_402b8c;
    v14 = build_type_arg();
    rsp<8> = rsp<8> - 8;
    v5 = &g_402bf4;
    v14 = build_type_arg();
    v31 = optarg;
    rsp<8> = rsp<8> - 8;
    v5 = &g_402bc0;
    v14 = strlen(optarg) - 1;
    separator_str = optarg;
    rsp<8> = rsp<8> - 8;
    v5 = &g_4029b2;
    dcgettext(0x0, &g_416af0, 0x5);
    rsp<8> = rsp<8> - 8;
    v4 = &g_4029d5;
    lineno_width = xdectoimax();
    rsp<8> = rsp<8> - 8;
    v5 = &g_4029f3;
    dcgettext(0x0, &g_4160bf, 0x5);
    rsp<8> = rsp<8> - 8;
    v4 = &g_402a20;
    starting_line_number = (long long)xdectoimax();
    rsp<8> = rsp<8> - 8;
    v5 = &g_402ab0;
    dcgettext(0x0, &g_416ac8, 0x5);
    rsp<8> = rsp<8> - 8;
    v4 = &g_402ad8;
    blank_join = (long long)xdectoimax();
    rsp<8> = rsp<8> - 8;
    v5 = &g_402af7;
    dcgettext(0x0, &g_4160dc, 0x5);
    rsp<8> = rsp<8> - 8;
    v4 = &g_402b24;
    page_incr = (long long)xdectoimax();
    v28 = v25;
    v20 = 1;
    set_program_name();
    setlocale();
    bindtextdomain(&g_416096, &g_416a28);
    textdomain(&g_416096);
    atexit();
    have_read_stdin = 0;
    if (*(optarg) == 108)
    {
        if (*(optarg + 1) == 110)
        {
            if (*(optarg + 2) == 0)
            {
                lineno_format = v29;
            }
        }
    }
    if (((long long)v14) == 0)
    {
        rsp<8> = rsp<8> - 8;
        v4 = &g_402b5e;
        v31 = (long long)quote();
        /* goto 4205591; */
    }
    if (((long long)v14) == 0)
    {
        rsp<8> = rsp<8> - 8;
        v4 = &g_402ba0;
        v31 = (long long)quote();
        /* goto 4205591; */
    }
    if (((long long)v14) == 0)
    {
        rsp<8> = rsp<8> - 8;
        v4 = &g_402c08;
        v31 = (long long)quote();
        /* goto 4205591; */
    }
    if (v14 > 1)
    {
        section_del = optarg;
    }
    else
    {
        v14 = section_del;
        if (*(optarg) != 0)
        {
            /* goto 4206192; */
        }
    }
    if (*(optarg + 2) != 0 || *(optarg + 1) != 110 || *(optarg) != 108)
    {
        rsp<8> = rsp<8> - 8;
        v5 = &g_402a6b;
        v14 = strcmp(optarg, "rn");
        if (v14 != 0)
        {
            rsp<8> = rsp<8> - 8;
            v4 = &g_402a82;
            v14 = strcmp(optarg, "rz");
            if (v14 == 0)
            {
                lineno_format = "%0*ld%s";
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v3 = &g_402ea0;
                v31 = (long long)quote();
                /* goto 4205591; */
            }
        }
        else
        {
            lineno_format = "%*ld%s";
        }
    }
    if (*(optarg) != 0 || v14 <= 1 && *(optarg) != 0)
    {
        v14 += 1;
        optarg = v31 + 1;
        *(v14 + 1) = v31[0];
        v31 = optarg;
    }
    if (((long long)v14) == 0 || ((long long)v14) == 0 || ((long long)v14) == 0 || *(optarg + 2) != 0 && v14 != 0 && v14 != 0 || v14 != 0 && *(optarg + 1) != 110 && v14 != 0 || v14 != 0 && *(optarg) != 108 && v14 != 0)
    {
        v20 = 0;
        rsp<8> = rsp<8> - 8;
        v2 = &g_402c20;
        rsp<8> = rsp<8> - 8;
        v1 = &g_402c31;
        error(0x0, 0x0, dcgettext(0x0, v24, 0x5));
    }
}
