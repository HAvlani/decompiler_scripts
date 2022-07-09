typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_412080;
extern unsigned int g_4120a9;
extern unsigned int g_4121e8;
extern unsigned int g_412210;
extern unsigned int g_412230;
extern unsigned int g_412358;
extern unsigned int g_4123a8;
extern unsigned int g_412480;
extern unsigned int g_412588;
extern unsigned int g_4126e0;
extern unsigned int g_412710;
extern unsigned int g_412750;
extern unsigned int g_4127c0;
extern unsigned int g_412808;
extern struct_0 program_name;
extern struct_0 stderr;
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
    unsigned long long v27;  // rax
    unsigned long v3;  // [bp-0x90]
    struct_1 * v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long v33;  // rbx
    unsigned int v34;  // ebp
    char * v35;  // rsi
    unsigned int|char * v36;  // rdi
    unsigned int v37;  // r8d
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
    v34 = v36;
    v15 = v33;
    v14 = *(v43 + 0x28);
    if (v36 != 0)
    {
        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_4121e8, 0x5), ((int)program_name), v37);
        exit(v34); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_412210, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_412230, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_412358, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4123a8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_412480, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_412588, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4126e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_412710, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_412750, 0x5), stdout);
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
    v31 = &v0;
    while (true)
    {
        v36 = v2;
        v31 = &v2;
        if (v36 == 0)
        {
            break;
        }
        v32 = 6;
        v35 = "touch";
        v40 = ((long long)(((char)(v40 > v41)) - 0 - ((char)(v40 < v41))));
        if (((char)v40) == 0)
        {
            break;
        }
        while (v32 != 0)
        {
            v32 -= 1;
            v40 = ((long long)*(v35));
            v41 = ((long long)*(v36));
            v36 += v42;
            v35 += v42;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_412080, 0x5));
        v36 = setlocale();
        if (v36 != 0)
        {
            v27 = strncmp(v36, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_412080, 0x5));
        v36 = setlocale();
        if (v36 != 0)
        {
            v27 = strncmp(v36, "en_", 0x3);
        }
        if (v36 == 0 || v27 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4120a9, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_412808, 0x5));
            exit(v34); /* do not return */
        }
    }
    if ((v3 == 0 || v36 != 0) && (v3 == 0 || v27 != 0) && (v36 != 0 || v3 != 0) && (v27 != 0 || v3 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_4127c0, 0x5), stdout);
    }
    if (v3 != 0 || v36 != 0 && v27 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4120a9, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_412808, 0x5));
        exit(v34); /* do not return */
    }
}
