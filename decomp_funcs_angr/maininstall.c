typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char copy_only_if_needed;
extern char dir_arg;
extern struct_0 dir_mode;
extern char g_4041c1;
extern char g_404235;
extern char g_404346;
extern char g_404354;
extern char g_4047a2;
extern char g_404a55;
extern char g_404a66;
extern unsigned int g_417d50;
extern unsigned int g_417d78;
extern unsigned int g_417e38;
extern unsigned int g_417e78;
extern unsigned int g_417eb8;
extern unsigned int g_417ee8;
extern unsigned int g_417f50;
extern unsigned int g_417f98;
extern char g_417fe0;
extern char g_418028;
extern unsigned int g_418068;
extern unsigned int g_418204;
extern unsigned int g_41823d;
extern unsigned int g_418252;
extern char g_41825e;
extern unsigned int g_418284;
extern unsigned int g_418298;
extern unsigned int g_4182a2;
extern unsigned int g_4182b2;
extern unsigned int g_4182c2;
extern unsigned int g_4182d3;
extern struct_0 g_418368;
extern unsigned int group_id;
extern unsigned long long group_name;
extern unsigned int long_options;
extern struct_0 mode;
extern struct_1 optarg;
extern struct_0 optind;
extern unsigned int owner_id;
extern unsigned long long owner_name;
extern unsigned int selinux_enabled;
extern char strip_files;
extern struct_1 strip_program;
extern char use_default_selinux_context;

int main()
{
    char v0;  // [bp-0x180]
    unsigned long long v1;  // [bp-0x178]
    unsigned long long v10;  // [bp-0x128]
    unsigned short v11;  // [bp-0x120]
    unsigned int v12;  // [bp-0x11c]
    char v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x110]
    unsigned long long v15;  // [bp-0x108]
    unsigned int v16;  // [bp-0x100]
    unsigned short v17;  // [bp-0xfc]
    char v18;  // [bp-0xfa]
    unsigned int v19;  // [bp-0xf4]
    unsigned long long v2;  // [bp-0x170]
    unsigned long long v20;  // [bp-0xf0]
    unsigned long long v21;  // [bp-0xe8]
    unsigned long v22;  // [bp-0x8]
    unsigned long v23;  // [bp+0x0]
    char v25;  // [bp+0x10]
    unsigned long v26;  // [bp+0x18]
    unsigned long v27;  // [bp+0x20]
    char|unsigned long v28;  // [bp+0x28]
    unsigned long long v3;  // [bp-0x168]
    unsigned long v30;  // [bp+0x40]
    char v31;  // [bp+0x77]
    unsigned long v32;  // [bp+0x78]
    char v33;  // [bp+0x8b]
    char v34;  // [bp+0x94]
    char v4;  // [bp-0x160]
    char v5;  // [bp-0x151]
    unsigned long v51;  // rsi
    unsigned long long v6;  // [bp-0x150]
    unsigned long long v61;  // r13
    unsigned long long v63;  // r15
    unsigned long v64;  // r15
    unsigned long long v8;  // [bp-0x138]
    unsigned long long v9;  // [bp-0x130]

    v51 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
    copy_only_if_needed = 1;
    v34 = 1;
    v31 = 1;
    dir_arg = 1;
    v25 = 1;
    v28 = optarg;
    owner_name = optarg;
    v27 = optarg;
    group_name = optarg;
    v25 = 1;
    v26 = (optarg == 0? v26 : optarg);
    strip_files = 1;
    rsp<8> = rsp<8> - 8;
    v23 = &g_404235;
    signal(0x11, 0x0);
    rsp<8> = rsp<8> - 8;
    v23 = &g_4041c1;
    v28 = 1;
    strip_program = (long long)xstrdup();
    v63 = 0;
    v61 = v51;
    selinux_enabled = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_418204, &g_417d50);
    textdomain(&g_418204);
    atexit();
    cp_options_default();
    v8 = 0x400000000;
    v9 = 8589934596;
    v17 = 0;
    v19 = 1;
    v12 = 0;
    v13 = 0;
    v10 = 1103806595456;
    v11 = 0x100;
    v14 = 0;
    v15 = 0x100;
    v16 = 0x100;
    v18 = 0;
    v20 = 0;
    v21 = 0;
    owner_name = 0;
    group_name = 0;
    strip_files = 0;
    dir_arg = 0;
    umask(0x0);
    v4 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v3 = 0;
    v0 = 0;
    v2 = 0;
    if (v64 == 0)
    {
        v63 = optarg;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v23 = &g_404a55;
        rsp<8> = rsp<8> - 8;
        v22 = &g_404a66;
        error(0x1, 0x0, dcgettext(0x0, &g_417d78, 0x5));
    }
    if (selinux_enabled != 0)
    {
        v33 = 1;
        use_default_selinux_context = 0;
        use_default_selinux_context = 0;
        if (optarg != 0)
        {
            v30 = optarg;
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v23 = &g_4047a2;
            v32 = (long long)get_labeling_handle();
        }
    }
    else
    {
        if (optarg != 0)
        {
            v51 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
        }
        rsp<8> = rsp<8> - 8;
        v23 = &g_404346;
        rsp<8> = rsp<8> - 8;
        v22 = &g_404354;
        error(0x0, 0x0, dcgettext(0x0, v51, 0x5));
    }
}
