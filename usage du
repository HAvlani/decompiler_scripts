typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_422090;
extern unsigned int g_4220b9;
extern unsigned int g_4223b0;
extern unsigned int g_4223d8;
extern unsigned int g_422420;
extern unsigned int g_422470;
extern unsigned int g_4224c0;
extern unsigned int g_422680;
extern unsigned int g_422938;
extern unsigned int g_422ae0;
extern unsigned int g_422bb0;
extern unsigned int g_422cd0;
extern unsigned int g_422f38;
extern unsigned int g_423008;
extern unsigned int g_423038;
extern unsigned int g_423078;
extern unsigned int g_423158;
extern unsigned int g_423258;
extern unsigned int g_4232a0;
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
    unsigned long long v19;  // rax
    unsigned long long v2;  // [bp-0x98]
    char v24[3];  // rax
    unsigned long v3;  // [bp-0x90]
    struct_1 * v36;  // rdx
    unsigned int v37;  // ebp
    char *|unsigned int v38;  // edi
    unsigned long v39;  // r12
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // r13
    unsigned long v41;  // r14
    struct_0 *v42;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v41;
    v16 = v40;
    v15 = v39;
    v37 = v38;
    v14 = *(v42 + 0x28);
    if (v38 != 0)
    {
        dcgettext(0x0, &g_4223b0, 0x5);
        __fprintf_chk();
        exit(v37); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4223d8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_422420, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_422470, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4224c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_422680, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_422938, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_422ae0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_422bb0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_422cd0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_422f38, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_423008, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_423038, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_423078, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_423158, 0x5), stdout);
    v36 = &v0;
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
        v24 = v2;
        v36 = &v2;
        if (v3 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_422090, 0x5));
            v38 = setlocale();
            if (v38 != 0)
            {
                v19 = strncmp(v38, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_422090, 0x5));
            v38 = setlocale();
            if (v38 != 0)
            {
                v19 = strncmp(v38, "en_", 0x3);
            }
            if (v38 == 0 || v19 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_4220b9, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_4232a0, 0x5));
                exit(v37); /* do not return */
            }
        }
        if ((v3 == 0 || v19 != 0) && (v3 == 0 || v38 != 0) && (v38 != 0 || v3 != 0) && (v19 != 0 || v3 != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_423258, 0x5), stdout);
        }
        if (v3 != 0 || v38 != 0 && v19 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4220b9, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4232a0, 0x5));
            break;
        }
    }
    exit(v37); /* do not return */
}
