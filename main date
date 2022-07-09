typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char g_403a7e;
extern char g_403b57;
extern char g_403b64;
extern char g_404111;
extern char g_404122;
extern unsigned int g_4140a8;
extern unsigned long long g_4140d1;
extern unsigned long long g_4140d7;
extern unsigned int g_414105;
extern char g_41412e;
extern unsigned int g_414131;
extern unsigned int g_414140;
extern unsigned int g_414150;
extern unsigned int g_415558;
extern unsigned int g_415580;
extern char g_4155a8;
extern char g_4155f0;
extern struct_0 g_4156e0;
extern char g_41597f;
extern char g_415efd;
extern char g_415f0c;
extern unsigned int long_options;
extern struct_1 optarg;
extern struct_0 optind;
extern struct_0 parse_datetime_flags;
extern unsigned int short_options;
extern struct_1 stdin;
extern struct_0 time_spec;

int main()
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    unsigned long v12;  // [bp-0x10]
    unsigned long|unsigned long long v13;  // [bp-0x8]
    unsigned long|unsigned long long v14;  // [bp+0x0]
    unsigned long v16;  // [bp+0x10]
    unsigned long v17;  // [bp+0x18]
    unsigned long v18;  // [bp+0x20]
    unsigned long v19;  // [bp+0x28]
    unsigned long long v2;  // [bp-0x110]
    char v20;  // [bp+0x33]
    unsigned long long v3;  // [bp-0x108]
    unsigned long long v31;  // rax
    unsigned long long v39;  // rbp
    char v4;  // [bp-0xfd]
    unsigned int v40;  // rsi
    unsigned int v41;  // rdi
    unsigned long long v45;  // r12
    char **v49;  // r13
    unsigned int v50;  // r14
    unsigned long long v51;  // r15

    v31 = v45;
    0 = 0;
    rsp<8> = rsp<8> - 8;
    v14 = &g_403b57;
    v31 = putenv(&g_414105);
    parse_datetime_flags = parse_datetime_flags | 1;
    v20 = 1;
    v19 = optarg;
    v18 = optarg;
    v16 = optarg;
    v17 = optarg;
    v51 = 0;
    v50 = v41;
    v49 = ((unsigned int)v40);
    v39 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4140a8, &g_415558);
    textdomain(&g_4140a8);
    atexit();
    v4 = 0;
    v2 = 0;
    v0 = 0;
    v3 = 0;
    v1 = 0;
    if (optarg != 0)
    {
        v14 = 0;
        v13 = 1;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v12 = &g_403a7e;
        rsp<8> = rsp<8> + 8 + 8;
        0 = ((long long)*(time_spec + (long long)__xargmatch_internal() * 4));
        /* goto 4209294; */
    }
    if (v31 != 0)
    {
        rsp<8> = rsp<8> - 8;
        v13 = &g_403b64;
        xalloc_die(); /* do not return */
    }
    v31 = 0 * 32 + "%Y-%m-%d";
    if (rbp<8> == 0)
    {
        v39 = v31;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v14 = &g_404111;
        rsp<8> = rsp<8> - 8;
        v13 = &g_404122;
        error(0x1, 0x0, dcgettext(0x0, &g_415580, 0x5));
    }
}
