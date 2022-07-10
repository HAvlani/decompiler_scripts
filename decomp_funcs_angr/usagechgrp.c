typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40c069;
extern unsigned int g_40c092;
extern unsigned int g_40c168;
extern unsigned int g_40c190;
extern unsigned int g_40c1e8;
extern unsigned int g_40c258;
extern unsigned int g_40c328;
extern unsigned int g_40c410;
extern unsigned int g_40c488;
extern unsigned int g_40c508;
extern unsigned int g_40c578;
extern unsigned int g_40c5c0;
extern unsigned int g_40c798;
extern unsigned int g_40c7c8;
extern unsigned int g_40c808;
extern unsigned int g_40c8b8;
extern unsigned int g_40c900;
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
    unsigned long long v19;  // rax
    unsigned long long v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v32;  // rax
    unsigned long long v35;  // rcx
    unsigned long v36;  // rbx
    unsigned int v37;  // ebp
    char * v38;  // rsi
    char *|unsigned int v39;  // rdi
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // r12
    unsigned long v41;  // r13
    unsigned long long v42;  // cc_dep1
    unsigned long long v43;  // cc_dep2
    unsigned long v44;  // d
    struct_0 *v45;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v41;
    v16 = v40;
    v37 = v39;
    v15 = v36;
    v14 = *(v45 + 0x28);
    if (v39 != 0)
    {
        dcgettext(0x0, &g_40c168, 0x5);
        __fprintf_chk();
        exit(v37); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40c190, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40c1e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c258, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c328, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c410, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c488, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c508, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c578, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c5c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c798, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c7c8, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40c808, 0x5));
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
    v32 = &v0;
    while (true)
    {
        v39 = v2;
        v32 = &v2;
        if (v39 == 0)
        {
            break;
        }
        v35 = 6;
        v38 = "chgrp";
        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
        if (((char)v42) == 0)
        {
            break;
        }
        while (v35 != 0)
        {
            v35 -= 1;
            v42 = ((long long)*(v38));
            v43 = ((long long)*(v39));
            v39 += v44;
            v38 += v44;
            break;
        }
    }
    if (v32[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c069, 0x5));
        v39 = setlocale();
        if (v39 != 0)
        {
            v19 = strncmp(v39, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c069, 0x5));
        v39 = setlocale();
        if (v39 != 0)
        {
            v19 = strncmp(v39, "en_", 0x3);
        }
        if (v39 == 0 || v19 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40c092, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40c900, 0x5));
            exit(v37); /* do not return */
        }
    }
    if ((v32[1] == 0 || v39 != 0) && (v32[1] == 0 || v19 != 0) && (v32[1] != 0 || v39 != 0) && (v32[1] != 0 || v19 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40c8b8, 0x5), stdout);
    }
    if (v32[1] != 0 || v39 != 0 && v19 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c092, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40c900, 0x5));
        exit(v37); /* do not return */
    }
}
