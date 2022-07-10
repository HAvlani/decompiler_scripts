typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_41607b;
extern unsigned int g_4160a4;
extern unsigned int g_416220;
extern unsigned int g_416248;
extern unsigned int g_416270;
extern unsigned int g_4162b0;
extern unsigned int g_4162e8;
extern unsigned int g_416338;
extern unsigned int g_416410;
extern unsigned int g_4165d0;
extern unsigned int g_416660;
extern unsigned int g_416690;
extern unsigned int g_4166d0;
extern unsigned int g_416818;
extern unsigned int g_4168e8;
extern unsigned int g_4169a8;
extern unsigned int g_4169f0;
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
    unsigned long long v22;  // rax
    unsigned long v3;  // [bp-0x90]
    char v32[3];  // rax
    unsigned long long [3] v34;  // rdx
    unsigned int v35;  // ebp
    char *|unsigned int v36;  // edi
    unsigned long v37;  // r12
    unsigned long v38;  // r13
    unsigned long v39;  // r14
    unsigned long v4;  // [bp-0x88]
    struct_0 *v40;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v39;
    v16 = v38;
    v15 = v37;
    v35 = v36;
    v14 = *(v40 + 0x28);
    if (v36 != 0)
    {
        dcgettext(0x0, &g_416220, 0x5);
        __fprintf_chk();
        exit(v35); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_416248, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_416270, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4162b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4162e8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416338, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416410, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4165d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416660, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416690, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4166d0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_416818, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4168e8, 0x5), stdout);
    v34 = &v0;
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
        v32 = v2;
        v34 = &v2;
        if (v34[1] != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_41607b, 0x5));
            v36 = setlocale();
            if (v36 != 0)
            {
                v22 = strncmp(v36, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_41607b, 0x5));
            v36 = setlocale();
            if (v36 != 0)
            {
                v22 = strncmp(v36, "en_", 0x3);
            }
            if (v36 == 0 || v22 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_4160a4, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_4169f0, 0x5));
                exit(v35); /* do not return */
            }
        }
        if ((v34[1] == 0 || v36 != 0) && (v34[1] == 0 || v22 != 0) && (v36 != 0 || v34[1] != 0) && (v34[1] != 0 || v22 != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_4169a8, 0x5), stdout);
        }
        if (v34[1] != 0 || v36 != 0 && v22 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4160a4, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4169f0, 0x5));
            break;
        }
    }
    exit(v35); /* do not return */
}
