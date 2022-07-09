typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_420030;
extern unsigned int g_420058;
extern unsigned int g_420080;
extern unsigned int g_4200b0;
extern unsigned int g_4200f0;
extern unsigned int g_420208;
extern unsigned int g_420330;
extern unsigned int g_4203a8;
extern unsigned int g_420468;
extern unsigned int g_4205a0;
extern unsigned int g_420670;
extern unsigned int g_420798;
extern unsigned int g_420860;
extern unsigned int g_4208a8;
extern unsigned int g_420a33;
extern unsigned int g_420a5c;
extern struct_0 program_name;
extern struct_0 stderr;
extern unsigned long long stdout[7];

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
    struct_1 * v23;  // rax
    char *v29;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v30;  // rax
    unsigned long long v35;  // rcx
    unsigned long v36;  // rbx
    unsigned int v37;  // ebp
    char * v38;  // rsi
    char *|unsigned int v39;  // rdi
    unsigned long v4;  // [bp-0x88]
    unsigned long v40;  // r12
    unsigned long v41;  // r13
    unsigned long long v42;  // cc_dep1
    unsigned long long v43;  // cc_dep2
    unsigned long v44;  // d
    struct_0 *v45;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v41;
    v16 = v40;
    v37 = v39;
    v15 = v36;
    v14 = *(v45 + 0x28);
    if (v39 != 0)
    {
        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_420030, 0x5), ((int)program_name));
        exit(v37); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_420058, 0x5));
    v29 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v29) = 10;
    }
    else
    {
        __overflow();
    }
    fputs_unlocked(dcgettext(0x0, &g_420080, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4200b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4200f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_420208, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_420330, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4203a8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_420468, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4205a0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_420670, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_420798, 0x5), stdout);
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
    v23 = &v0;
    while (true)
    {
        v39 = v2;
        v23 = &v2;
        if (v39 == 0)
        {
            break;
        }
        v35 = 5;
        v38 = "expr";
        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
        if (((char)v42) == 0)
        {
            break;
        }
        while (v35 != 0)
        {
            v35 -= 1;
            v42 = ((long long)*(v38));
            v43 = ((long long)*(v39));
            v39 += v44;
            v38 += v44;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_420a33, 0x5));
        v39 = setlocale();
        if (v39 != 0)
        {
            v30 = strncmp(v39, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_420a33, 0x5));
        v39 = setlocale();
        if (v39 != 0)
        {
            v30 = strncmp(v39, "en_", 0x3);
        }
        if (v30 == 0 || v39 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_420a5c, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4208a8, 0x5));
            exit(v37); /* do not return */
        }
    }
    if ((v3 == 0 || v30 != 0) && (v3 == 0 || v39 != 0) && (v30 != 0 || v3 != 0) && (v39 != 0 || v3 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_420860, 0x5), stdout);
    }
    if (v3 != 0 || v30 != 0 && v39 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_420a5c, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4208a8, 0x5));
        exit(v37); /* do not return */
    }
}
