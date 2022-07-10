typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40c134;
extern unsigned int g_40c15d;
extern unsigned int g_40c840;
extern unsigned int g_40c868;
extern unsigned int g_40c910;
extern unsigned int g_40c9c8;
extern unsigned int g_40ca00;
extern unsigned int g_40cb88;
extern unsigned int g_40cbd8;
extern unsigned int g_40ccf8;
extern unsigned int g_40cf20;
extern unsigned int g_40cf50;
extern unsigned int g_40cf90;
extern unsigned int g_40d0d0;
extern unsigned int g_40d1e8;
extern unsigned int g_40d290;
extern unsigned int g_40d390;
extern unsigned int g_40d488;
extern unsigned int g_40d4e8;
extern unsigned int g_40d5f8;
extern unsigned int g_40d640;
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
    char v20[3];  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v38;  // rdx
    unsigned int v39;  // ebp
    unsigned long v4;  // [bp-0x88]
    char *|unsigned int v40;  // rdi
    unsigned long v41;  // r12
    unsigned long v42;  // r13
    unsigned long v43;  // r14
    struct_0 *v44;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v43;
    v16 = v42;
    v15 = v41;
    v39 = v40;
    v14 = *(v44 + 0x28);
    if (v40 != 0)
    {
        dcgettext(0x0, &g_40c840, 0x5);
        __fprintf_chk();
        exit(v39); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40c868, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40c910, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c9c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ca00, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40cb88, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40cbd8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ccf8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40cf20, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40cf50, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40cf90, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d0d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d1e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d290, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d390, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d488, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d4e8, 0x5), stdout);
    v38 = &v0;
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
    while (true)
    {
        v20 = v2;
        v38 = &v2;
        if (v38[1] != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40c134, 0x5));
            v40 = setlocale();
            if (v40 != 0)
            {
                v19 = strncmp(v40, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40c134, 0x5));
            v40 = setlocale();
            if (v40 != 0)
            {
                v19 = strncmp(v40, "en_", 0x3);
            }
            if (v19 == 0 || v40 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_40c15d, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_40d640, 0x5));
                exit(v39); /* do not return */
            }
        }
        if ((v38[1] == 0 || v19 != 0) && (v38[1] == 0 || v40 != 0) && (v19 != 0 || v38[1] != 0) && (v38[1] != 0 || v40 != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_40d5f8, 0x5), stdout);
        }
        if (v38[1] != 0 || v19 != 0 && v40 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40c15d, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40d640, 0x5));
            exit(v39); /* do not return */
        }
    }
}
