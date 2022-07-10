typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40806c;
extern unsigned int g_408095;
extern unsigned int g_408148;
extern unsigned int g_408170;
extern unsigned int g_408190;
extern unsigned int g_4081c8;
extern unsigned int g_408380;
extern unsigned int g_408590;
extern unsigned int g_4085c0;
extern unsigned int g_408628;
extern unsigned int g_408670;
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
    unsigned long long v20;  // rax
    unsigned long long [3] v27;  // rax
    unsigned long long v29;  // rcx
    unsigned long v3;  // [bp-0x90]
    unsigned long v30;  // rbx
    unsigned int v31;  // ebp
    char * v32;  // rsi
    char *|unsigned int v33;  // rdi
    unsigned long v34;  // r12
    unsigned long v35;  // r13
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long v38;  // d
    struct_0 *v39;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v35;
    v16 = v34;
    v31 = v33;
    v15 = v30;
    v14 = *(v39 + 0x28);
    if (v33 != 0)
    {
        dcgettext(0x0, &g_408148, 0x5);
        __fprintf_chk();
        exit(v31); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_408170, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_408190, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4081c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408380, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408590, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4085c0, 0x5), stdout);
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
    v27 = &v0;
    while (true)
    {
        v33 = v2;
        v27 = &v2;
        if (v33 == 0)
        {
            break;
        }
        v29 = 9;
        v32 = "readlink";
        v36 = ((long long)(((char)(v36 > v37)) - 0 - ((char)(v36 < v37))));
        if (((char)v36) == 0)
        {
            break;
        }
        while (v29 != 0)
        {
            v29 -= 1;
            v36 = ((long long)*(v32));
            v37 = ((long long)*(v33));
            v33 += v38;
            v32 += v38;
            break;
        }
    }
    if (v27[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40806c, 0x5));
        v33 = setlocale();
        if (v33 != 0)
        {
            v20 = strncmp(v33, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40806c, 0x5));
        v33 = setlocale();
        if (v33 != 0)
        {
            v20 = strncmp(v33, "en_", 0x3);
        }
        if (v33 == 0 || v20 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_408095, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_408670, 0x5));
            exit(v31); /* do not return */
        }
    }
    if ((v27[1] == 0 || v33 != 0) && (v27[1] == 0 || v20 != 0) && (v27[1] != 0 || v33 != 0) && (v27[1] != 0 || v20 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_408628, 0x5), stdout);
    }
    if (v27[1] != 0 || v33 != 0 && v20 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_408095, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_408670, 0x5));
        exit(v31); /* do not return */
    }
}
