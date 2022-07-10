typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_410280;
extern unsigned int g_4102a8;
extern unsigned int g_4102c8;
extern unsigned int g_4102f0;
extern unsigned int g_410340;
extern unsigned int g_4103b0;
extern unsigned int g_410438;
extern unsigned int g_4105e0;
extern unsigned int g_410610;
extern unsigned int g_410650;
extern unsigned int g_410748;
extern unsigned int g_410890;
extern unsigned int g_410988;
extern unsigned int g_410bd8;
extern unsigned int g_410db8;
extern unsigned int g_410ea8;
extern unsigned int g_410fa8;
extern unsigned int g_410fe0;
extern unsigned int g_411028;
extern unsigned int g_411110;
extern unsigned int g_411158;
extern unsigned int g_4116fb;
extern unsigned int g_411724;
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
    unsigned long long [3] v23;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v32;  // rax
    unsigned long v4;  // [bp-0x88]
    unsigned long long v41;  // rcx
    unsigned long v42;  // rbx
    unsigned int v43;  // ebp
    char * v44;  // rsi
    char *|unsigned int v45;  // rdi
    unsigned long v46;  // r12
    unsigned long v47;  // r13
    unsigned long long v48;  // cc_dep1
    unsigned long long v49;  // cc_dep2
    unsigned long v5;  // [bp-0x80]
    unsigned long v50;  // d
    struct_0 *v51;  // fs
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v47;
    v16 = v46;
    v43 = v45;
    v15 = v42;
    v14 = *(v51 + 0x28);
    if (v45 != 0)
    {
        dcgettext(0x0, &g_410280, 0x5);
        __fprintf_chk();
        exit(v43); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4102a8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_4102c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4102f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410340, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4103b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410438, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4105e0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410610, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410650, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410748, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410890, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410988, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410bd8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410db8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_410ea8, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_410fa8, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_410fe0, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_411028, 0x5));
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
        v45 = v2;
        v23 = &v2;
        if (v45 == 0)
        {
            break;
        }
        v41 = 5;
        v44 = "stat";
        v48 = ((long long)(((char)(v48 > v49)) - 0 - ((char)(v48 < v49))));
        if (((char)v48) == 0)
        {
            break;
        }
        while (v41 != 0)
        {
            v41 -= 1;
            v48 = ((long long)*(v44));
            v49 = ((long long)*(v45));
            v45 += v50;
            v44 += v50;
            break;
        }
    }
    if (v23[1] != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4116fb, 0x5));
        v45 = setlocale();
        if (v45 != 0)
        {
            v32 = strncmp(v45, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4116fb, 0x5));
        v45 = setlocale();
        if (v45 != 0)
        {
            v32 = strncmp(v45, "en_", 0x3);
        }
        if (v32 == 0 || v45 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_411724, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_411158, 0x5));
            exit(v43); /* do not return */
        }
    }
    if ((v23[1] == 0 || v32 != 0) && (v23[1] == 0 || v45 != 0) && (v32 != 0 || v23[1] != 0) && (v23[1] != 0 || v45 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_411110, 0x5), stdout);
    }
    if (v23[1] != 0 || v32 != 0 && v45 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_411724, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_411158, 0x5));
        exit(v43); /* do not return */
    }
}
