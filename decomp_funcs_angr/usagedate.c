typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_41408d;
extern unsigned int g_4140b6;
extern unsigned int g_4141d0;
extern unsigned int g_4141f8;
extern unsigned int g_414258;
extern unsigned int g_4142c8;
extern unsigned int g_414318;
extern unsigned int g_414368;
extern unsigned int g_4143f0;
extern unsigned int g_414440;
extern unsigned int g_4145a0;
extern unsigned int g_414620;
extern unsigned int g_4146b0;
extern unsigned int g_4147c0;
extern unsigned int g_414810;
extern unsigned int g_414898;
extern unsigned int g_4148c8;
extern unsigned int g_414908;
extern unsigned int g_414990;
extern unsigned int g_414a68;
extern unsigned int g_414b18;
extern unsigned int g_414bc0;
extern unsigned int g_414c20;
extern unsigned int g_414cb0;
extern unsigned int g_414e08;
extern unsigned int g_414e78;
extern unsigned int g_414f70;
extern unsigned int g_415010;
extern unsigned int g_415158;
extern unsigned int g_415270;
extern unsigned int g_415360;
extern unsigned int g_4154d8;
extern unsigned int g_415520;
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
    unsigned long v3;  // [bp-0x90]
    struct_1 * v34;  // rax
    unsigned long long v35;  // rax
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long long v51;  // rcx
    unsigned long v52;  // rbx
    unsigned int v53;  // ebp
    char * v54;  // rsi
    char *|unsigned int v55;  // rdi
    unsigned int v56;  // r8d
    unsigned long v57;  // r12
    unsigned long v58;  // r13
    unsigned long long v59;  // cc_dep1
    unsigned long v6;  // [bp-0x78]
    unsigned long long v60;  // cc_dep2
    unsigned long v61;  // d
    struct_0 *v62;  // fs
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v58;
    v16 = v57;
    v53 = v55;
    v15 = v52;
    v14 = *(v62 + 0x28);
    if (v55 != 0)
    {
        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_4141d0, 0x5), ((int)program_name), v56);
        exit(v53); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4141f8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_414258, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4142c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414318, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414368, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4143f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414440, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4145a0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414620, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4146b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4147c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414810, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414898, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4148c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414908, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414990, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414a68, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414b18, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414bc0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414c20, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414cb0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414e08, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414e78, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_414f70, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_415010, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_415158, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_415270, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_415360, 0x5), stdout);
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
    v34 = &v0;
    while (true)
    {
        v55 = v2;
        v34 = &v2;
        if (v55 == 0)
        {
            break;
        }
        v51 = 5;
        v54 = "date";
        v59 = ((long long)(((char)(v59 > v60)) - 0 - ((char)(v59 < v60))));
        if (((char)v59) == 0)
        {
            break;
        }
        while (v51 != 0)
        {
            v51 -= 1;
            v59 = ((long long)*(v54));
            v60 = ((long long)*(v55));
            v55 += v61;
            v54 += v61;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_41408d, 0x5));
        v55 = setlocale();
        if (v55 != 0)
        {
            v35 = strncmp(v55, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_41408d, 0x5));
        v55 = setlocale();
        if (v55 != 0)
        {
            v35 = strncmp(v55, "en_", 0x3);
        }
        if (v35 == 0 || v55 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4140b6, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_415520, 0x5));
            exit(v53); /* do not return */
        }
    }
    if ((v3 == 0 || v35 != 0) && (v3 == 0 || v55 != 0) && (v3 != 0 || v35 != 0) && (v3 != 0 || v55 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_4154d8, 0x5), stdout);
    }
    if (v3 != 0 || v35 != 0 && v55 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4140b6, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_415520, 0x5));
        exit(v53); /* do not return */
    }
}
