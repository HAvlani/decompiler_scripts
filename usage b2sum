typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40a083;
extern unsigned int g_40a0ac;
extern unsigned int g_40a200;
extern unsigned int g_40a228;
extern unsigned int g_40a250;
extern unsigned int g_40a278;
extern unsigned int g_40a2b0;
extern unsigned int g_40a300;
extern unsigned int g_40a330;
extern unsigned int g_40a378;
extern unsigned int g_40a410;
extern unsigned int g_40a448;
extern unsigned int g_40a480;
extern unsigned int g_40a500;
extern unsigned int g_40a6b8;
extern unsigned int g_40a6e8;
extern unsigned int g_40a728;
extern unsigned int g_40a758;
extern unsigned int g_40a8d0;
extern unsigned int g_40a918;
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
    unsigned long long v28;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v32;  // rax
    unsigned long long v38;  // rcx
    unsigned long v39;  // rbx
    unsigned long v4;  // [bp-0x88]
    unsigned int v40;  // ebp
    char * v41;  // rsi
    char *|unsigned int v42;  // rdi
    unsigned long v43;  // r12
    unsigned long v44;  // r13
    unsigned long long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep2
    unsigned long v47;  // d
    struct_0 *v48;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v44;
    v16 = v43;
    v40 = v42;
    v15 = v39;
    v14 = *(v48 + 0x28);
    if (v42 != 0)
    {
        dcgettext(0x0, &g_40a200, 0x5);
        __fprintf_chk();
        exit(v40); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40a228, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40a250, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40a278, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a2b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a300, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a330, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a378, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a410, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a448, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a480, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a500, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a6b8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a6e8, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40a728, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40a758, 0x5), stdout);
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
    v32 = &v0;
    while (true)
    {
        v42 = v2;
        v32 = &v2;
        if (v42 == 0)
        {
            break;
        }
        v38 = 6;
        v41 = "b2sum";
        v45 = ((long long)(((char)(v45 > v46)) - 0 - ((char)(v45 < v46))));
        if (((char)v45) == 0)
        {
            break;
        }
        while (v38 != 0)
        {
            v38 -= 1;
            v45 = ((long long)*(v41));
            v46 = ((long long)*(v42));
            v42 += v47;
            v41 += v47;
            break;
        }
    }
    if (v32[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a083, 0x5));
        v42 = setlocale();
        if (v42 != 0)
        {
            v28 = strncmp(v42, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a083, 0x5));
        v42 = setlocale();
        if (v42 != 0)
        {
            v28 = strncmp(v42, "en_", 0x3);
        }
        if (v28 == 0 || v42 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40a0ac, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40a918, 0x5));
            exit(v40); /* do not return */
        }
    }
    if ((v32[1] == 0 || v42 != 0) && (v32[1] == 0 || v28 != 0) && (v28 != 0 || v32[1] != 0) && (v32[1] != 0 || v42 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40a8d0, 0x5), stdout);
    }
    if (v32[1] != 0 || v28 != 0 && v42 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a0ac, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40a918, 0x5));
        exit(v40); /* do not return */
    }
}
