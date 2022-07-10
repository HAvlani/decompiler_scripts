typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

extern unsigned int g_40606e;
extern unsigned int g_406097;
extern unsigned int g_4060d0;
extern unsigned int g_406110;
extern unsigned int g_406140;
extern unsigned int g_406170;
extern unsigned int g_4061b0;
extern unsigned int g_406298;
extern unsigned int g_4062e0;
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
    unsigned long long v19;  // rax
    unsigned long v2;  // [bp-0x98]
    struct_1 * v26;  // rax
    unsigned long long v28;  // rcx
    unsigned long v29;  // rbx
    unsigned long v3;  // [bp-0x90]
    unsigned int v30;  // ebp
    char * v31;  // rsi
    unsigned int v32;  // edi
    char * v33;  // rdi
    char * v34;  // rdi
    unsigned long v35;  // r12
    unsigned long v36;  // r13
    unsigned long long v37;  // cc_dep1
    unsigned long long v38;  // cc_dep2
    unsigned long v39;  // d
    unsigned long long v4;  // [bp-0x88]
    struct_0 *v40;  // fs
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v17 = v36;
    v16 = v35;
    v30 = v32;
    v15 = v29;
    v14 = *(v40 + 0x28);
    __printf_chk(0x1, dcgettext(0x0, &g_4060d0, 0x5));
    __printf_chk(0x1, "%s\n\n", dcgettext(0x0, &g_406110, 0x5));
    fputs_unlocked(dcgettext(0x0, &g_406140, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_406170, 0x5), stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_4061b0, 0x5));
    v6 = "sha256sum";
    v0 = "[";
    v33 = "coreutils";
    v1 = "test invocation";
    v3 = "Multi-call invocation";
    v4 = "sha224sum";
    v8 = "sha384sum";
    v5 = "sha2 utilities";
    v7 = "sha2 utilities";
    v9 = "sha2 utilities";
    v10 = "sha512sum";
    v11 = "sha2 utilities";
    v26 = &v0;
    v2 = "coreutils";
    v12 = 0;
    v13 = 0;
    while (true)
    {
        v26 = &v2;
        if (v33 == 0)
        {
            break;
        }
        v28 = 6;
        v31 = "false";
        v37 = ((long long)(((char)(v37 > v38)) - 0 - ((char)(v37 < v38))));
        if (((char)v37) == 0)
        {
            break;
        }
        while (v28 != 0)
        {
            v28 -= 1;
            v37 = ((long long)*(v31));
            v38 = ((long long)*(v33));
            v33 += v39;
            v31 += v39;
            break;
        }
        v33 = v4;
    }
    if (v26->field_8 != 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40606e, 0x5));
        v34 = setlocale();
        if (v34 != 0)
        {
            v19 = strncmp(v34, "en_", 0x3);
            if (v19 == 0)
            {
                __printf_chk(0x1, dcgettext(0x0, &g_406097, 0x5));
                __printf_chk(0x1, dcgettext(0x0, &g_4062e0, 0x5));
                exit(v30); /* do not return */
            }
        }
        __printf_chk(0x1, dcgettext(0x0, &g_406097, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4062e0, 0x5));
        exit(v30); /* do not return */
    }
    __printf_chk(0x1, dcgettext(0x0, &g_40606e, 0x5));
    v34 = setlocale();
    if (v34 != 0)
    {
        v19 = strncmp(v34, "en_", 0x3);
        if (v19 != 0)
        {
        }
        else
        {
            __printf_chk(0x1, dcgettext(0x0, &g_406097, 0x5));
            __printf_chk(0x1, dcgettext(0x0, &g_4062e0, 0x5));
            exit(v30); /* do not return */
        }
    }
    else
    {
        __printf_chk(0x1, dcgettext(0x0, &g_406097, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4062e0, 0x5));
        exit(v30); /* do not return */
    }
    if ((v26->field_8 == 0 || v34 != 0) && (v26->field_8 == 0 || v19 != 0) && (v26->field_8 != 0 || v34 != 0) && (v26->field_8 != 0 || v19 != 0))
    {
        fputs_unlocked(dcgettext(0x0, &g_406298, 0x5), stdout);
        __printf_chk(0x1, dcgettext(0x0, &g_406097, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_4062e0, 0x5));
        exit(v30); /* do not return */
    }
}
