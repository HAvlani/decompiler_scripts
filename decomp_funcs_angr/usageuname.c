typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

extern unsigned int g_406016;
extern unsigned int g_4060a8;
extern unsigned int g_4060d1;
extern unsigned int g_4061c0;
extern unsigned int g_4061e8;
extern unsigned int g_406488;
extern unsigned int g_4064b8;
extern unsigned int g_406520;
extern unsigned int g_406568;
extern struct_0 stdout;
extern struct_1 uname_mode;

int usage()
{
    char|unsigned long v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long v14;  // [bp-0x30]
    unsigned long v15;  // [bp-0x20]
    unsigned long v16;  // [bp-0x10]
    unsigned long v17;  // [bp-0x8]
    char *v2;  // [bp-0x98]
    unsigned long long v24;  // rax
    unsigned long v26;  // rbx
    unsigned int v27;  // ebp
    unsigned long v28;  // rsi
    char * v29;  // rsi
    unsigned long v3;  // [bp-0x90]
    unsigned int|char * v30;  // rdi
    unsigned long|struct_2 * v31;  // r12
    void * v32;  // r12
    unsigned long v33;  // r13
    struct_0 *v34;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v33;
    v16 = v31;
    v27 = v30;
    v15 = v26;
    v14 = *(v34 + 0x28);
    if (v30 != 0)
    {
        dcgettext(0x0, &g_4061c0, 0x5);
        __fprintf_chk();
        exit(v27); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_406016, 0x5));
    v32 = stdout;
    v28 = "Print machine architecture.\n\n";
    if (uname_mode == 1)
    {
        fputs_unlocked(dcgettext(0x0, &g_4061e8, 0x5), stdout);
        v32 = stdout;
        v28 = "  -v, --kernel-version     print the kernel version\n  -m, --machine            print the machine hardware name\n  -p, --processor          print the processor type (non-portable)\n  -i, --hardware-platform  print the hardware platform (non-portable)\n  -o, --operating-system   print the operating system\n";
    }
    fputs_unlocked(dcgettext(0x0, v28, 0x5), v32);
    fputs_unlocked(dcgettext(0x0, &g_406488, 0x5), stdout);
    v31 = &v0;
    fputs_unlocked(dcgettext(0x0, &g_4064b8, 0x5), stdout);
    v6 = "sha256sum";
    v1 = "test invocation";
    v29 = "[";
    v2 = "coreutils";
    v3 = "Multi-call invocation";
    v4 = "sha224sum";
    v8 = "sha384sum";
    v0 = "[";
    v5 = "sha2 utilities";
    v7 = "sha2 utilities";
    v9 = "sha2 utilities";
    v10 = "sha512sum";
    v11 = "sha2 utilities";
    v12 = 0;
    v13 = 0;
    do
    {
        v24 = strcmp((uname_mode != 1? "arch" : "uname"), v29);
        if (v24 == 0)
        {
            break;
        }
        v29 = v2;
        v31 = &v2;
    }
    while (v29 != 0);
    __printf_chk(0x1, dcgettext(0x0, &g_4060a8, 0x5));
    v30 = setlocale();
    if (!(v30 != 0))
    {
        v33 = (strcmp((uname_mode != 1? "arch" : "uname"), "[") != 0? (uname_mode != 1? "arch" : "uname") : "test");
        __printf_chk(0x1, dcgettext(0x0, &g_4060d1, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_406568, 0x5));
        exit(v27); /* do not return */
    }
    else if (strncmp(v30, "en_", 0x3) == 0)
    {
        v33 = (strcmp((uname_mode != 1? "arch" : "uname"), "[") != 0? (uname_mode != 1? "arch" : "uname") : "test");
        __printf_chk(0x1, dcgettext(0x0, &g_4060d1, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_406568, 0x5));
        exit(v27); /* do not return */
    }
    else
    {
        fputs_unlocked(dcgettext(0x0, &g_406520, 0x5), stdout);
        v33 = (strcmp((uname_mode != 1? "arch" : "uname"), "[") != 0? (uname_mode != 1? "arch" : "uname") : "test");
        __printf_chk(0x1, dcgettext(0x0, &g_4060d1, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_406568, 0x5));
        exit(v27); /* do not return */
    }
}
