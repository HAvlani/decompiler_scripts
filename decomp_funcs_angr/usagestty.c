typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

extern unsigned int g_40d062;
extern unsigned int g_40d078;
extern unsigned int g_40d0a6;
extern unsigned int g_40d0be;
extern unsigned int g_40d179;
extern unsigned int g_40d1a2;
extern unsigned int g_40d410;
extern unsigned int g_40d4d1;
extern unsigned int g_40d680;
extern unsigned int g_40d6a8;
extern unsigned int g_40d740;
extern unsigned int g_40d770;
extern unsigned int g_40d7c0;
extern unsigned int g_40d898;
extern unsigned int g_40d8c8;
extern unsigned int g_40d908;
extern unsigned int g_40d998;
extern unsigned int g_40d9d0;
extern unsigned int g_40da40;
extern unsigned int g_40da78;
extern unsigned int g_40db20;
extern unsigned int g_40db60;
extern unsigned int g_40db90;
extern unsigned int g_40dbc8;
extern unsigned int g_40dc70;
extern unsigned int g_40dcb0;
extern unsigned int g_40dce8;
extern unsigned int g_40dd38;
extern unsigned int g_40dda0;
extern unsigned int g_40ddf8;
extern unsigned int g_40de28;
extern unsigned int g_40de50;
extern unsigned int g_40ded0;
extern unsigned int g_40df60;
extern unsigned int g_40dfd8;
extern unsigned int g_40e048;
extern unsigned int g_40e078;
extern unsigned int g_40e0b8;
extern unsigned int g_40e1f0;
extern unsigned int g_40e228;
extern unsigned int g_40e330;
extern unsigned int g_40e380;
extern unsigned int g_40e420;
extern unsigned int g_40e460;
extern unsigned int g_40e4a0;
extern unsigned int g_40e4f0;
extern unsigned int g_40e5c0;
extern unsigned int g_40e5f8;
extern unsigned int g_40e638;
extern unsigned int g_40e670;
extern unsigned int g_40e6a8;
extern unsigned int g_40e6e0;
extern unsigned int g_40e730;
extern unsigned int g_40e780;
extern unsigned int g_40e7c0;
extern unsigned int g_40e800;
extern unsigned int g_40e838;
extern unsigned int g_40e880;
extern unsigned int g_40e8a8;
extern unsigned int g_40e920;
extern unsigned int g_40e958;
extern unsigned int g_40e9b0;
extern unsigned int g_40ea48;
extern unsigned int g_40ea90;
extern unsigned int g_40eab8;
extern unsigned int g_40eae0;
extern unsigned int g_40eb40;
extern unsigned int g_40eb68;
extern unsigned int g_40ebb0;
extern unsigned int g_40ebf8;
extern unsigned int g_40ec40;
extern unsigned int g_40ec68;
extern unsigned int g_40ecd0;
extern unsigned int g_40ed68;
extern unsigned int g_40ed90;
extern unsigned int g_40ede0;
extern unsigned int g_40ee28;
extern unsigned int g_40ee50;
extern unsigned int g_40ee98;
extern unsigned int g_40ef48;
extern unsigned int g_40ef98;
extern unsigned int g_40efc0;
extern unsigned int g_40f058;
extern unsigned int g_40f088;
extern unsigned int g_40f0f0;
extern unsigned int g_40f160;
extern unsigned int g_40f230;
extern unsigned int g_40f328;
extern unsigned int g_40f4e8;
extern unsigned int g_40f628;
extern unsigned int g_40f670;
extern struct_0 stdout;
extern struct_1 tcsetattr_options;

