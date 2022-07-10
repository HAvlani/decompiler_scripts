typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_417080;
extern unsigned int g_4170a8;
extern unsigned int g_417150;
extern unsigned int g_417328;
extern unsigned int g_417378;
extern unsigned int g_417588;
extern unsigned int g_417720;
extern unsigned int g_417918;
extern unsigned int g_417a78;
extern unsigned int g_417aa8;
extern unsigned int g_417ae8;
extern unsigned int g_417bc8;
extern unsigned int g_417cd0;
extern unsigned int g_417d18;
extern unsigned int g_4181e9;
extern unsigned int g_418212;
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
    unsigned long v2;  // [bp-0x98]
    struct_1 * v22;  // rax
    unsigned long long v25;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v34;  // rcx
    unsigned long v35;  // rbx
    unsigned int v36;  // ebp
    char * v37;  // rsi
    char *|unsigned int v38;  // rdi
    unsigned long v39;  // r12
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // r13
    unsigned long long v41;  // cc_dep1
    unsigned long long v42;  // cc_dep2
    unsigned long v43;  // d
    struct_0 *v44;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v40;
    v16 = v39;
    v36 = v38;
    v15 = v35;
    v14 = *(v44 + 0x28);
    if (v38 != 0)
    {
        dcgettext(0x0, &g_417080, 0x5);
        __fprintf_chk();
        exit(v36); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4170a8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_417150, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417328, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417378, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417588, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417720, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417918, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417a78, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417aa8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417ae8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_417bc8, 0x5), stdout);
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
    v22 = &v0;
    while (true)
    {
        v38 = v2;
        v22 = &v2;
        if (v38 == 0)
        {
            break;
        }
        v34 = 8;
        v37 = "install";
        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
        if (((char)v41) == 0)
        {
            break;
        }
        while (v34 != 0)
        {
            v34 -= 1;
            v41 = ((long long)*(v37));
            v42 = ((long long)*(v38));
            v38 += v43;
            v37 += v43;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4181e9, 0x5));
        v38 = setlocale();
        if (v38 != 0)
        {
            v25 = strncmp(v38, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4181e9, 0x5));
        v38 = setlocale();
        if (v38 != 0)
        {
            v25 = strncmp(v38, "en_", 0x3);
        }
        if (v25 == 0 || v38 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_418212, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_417d18, 0x5));
            exit(v36); /* do not return */
        }
    }
    if ((v3 == 0 || v25 != 0) && (v3 == 0 || v38 != 0) && (v25 != 0 || v3 != 0) && (v38 != 0 || v3 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_417cd0, 0x5), stdout);
    }
    if (v3 != 0 || v25 != 0 && v38 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_418212, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_417d18, 0x5));
        exit(v36); /* do not return */
    }
}
