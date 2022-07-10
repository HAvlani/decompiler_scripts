typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_40606c;
extern unsigned int g_406095;
extern unsigned int g_4060f0;
extern unsigned int g_406118;
extern unsigned int g_4061c0;
extern unsigned int g_406200;
extern unsigned int g_406230;
extern unsigned int g_406270;
extern unsigned int g_406358;
extern unsigned int g_4063a0;
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
    struct_1 * v22;  // rax
    unsigned long long v27;  // rax
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
        dcgettext(0x0, &g_4060f0, 0x5);
        __fprintf_chk();
        exit(v30); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_406118, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4061c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_406200, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_406230, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_406270, 0x5));
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
        v32 = v2;
        v22 = &v2;
        if (v32 == 0)
        {
            break;
        }
        v28 = 9;
        v31 = "printenv";
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
        __printf_chk(0x1, dcgettext(0x0, &g_40606c, 0x5));
        v32 = setlocale();
        if (v32 != 0)
        {
            v27 = strncmp(v32, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40606c, 0x5));
        v32 = setlocale();
        if (v32 != 0)
        {
            v27 = strncmp(v32, "en_", 0x3);
        }
        if (v27 == 0 || v32 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_406095, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4063a0, 0x5));
            exit(v30); /* do not return */
        }
    }
    if ((v3 == 0 || v32 != 0) && (v3 == 0 || v27 != 0) && (v3 != 0 || v27 != 0) && (v3 != 0 || v32 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_406358, 0x5), stdout);
    }
    if (v3 != 0 || v27 != 0 && v32 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_406095, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4063a0, 0x5));
        exit(v30); /* do not return */
    }
}
