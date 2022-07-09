typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_40c066;
extern unsigned int g_40c08f;
extern unsigned int g_40c1e0;
extern unsigned int g_40c208;
extern unsigned int g_40c230;
extern unsigned int g_40c2d0;
extern unsigned int g_40c448;
extern unsigned int g_40c528;
extern unsigned int g_40c628;
extern unsigned int g_40c6d8;
extern unsigned int g_40c708;
extern unsigned int g_40c748;
extern unsigned int g_40c7e8;
extern unsigned int g_40c868;
extern unsigned int g_40c978;
extern unsigned int g_40c9c0;
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
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v24;  // rax
    unsigned long v3;  // [bp-0x90]
    char v30[3];  // rax
    struct_1 * v33;  // rdx
    unsigned int v34;  // ebp
    unsigned int|char * v35;  // rdi
    unsigned long v36;  // r12
    unsigned long v37;  // r13
    unsigned long v38;  // r14
    struct_0 *v39;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v38;
    v16 = v37;
    v15 = v36;
    v34 = v35;
    v14 = *(v39 + 0x28);
    if (v35 != 0)
    {
        dcgettext(0x0, &g_40c1e0, 0x5);
        __fprintf_chk();
        exit(v34); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40c208, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40c230, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c2d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c448, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c528, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c628, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c6d8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c708, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40c748, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40c7e8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40c868, 0x5), stdout);
    v33 = &v0;
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
    do
    {
        v30 = v2;
        v33 = &v2;
    }
    while (v30[2] != 0 && v30 != 0);
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c066, 0x5));
        v35 = setlocale();
        if (v35 != 0)
        {
            v24 = strncmp(v35, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c066, 0x5));
        v35 = setlocale();
        if (v35 != 0)
        {
            v24 = strncmp(v35, "en_", 0x3);
        }
        if (v24 == 0 || v35 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40c08f, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40c9c0, 0x5));
            exit(v34); /* do not return */
        }
    }
    if ((v3 == 0 || v35 != 0) && (v3 == 0 || v24 != 0) && (v24 != 0 || v3 != 0) && (v35 != 0 || v3 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40c978, 0x5), stdout);
    }
    if (v3 != 0 || v24 != 0 && v35 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40c08f, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40c9c0, 0x5));
        exit(v34); /* do not return */
    }
}
