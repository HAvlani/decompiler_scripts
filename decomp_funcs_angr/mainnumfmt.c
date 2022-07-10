typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int auto_padding;
extern unsigned int conv_exit_code;
extern char debug;
extern char *decimal_point;
extern struct_1 decimal_point_length;
extern struct_1 delimiter;
extern char dev_debug;
extern char format_str[2];
extern struct_0 format_str_prefix;
extern struct_0 format_str_suffix;
extern struct_0 from_unit_size;
extern char g_402946;
extern char g_402969;
extern char g_402a20;
extern char g_402a60;
extern char g_402a89;
extern char g_402ac9;
extern char g_402b49;
extern char g_402b8e;
extern char g_402bac;
extern char g_402bc2;
extern char g_402bd6;
extern char g_403426;
extern char g_40343c;
extern char g_403450;
extern char g_403495;
extern char g_4034a6;
extern char g_4034b9;
extern char g_4034ca;
extern unsigned int g_40b1ab;
extern <missing-type> g_40b1d9;
extern unsigned int g_40b1e8;
extern unsigned int g_40b200;
extern unsigned int g_40b219;
extern unsigned int g_40b237;
extern unsigned int g_40b266;
extern unsigned int g_40b27b;
extern unsigned int g_40b299;
extern unsigned int g_40b29b;
extern unsigned int g_40b2b0;
extern unsigned int g_40c8f8;
extern unsigned int g_40c920;
extern unsigned int g_40c950;
extern unsigned int g_40c980;
extern unsigned int g_40c9a0;
extern unsigned int g_40c9c8;
extern unsigned int g_40c9f0;
extern unsigned int g_40ca10;
extern unsigned int g_40ca50;
extern unsigned int g_40cae8;
extern unsigned int g_40cb10;
extern unsigned int g_40cb38;
extern unsigned int g_40cb68;
extern struct_1 g_40cc58;
extern unsigned int grouping;
extern unsigned long long header;
extern struct_1 inval_style;
extern struct_1 inval_types;
extern char line_delim;
extern unsigned int longopts;
extern struct_0 n_frp;
extern char optarg[2];
extern struct_1 optind;
extern unsigned int padding_alignment;
extern struct_0 padding_buffer_size;
extern struct_0 padding_width;
extern struct_1 scale_from;
extern struct_1 scale_from_types;
extern struct_1 scale_to;
extern struct_1 scale_to_types;
extern char *stdin;
extern struct_0 stdout;
extern char suffix[2];
extern struct_0 to_unit_size;
extern struct_0 user_precision;
extern struct_0 zero_padding_width;

int main()
{
    unsigned long v10;  // [bp-0x10]
    unsigned long|unsigned long long v11;  // [bp-0x8]
    unsigned long v12;  // [bp+0x0]
    unsigned long long|unsigned int v14;  // rax
    unsigned int v33;  // rdi
    unsigned int v36;  // r12d
    unsigned long long v37;  // r12
    unsigned long long v39;  // r12
    unsigned long long v44;  // r13
    unsigned long v45;  // r14
    unsigned long v9;  // [bp-0x18]

    rsp<8> = rsp<8> - 8;
    v12 = &g_402969;
    v14 = xstrtol();
    v36 = v33;
    set_program_name();
    v44 = setlocale();
    bindtextdomain(&g_40b1ab, &g_40c8f8);
    textdomain(&g_40b1ab);
    decimal_point = nl_langinfo(0x10000);
    line_delim = 0;
    dev_debug = 1;
    debug = 1;
    suffix = optarg;
    format_str = optarg;
    rsp<8> = rsp<8> - 8;
    v12 = &g_402a20;
    to_unit_size = (long long)unit_to_umax();
    v11 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v10 = &g_402a60;
    v14 = ((int)*(scale_to_types + (long long)__xargmatch_internal() * 4));
    scale_to = v14;
    rsp<8> = rsp<8> - 8;
    v12 = &g_402a89;
    from_unit_size = (long long)unit_to_umax();
    v11 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v10 = &g_402ac9;
    v14 = ((int)*(scale_from_types + (long long)__xargmatch_internal() * 4));
    scale_from = v14;
    v11 = 1;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v10 = &g_402b49;
    v14 = ((int)*(inval_types + (long long)__xargmatch_internal() * 4));
    inval_style = v14;
    if (n_frp == 0)
    {
        rsp<8> = rsp<8> - 8;
        v12 = &g_402946;
        set_fields();
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v12 = &g_4034b9;
        rsp<8> = rsp<8> - 8;
        v11 = &g_4034ca;
        error(0x1, 0x0, dcgettext(0x0, &g_40b219, 0x5));
    }
    if (((long long)*(optarg)) != 0)
    {
        if (*(optarg + 1) != 0)
        {
            rsp<8> = rsp<8> - 8;
            v12 = &g_403495;
            rsp<8> = rsp<8> - 8;
            v11 = &g_4034a6;
            error(0x1, 0x0, dcgettext(0x0, &g_40c920, 0x5));
        }
    }
    if (optarg != 0)
    {
        rsp<8> = rsp<8> - 8;
        v12 = &g_402b8e;
        v14 = xstrtoumax();
        if (!(v14 == 0))
        {
            rsp<8> = rsp<8> - 8;
            v11 = &g_402bac;
            v37 = (long long)quote();
            rsp<8> = rsp<8> - 8;
            v10 = &g_402bc2;
            rsp<8> = rsp<8> - 8;
            v9 = &g_402bd6;
            error(0x1, 0x0, dcgettext(0x0, &g_40b237, 0x5));
        }
        else if (header == 0)
        {
            rsp<8> = rsp<8> - 8;
            v11 = &g_402bac;
            v37 = (long long)quote();
            rsp<8> = rsp<8> - 8;
            v10 = &g_402bc2;
            rsp<8> = rsp<8> - 8;
            v9 = &g_402bd6;
            error(0x1, 0x0, dcgettext(0x0, &g_40b237, 0x5));
        }
    }
    else
    {
        header = 1;
    }
    if (!(v14 == 0))
    {
        rsp<8> = rsp<8> - 8;
        v11 = &g_403426;
        v39 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v10 = &g_40343c;
        rsp<8> = rsp<8> - 8;
        v9 = &g_403450;
        error(0x1, 0x0, dcgettext(0x0, &g_40b200, 0x5));
    }
    else if (!((v45 & padding_width) != 0))
    {
        rsp<8> = rsp<8> - 8;
        v11 = &g_403426;
        v39 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v10 = &g_40343c;
        rsp<8> = rsp<8> - 8;
        v9 = &g_403450;
        error(0x1, 0x0, dcgettext(0x0, &g_40b200, 0x5));
    }
    else if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=0x411158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
    {
        padding_alignment = 0;
        padding_width = 0 - padding_width;
    }
    if (((long long)*(optarg)) == 0 || *(optarg + 1) == 0)
    {
        delimiter = ((int)*(optarg));
    }
    if (*(decimal_point) == 0 || decimal_point == 0)
    {
        decimal_point = ".";
    }
    decimal_point_length = strlen(decimal_point);
    atexit();
}
