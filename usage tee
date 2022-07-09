typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_407086;
extern unsigned int g_4070af;
extern unsigned int g_407168;
extern unsigned int g_407190;
extern unsigned int g_4071b8;
extern unsigned int g_407278;
extern unsigned int g_407308;
extern unsigned int g_407338;
extern unsigned int g_407378;
extern unsigned int g_4075a0;
extern unsigned int g_4075e8;
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
    struct_1 * v20;  // rax
    unsigned long long v22;  // rax
    unsigned long long v29;  // rcx
    unsigned long v3;  // [bp-0x90]
    unsigned long v30;  // rbx
    unsigned int v31;  // ebp
    char * v32;  // rsi
    char *|unsigned int v33;  // rdi
    unsigned long v34;  // r12
    unsigned long v35;  // r13
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long v38;  // d
    struct_0 *v39;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v35;
    v16 = v34;
    v31 = v33;
    v15 = v30;
    v14 = *(v39 + 0x28);
    if (v33 != 0)
    {
        dcgettext(0x0, &g_407168, 0x5);
        __fprintf_chk();
        exit(v31); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_407190, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4071b8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407278, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407308, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407338, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_407378, 0x5), stdout);
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
    v20 = &v0;
    while (true)
    {
        v33 = v2;
        v20 = &v2;
        if (v33 == 0)
        {
            break;
        }
        v29 = 4;
        v32 = "tee";
        v36 = ((long long)(((char)(v36 > v37)) - 0 - ((char)(v36 < v37))));
        if (((char)v36) == 0)
        {
            break;
        }
        while (v29 != 0)
        {
            v29 -= 1;
            v36 = ((long long)*(v32));
            v37 = ((long long)*(v33));
            v33 += v38;
            v32 += v38;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_407086, 0x5));
        v33 = setlocale();
        if (v33 != 0)
        {
            v22 = strncmp(v33, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_407086, 0x5));
        v33 = setlocale();
        if (v33 != 0)
        {
            v22 = strncmp(v33, "en_", 0x3);
        }
        if (v22 == 0 || v33 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4070af, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4075e8, 0x5));
            exit(v31); /* do not return */
        }
    }
    if ((v3 == 0 || v33 != 0) && (v3 == 0 || v22 != 0) && (v3 != 0 || v22 != 0) && (v3 != 0 || v33 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_4075a0, 0x5), stdout);
    }
    if (v3 != 0 || v22 != 0 && v33 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4070af, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4075e8, 0x5));
        exit(v31); /* do not return */
    }
}
