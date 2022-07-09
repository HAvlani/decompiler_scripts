typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_407028;
extern unsigned int g_407050;
extern unsigned int g_407078;
extern unsigned int g_4070b0;
extern unsigned int g_4070f0;
extern unsigned int g_4071b0;
extern unsigned int g_407288;
extern unsigned int g_407360;
extern unsigned int g_4073a0;
extern unsigned int g_4073d0;
extern unsigned int g_407410;
extern unsigned int g_407440;
extern unsigned int g_407480;
extern unsigned int g_4074c0;
extern unsigned int g_407588;
extern unsigned int g_4075d0;
extern unsigned int g_4076ed;
extern unsigned int g_407716;
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
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v32;  // rax
    unsigned long long v36;  // rcx
    unsigned long v37;  // rbx
    unsigned int v38;  // ebp
    char * v39;  // rsi
    unsigned long v4;  // [bp-0x88]
    char *|unsigned int v40;  // rdi
    unsigned long v41;  // r12
    unsigned long v42;  // r13
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep2
    unsigned long v45;  // d
    struct_0 *v46;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v42;
    v16 = v41;
    v38 = v40;
    v15 = v37;
    v14 = *(v46 + 0x28);
    if (v40 != 0)
    {
        dcgettext(0x0, &g_407028, 0x5);
        __fprintf_chk();
        exit(v38); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_407050, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_407078, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4070b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4070f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4071b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407288, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407360, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4073a0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4073d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407410, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407440, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407480, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_4074c0, 0x5));
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
        v40 = v2;
        v32 = &v2;
        if (v40 == 0)
        {
            break;
        }
        v36 = 5;
        v39 = "comm";
        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
        if (((char)v43) == 0)
        {
            break;
        }
        while (v36 != 0)
        {
            v36 -= 1;
            v43 = ((long long)*(v39));
            v44 = ((long long)*(v40));
            v40 += v45;
            v39 += v45;
            break;
        }
    }
    if (v32[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4076ed, 0x5));
        v40 = setlocale();
        if (v40 != 0)
        {
            v19 = strncmp(v40, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4076ed, 0x5));
        v40 = setlocale();
        if (v40 != 0)
        {
            v19 = strncmp(v40, "en_", 0x3);
        }
        if (v19 == 0 || v40 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_407716, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4075d0, 0x5));
            exit(v38); /* do not return */
        }
    }
    if ((v32[1] == 0 || v19 != 0) && (v32[1] == 0 || v40 != 0) && (v19 != 0 || v32[1] != 0) && (v32[1] != 0 || v40 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_407588, 0x5), stdout);
    }
    if (v32[1] != 0 || v19 != 0 && v40 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_407716, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4075d0, 0x5));
        exit(v38); /* do not return */
    }
}
