typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40704e;
extern unsigned int g_4070c9;
extern unsigned int g_4070f2;
extern unsigned int g_407330;
extern unsigned int g_407358;
extern unsigned int g_4074b0;
extern unsigned int g_4074e0;
extern unsigned int g_407520;
extern unsigned int g_407628;
extern unsigned int g_407670;
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
    unsigned long long v24;  // rax
    unsigned long long [3] v25;  // rax
    unsigned long long v28;  // rcx
    unsigned long v29;  // rbx
    unsigned long v3;  // [bp-0x90]
    unsigned int v30;  // ebp
    char * v31;  // rsi
    char *|unsigned int v32;  // rdi
    unsigned long v33;  // r12
    unsigned long v34;  // r13
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long v37;  // d
    struct_0 *v38;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v34;
    v16 = v33;
    v30 = v32;
    v15 = v29;
    v14 = *(v38 + 0x28);
    if (v32 != 0)
    {
        dcgettext(0x0, &g_407330, 0x5);
        __fprintf_chk();
        exit(v30); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40704e, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_407358, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4074b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4074e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407520, 0x5), stdout);
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
    v25 = &v0;
    while (true)
    {
        v32 = v2;
        v25 = &v2;
        if (v32 == 0)
        {
            break;
        }
        v28 = 10;
        v31 = "dircolors";
        v35 = ((long long)(((char)(v35 > v36)) - 0 - ((char)(v35 < v36))));
        if (((char)v35) == 0)
        {
            break;
        }
        while (v28 != 0)
        {
            v28 -= 1;
            v35 = ((long long)*(v31));
            v36 = ((long long)*(v32));
            v32 += v37;
            v31 += v37;
            break;
        }
    }
    if (v25[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4070c9, 0x5));
        v32 = setlocale();
        if (v32 != 0)
        {
            v24 = strncmp(v32, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4070c9, 0x5));
        v32 = setlocale();
        if (v32 != 0)
        {
            v24 = strncmp(v32, "en_", 0x3);
        }
        if (v32 == 0 || v24 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4070f2, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_407670, 0x5));
            exit(v30); /* do not return */
        }
    }
    if ((v25[1] == 0 || v24 != 0) && (v25[1] == 0 || v32 != 0) && (v32 != 0 || v25[1] != 0) && (v25[1] != 0 || v24 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_407628, 0x5), stdout);
    }
    if (v25[1] != 0 || v32 != 0 && v24 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4070f2, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_407670, 0x5));
        exit(v30); /* do not return */
    }
}
