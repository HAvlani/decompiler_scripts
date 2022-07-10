extern unsigned int backup_type;
extern char beware_hard_dir_link;
extern char dereference_dest_dir_symlinks;
extern struct_1 dest_set;
extern char g_402b52;
extern char g_402b82;
extern char g_402b98;
extern char g_402bac;
extern char g_403039;
extern char g_40304a;
extern char g_40305b;
extern char g_403071;
extern char g_403079;
extern char g_40308d;
extern unsigned int g_40c008;
extern unsigned int g_40c11b;
extern unsigned int g_40c144;
extern unsigned int g_40c17d;
extern unsigned int g_40c18e;
extern unsigned int g_40c1b4;
extern unsigned int g_40c1be;
extern unsigned int g_40cee8;
extern unsigned int g_40cf10;
extern unsigned int g_40cf38;
extern unsigned int g_40cf60;
extern char g_40d09b;
extern char hard_dir_link;
extern char interactive;
extern char logical;
extern unsigned int long_options;
extern struct_1 optarg;
extern struct_0 optind;
extern char relative;
extern char remove_existing_files;
extern char symbolic_link;
extern char verbose;

int main()
{
    unsigned long long v1;  // [bp-0x108]
    unsigned long v10;  // [bp+0x0]
    unsigned long v11;  // [bp+0x8]
    unsigned long v12;  // [bp+0x10]
    char v13;  // [bp+0x38]
    unsigned int v14;  // [bp+0x48]
    unsigned long long v19;  // rax
    unsigned long long v2;  // [bp-0x100]
    unsigned long v27;  // rsi
    unsigned long long v31;  // r12
    unsigned long long v35;  // r13
    unsigned long v38;  // r14
    unsigned long long v39;  // r14
    unsigned long long v40;  // r15
    unsigned long v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]

    logical = 1;
    hard_dir_link = 1;
    verbose = 1;
    symbolic_link = 1;
    relative = 1;
    dereference_dest_dir_symlinks = 0;
    v40 = 1;
    v12 = optarg;
    remove_existing_files = 0;
    interactive = 1;
    remove_existing_files = 1;
    interactive = 0;
    v40 = 1;
    v11 = (optarg == 0? v11 : optarg);
    v40 = 0;
    v39 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40c11b, &g_40cee8);
    textdomain(&g_40c11b);
    atexit();
    hard_dir_link = 0;
    verbose = 0;
    interactive = 0;
    remove_existing_files = 0;
    symbolic_link = 0;
    v1 = 0;
    v2 = 0;
    if (v38 == 0)
    {
        rsp<8> = rsp<8> - 8;
        v10 = &g_402b52;
        v19 = __xstat(0x1, ((int)optarg), &v13);
        if (v19 == 0)
        {
            v39 = optarg;
            if ((((short)v14) & 0xf000) != 0x4000)
            {
                rsp<8> = rsp<8> - 8;
                v9 = &g_402b82;
                v31 = (long long)quotearg_style();
                rsp<8> = rsp<8> - 8;
                v8 = &g_402b98;
                rsp<8> = rsp<8> - 8;
                v7 = &g_402bac;
                error(0x1, 0x0, dcgettext(0x0, &g_40c144, 0x5));
            }
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v9 = &g_40305b;
            v35 = (long long)quotearg_style();
            rsp<8> = rsp<8> - 8;
            v8 = &g_403071;
            rsp<8> = rsp<8> - 8;
            v7 = &g_403079;
            v27 = ((long long)*(__errno_location()));
            rsp<8> = rsp<8> - 8;
            v6 = &g_40308d;
            error(0x1, v27, dcgettext(0x0, &g_40c008, 0x5));
        }
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v10 = &g_403039;
        rsp<8> = rsp<8> - 8;
        v9 = &g_40304a;
        error(0x1, 0x0, dcgettext(0x0, &g_40cf10, 0x5));
    }
}
