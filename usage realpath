typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_40907b;
extern unsigned int g_4090a4;
extern unsigned int g_409168;
extern unsigned int g_409190;
extern unsigned int g_4091b0;
extern unsigned int g_409200;
extern unsigned int g_409478;
extern unsigned int g_4094a8;
extern unsigned int g_409510;
extern unsigned int g_409558;
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
    struct_1 * v20;  // rax
    unsigned long long v28;  // rcx
    unsigned long v29;  // rbx
    unsigned long v3;  // [bp-0x90]
    unsigned int v30;  // ebp
    char * v31;  // rsi
    unsigned int|char * v32;  // rdi
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
        dcgettext(0x0, &g_409168, 0x5);
        __fprintf_chk();
        exit(v30); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_409190, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4091b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409200, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409478, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4094a8, 0x5), stdout);
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
        v32 = v2;
        v20 = &v2;
        if (v32 == 0)
        {
            break;
        }
        v28 = 9;
        v31 = "realpath";
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
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40907b, 0x5));
        v32 = setlocale();
        if (v32 != 0)
        {
            v19 = strncmp(v32, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40907b, 0x5));
        v32 = setlocale();
        if (v32 != 0)
        {
            v19 = strncmp(v32, "en_", 0x3);
        }
        if (v19 == 0 || v32 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4090a4, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_409558, 0x5));
            exit(v30); /* do not return */
        }
    }
    if ((v3 == 0 || v32 != 0) && (v3 == 0 || v19 != 0) && (v19 != 0 || v3 != 0) && (v3 != 0 || v32 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_409510, 0x5), stdout);
    }
    if (v3 != 0 || v19 != 0 && v32 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4090a4, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_409558, 0x5));
        exit(v30); /* do not return */
    }
}
