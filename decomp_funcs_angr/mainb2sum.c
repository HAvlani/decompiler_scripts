typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    char field_0;
} struct_3;

extern char bin2hex.7464;
extern unsigned int bsd_reversed;
extern char digest_delim;
extern unsigned long long digest_hex_bytes;
extern unsigned long long digest_length;
extern char g_402927;
extern char g_402949;
extern char g_402967;
extern char g_40297d;
extern char g_40298e;
extern char g_4029a1;
extern char g_4029b2;
extern void g_40a013;
extern unsigned int g_40a09e;
extern unsigned int g_40a0c7;
extern unsigned int g_40a0d6;
extern char g_40a0e6;
extern unsigned int g_40a0e9;
extern unsigned int g_40a122;
extern char g_40a12a;
extern unsigned int g_40a12c;
extern unsigned int g_40a13b;
extern char g_40a157;
extern char g_40a16b;
extern char g_40a172;
extern unsigned int g_40a175;
extern char g_40a19d;
extern void g_40a1a2;
extern void g_40a1a5;
extern char g_40a1aa;
extern unsigned int g_40a950;
extern unsigned int g_40a978;
extern unsigned int g_40abe0;
extern unsigned int g_40ac40;
extern unsigned int g_40ac70;
extern unsigned int g_40aca0;
extern unsigned int g_40acd0;
extern unsigned int g_40ad00;
extern unsigned int g_40ad30;
extern struct_1 g_40ad60;
extern char g_40b5f0;
extern char have_read_stdin;
extern char ignore_missing;
extern unsigned int long_options;
extern unsigned long long min_digest_line_length;
extern struct_1 optind;
extern char quiet;
extern char status_only;
extern struct_2 stdin;
extern unsigned long long stdout[7];
extern char strict;
extern char warn;

int main()
{
    unsigned long v25;  // [bp-0x30]
    unsigned long v26;  // [bp-0x28]
    unsigned long v27;  // [bp-0x20]
    unsigned long v28;  // [bp-0x18]
    unsigned long v29;  // [bp-0x10]
    unsigned long v30;  // [bp-0x8]
    unsigned long v31;  // [bp+0x0]
    char v5;  // [bp-0x13d]
    unsigned long v55;  // rdi
    unsigned long long v59;  // r12
    unsigned long long v61;  // r12
    unsigned int v65;  // r14d
    unsigned long long v66;  // r15

    rsp<8> = rsp<8> - 8;
    v31 = &g_402927;
    dcgettext(0x0, &g_40a0c7, 0x5);
    rsp<8> = rsp<8> - 8;
    v30 = &g_402949;
    digest_length = (long long)xdectoumax();
    strict = 1;
    ignore_missing = 1;
    digest_delim = 0;
    v66 = 1;
    status_only = 0;
    warn = 0;
    quiet = 1;
    status_only = 1;
    warn = 0;
    quiet = 0;
    status_only = 0;
    warn = 1;
    quiet = 0;
    v66 = 0;
    v65 = -1;
    v59 = v55;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40a09e, &g_40a950);
    textdomain(&g_40a09e);
    atexit();
    setvbuf(stdout, NULL, 0x1, 0x0);
    v5 = 0;
    if (((long long)(((char)digest_length) & 7)) != 0)
    {
        rsp<8> = rsp<8> - 8;
        v29 = &g_402967;
        v61 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v28 = &g_40297d;
        rsp<8> = rsp<8> - 8;
        v27 = &g_40298e;
        error(0x0, 0x0, dcgettext(0x0, &g_40a0d6, 0x5));
        rsp<8> = rsp<8> - 8;
        v26 = &g_4029a1;
        rsp<8> = rsp<8> - 8;
        v25 = &g_4029b2;
        error(0x1, 0x0, dcgettext(0x0, &g_40a0e9, 0x5));
    }
}
