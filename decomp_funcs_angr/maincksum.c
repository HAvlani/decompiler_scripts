typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    char field_0;
} struct_3;

extern unsigned long long algorithm_bits;
extern char algorithm_specified;
extern struct_0 algorithm_tags;
extern char bin2hex.7775;
extern unsigned int bsd_reversed;
extern struct_2 cksum_algorithm;
extern char cksum_debug;
extern char digest_delim;
extern unsigned long long digest_hex_bytes;
extern struct_0 digest_length;
extern char g_402a96;
extern char g_402ab8;
extern char g_402ad6;
extern char g_402aec;
extern char g_402afd;
extern char g_402b10;
extern char g_402b21;
extern unsigned int g_41909f;
extern char g_4190c8;
extern unsigned int g_4190d8;
extern unsigned int g_4190e7;
extern unsigned int g_4190fa;
extern unsigned int g_419133;
extern char g_41913d;
extern unsigned int g_41913f;
extern unsigned int g_41914e;
extern char g_41916a;
extern char g_41917e;
extern unsigned int g_419185;
extern unsigned int g_419188;
extern unsigned int g_419b40;
extern unsigned int g_419b68;
extern unsigned int g_419ba0;
extern unsigned int g_419bc8;
extern char g_419d10;
extern char g_419d50;
extern unsigned int g_419d90;
extern unsigned int g_419df0;
extern unsigned int g_419e20;
extern unsigned int g_419e50;
extern unsigned int g_419e80;
extern unsigned int g_419eb0;
extern unsigned int g_419ee0;
extern struct_2 g_419f20;
extern char g_41e11b;
extern char g_41eb30;
extern char have_read_stdin;
extern char ignore_missing;
extern unsigned int long_options;
extern struct_0 max_tag_len.7679;
extern unsigned long long min_digest_line_length;
extern struct_2 optind;
extern char quiet;
extern char status_only;
extern struct_0 stdin;
extern unsigned long long stdout[7];
extern char strict;
extern char warn;

int main()
{
    char v17;  // [bp-0x104]
    unsigned long v29;  // [bp-0x30]
    unsigned long v30;  // [bp-0x28]
    unsigned long v31;  // [bp-0x20]
    unsigned long v32;  // [bp-0x18]
    unsigned long v33;  // [bp-0x10]
    unsigned long v34;  // [bp-0x8]
    unsigned long v35;  // [bp+0x0]
    char v37;  // [bp+0x7c]
    unsigned long|unsigned int v51;  // rbx
    unsigned long v53;  // rsi
    unsigned long long v59;  // r12
    unsigned long long v62;  // r12

    rsp<8> = rsp<8> - 8;
    v35 = &g_402a96;
    dcgettext(0x0, &g_4190d8, 0x5);
    rsp<8> = rsp<8> - 8;
    v34 = &g_402ab8;
    digest_length = (long long)xdectoumax();
    v37 = 1;
    strict = 1;
    cksum_debug = 1;
    ignore_missing = 1;
    digest_delim = 0;
    v51 = 0;
    status_only = 0;
    warn = 0;
    quiet = 1;
    status_only = 1;
    warn = 0;
    quiet = 0;
    status_only = 0;
    warn = 1;
    quiet = 0;
    v59 = v53;
    v51 = 1;
    set_program_name();
    setlocale();
    bindtextdomain(&g_41909f, &g_419b40);
    textdomain(&g_41909f);
    atexit();
    setvbuf(stdout, NULL, 0x1, 0x0);
    v17 = 0;
    if (((long long)(((char)digest_length) & 7)) != 0)
    {
        rsp<8> = rsp<8> - 8;
        v33 = &g_402ad6;
        v62 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v32 = &g_402aec;
        rsp<8> = rsp<8> - 8;
        v31 = &g_402afd;
        error(0x0, 0x0, dcgettext(0x0, &g_4190e7, 0x5));
        rsp<8> = rsp<8> - 8;
        v30 = &g_402b10;
        rsp<8> = rsp<8> - 8;
        v29 = &g_402b21;
        error(0x1, 0x0, dcgettext(0x0, &g_4190fa, 0x5));
    }
}
