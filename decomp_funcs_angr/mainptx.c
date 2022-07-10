typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_6 {
    char field_0;
} struct_6;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_5 {
    uint128_t field_0;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned int field_28;
} struct_5;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned int field_28;
} struct_4;

extern char auto_reference;
extern unsigned long long before;
extern struct_2 before_max_width;
extern char before_truncation;
extern struct_2 break_file;
extern char *context_regex;
extern struct_6 edited_flag;
extern struct_2 *file_line_count;
extern char folded_chars;
extern struct_3 format_vals;
extern char g_403c12;
extern char g_403c82;
extern char g_403cd6;
extern char g_403d18;
extern char g_403d6a;
extern char g_403daf;
extern char g_406038;
extern char g_40604e;
extern char g_406062;
extern char g_40606e;
extern char g_406084;
extern char g_406098;
extern unsigned int g_41d790;
extern unsigned long long g_41d7b8;
extern unsigned int g_41d7d8;
extern struct_3 g_41d93c;
extern char g_41db26;
extern unsigned int g_41dba6;
extern unsigned long long g_41dbcf;
extern unsigned int g_41dbd8;
extern unsigned int g_41dbee;
extern unsigned int g_41dc29;
extern unsigned int g_41dc46;
extern unsigned int g_41dc57;
extern unsigned int g_41dc58;
extern char g_41dc5c;
extern void g_41dc5f;
extern char g_41dc62;
extern void g_41dc67;
extern char g_41dd94;
extern unsigned long long g_41ecaa;
extern char *g_425128;
extern unsigned long long g_425148;
extern unsigned long long g_425168;
extern unsigned long long g_425188;
extern unsigned long long g_4251a8;
extern char g_4251ec;
extern char g_425202;
extern struct_2 g_425330;
extern struct_2 g_425350;
extern unsigned short g_425389;
extern char g_4253a0;
extern struct_2 *g_425488;
extern struct_2 *g_425490;
extern struct_2 *g_4254b0;
extern struct_2 gap_size;
extern char gnu_extensions;
extern struct_2 half_line_width;
extern unsigned long long head;
extern char head_truncation;
extern char ignore_case;
extern unsigned long long ignore_file;
extern struct_2 *input_file_name;
extern char input_reference;
extern unsigned long long keyafter;
extern struct_2 keyafter_max_width;
extern char keyafter_truncation;
extern unsigned long long line_width;
extern unsigned int long_options;
extern struct_2 macro_name;
extern unsigned long long maximum_word_length;
extern unsigned int number_input_files;
extern unsigned long long number_of_occurs;
extern struct_2 occurs_alloc;
extern struct_2 occurs_table;
extern unsigned long long only_file;
extern struct_2 optarg;
extern struct_3 optind;
extern unsigned int output_format;
extern struct_2 reference;
extern unsigned long long reference_max_width;
extern char right_reference;
extern unsigned long long stdout[7];
extern unsigned long long tail;
extern char tail_truncation;
extern struct_2 text_buffers;
extern unsigned long long total_line_count;
extern char *truncation_string;
extern struct_2 truncation_string_length;
extern unsigned long long word_fastmap;
extern char *word_regex;

int main()
{
    unsigned long v17;  // [bp-0x18]
    unsigned long v18;  // [bp-0x10]
    unsigned long|unsigned long long v19;  // [bp-0x8]
    unsigned long v20;  // [bp+0x0]
    unsigned long long v22;  // [bp+0x70]
    unsigned long long v30;  // rax
    struct_2 *v83;  // rbp
    char **v85;  // rsi
    unsigned long long v97;  // r12
    unsigned long long v99;  // r12

    word_regex = optarg;
    rsp<8> = rsp<8> - 8;
    v20 = &g_403cd6;
    unescape_string();
    rsp<8> = rsp<8> - 8;
    v20 = &g_403c12;
    v30 = xstrtoimax();
    rsp<8> = rsp<8> - 8;
    v20 = &g_403c82;
    v30 = xstrtoimax();
    ignore_case = 1;
    output_format = 3;
    right_reference = 1;
    output_format = 2;
    gnu_extensions = 0;
    auto_reference = 1;
    only_file = optarg;
    ignore_file = optarg;
    break_file = optarg;
    macro_name = optarg;
    context_regex = optarg;
    rsp<8> = rsp<8> - 8;
    v20 = &g_403d18;
    unescape_string();
    truncation_string = optarg;
    rsp<8> = rsp<8> - 8;
    v20 = &g_403d6a;
    unescape_string();
    v19 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v18 = &g_403daf;
    output_format = *(format_vals + (long long)__xargmatch_internal() * 4);
    v83 = v85;
    set_program_name();
    setlocale();
    bindtextdomain(&g_41dba6, &g_41d790);
    textdomain(&g_41dba6);
    atexit();
    if (*(word_regex) == 0)
    {
        word_regex = 0;
    }
    if (v30 == 0)
    {
        v30 = v22;
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsp<8> + 0x70<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            line_width = v30;
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v19 = &g_40606e;
            v99 = (long long)quote();
            rsp<8> = rsp<8> - 8;
            v18 = &g_406084;
            rsp<8> = rsp<8> - 8;
            v17 = &g_406098;
            error(0x1, 0x0, dcgettext(0x0, &g_41dbee, 0x5));
        }
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v19 = &g_40606e;
        v99 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v18 = &g_406084;
        rsp<8> = rsp<8> - 8;
        v17 = &g_406098;
        error(0x1, 0x0, dcgettext(0x0, &g_41dbee, 0x5));
    }
    if (v30 == 0)
    {
        v30 = v22;
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsp<8> + 0x70<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            gap_size = v30;
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v19 = &g_406038;
            v97 = (long long)quote();
            rsp<8> = rsp<8> - 8;
            v18 = &g_40604e;
            rsp<8> = rsp<8> - 8;
            v17 = &g_406062;
            error(0x1, 0x0, dcgettext(0x0, &g_41dbd8, 0x5));
        }
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v19 = &g_406038;
        v97 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v18 = &g_40604e;
        rsp<8> = rsp<8> - 8;
        v17 = &g_406062;
        error(0x1, 0x0, dcgettext(0x0, &g_41dbd8, 0x5));
    }
}
