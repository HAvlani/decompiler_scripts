typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40d17e;
extern unsigned int g_40d1a7;
extern unsigned int g_40d550;
extern unsigned int g_40d578;
extern unsigned int g_40d5a0;
extern unsigned int g_40d628;
extern unsigned int g_40d660;
extern unsigned int g_40d6b0;
extern unsigned int g_40d748;
extern unsigned int g_40d838;
extern unsigned int g_40da68;
extern unsigned int g_40db40;
extern unsigned int g_40dc90;
extern unsigned int g_40dcd0;
extern unsigned int g_40dd00;
extern unsigned int g_40dd40;
extern unsigned int g_40de18;
extern unsigned int g_40dff8;
extern unsigned int g_40e040;
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
    unsigned long long v28;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v31;  // rax
    unsigned long long v37;  // rcx
    unsigned long v38;  // rbx
    unsigned int v39;  // ebp
    unsigned long v4;  // [bp-0x88]
    char * v40;  // rsi
    char *|unsigned int v41;  // rdi
    unsigned long v42;  // r12
    unsigned long v43;  // r13
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep2
    unsigned long v46;  // d
    struct_0 *v47;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v43;
    v16 = v42;
    v39 = v41;
    v15 = v38;
    v14 = *(v47 + 0x28);
    if (v41 != 0)
    {
        dcgettext(0x0, &g_40d550, 0x5);
        __fprintf_chk();
        exit(v39); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40d578, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40d5a0, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40d628, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d660, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d6b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40d748, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40d838, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_40da68, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40db40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dc90, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dcd0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dd00, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40dd40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40de18, 0x5), stdout);
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
    v31 = &v0;
    while (true)
    {
        v41 = v2;
        v31 = &v2;
        if (v41 == 0)
        {
            break;
        }
        v37 = 5;
        v40 = "tail";
        v44 = ((long long)(((char)(v44 > v45)) - 0 - ((char)(v44 < v45))));
        if (((char)v44) == 0)
        {
            break;
        }
        while (v37 != 0)
        {
            v37 -= 1;
            v44 = ((long long)*(v40));
            v45 = ((long long)*(v41));
            v41 += v46;
            v40 += v46;
            break;
        }
    }
    if (v31[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d17e, 0x5));
        v41 = setlocale();
        if (v41 != 0)
        {
            v28 = strncmp(v41, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d17e, 0x5));
        v41 = setlocale();
        if (v41 != 0)
        {
            v28 = strncmp(v41, "en_", 0x3);
        }
        if (v28 == 0 || v41 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_40d1a7, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40e040, 0x5));
            exit(v39); /* do not return */
        }
    }
    if ((v31[1] == 0 || v28 != 0) && (v31[1] == 0 || v41 != 0) && (v31[1] != 0 || v28 != 0) && (v31[1] != 0 || v41 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_40dff8, 0x5), stdout);
    }
    if (v31[1] != 0 || v28 != 0 && v41 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40d1a7, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40e040, 0x5));
        exit(v39); /* do not return */
    }
}