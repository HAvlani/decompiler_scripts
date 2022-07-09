typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_4110d1;
extern unsigned int g_4110fa;
extern unsigned int g_411438;
extern unsigned int g_411460;
extern unsigned int g_411488;
extern unsigned int g_4114f0;
extern unsigned int g_411540;
extern unsigned int g_4116e0;
extern unsigned int g_4117e0;
extern unsigned int g_4118f0;
extern unsigned int g_411978;
extern unsigned int g_411a58;
extern unsigned int g_411a88;
extern unsigned int g_411ac8;
extern unsigned int g_411ba8;
extern unsigned int g_411c80;
extern unsigned int g_411d88;
extern unsigned int g_411dd0;
extern struct_0 stdout;

int usage()
{
    char|unsigned long v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long v14;  // [bp-0x30]
    unsigned long v15;  // [bp-0x18]
    unsigned long v16;  // [bp-0x10]
    unsigned long v17;  // [bp-0x8]
    unsigned long long v2;  // [bp-0x98]
    char v21[3];  // rax
    unsigned long long v28;  // rax
    unsigned long v3;  // [bp-0x90]
    struct_1 * v35;  // rdx
    unsigned int v36;  // ebp
    unsigned int|char * v37;  // rdi
    unsigned long v38;  // r12
    unsigned long v39;  // r13
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // r14
    struct_0 *v41;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v40;
    v16 = v39;
    v15 = v38;
    v36 = v37;
    v14 = *(v41 + 0x28);
    if (v37 != 0)
    {
        dcgettext(0x0, &g_411438, 0x5);
        __fprintf_chk();
        exit(v36); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_411460, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_411488, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4114f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_411540, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4116e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4117e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4118f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_411978, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_411a58, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_411a88, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_411ac8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_411ba8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_411c80, 0x5), stdout);
    v35 = &v0;
    v0 = "[";
    v1 = "test invocation";
    v2 = "coreutils";
    v3 = "Multi-call invocation";
    v6 = "sha256sum";
    v4 = "sha224sum";
    v8 = "sha384sum";
    v5 = "sha2 utilities";
    v7 = "sha2 utilities";
    v9 = "sha2 utilities";
    v10 = "sha512sum";
    v11 = "sha2 utilities";
    v12 = 0;
    v13 = 0;
    do
    {
        v21 = v2;
        v35 = &v2;
    }
    while (v21 != 0 && v21[2] != 0);
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4110d1, 0x5));
        v37 = setlocale();
        if (v37 != 0)
        {
            v28 = strncmp(v37, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4110d1, 0x5));
        v37 = setlocale();
        if (v37 != 0)
        {
            v28 = strncmp(v37, "en_", 0x3);
        }
        if (v37 == 0 || v28 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4110fa, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_411dd0, 0x5));
            exit(v36); /* do not return */
        }
    }
    if ((v3 == 0 || v37 != 0) && (v3 == 0 || v28 != 0) && (v37 != 0 || v3 != 0) && (v3 != 0 || v28 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_411d88, 0x5), stdout);
    }
    if (v3 != 0 || v37 != 0 && v28 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4110fa, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_411dd0, 0x5));
        exit(v36); /* do not return */
    }
}
