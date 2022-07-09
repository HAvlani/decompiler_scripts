typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_4090f0;
extern unsigned int g_409119;
extern unsigned int g_4096d0;
extern unsigned int g_4096f8;
extern unsigned int g_409728;
extern unsigned int g_409980;
extern unsigned int g_4099b0;
extern unsigned int g_4099f0;
extern unsigned int g_409b68;
extern unsigned int g_409d18;
extern unsigned int g_409eb8;
extern unsigned int g_40a090;
extern unsigned int g_40a0d8;
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
    unsigned long v2;  // [bp-0x98]
    char v26[3];  // rax
    unsigned long long v29;  // rax
    unsigned long v3;  // [bp-0x90]
    unsigned long long [3] v30;  // rdx
    unsigned int v31;  // ebp
    char *|unsigned int v32;  // rdi
    unsigned long v33;  // r12
    unsigned long v34;  // r13
    unsigned long v35;  // r14
    struct_0 *v36;  // fs
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v35;
    v16 = v34;
    v15 = v33;
    v31 = v32;
    v14 = *(v36 + 0x28);
    if (v32 != 0)
    {
        dcgettext(0x0, &g_4096d0, 0x5);
        __fprintf_chk();
        exit(v31); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_4096f8, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_409728, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409980, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4099b0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_4099f0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409b68, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409d18, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_409eb8, 0x5), stdout);
    v30 = &v0;
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
        v26 = v2;
        v30 = &v2;
        if (v30[1] != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4090f0, 0x5));
            v32 = setlocale();
            if (v32 != 0)
            {
                v29 = strncmp(v32, "en_", 0x3);
            }
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_4090f0, 0x5));
            v32 = setlocale();
            if (v32 != 0)
            {
                v29 = strncmp(v32, "en_", 0x3);
            }
            if (v32 == 0 || v29 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_409119, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_40a0d8, 0x5));
                exit(v31); /* do not return */
            }
        }
        if ((v30[1] == 0 || v29 != 0) && (v30[1] == 0 || v32 != 0) && (v32 != 0 || v30[1] != 0) && (v29 != 0 || v30[1] != 0))
        {
            fputs_unlocked(dcgettext(0x0, &g_40a090, 0x5), stdout);
        }
        if (v30[1] != 0 || v32 != 0 && v29 != 0)
        {
            __printf_chk(0x1, dcgettext(0x0, &g_409119, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_40a0d8, 0x5));
            break;
        }
    }
    exit(v31); /* do not return */
}
