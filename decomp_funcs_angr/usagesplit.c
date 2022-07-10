typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40a198;
extern unsigned int g_40a1c1;
extern unsigned int g_40a520;
extern unsigned int g_40a548;
extern unsigned int g_40a570;
extern unsigned int g_40a5e0;
extern unsigned int g_40a618;
extern unsigned int g_40a668;
extern unsigned int g_40aab0;
extern unsigned int g_40ab28;
extern unsigned int g_40ab58;
extern unsigned int g_40ab98;
extern unsigned int g_40ac70;
extern unsigned int g_40adf0;
extern unsigned int g_40ae38;
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
    unsigned long long v22;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long v33;  // rbx
    unsigned int v34;  // ebp
    char * v35;  // rsi
    char *|unsigned int v36;  // rdi
    unsigned long v37;  // r12
    unsigned long v38;  // r13
    unsigned long long v39;  // cc_dep1
    unsigned long v4;  // [bp-0x88]
    unsigned long long v40;  // cc_dep2
    unsigned long v41;  // d
    struct_0 *v42;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v38;
    v16 = v37;
    v34 = v36;
    v15 = v33;
    v14 = *(v42 + 0x28);
    if (v36 != 0)
    {
        dcgettext(0x0, &g_40a520, 0x5);
        __fprintf_chk();
        exit(v34); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40a548, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40a570, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a5e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a618, 0x5), stdout);
    dcgettext(0x0, &g_40a668, 0x5);
    __fprintf_chk();
    fputs_unlocked(dcgettext(0x0, &g_40aab0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ab28, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ab58, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ab98, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ac70, 0x5), stdout);
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
        v35 = "split";
        v39 = ((long long)(((char)(v39 > v40)) - 0 - ((char)(v39 < v40))));
        if (((char)v39) == 0)
        {
            break;
        }
        while (v32 != 0)
        {
            v32 -= 1;
            v39 = ((long long)*(v35));
            v40 = ((long long)*(v36));
            v36 += v41;
            v35 += v41;
            break;
        }
    }
    if (v31[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a198, 0x5));
        v36 = setlocale();
        if (v36 != 0)
        {
            v22 = strncmp(v36, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a198, 0x5));
        v36 = setlocale();
        if (v36 != 0)
        {
            v22 = strncmp(v36, "en_", 0x3);
        }
        if (v22 == 0 || v36 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40a1c1, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40ae38, 0x5));
            exit(v34); /* do not return */
        }
    }
    if ((v31[1] == 0 || v22 != 0) && (v31[1] == 0 || v36 != 0) && (v31[1] != 0 || v22 != 0) && (v31[1] != 0 || v36 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40adf0, 0x5), stdout);
    }
    if (v31[1] != 0 || v22 != 0 && v36 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a1c1, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40ae38, 0x5));
        exit(v34); /* do not return */
    }
}
