typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_4070b0;
extern unsigned int g_4070d9;
extern unsigned int g_4071c8;
extern unsigned int g_4071f0;
extern unsigned int g_407238;
extern unsigned int g_407278;
extern unsigned int g_4072c8;
extern unsigned int g_4075a8;
extern unsigned int g_4075f0;
extern unsigned int g_407620;
extern unsigned int g_407660;
extern unsigned int g_407720;
extern unsigned int g_407810;
extern unsigned int g_407980;
extern unsigned int g_4079c8;
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
    struct_1 * v21;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v33;  // rcx
    unsigned long v34;  // rbx
    unsigned int v35;  // ebp
    char * v36;  // rsi
    char *|unsigned int v37;  // edi
    unsigned long v38;  // r12
    unsigned long v39;  // r13
    unsigned long v4;  // [bp-0x88]
    unsigned long long v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    unsigned long v42;  // d
    struct_0 *v43;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v39;
    v16 = v38;
    v35 = v37;
    v15 = v34;
    v14 = *(v43 + 0x28);
    if (v37 != 0)
    {
        dcgettext(0x0, &g_4071c8, 0x5);
        __fprintf_chk();
        exit(v35); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4071f0, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_407238, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407278, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4072c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4075a8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4075f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407620, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407660, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407720, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407810, 0x5), stdout);
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
    v21 = &v0;
    while (true)
    {
        v37 = v2;
        v21 = &v2;
        if (v37 == 0)
        {
            break;
        }
        v33 = 8;
        v36 = "timeout";
        v40 = ((long long)(((char)(v40 > v41)) - 0 - ((char)(v40 < v41))));
        if (((char)v40) == 0)
        {
            break;
        }
        while (v33 != 0)
        {
            v33 -= 1;
            v40 = ((long long)*(v36));
            v41 = ((long long)*(v37));
            v37 += v42;
            v36 += v42;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4070b0, 0x5));
        v37 = setlocale();
        if (v37 != 0)
        {
            v19 = strncmp(v37, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4070b0, 0x5));
        v37 = setlocale();
        if (v37 != 0)
        {
            v19 = strncmp(v37, "en_", 0x3);
        }
        if (v37 == 0 || v19 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4070d9, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4079c8, 0x5));
            exit(v35); /* do not return */
        }
    }
    if ((v3 == 0 || v37 != 0) && (v3 == 0 || v19 != 0) && (v3 != 0 || v37 != 0) && (v3 != 0 || v19 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_407980, 0x5), stdout);
    }
    if (v3 != 0 || v37 != 0 && v19 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4070d9, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4079c8, 0x5));
        exit(v35); /* do not return */
    }
}
