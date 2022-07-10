typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_407069;
extern unsigned int g_407092;
extern unsigned int g_407110;
extern unsigned int g_407138;
extern unsigned int g_407260;
extern unsigned int g_407290;
extern unsigned int g_4072f8;
extern unsigned int g_407340;
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
    struct_1 * v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v26;  // rcx
    unsigned long v27;  // rbx
    unsigned int v28;  // ebp
    char * v29;  // rsi
    unsigned long v3;  // [bp-0x90]
    char *|unsigned int v30;  // rdi
    unsigned long v31;  // r12
    unsigned long v32;  // r13
    unsigned long long v33;  // cc_dep1
    unsigned long long v34;  // cc_dep2
    unsigned long v35;  // d
    struct_0 *v36;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v32;
    v16 = v31;
    v28 = v30;
    v15 = v27;
    v14 = *(v36 + 0x28);
    if (v30 != 0)
    {
        dcgettext(0x0, &g_407110, 0x5);
        __fprintf_chk();
        exit(v28); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_407138, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_407260, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407290, 0x5), stdout);
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
    v20 = &v0;
    while (true)
    {
        v30 = v2;
        v20 = &v2;
        if (v30 == 0)
        {
            break;
        }
        v26 = 6;
        v29 = "sleep";
        v33 = ((long long)(((char)(v33 > v34)) - 0 - ((char)(v33 < v34))));
        if (((char)v33) == 0)
        {
            break;
        }
        while (v26 != 0)
        {
            v26 -= 1;
            v33 = ((long long)*(v29));
            v34 = ((long long)*(v30));
            v30 += v35;
            v29 += v35;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_407069, 0x5));
        v30 = setlocale();
        if (v30 != 0)
        {
            v21 = strncmp(v30, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_407069, 0x5));
        v30 = setlocale();
        if (v30 != 0)
        {
            v21 = strncmp(v30, "en_", 0x3);
        }
        if (v30 == 0 || v21 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_407092, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_407340, 0x5));
            exit(v28); /* do not return */
        }
    }
    if ((v3 == 0 || v30 != 0) && (v3 == 0 || v21 != 0) && (v30 != 0 || v3 != 0) && (v21 != 0 || v3 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_4072f8, 0x5), stdout);
    }
    if (v3 != 0 || v30 != 0 && v21 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_407092, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_407340, 0x5));
        exit(v28); /* do not return */
    }
}
