typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_416097;
extern unsigned int g_4160c0;
extern unsigned int g_4161d8;
extern unsigned int g_416200;
extern unsigned int g_416228;
extern unsigned int g_416260;
extern unsigned int g_416298;
extern unsigned int g_4162e8;
extern unsigned int g_4163c8;
extern unsigned int g_4163f8;
extern unsigned int g_416460;
extern unsigned int g_4164a8;
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
    unsigned long long v21;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long v30;  // rcx
    unsigned long v31;  // rbx
    unsigned int v32;  // ebp
    char * v33;  // rsi
    unsigned int|char * v34;  // rdi
    unsigned long v35;  // r12
    unsigned long v36;  // r13
    unsigned long long v37;  // cc_dep1
    unsigned long long v38;  // cc_dep2
    unsigned long v39;  // d
    unsigned long v4;  // [bp-0x88]
    struct_0 *v40;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v36;
    v16 = v35;
    v32 = v34;
    v15 = v31;
    v14 = *(v40 + 0x28);
    if (v34 != 0)
    {
        dcgettext(0x0, &g_4161d8, 0x5);
        __fprintf_chk();
        exit(v32); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_416200, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_416228, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416260, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416298, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4162e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4163c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4163f8, 0x5), stdout);
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
        v34 = v2;
        v20 = &v2;
        if (v34 == 0)
        {
            break;
        }
        v30 = 4;
        v33 = "tac";
        v37 = ((long long)(((char)(v37 > v38)) - 0 - ((char)(v37 < v38))));
        if (((char)v37) == 0)
        {
            break;
        }
        while (v30 != 0)
        {
            v30 -= 1;
            v37 = ((long long)*(v33));
            v38 = ((long long)*(v34));
            v34 += v39;
            v33 += v39;
            break;
        }
    }
    if (v3 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_416097, 0x5));
        v34 = setlocale();
        if (v34 != 0)
        {
            v21 = strncmp(v34, "en_", 0x3);
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_416097, 0x5));
        v34 = setlocale();
        if (v34 != 0)
        {
            v21 = strncmp(v34, "en_", 0x3);
        }
        if (v21 == 0 || v34 == 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4160c0, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4164a8, 0x5));
            exit(v32); /* do not return */
        }
    }
    if ((v3 == 0 || v34 != 0) && (v3 == 0 || v21 != 0) && (v21 != 0 || v3 != 0) && (v34 != 0 || v3 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_416460, 0x5), stdout);
    }
    if (v3 != 0 || v21 != 0 && v34 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_4160c0, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4164a8, 0x5));
        exit(v32); /* do not return */
    }
}
