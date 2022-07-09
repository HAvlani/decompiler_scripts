typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_416085;
extern unsigned int g_4160ae;
extern unsigned int g_4161f0;
extern unsigned int g_416218;
extern unsigned int g_416298;
extern unsigned int g_4162d0;
extern unsigned int g_416320;
extern unsigned int g_4164c8;
extern unsigned int g_416580;
extern unsigned int g_416790;
extern unsigned int g_4167c0;
extern unsigned int g_416800;
extern unsigned int g_4168e0;
extern unsigned int g_4169e8;
extern unsigned int g_416a30;
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
    char v22[3];  // rax
    unsigned long long v25;  // rax
    unsigned long v3;  // [bp-0x90]
    struct_1 * v32;  // rdx
    unsigned int v33;  // ebp
    unsigned int|char * v34;  // rdi
    unsigned long v35;  // r12
    unsigned long v36;  // r13
    unsigned long v37;  // r14
    struct_0 *v38;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v37;
    v16 = v36;
    v15 = v35;
    v33 = v34;
    v14 = *(v38 + 0x28);
    if (v34 != 0)
    {
        dcgettext(0x0, &g_4161f0, 0x5);
        __fprintf_chk();
        exit(v33); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_416218, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_416298, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4162d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416320, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4164c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416580, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416790, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4167c0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416800, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4168e0, 0x5), stdout);
    v32 = &v0;
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
        v22 = v2;
        v32 = &v2;
        if (v3 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_416085, 0x5));
            v34 = setlocale();
            if (v34 != 0)
            {
                v25 = strncmp(v34, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_416085, 0x5));
            v34 = setlocale();
            if (v34 != 0)
            {
                v25 = strncmp(v34, "en_", 0x3);
            }
            if (v34 == 0 || v25 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_4160ae, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_416a30, 0x5));
                exit(v33); /* do not return */
            }
        }
        if ((v3 == 0 || v25 != 0) && (v3 == 0 || v34 != 0) && (v3 != 0 || v34 != 0) && (v3 != 0 || v25 != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_4169e8, 0x5), stdout);
        }
        if (v3 != 0 || v34 != 0 && v25 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4160ae, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_416a30, 0x5));
            exit(v33); /* do not return */
        }
    }
}
