typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_4090bf;
extern unsigned int g_4090e8;
extern unsigned int g_4093f8;
extern unsigned int g_409420;
extern unsigned int g_409468;
extern unsigned int g_409530;
extern unsigned int g_409568;
extern unsigned int g_409698;
extern unsigned int g_4097c8;
extern unsigned int g_4097f8;
extern unsigned int g_409860;
extern unsigned int g_4098a8;
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
    char v19[3];  // rax
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v23;  // rax
    struct_1 * v29;  // rdx
    unsigned long v3;  // [bp-0x90]
    unsigned int v30;  // ebp
    char *|unsigned int v31;  // rdi
    unsigned long v32;  // r12
    unsigned long v33;  // r13
    unsigned long v34;  // r14
    struct_0 *v35;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v34;
    v16 = v33;
    v15 = v32;
    v30 = v31;
    v14 = *(v35 + 0x28);
    if (v31 != 0)
    {
        dcgettext(0x0, &g_4093f8, 0x5);
        __fprintf_chk();
        exit(v30); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_409420, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_409468, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409530, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409568, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409698, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4097c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4097f8, 0x5), stdout);
    v29 = &v0;
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
        v19 = v2;
        v29 = &v2;
        if (v3 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4090bf, 0x5));
            v31 = setlocale();
            if (v31 != 0)
            {
                v23 = strncmp(v31, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4090bf, 0x5));
            v31 = setlocale();
            if (v31 != 0)
            {
                v23 = strncmp(v31, "en_", 0x3);
            }
            if (v23 == 0 || v31 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_4090e8, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_4098a8, 0x5));
                exit(v30); /* do not return */
            }
        }
        if ((v3 == 0 || v23 != 0) && (v3 == 0 || v31 != 0) && (v23 != 0 || v3 != 0) && (v3 != 0 || v31 != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_409860, 0x5), stdout);
        }
        if (v3 != 0 || v23 != 0 && v31 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4090e8, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4098a8, 0x5));
            break;
        }
    }
    exit(v30); /* do not return */
}
