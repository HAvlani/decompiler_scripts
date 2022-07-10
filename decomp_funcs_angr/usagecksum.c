typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_419084;
extern unsigned int g_4190ad;
extern unsigned int g_419280;
extern unsigned int g_4192a8;
extern unsigned int g_4192d0;
extern unsigned int g_419318;
extern unsigned int g_419350;
extern unsigned int g_4193a0;
extern unsigned int g_4193f0;
extern unsigned int g_419438;
extern unsigned int g_4194d0;
extern unsigned int g_419518;
extern unsigned int g_419568;
extern unsigned int g_4195e8;
extern unsigned int g_4197a0;
extern unsigned int g_4197e0;
extern unsigned int g_419810;
extern unsigned int g_419850;
extern unsigned int g_419a30;
extern unsigned int g_419ac0;
extern unsigned int g_419b08;
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
    unsigned long long v20;  // rax
    unsigned long long [3] v28;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v39;  // rcx
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // rbx
    unsigned int v41;  // ebp
    char * v42;  // rsi
    char *|unsigned int v43;  // rdi
    unsigned long v44;  // r12
    unsigned long v45;  // r13
    unsigned long long v46;  // cc_dep1
    unsigned long long v47;  // cc_dep2
    unsigned long v48;  // d
    struct_0 *v49;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v45;
    v16 = v44;
    v41 = v43;
    v15 = v40;
    v14 = *(v49 + 0x28);
    if (v43 != 0)
    {
        dcgettext(0x0, &g_419280, 0x5);
        __fprintf_chk();
        exit(v41); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4192a8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4192d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419318, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419350, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4193a0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4193f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419438, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4194d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419518, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419568, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4195e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4197a0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4197e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419810, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419850, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_419a30, 0x5), stdout);
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
    v28 = &v0;
    while (true)
    {
        v43 = v2;
        v28 = &v2;
        if (v43 == 0)
        {
            break;
        }
        v39 = 6;
        v42 = "cksum";
        v46 = ((long long)(((char)(v46 > v47)) - 0 - ((char)(v46 < v47))));
        if (((char)v46) == 0)
        {
            break;
        }
        while (v39 != 0)
        {
            v39 -= 1;
            v46 = ((long long)*(v42));
            v47 = ((long long)*(v43));
            v43 += v48;
            v42 += v48;
            break;
        }
    }
    if (v28[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_419084, 0x5));
        v43 = setlocale();
        if (v43 != 0)
        {
            v20 = strncmp(v43, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_419084, 0x5));
        v43 = setlocale();
        if (v43 != 0)
        {
            v20 = strncmp(v43, "en_", 0x3);
        }
        if (v20 == 0 || v43 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4190ad, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_419b08, 0x5));
            exit(v41); /* do not return */
        }
    }
    if ((v28[1] == 0 || v20 != 0) && (v28[1] == 0 || v43 != 0) && (v20 != 0 || v28[1] != 0) && (v43 != 0 || v28[1] != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_419ac0, 0x5), stdout);
    }
    if (v28[1] != 0 || v20 != 0 && v43 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4190ad, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_419b08, 0x5));
        exit(v41); /* do not return */
    }
}
