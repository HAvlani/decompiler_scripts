typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_40e107;
extern unsigned int g_40e130;
extern unsigned int g_40e410;
extern unsigned int g_40e438;
extern unsigned int g_40e468;
extern unsigned int g_40e608;
extern unsigned int g_40e8b0;
extern unsigned int g_40ea08;
extern unsigned int g_40ec48;
extern unsigned int g_40ed68;
extern unsigned int g_40edd8;
extern unsigned int g_40ee00;
extern unsigned int g_40ee28;
extern unsigned int g_40ee58;
extern unsigned int g_40ee88;
extern unsigned int g_40eec8;
extern unsigned int g_40eef0;
extern unsigned int g_40ef18;
extern unsigned int g_40ef58;
extern unsigned int g_40ef98;
extern unsigned int g_40efc0;
extern unsigned int g_40f048;
extern unsigned int g_40f078;
extern unsigned int g_40f0e0;
extern unsigned int g_40f128;
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
    unsigned long long v19;  // rax
    unsigned long long v2;  // [bp-0x98]
    char v26[3];  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long v4;  // [bp-0x88]
    struct_1 * v42;  // rdx
    unsigned int v43;  // ebp
    unsigned int|char * v44;  // rdi
    unsigned long v45;  // r12
    unsigned long v46;  // r13
    unsigned long v47;  // r14
    struct_0 *v48;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v47;
    v16 = v46;
    v15 = v45;
    v43 = v44;
    v14 = *(v48 + 0x28);
    if (v44 != 0)
    {
        dcgettext(0x0, &g_40e410, 0x5);
        __fprintf_chk();
        exit(v43); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40e438, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40e468, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e608, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40e8b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ea08, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ec48, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ed68, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40edd8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ee00, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ee28, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ee58, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ee88, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40eec8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40eef0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ef18, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ef58, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ef98, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40efc0, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40f048, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40f078, 0x5), stdout);
    v42 = &v0;
    v0 = "[";
    v1 = "test invocation";
    v2 = "coreutils";
    v3 = "Multi-call invocation";
    v4 = "sha224sum";
    v6 = "sha256sum";
    v5 = "sha2 utilities";
    v7 = "sha2 utilities";
    v9 = "sha2 utilities";
    v11 = "sha2 utilities";
    v12 = 0;
    v13 = 0;
    v8 = "sha384sum";
    v10 = "sha512sum";
    while (true)
    {
        v26 = v2;
        v42 = &v2;
        if (v3 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40e107, 0x5));
            v44 = setlocale();
            if (v44 != 0)
            {
                v19 = strncmp(v44, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40e107, 0x5));
            v44 = setlocale();
            if (v44 != 0)
            {
                v19 = strncmp(v44, "en_", 0x3);
            }
            if (v44 == 0 || v19 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_40e130, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_40f128, 0x5));
                exit(v43); /* do not return */
            }
        }
        if ((v3 == 0 || v44 != 0) && (v3 == 0 || v19 != 0) && (v44 != 0 || v3 != 0) && (v3 != 0 || v19 != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_40f0e0, 0x5), stdout);
        }
        if (v3 != 0 || v44 != 0 && v19 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40e130, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40f128, 0x5));
        }
    }
    exit(v43); /* do not return */
}
