typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40809d;
extern unsigned int g_4080c6;
extern unsigned int g_408198;
extern unsigned int g_4081c0;
extern unsigned int g_4081f0;
extern unsigned int g_408278;
extern unsigned int g_4082b0;
extern unsigned int g_408300;
extern unsigned int g_408418;
extern unsigned int g_408538;
extern unsigned int g_408568;
extern unsigned int g_4085d0;
extern unsigned int g_408618;
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
    unsigned long long v24;  // rax
    unsigned long long [3] v27;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v31;  // rcx
    unsigned long v32;  // rbx
    unsigned int v33;  // ebp
    char * v34;  // rsi
    char *|unsigned int v35;  // rdi
    unsigned long v36;  // r12
    unsigned long v37;  // r13
    unsigned long long v38;  // cc_dep1
    unsigned long long v39;  // cc_dep2
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // d
    struct_0 *v41;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v37;
    v16 = v36;
    v33 = v35;
    v15 = v32;
    v14 = *(v41 + 0x28);
    if (v35 != 0)
    {
        dcgettext(0x0, &g_408198, 0x5);
        __fprintf_chk();
        exit(v33); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4081c0, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4081f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408278, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4082b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408300, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408418, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408538, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408568, 0x5), stdout);
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
        v35 = v2;
        v27 = &v2;
        if (v35 == 0)
        {
            break;
        }
        v31 = 4;
        v34 = "fmt";
        v38 = ((long long)(((char)(v38 > v39)) - 0 - ((char)(v38 < v39))));
        if (((char)v38) == 0)
        {
            break;
        }
        while (v31 != 0)
        {
            v31 -= 1;
            v38 = ((long long)*(v34));
            v39 = ((long long)*(v35));
            v35 += v40;
            v34 += v40;
            break;
        }
    }
    if (v27[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40809d, 0x5));
        v35 = setlocale();
        if (v35 != 0)
        {
            v24 = strncmp(v35, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40809d, 0x5));
        v35 = setlocale();
        if (v35 != 0)
        {
            v24 = strncmp(v35, "en_", 0x3);
        }
        if (v35 == 0 || v24 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4080c6, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_408618, 0x5));
            exit(v33); /* do not return */
        }
    }
    if ((v27[1] == 0 || v35 != 0) && (v27[1] == 0 || v24 != 0) && (v35 != 0 || v27[1] != 0) && (v24 != 0 || v27[1] != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_4085d0, 0x5), stdout);
    }
    if (v27[1] != 0 || v35 != 0 && v24 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4080c6, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_408618, 0x5));
        exit(v33); /* do not return */
    }
}
