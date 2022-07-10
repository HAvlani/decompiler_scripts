typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40d0fe;
extern unsigned int g_40d127;
extern unsigned int g_40d2e0;
extern unsigned int g_40d308;
extern unsigned int g_40d330;
extern unsigned int g_40d360;
extern unsigned int g_40d398;
extern unsigned int g_40d3e8;
extern unsigned int g_40d538;
extern unsigned int g_40d648;
extern unsigned int g_40d7d8;
extern unsigned int g_40d988;
extern unsigned int g_40da68;
extern unsigned int g_40daf8;
extern unsigned int g_40dc58;
extern unsigned int g_40dd58;
extern unsigned int g_40dea0;
extern unsigned int g_40df90;
extern unsigned int g_40dff8;
extern unsigned int g_40e190;
extern unsigned int g_40e268;
extern unsigned int g_40e298;
extern unsigned int g_40e300;
extern unsigned int g_40e348;
extern struct_0 stdout;

int usage()
{
    unsigned long|char v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long v14;  // [bp-0x30]
    unsigned long v15;  // [bp-0x18]
    unsigned long v16;  // [bp-0x10]
    unsigned long v17;  // [bp-0x8]
    unsigned long long v19;  // rax
    unsigned long long v2;  // [bp-0x98]
    char v25[3];  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long v4;  // [bp-0x88]
    unsigned long long [3] v41;  // rdx
    unsigned int v42;  // ebp
    char *|unsigned int v43;  // rdi
    unsigned long v44;  // r12
    unsigned long v45;  // r13
    unsigned long v46;  // r14
    struct_0 *v47;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v46;
    v16 = v45;
    v15 = v44;
    v42 = v43;
    v14 = *(v47 + 0x28);
    if (v43 != 0)
    {
        dcgettext(0x0, &g_40d2e0, 0x5);
        __fprintf_chk();
        exit(v42); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40d308, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40d330, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d360, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d398, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d3e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d538, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d648, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d7d8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d988, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40da68, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40daf8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dc58, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dd58, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dea0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40df90, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dff8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e190, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e268, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e298, 0x5), stdout);
    v41 = &v0;
    v0 = "[";
    v1 = "test invocation";
    v2 = "coreutils";
    v3 = "Multi-call invocation";
    v6 = "sha256sum";
    v4 = "sha224sum";
    v8 = "sha384sum";
    v5 = "sha2 utilities";
    v7 = "sha2 utilities";
    v9 = "sha2 utilities";
    v10 = "sha512sum";
    v11 = "sha2 utilities";
    v12 = 0;
    v13 = 0;
    do
    {
        v25 = v2;
        v41 = &v2;
    }
    while (v25[2] != 0 && v25 != 0);
    if (v41[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d0fe, 0x5));
        v43 = setlocale();
        if (v43 != 0)
        {
            v19 = strncmp(v43, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d0fe, 0x5));
        v43 = setlocale();
        if (v43 != 0)
        {
            v19 = strncmp(v43, "en_", 0x3);
        }
        if (v19 == 0 || v43 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40d127, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40e348, 0x5));
            exit(v42); /* do not return */
        }
    }
    if ((v41[1] == 0 || v19 != 0) && (v41[1] == 0 || v43 != 0) && (v19 != 0 || v41[1] != 0) && (v43 != 0 || v41[1] != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40e300, 0x5), stdout);
    }
    if (v41[1] != 0 || v19 != 0 && v43 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d127, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40e348, 0x5));
        exit(v42); /* do not return */
    }
}
