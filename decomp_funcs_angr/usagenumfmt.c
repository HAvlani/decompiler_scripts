typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_40b121;
extern unsigned int g_40b190;
extern unsigned int g_40b1b9;
extern unsigned int g_40b758;
extern unsigned int g_40b780;
extern unsigned int g_40b7a8;
extern unsigned int g_40b7f8;
extern unsigned int g_40b848;
extern unsigned int g_40b888;
extern unsigned int g_40b8d0;
extern unsigned int g_40b950;
extern unsigned int g_40b9c8;
extern unsigned int g_40ba40;
extern unsigned int g_40ba90;
extern unsigned int g_40bb30;
extern unsigned int g_40bbb8;
extern unsigned int g_40bc40;
extern unsigned int g_40bd88;
extern unsigned int g_40be28;
extern unsigned int g_40bea8;
extern unsigned int g_40bef8;
extern unsigned int g_40bf40;
extern unsigned int g_40bf80;
extern unsigned int g_40bfb0;
extern unsigned int g_40bff0;
extern unsigned int g_40c038;
extern unsigned int g_40c0e0;
extern unsigned int g_40c160;
extern unsigned int g_40c1e0;
extern unsigned int g_40c260;
extern unsigned int g_40c378;
extern unsigned int g_40c4f0;
extern unsigned int g_40c690;
extern unsigned int g_40c878;
extern unsigned int g_40c8c0;
extern struct_0 program_name;
extern struct_0 stdout;

int usage()
{
    unsigned long v0;  // [bp-0xd8]
    unsigned long v1;  // [bp-0xd0]
    unsigned long v10;  // [bp-0x88]
    unsigned long v11;  // [bp-0x80]
    unsigned long v12;  // [bp-0x78]
    unsigned long v13;  // [bp-0x70]
    unsigned long v14;  // [bp-0x68]
    unsigned long v15;  // [bp-0x60]
    unsigned long v16;  // [bp-0x58]
    unsigned long v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    unsigned long v2;  // [bp-0xc8]
    unsigned long v20;  // [bp-0x30]
    unsigned long v21;  // [bp-0x18]
    unsigned long v22;  // [bp-0x10]
    unsigned long v23;  // [bp-0x8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long long v34;  // rax
    struct_1 * v35;  // rax
    unsigned long v4;  // [bp-0xb8]
    char *v5;  // [bp-0xb0]
    unsigned long long v59;  // rcx
    unsigned long v6;  // [bp-0xa8]
    unsigned int v60;  // ebp
    char * v61;  // rsi
    char *|unsigned int v62;  // rdi
    unsigned long|unsigned long long v63;  // r12
    unsigned long v64;  // r13
    unsigned long v65;  // r14
    unsigned long long v66;  // cc_dep1
    unsigned long long v67;  // cc_dep2
    unsigned long v68;  // d
    struct_0 *v69;  // fs
    unsigned long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long v9;  // [bp-0x90]

    v23 = v65;
    v22 = v64;
    v21 = v63;
    v60 = v62;
    v20 = *(v69 + 0x28);
    if (v62 != 0)
    {
        dcgettext(0x0, &g_40b758, 0x5);
        __fprintf_chk();
        exit(v60); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40b780, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40b7a8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40b7f8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40b848, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40b888, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40b8d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40b950, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40b9c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ba40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ba90, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bb30, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bbb8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bc40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bd88, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40be28, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bea8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bef8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bf40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bf80, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bfb0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40b121, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40bff0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c038, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c0e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c160, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c1e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c260, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c378, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40c4f0, 0x5));
    v63 = program_name;
    v5 = dcgettext(0x0, &g_40c690, 0x5);
    v4 = v63;
    v3 = v63;
    v2 = v63;
    v1 = v63;
    v0 = v63;
    __printf_chk(0x1, v5);
    v18 = 0;
    v6 = "[";
    v7 = "test invocation";
    v8 = "coreutils";
    v9 = "Multi-call invocation";
    v12 = "sha256sum";
    v10 = "sha224sum";
    v14 = "sha384sum";
    v11 = "sha2 utilities";
    v13 = "sha2 utilities";
    v15 = "sha2 utilities";
    v17 = "sha2 utilities";
    v16 = "sha512sum";
    v19 = 0;
    v35 = &v6;
    while (true)
    {
        v62 = v8;
        v35 = &v8;
        if (v62 == 0)
        {
            break;
        }
        v59 = 7;
        v61 = "numfmt";
        v66 = ((long long)(((char)(v66 > v67)) - 0 - ((char)(v66 < v67))));
        if (((char)v66) == 0)
        {
            break;
        }
        while (v59 != 0)
        {
            v59 -= 1;
            v66 = ((long long)*(v61));
            v67 = ((long long)*(v62));
            v62 += v68;
            v61 += v68;
            break;
        }
    }
    if (v9 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40b190, 0x5));
        v62 = setlocale();
        if (v62 != 0)
        {
            v34 = strncmp(v62, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40b190, 0x5));
        v62 = setlocale();
        if (v62 != 0)
        {
            v34 = strncmp(v62, "en_", 0x3);
        }
        if (v62 == 0 || v34 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40b1b9, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40c8c0, 0x5));
            exit(v60); /* do not return */
        }
    }
    if ((v9 == 0 || v62 != 0) && (v9 == 0 || v34 != 0) && (v62 != 0 || v9 != 0) && (v9 != 0 || v34 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40c878, 0x5), stdout);
    }
    if (v9 != 0 || v62 != 0 && v34 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40b1b9, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40c8c0, 0x5));
        exit(v60); /* do not return */
    }
}
