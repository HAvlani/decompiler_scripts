typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_409080;
extern unsigned int g_4090a8;
extern unsigned int g_4090d0;
extern unsigned int g_409168;
extern unsigned int g_4091a8;
extern unsigned int g_409248;
extern unsigned int g_4092e8;
extern unsigned int g_4093f8;
extern unsigned int g_409610;
extern unsigned int g_409650;
extern unsigned int g_409680;
extern unsigned int g_4096c0;
extern unsigned int g_409a20;
extern unsigned int g_409a68;
extern unsigned int g_409c03;
extern unsigned int g_409c2c;
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
    unsigned long long [3] v21;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v30;  // rax
    unsigned long long v34;  // rcx
    unsigned long v35;  // rbx
    unsigned int v36;  // ebp
    char * v37;  // rsi
    char *|unsigned int v38;  // rdi
    unsigned long v39;  // r12
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // r13
    unsigned long long v41;  // cc_dep1
    unsigned long long v42;  // cc_dep2
    unsigned long v43;  // d
    struct_0 *v44;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v40;
    v16 = v39;
    v36 = v38;
    v15 = v35;
    v14 = *(v44 + 0x28);
    if (v38 != 0)
    {
        dcgettext(0x0, &g_409080, 0x5);
        __fprintf_chk();
        exit(v36); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4090a8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4090d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409168, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4091a8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409248, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4092e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4093f8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409610, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409650, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409680, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4096c0, 0x5), stdout);
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
    v21 = &v0;
    while (true)
    {
        v38 = v2;
        v21 = &v2;
        if (v38 == 0)
        {
            break;
        }
        v34 = 5;
        v37 = "join";
        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
        if (((char)v41) == 0)
        {
            break;
        }
        while (v34 != 0)
        {
            v34 -= 1;
            v41 = ((long long)*(v37));
            v42 = ((long long)*(v38));
            v38 += v43;
            v37 += v43;
            break;
        }
    }
    if (v21[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_409c03, 0x5));
        v38 = setlocale();
        if (v38 != 0)
        {
            v30 = strncmp(v38, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_409c03, 0x5));
        v38 = setlocale();
        if (v38 != 0)
        {
            v30 = strncmp(v38, "en_", 0x3);
        }
        if (v30 == 0 || v38 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_409c2c, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_409a68, 0x5));
            exit(v36); /* do not return */
        }
    }
    if ((v21[1] == 0 || v38 != 0) && (v21[1] == 0 || v30 != 0) && (v30 != 0 || v21[1] != 0) && (v21[1] != 0 || v38 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_409a20, 0x5), stdout);
    }
    if (v21[1] != 0 || v30 != 0 && v38 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_409c2c, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_409a68, 0x5));
        exit(v36); /* do not return */
    }
}