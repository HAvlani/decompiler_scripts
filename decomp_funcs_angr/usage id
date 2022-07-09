typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_408080;
extern unsigned int g_4080a8;
extern unsigned int g_4080d0;
extern unsigned int g_408140;
extern unsigned int g_408350;
extern unsigned int g_408380;
extern unsigned int g_4083c0;
extern unsigned int g_408430;
extern unsigned int g_408478;
extern unsigned int g_408630;
extern unsigned int g_408659;
extern struct_0 stdout;

int usage()
{
    unsigned long|char v0;  // [bp-0xa8]
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
    unsigned long long v23;  // rax
    struct_1 * v28;  // rdx
    unsigned int v29;  // ebp
    unsigned long v3;  // [bp-0x90]
    char *|unsigned int v30;  // edi
    unsigned long v31;  // r12
    unsigned long v32;  // r13
    unsigned long v33;  // r14
    struct_0 *v34;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v33;
    v16 = v32;
    v15 = v31;
    v29 = v30;
    v14 = *(v34 + 0x28);
    if (v30 != 0)
    {
        dcgettext(0x0, &g_408080, 0x5);
        __fprintf_chk();
        exit(v29); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4080a8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4080d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408140, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408350, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_408380, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4083c0, 0x5), stdout);
    v28 = &v0;
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
    while (true)
    {
        v21 = v2;
        v28 = &v2;
        if (v3 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_408630, 0x5));
            v30 = setlocale();
            if (v30 != 0)
            {
                v23 = strncmp(v30, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_408630, 0x5));
            v30 = setlocale();
            if (v30 != 0)
            {
                v23 = strncmp(v30, "en_", 0x3);
            }
            if (v23 == 0 || v30 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_408659, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_408478, 0x5));
                exit(v29); /* do not return */
            }
        }
        if ((v3 == 0 || v23 != 0) && (v3 == 0 || v30 != 0) && (v3 != 0 || v23 != 0) && (v3 != 0 || v30 != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_408430, 0x5), stdout);
        }
        if (v3 != 0 || v23 != 0 && v30 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_408659, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_408478, 0x5));
            break;
        }
    }
    exit(v29); /* do not return */
}
