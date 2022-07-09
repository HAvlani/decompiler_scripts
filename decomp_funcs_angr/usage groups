typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40706a;
extern unsigned int g_407093;
extern unsigned int g_407138;
extern unsigned int g_407160;
extern unsigned int g_407188;
extern unsigned int g_407228;
extern unsigned int g_407258;
extern unsigned int g_4072c0;
extern unsigned int g_407308;
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
    unsigned long long v23;  // rax
    unsigned long long [3] v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long v28;  // rbx
    unsigned int v29;  // ebp
    unsigned long v3;  // [bp-0x90]
    char * v30;  // rsi
    unsigned int|char * v31;  // rdi
    unsigned long v32;  // r12
    unsigned long v33;  // r13
    unsigned long long v34;  // cc_dep1
    unsigned long long v35;  // cc_dep2
    unsigned long v36;  // d
    struct_0 *v37;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v33;
    v16 = v32;
    v29 = v31;
    v15 = v28;
    v14 = *(v37 + 0x28);
    if (v31 != 0)
    {
        dcgettext(0x0, &g_407138, 0x5);
        __fprintf_chk();
        exit(v29); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_407160, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_407188, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407228, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407258, 0x5), stdout);
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
    v26 = &v0;
    while (true)
    {
        v31 = v2;
        v26 = &v2;
        if (v31 == 0)
        {
            break;
        }
        v27 = 7;
        v30 = "groups";
        v34 = ((long long)(((char)(v34 > v35)) - 0 - ((char)(v34 < v35))));
        if (((char)v34) == 0)
        {
            break;
        }
        while (v27 != 0)
        {
            v27 -= 1;
            v34 = ((long long)*(v30));
            v35 = ((long long)*(v31));
            v31 += v36;
            v30 += v36;
            break;
        }
    }
    if (v26[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40706a, 0x5));
        v31 = setlocale();
        if (v31 != 0)
        {
            v23 = strncmp(v31, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40706a, 0x5));
        v31 = setlocale();
        if (v31 != 0)
        {
            v23 = strncmp(v31, "en_", 0x3);
        }
        if (v31 == 0 || v23 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_407093, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_407308, 0x5));
            exit(v29); /* do not return */
        }
    }
    if ((v26[1] == 0 || v31 != 0) && (v26[1] == 0 || v23 != 0) && (v31 != 0 || v26[1] != 0) && (v26[1] != 0 || v23 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_4072c0, 0x5), stdout);
    }
    if (v26[1] != 0 || v31 != 0 && v23 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_407093, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_407308, 0x5));
        exit(v29); /* do not return */
    }
}
