typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_408085;
extern unsigned int g_4080ae;
extern unsigned int g_408318;
extern unsigned int g_408340;
extern unsigned int g_408380;
extern unsigned int g_4083c0;
extern unsigned int g_408410;
extern unsigned int g_4084d0;
extern unsigned int g_408508;
extern unsigned int g_408598;
extern unsigned int g_4085e8;
extern unsigned int g_408638;
extern unsigned int g_408688;
extern unsigned int g_4086d8;
extern unsigned int g_408728;
extern unsigned int g_408758;
extern unsigned int g_408798;
extern unsigned int g_4087e0;
extern unsigned int g_4088a8;
extern unsigned int g_4088f0;
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
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v25;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v34;  // rax
    unsigned long long v38;  // rcx
    unsigned long v39;  // rbx
    unsigned long v4;  // [bp-0x88]
    unsigned int v40;  // ebp
    char * v41;  // rsi
    char *|unsigned int v42;  // edi
    unsigned long v43;  // r12
    unsigned long v44;  // r13
    unsigned long long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep2
    unsigned long v47;  // d
    struct_0 *v48;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v44;
    v16 = v43;
    v40 = v42;
    v15 = v39;
    v14 = *(v48 + 0x28);
    if (v42 != 0)
    {
        dcgettext(0x0, &g_408318, 0x5);
        __fprintf_chk();
        exit(v40); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_408340, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_408380, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4083c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408410, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4084d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408508, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408598, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4085e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408638, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408688, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4086d8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408728, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408758, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408798, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4087e0, 0x5), stdout);
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
    v34 = &v0;
    while (true)
    {
        v42 = v2;
        v34 = &v2;
        if (v42 == 0)
        {
            break;
        }
        v38 = 4;
        v41 = "env";
        v45 = ((long long)(((char)(v45 > v46)) - 0 - ((char)(v45 < v46))));
        if (((char)v45) == 0)
        {
            break;
        }
        while (v38 != 0)
        {
            v38 -= 1;
            v45 = ((long long)*(v41));
            v46 = ((long long)*(v42));
            v42 += v47;
            v41 += v47;
            break;
        }
    }
    if (v34[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_408085, 0x5));
        v42 = setlocale();
        if (v42 != 0)
        {
            v25 = strncmp(v42, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_408085, 0x5));
        v42 = setlocale();
        if (v42 != 0)
        {
            v25 = strncmp(v42, "en_", 0x3);
        }
        if (v42 == 0 || v25 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4080ae, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4088f0, 0x5));
            exit(v40); /* do not return */
        }
    }
    if ((v34[1] == 0 || v42 != 0) && (v34[1] == 0 || v25 != 0) && (v42 != 0 || v34[1] != 0) && (v34[1] != 0 || v25 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_4088a8, 0x5), stdout);
    }
    if (v34[1] != 0 || v42 != 0 && v25 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4080ae, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4088f0, 0x5));
        exit(v40); /* do not return */
    }
}
