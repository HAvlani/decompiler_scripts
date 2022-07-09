typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char g_402adc;
extern char g_402af6;
extern char g_402b1a;
extern unsigned int g_40c084;
extern unsigned int g_40c0d1;
extern unsigned int g_40c0da;
extern unsigned int g_40c0ea;
extern unsigned int g_40cbd8;
extern unsigned int g_40cc00;
extern unsigned int g_40cc30;
extern struct_0 g_40cc50;
extern unsigned int long_options;
extern struct_1 optarg;
extern struct_0 optind;
extern struct_1 reference_file;

int main()
{
    unsigned long v16;  // [bp-0x10]
    unsigned long v17;  // [bp-0x8]
    unsigned long v18;  // [bp+0x0]
    unsigned long v19;  // [bp+0x8]
    char v2;  // [bp-0x131]
    char v20;  // [bp+0xf]
    char v21;  // [bp+0x17]
    unsigned int v22;  // [bp+0x38]
    char v23;  // [bp+0x3c]
    char v24;  // [bp+0x49]
    unsigned long long v33;  // rax
    unsigned long|unsigned int v36;  // ebx
    unsigned long v39;  // rdi
    unsigned int v4;  // [bp-0x118]
    unsigned long|unsigned int v44;  // r14
    unsigned int v5;  // [bp-0x114]
    unsigned int v6;  // [bp-0x110]
    unsigned int v7;  // [bp-0x10c]

    rsp<8> = rsp<8> - 8;
    v18 = &g_402adc;
    v33 = parse_user_spec_warn();
    v19 = v33;
    v20 = 1;
    v20 = 0;
    v22 = 0;
    v24 = 1;
    v22 = 1;
    v23 = 1;
    v44 = 1;
    reference_file = optarg;
    v44 = 0;
    v36 = 2;
    v44 = -1;
    v36 = 16;
    v4 = -1;
    v5 = -1;
    v6 = -1;
    v7 = -1;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40c084, &g_40cbd8);
    textdomain(&g_40c084);
    atexit();
    chopt_init();
    v2 = 0;
    if (v33 != 0)
    {
        rsp<8> = rsp<8> - 8;
        v17 = &g_402af6;
        quote();
        v39 = ((long long)(((int)v21) ^ 1));
        rsp<8> = rsp<8> - 8;
        v16 = &g_402b1a;
        error(v39, 0x0, "%s: %s");
    }
}
