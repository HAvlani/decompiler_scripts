typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    struct struct_2 *field_8;
    char padding_10[8184];
    unsigned long long field_2008;
    unsigned long long field_2010;
    unsigned long long field_2018;
} struct_1;

typedef struct struct_5 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    char padding_10[8184];
    unsigned long long field_2008;
    unsigned long long field_2010;
    unsigned long long field_2018;
} struct_5;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

extern unsigned long long default_file_list.7444;
extern char first_file.7231;
extern char g_402854;
extern char g_402887;
extern unsigned int g_40801c;
extern unsigned int g_40807f;
extern unsigned int g_40812c;
extern char g_408155;
extern unsigned int g_408157;
extern unsigned int g_408192;
extern char g_4081a4;
extern unsigned int g_4081ab;
extern char g_4081d5;
extern unsigned int g_4081e3;
extern unsigned int g_408820;
extern struct_0 g_408848;
extern <missing-type> g_409101;
extern char have_read_stdin;
extern char line_end;
extern unsigned int long_options;
extern char *optarg;
extern struct_0 optind;
extern char presume_input_pipe;
extern char print_headers;

int main()
{
    BOT tmp_12;  // tmp #12
    BOT tmp_6;  // tmp #6
    unsigned long long v1;  // [bp-0x168]
    unsigned long v24;  // [bp+0x0]
    char v26;  // [bp+0x16]
    char v27;  // [bp+0x1d]
    char|unsigned long long v33;  // rax
    char [2] v39;  // rcx
    char v4;  // [bp-0x153]
    char [2]|char *|unsigned long long v40;  // rdx
    unsigned long long v43;  // rbp
    struct_1 *v44;  // rsi
    unsigned long long v45;  // rdi
    unsigned long long v46;  // r9
    unsigned long long v47;  // r10
    unsigned long long v48;  // r11
    struct_5 * v49;  // r12
    char|unsigned long long v5;  // [bp-0x152]
    unsigned long long v53;  // r13

    v33 = ((char)*(optarg));
    v27 = ((char)(*(optarg) == 45));
    v33 = ((char)*(optarg));
    v27 = ((char)(*(optarg) == 45));
    v53 = v45;
    v49 = v44;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40812c, &g_408820);
    textdomain(&g_40812c);
    atexit();
    have_read_stdin = 0;
    print_headers = 0;
    line_end = 10;
    line_end = 0;
    if (v33 == 45)
    {
        optarg = optarg + 1;
        /* goto 4204618; */
    }
    if (v33 == 45)
    {
        optarg = optarg + 1;
        /* goto 4204672; */
    }
    if (((int)v45) > 1)
    {
        if (v44->field_8->field_0 == 45)
        {
            if (((int)v44->field_8->field_1) - 48 <= 9)
            {
                v39 = v44->field_8 + 1;
                /* goto 4204840; */
                if (((int)tmp_12) - 48 > 9)
                {
                    if (((long long)tmp_12) != 0)
                    {
                        v40 = v39;
                        v46 = 0;
                        v47 = 10;
                        v45 = 0;
                        v48 = 1;
                        /* goto 4204896; */
                    }
                    else
                    {
                        v5 = 1;
                        /* goto 4204970; */
                    }
                }
            }
        }
    }
    rsp<8> = rsp<8> - 8;
    v24 = &g_402854;
    v26 = 1;
    v24 = (long long)string_to_integer();
    rsp<8> = rsp<8> - 8;
    v24 = &g_402887;
    v26 = 0;
    v24 = (long long)string_to_integer();
    if (((int)v45) <= 1 || v44->field_8->field_0 != 45 || ((int)v44->field_8->field_1) - 48 > 9)
    {
        v5 = 1;
        v1 = 10;
        /* goto 4204475; */
    }
    if (((int)tmp_12) - 48 <= 9 || v44->field_8->field_0 == 45 && ((int)v44->field_8->field_1) - 48 <= 9 && ((int)v45) > 1)
    {
        tmp_12 = ((long long)v39[1]);
        v39 += 1;
        v43 = tmp_12;
    }
    if (...)
    {
        v33 = v43 - 98;
        switch (v43 - 98 & 255)
        {
        case 0: case 9: case 11:
            v45 = v43;
            v48 = 0;
            break;
        case 1:
            v45 = 0;
            v48 = 0;
            break;
        case 10:
            v48 = 1;
            break;
        case 15:
            break;
            v43 = ((long long)v40[1]);
            v40 += 1;
            tmp_6 = v43;
            if (((long long)tmp_6) == 0)
            {
                v5 = v48;
                if (((long long)v46) != 0)
                {
                    line_end = v47;
                }
                v39[0] = v45;
                if (((long long)v45) != 0)
                {
                    v39[1] = 0;
                    /* goto 4204970; */
                }
            }
        case 20:
            break;
        case 24:
            v46 = 1;
            v47 = 0;
            break;
        }
    }
    if (((long long)v46) != 0)
    {
        line_end = v47;
    }
    v40 = dcgettext(0x0, &g_408157, 0x5);
    error(0x0, 0x0, v40);
    /* goto 4207235; */
    if (...)
    {
        v49 = v44 + 8;
        v53 = ((long long)(((int)v53) - 1));
        v1 = (long long)string_to_integer();
        v49->field_0 = v49->field_8;
        /* goto 4204475; */
    }
    usage(); /* do not return */
    if (((long long)tmp_12) == 0 || ((long long)v45) == 0 || ((long long)tmp_6) == 0)
    {
        v4 = 0;
    }
}
