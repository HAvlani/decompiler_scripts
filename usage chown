typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40c069;
extern unsigned int g_40c092;
extern unsigned int g_40c160;
extern unsigned int g_40c188;
extern unsigned int g_40c1f0;
extern unsigned int g_40c288;
extern unsigned int g_40c358;
extern unsigned int g_40c440;
extern unsigned int g_40c4b8;
extern unsigned int g_40c610;
extern unsigned int g_40c690;
extern unsigned int g_40c710;
extern unsigned int g_40c758;
extern unsigned int g_40c930;
extern unsigned int g_40c960;
extern unsigned int g_40c9a0;
extern unsigned int g_40ca60;
extern unsigned int g_40cb58;
extern unsigned int g_40cba0;
extern struct_0 stdout;

int usage()
{
    unsigned long v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long v14;  // [bp-0x30]
    unsigned long v15;  // [bp-0x20]
    unsigned long v16;  // [bp-0x10]
    unsigned long v17;  // [bp-0x8]
    unsigned long long [3] v19;  // rax
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v25;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v37;  // rcx
    unsigned long v38;  // rbx
    unsigned int v39;  // ebp
    unsigned long v4;  // [bp-0x88]
    char * v40;  // rsi
    char *|unsigned int v41;  // rdi
    unsigned long v42;  // r12
    unsigned long v43;  // r13
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep2
    unsigned long v46;  // d
    struct_0 *v47;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v43;
    v16 = v42;
    v39 = v41;
    v15 = v38;
    v14 = *(v47 + 0x28);
    if (v41 != 0)
    {
        dcgettext(0x0, &g_40c160, 0x5);
        __fprintf_chk();
        exit(v39); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40c188, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40c1f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c288, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c358, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c440, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c4b8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c610, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c690, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c710, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c758, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c930, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c960, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c9a0, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40ca60, 0x5));
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
    v19 = &v0;
    while (true)
    {
        v41 = v2;
        v19 = &v2;
        if (v41 == 0)
        {
            break;
        }
        v37 = 6;
        v40 = "chown";
        v44 = ((long long)(((char)(v44 > v45)) - 0 - ((char)(v44 < v45))));
        if (((char)v44) == 0)
        {
            break;
        }
        while (v37 != 0)
        {
            v37 -= 1;
            v44 = ((long long)*(v40));
            v45 = ((long long)*(v41));
            v41 += v46;
            v40 += v46;
            break;
        }
    }
    if (v19[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c069, 0x5));
        v41 = setlocale();
        if (v41 != 0)
        {
            v25 = strncmp(v41, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c069, 0x5));
        v41 = setlocale();
        if (v41 != 0)
        {
            v25 = strncmp(v41, "en_", 0x3);
        }
        if (v25 == 0 || v41 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40c092, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40cba0, 0x5));
            exit(v39); /* do not return */
        }
    }
    if ((v19[1] == 0 || v25 != 0) && (v19[1] == 0 || v41 != 0) && (v19[1] != 0 || v25 != 0) && (v19[1] != 0 || v41 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40cb58, 0x5), stdout);
    }
    if (v19[1] != 0 || v25 != 0 && v41 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c092, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40cba0, 0x5));
        exit(v39); /* do not return */
    }
}