int usage()
{
    unsigned long v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x58]
    unsigned long long v107;  // rcx
    unsigned long v108;  // rbx
    unsigned int v109;  // ebp
    unsigned long v11;  // [bp-0x50]
    char * v110;  // rsi
    char *|unsigned int v111;  // rdi
    unsigned long|unsigned long long v112;  // r12
    unsigned long v113;  // r13
    unsigned long long v114;  // cc_dep1
    unsigned long long v115;  // cc_dep2
    unsigned long v116;  // d
    struct_0 *v117;  // fs
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long v14;  // [bp-0x30]
    unsigned long v15;  // [bp-0x20]
    unsigned long v16;  // [bp-0x10]
    unsigned long v17;  // [bp-0x8]
    unsigned long long v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    struct_2 * v60;  // rax
    unsigned long v7;  // [bp-0x70]
    unsigned long long v78;  // rax
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v113;
    v16 = v112;
    v109 = v111;
    v15 = v108;
    v14 = *(v117 + 0x28);
    if (v111 != 0)
    {
        dcgettext(0x0, &g_40d680, 0x5);
        __fprintf_chk();
        exit(v109); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40d6a8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40d740, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d770, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d7c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d898, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d8c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d908, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d062, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d998, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d9d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40da40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40da78, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40db20, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40db60, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40db90, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dbc8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dc70, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dcb0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dce8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dd38, 0x5), stdout);
    if (tcsetattr_options != 1)
    {
        v112 = dcgettext(0x0, &g_40d4d1, 0x5);
    }
    else
    {
        v112 = dcgettext(0x0, &g_40d410, 0x5);
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40dda0, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40ddf8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40de28, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40de50, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ded0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40df60, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dfd8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e048, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e078, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e0b8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e1f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e228, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e330, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e380, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e420, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e460, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e4a0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e4f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d078, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e5c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e5f8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e638, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e670, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e6a8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e6e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e730, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e780, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e7c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e800, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e838, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e880, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e8a8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e920, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e958, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e9b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ea48, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ea90, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40eab8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40eae0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40eb40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40eb68, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ebb0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ebf8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ec40, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40ec68, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40ecd0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ed68, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ed90, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ede0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d0a6, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ee28, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ee50, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ee98, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40d0be, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40ef48, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40ef98, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40efc0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40f058, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40f088, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40f0f0, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40f160, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40f230, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40f328, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40f4e8, 0x5), stdout);
    v6 = "sha256sum";
    v0 = "[";
    v1 = "test invocation";
    v2 = "coreutils";
    v3 = "Multi-call invocation";
    v12 = 0;
    v13 = 0;
    v4 = "sha224sum";
    v8 = "sha384sum";
    v5 = "sha2 utilities";
    v7 = "sha2 utilities";
    v9 = "sha2 utilities";
    v10 = "sha512sum";
    v11 = "sha2 utilities";
    v60 = &v0;
    while (true)
    {
        v111 = v2;
        v60 = &v2;
        if (v111 == 0)
        {
            break;
        }
        v107 = 5;
        v110 = "stty";
        v114 = ((long long)(((char)(v114 > v115)) - 0 - ((char)(v114 < v115))));
        if (((char)v114) == 0)
        {
            break;
        }
        while (v107 != 0)
        {
            v107 -= 1;
            v114 = ((long long)*(v110));
            v115 = ((long long)*(v111));
            v111 += v116;
            v110 += v116;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d179, 0x5));
        v111 = setlocale();
        if (v111 != 0)
        {
            v78 = strncmp(v111, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d179, 0x5));
        v111 = setlocale();
        if (v111 != 0)
        {
            v78 = strncmp(v111, "en_", 0x3);
        }
        if (v78 == 0 || v111 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40d1a2, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40f670, 0x5));
            exit(v109); /* do not return */
        }
    }
    if ((v3 == 0 || v111 != 0) && (v3 == 0 || v78 != 0) && (v3 != 0 || v78 != 0) && (v3 != 0 || v111 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40f628, 0x5), stdout);
    }
    if (v3 != 0 || v78 != 0 && v111 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d1a2, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40f670, 0x5));
        exit(v109); /* do not return */
    }
}
