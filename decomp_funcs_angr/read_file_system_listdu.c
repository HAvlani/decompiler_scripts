typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char field_28;
} struct_3;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_4 {
    char padding_0[48];
    unsigned long long field_30;
} struct_4;

extern unsigned int g_423fcf;
extern unsigned int g_423fd9;
extern unsigned int g_424752;

int read_file_system_list()
{
    BOT tmp_14;  // tmp #14
    BOT tmp_34;  // tmp #34
    BOT tmp_36;  // tmp #36
    BOT tmp_30;  // tmp #30
    BOT tmp_24;  // tmp #24
    BOT tmp_42;  // tmp #42
    struct_0 *|unsigned long v0;  // [bp-0x80]
    char *|struct_3 * v1;  // [bp-0x78]
    unsigned int|char *|unsigned long long v10;  // rax
    struct_2 *|unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // al
    char|char *|unsigned long long v19;  // rax
    unsigned long v2;  // [bp-0x70]
    unsigned long long v20;  // rax
    unsigned long long v22;  // rax
    unsigned long long v24;  // rcx
    struct_3 * v25;  // rdx
    struct_4 * v26;  // rbx
    struct_2 * v27;  // rbp
    char *|struct_1 * v28;  // rsi
    char [2]|char * v29;  // rdi
    char v3;  // [bp-0x64]
    char * v30;  // rdi
    char * v31;  // rdi
    unsigned long long v32;  // r8
    unsigned int v33;  // r9d
    unsigned long long v34;  // r9
    unsigned int|char *|unsigned long long v35;  // r12
    unsigned int v36;  // r12d
    char *v37;  // r13
    char *|struct_3 *|unsigned long v38;  // r14
    unsigned long long v39;  // r15
    char v4;  // [bp-0x60]
    unsigned int|unsigned long v40;  // r15
    unsigned long long v41;  // cc_dep1
    unsigned long long v42;  // cc_dep2
    unsigned long v43;  // d
    char v5;  // [bp-0x5c]
    struct_4 *|unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]

    v10 = fopen("/proc/self/mountinfo", "re");
    if (v38 != 0)
    {
        v38 = v10;
        v7 = 0;
        v8 = 0;
        v0 = &stack_base-88;
        while (true)
        {
            v10 = __getdelim(&v7, &v8, 0xa, v38);
            if (v10 != 18446744069414584319)
            {
                v10 = ((int)(__isoc99_sscanf(NULL, "%*u %*u %u:%u %n", ((int)&v3), ((int)&v4), ((int)&v5)) - 2));
                v10 = strchr(((long long)v5) + 0, 0x20);
                *(v10) = 0;
                v27 = v10 + 1;
                v10 = strchr(v10 + 1, 0x20);
                *(v10) = 0;
                v10 = strstr(v10 + 1, " - ");
                v10 = strchr(v10 + 3, 0x20);
                *(v10) = 0;
                v1 = v10 + 1;
                v10 = strchr(v10 + 1, 0x20);
                *(v10) = 0;
                v2 = v1;
                unescape_tab();
                unescape_tab();
                unescape_tab();
                unescape_tab();
                v1 = (long long)xmalloc();
                v1->field_0 = (long long)xstrdup();
                v1->field_8 = (long long)xstrdup();
                v36 = 1;
                v1->field_10 = (long long)xstrdup();
                v11 = xstrdup();
                v25 = v1;
                v27 = v11;
                v1->field_18 = v11;
                v30 = "autofs";
                v1->field_28 = v1->field_28 | 4;
                v28 = v11;
                v24 = 7;
                while (v24 != 0)
                {
                    v24 -= 1;
                    v41 = ((long long)v28->field_0);
                    v42 = ((long long)*(v30));
                    v30 += v43;
                    v28 += v43;
                    break;
                }
                v1->field_20 = ((long long)v4) * 0x1000 & 0xffffff00000 | ((long long)v3) * 0x100000000 & 0xffffefff00000000 | ((long long)(((int)(((long long)v3) * 0x100)) & 0xfff00)) | ((long long)v4);
                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                if (((char)v41) != 0)
                {
                    v24 = 5;
                    v30 = "proc";
                    v28 = v27;
                    while (v24 != 0)
                    {
                        v24 -= 1;
                        v41 = ((long long)v28->field_0);
                        v42 = ((long long)*(v30));
                        v30 += v43;
                        v28 += v43;
                        break;
                    }
                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                    if (((char)v41) != 0)
                    {
                        v24 = 6;
                        v30 = "subfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v41 = ((long long)v28->field_0);
                            v42 = ((long long)*(v30));
                            v30 += v43;
                            v28 += v43;
                            break;
                        }
                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                        if (((char)v41) != 0)
                        {
                            v24 = 8;
                            v30 = "debugfs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v41 = ((long long)v28->field_0);
                                v42 = ((long long)*(v30));
                                v30 += v43;
                                v28 += v43;
                                break;
                            }
                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            if (((char)v41) != 0)
                            {
                                v24 = 7;
                                v30 = "devpts";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v41 = ((long long)v28->field_0);
                                    v42 = ((long long)*(v30));
                                    v30 += v43;
                                    v28 += v43;
                                    break;
                                }
                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                if (((char)v41) != 0)
                                {
                                    v24 = 8;
                                    v30 = "fusectl";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v41 = ((long long)v28->field_0);
                                        v42 = ((long long)*(v30));
                                        v30 += v43;
                                        v28 += v43;
                                        break;
                                    }
                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                    if (((char)v41) != 0)
                                    {
                                        v24 = 12;
                                        v30 = "fuse.portal";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v41 = ((long long)v28->field_0);
                                            v42 = ((long long)*(v30));
                                            v30 += v43;
                                            v28 += v43;
                                            break;
                                        }
                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                        if (((char)v41) != 0)
                                        {
                                            v24 = 7;
                                            v30 = "mqueue";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v41 = ((long long)v28->field_0);
                                                v42 = ((long long)*(v30));
                                                v30 += v43;
                                                v28 += v43;
                                                break;
                                            }
                                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                            if (((char)v41) != 0)
                                            {
                                                v24 = 11;
                                                v30 = "rpc_pipefs";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v41 = ((long long)v28->field_0);
                                                    v42 = ((long long)*(v30));
                                                    v30 += v43;
                                                    v28 += v43;
                                                    break;
                                                }
                                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                if (((char)v41) != 0)
                                                {
                                                    v24 = 6;
                                                    v30 = "sysfs";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v41 = ((long long)v28->field_0);
                                                        v42 = ((long long)*(v30));
                                                        v30 += v43;
                                                        v28 += v43;
                                                        break;
                                                    }
                                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                    if (((char)v41) != 0)
                                                    {
                                                        v24 = 6;
                                                        v30 = "devfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v41 = ((long long)v28->field_0);
                                                            v42 = ((long long)*(v30));
                                                            v30 += v43;
                                                            v28 += v43;
                                                            break;
                                                        }
                                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                        if (((char)v41) != 0)
                                                        {
                                                            v11 = strcmp(v28, "kernfs");
                                                            v25 = v1;
                                                            if (v11 != 0)
                                                            {
                                                                v11 = strcmp(v28, "ignore");
                                                                v25 = v1;
                                                                if (v11 != 0)
                                                                {
                                                                    v36 = ((char)(strcmp(v28, "none") == 0));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                tmp_14 = ((long long)v25->field_28);
                v1 = v25;
                v17 = ((long long)(((int)tmp_14) & -2 | v36));
                v35 = v25->field_0;
                tmp_34 = v17;
                v25->field_28 = tmp_34;
                v29 = v35;
                v32 = strchr(v29, 0x3a);
                v18 = 1;
                if (v32 == 0)
                {
                    if (v29[0] == 47 && v29[1] == 47)
                    {
                        v24 = 6;
                        v29 = "smbfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v41 = ((long long)*(rsi<8>));
                            v42 = ((long long)*(v29));
                            v29 += v43;
                            v28 = rsi<8> + v43;
                            break;
                        }
                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                        if (((char)v41) != 0)
                        {
                            v24 = 5;
                            v29 = "smb3";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v41 = ((long long)v28->field_0);
                                v42 = ((long long)*(v29));
                                v29 += v43;
                                v28 += v43;
                                break;
                            }
                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            if (((char)v41) != 0)
                            {
                                v24 = 5;
                                v29 = "cifs";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v41 = ((long long)v28->field_0);
                                    v42 = ((long long)*(v29));
                                    v29 += v43;
                                    v28 += v43;
                                    break;
                                }
                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            }
                        }
                    }
                    if (v29[0] != 47 || v29[1] != 47 || ((char)v41) != 0 && ((char)v41) != 0 && ((char)v41) != 0)
                    {
                        v24 = 5;
                        v18 = 1;
                        v29 = "acfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v41 = ((long long)*(rsi<8>));
                            v42 = ((long long)*(v29));
                            v29 += v43;
                            v28 = rsi<8> + v43;
                            break;
                        }
                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                        if (((char)v41) != 0)
                        {
                            v24 = 4;
                            v29 = "afs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v41 = ((long long)v28->field_0);
                                v42 = ((long long)*(v29));
                                v29 += v43;
                                v28 += v43;
                                break;
                            }
                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            if (((char)v41) != 0)
                            {
                                v24 = 5;
                                v29 = "coda";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v41 = ((long long)v28->field_0);
                                    v42 = ((long long)*(v29));
                                    v29 += v43;
                                    v28 += v43;
                                    break;
                                }
                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                if (((char)v41) != 0)
                                {
                                    v24 = 11;
                                    v29 = "auristorfs";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v41 = ((long long)v28->field_0);
                                        v42 = ((long long)*(v29));
                                        v29 += v43;
                                        v28 += v43;
                                        break;
                                    }
                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                    if (((char)v41) != 0)
                                    {
                                        v24 = 6;
                                        v29 = "fhgfs";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v41 = ((long long)v28->field_0);
                                            v42 = ((long long)*(v29));
                                            v29 += v43;
                                            v28 += v43;
                                            break;
                                        }
                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                        if (((char)v41) != 0)
                                        {
                                            v24 = 5;
                                            v29 = "gpfs";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v41 = ((long long)v28->field_0);
                                                v42 = ((long long)*(v29));
                                                v29 += v43;
                                                v28 += v43;
                                                break;
                                            }
                                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                            if (((char)v41) != 0)
                                            {
                                                v24 = 6;
                                                v29 = "ibrix";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v41 = ((long long)v28->field_0);
                                                    v42 = ((long long)*(v29));
                                                    v29 += v43;
                                                    v28 += v43;
                                                    break;
                                                }
                                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                if (((char)v41) != 0)
                                                {
                                                    v24 = 6;
                                                    v29 = "ocfs2";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v41 = ((long long)v28->field_0);
                                                        v42 = ((long long)*(v29));
                                                        v29 += v43;
                                                        v28 += v43;
                                                        break;
                                                    }
                                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                    if (((char)v41) != 0)
                                                    {
                                                        v24 = 5;
                                                        v29 = "vxfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v41 = ((long long)v28->field_0);
                                                            v42 = ((long long)*(v29));
                                                            v29 += v43;
                                                            v28 += v43;
                                                            break;
                                                        }
                                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                        if (((char)v41) != 0)
                                                        {
                                                            v1 = v1;
                                                            v18 = strcmp("-hosts", v29);
                                                            v25 = v1;
                                                            v18 = ((char)(((int)v18) == 0));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                v10 = ((long long)(((int)v25->field_28) & -3 | ((int)v18) * 2));
                tmp_36 = v10;
                v25->field_28 = tmp_36;
                v0->field_0 = v25;
                v0 = v25 + 48;
            }
            else
            {
                rpl_free();
                if (((long long)(*(v38) & 32)) == 0)
                {
                    v10 = rpl_fclose();
                    v0->field_0 = 0;
                    v35 = v6;
                    v12 = v35;
                    return v12;
                }
                v35 = ((int)v27->field_0);
                v27 = __errno_location();
                rpl_fclose();
                v27->field_0 = v35;
                break;
            }
        }
        if (((long long)(*(v38) & 32)) == 0)
        {
            v35 = ((long long)v27->field_0);
            v27 = __errno_location();
        }
        else if (((long long)(*(v38) & 32)) != 0)
        {
            v0->field_0 = 0;
            v26 = v6;
        }
    }
    else
    {
        v35 = setmntent(&g_423fcf, &g_424752);
        if (v35 == 0)
        {
            v12 = v35;
            return v12;
        }
        v0 = &stack_base-88;
        v40 = getmntent(((int)v35));
        if (v40 != 0)
        {
            while (true)
            {
                hasmntopt(v40, &g_423fd9);
                v38 = (long long)xmalloc();
                v38->field_0 = (long long)xstrdup();
                v38->field_10 = 0;
                v39 = 1;
                v38->field_8 = (long long)xstrdup();
                v19 = xstrdup();
                v24 = 7;
                v31 = "autofs";
                v38->field_28 = v38->field_28 | 4;
                v28 = v19;
                v38->field_18 = v19;
                v37 = v19;
                while (v24 != 0)
                {
                    v24 -= 1;
                    v41 = ((long long)*(v28));
                    v42 = ((long long)*(v31));
                    v31 += v43;
                    v28 += v43;
                    break;
                }
                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                if (((char)v41) != 0)
                {
                    v24 = 5;
                    v28 = v37;
                    v31 = "proc";
                    while (v24 != 0)
                    {
                        v24 -= 1;
                        v41 = ((long long)*(v28));
                        v42 = ((long long)*(v31));
                        v31 += v43;
                        v28 += v43;
                        break;
                    }
                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                    if (((char)v41) != 0)
                    {
                        v24 = 6;
                        v31 = "subfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v41 = ((long long)*(v28));
                            v42 = ((long long)*(v31));
                            v31 += v43;
                            v28 += v43;
                            break;
                        }
                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                        if (((char)v41) != 0)
                        {
                            v24 = 8;
                            v31 = "debugfs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v41 = ((long long)*(v28));
                                v42 = ((long long)*(v31));
                                v31 += v43;
                                v28 += v43;
                                break;
                            }
                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            if (((char)v41) != 0)
                            {
                                v24 = 7;
                                v31 = "devpts";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v41 = ((long long)*(v28));
                                    v42 = ((long long)*(v31));
                                    v31 += v43;
                                    v28 += v43;
                                    break;
                                }
                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                if (((char)v41) != 0)
                                {
                                    v24 = 8;
                                    v31 = "fusectl";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v41 = ((long long)*(v28));
                                        v42 = ((long long)*(v31));
                                        v31 += v43;
                                        v28 += v43;
                                        break;
                                    }
                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                    if (((char)v41) != 0)
                                    {
                                        v24 = 12;
                                        v31 = "fuse.portal";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v41 = ((long long)*(v28));
                                            v42 = ((long long)*(v31));
                                            v31 += v43;
                                            v28 += v43;
                                            break;
                                        }
                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                        if (((char)v41) != 0)
                                        {
                                            v24 = 7;
                                            v31 = "mqueue";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v41 = ((long long)*(v28));
                                                v42 = ((long long)*(v31));
                                                v31 += v43;
                                                v28 += v43;
                                                break;
                                            }
                                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                            if (((char)v41) != 0)
                                            {
                                                v24 = 11;
                                                v31 = "rpc_pipefs";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v41 = ((long long)*(v28));
                                                    v42 = ((long long)*(v31));
                                                    v31 += v43;
                                                    v28 += v43;
                                                    break;
                                                }
                                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                if (((char)v41) != 0)
                                                {
                                                    v24 = 6;
                                                    v31 = "sysfs";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v41 = ((long long)*(v28));
                                                        v42 = ((long long)*(v31));
                                                        v31 += v43;
                                                        v28 += v43;
                                                        break;
                                                    }
                                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                    if (((char)v41) != 0)
                                                    {
                                                        v24 = 6;
                                                        v31 = "devfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v41 = ((long long)*(v28));
                                                            v42 = ((long long)*(v31));
                                                            v31 += v43;
                                                            v28 += v43;
                                                            break;
                                                        }
                                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                        if (((char)v41) != 0)
                                                        {
                                                            v19 = strcmp(v28, "kernfs");
                                                            if (v19 != 0)
                                                            {
                                                                v19 = strcmp(v28, "ignore");
                                                                if (v19 != 0)
                                                                {
                                                                    v19 = strcmp(v28, "none");
                                                                    v19 = ((char)(v19 == 0));
                                                                    v39 = v33 & reg_16<4>;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                v13 = ((long long)(((int)v38->field_28) & -2 | v39));
                v40 = v38->field_0;
                tmp_30 = v13;
                v38->field_28 = tmp_30;
                v29 = v40;
                v34 = strchr(v29, 0x3a);
                v20 = 1;
                if (v34 == 0)
                {
                    if (v29[1] == 47 && v29[0] == 47)
                    {
                        v24 = 6;
                        v29 = "smbfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v41 = ((long long)*(rsi<8>));
                            v42 = ((long long)*(v29));
                            v29 += v43;
                            v28 = rsi<8> + v43;
                            break;
                        }
                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                        if (((char)v41) != 0)
                        {
                            v24 = 5;
                            v29 = "smb3";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v41 = ((long long)*(v28));
                                v42 = ((long long)*(v29));
                                v29 += v43;
                                v28 += v43;
                                break;
                            }
                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            if (((char)v41) != 0)
                            {
                                v24 = 5;
                                v29 = "cifs";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v41 = ((long long)*(v28));
                                    v42 = ((long long)*(v29));
                                    v29 += v43;
                                    v28 += v43;
                                    break;
                                }
                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            }
                        }
                    }
                    if (v29[1] != 47 || v29[0] != 47 || ((char)v41) != 0 && ((char)v41) != 0 && ((char)v41) != 0)
                    {
                        v24 = 5;
                        v29 = "acfs";
                        v20 = 1;
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v41 = ((long long)*(rsi<8>));
                            v42 = ((long long)*(v29));
                            v29 += v43;
                            v28 = rsi<8> + v43;
                            break;
                        }
                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                        if (((char)v41) != 0)
                        {
                            v24 = 4;
                            v29 = "afs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v41 = ((long long)*(v28));
                                v42 = ((long long)*(v29));
                                v29 += v43;
                                v28 += v43;
                                break;
                            }
                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                            if (((char)v41) != 0)
                            {
                                v24 = 5;
                                v29 = "coda";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v41 = ((long long)*(v28));
                                    v42 = ((long long)*(v29));
                                    v29 += v43;
                                    v28 += v43;
                                    break;
                                }
                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                if (((char)v41) != 0)
                                {
                                    v24 = 11;
                                    v29 = "auristorfs";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v41 = ((long long)*(v28));
                                        v42 = ((long long)*(v29));
                                        v29 += v43;
                                        v28 += v43;
                                        break;
                                    }
                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                    if (((char)v41) != 0)
                                    {
                                        v24 = 6;
                                        v29 = "fhgfs";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v41 = ((long long)*(v28));
                                            v42 = ((long long)*(v29));
                                            v29 += v43;
                                            v28 += v43;
                                            break;
                                        }
                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                        if (((char)v41) != 0)
                                        {
                                            v24 = 5;
                                            v29 = "gpfs";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v41 = ((long long)*(v28));
                                                v42 = ((long long)*(v29));
                                                v29 += v43;
                                                v28 += v43;
                                                break;
                                            }
                                            v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                            if (((char)v41) != 0)
                                            {
                                                v24 = 6;
                                                v29 = "ibrix";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v41 = ((long long)*(v28));
                                                    v42 = ((long long)*(v29));
                                                    v29 += v43;
                                                    v28 += v43;
                                                    break;
                                                }
                                                v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                if (((char)v41) != 0)
                                                {
                                                    v24 = 6;
                                                    v29 = "ocfs2";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v41 = ((long long)*(v28));
                                                        v42 = ((long long)*(v29));
                                                        v29 += v43;
                                                        v28 += v43;
                                                        break;
                                                    }
                                                    v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                    if (((char)v41) != 0)
                                                    {
                                                        v24 = 5;
                                                        v29 = "vxfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v41 = ((long long)*(v28));
                                                            v42 = ((long long)*(v29));
                                                            v29 += v43;
                                                            v28 += v43;
                                                            break;
                                                        }
                                                        v41 = ((long long)(((char)(v41 > v42)) - 0 - ((char)(v41 < v42))));
                                                        if (((char)v41) != 0)
                                                        {
                                                            v20 = strcmp("-hosts", v29);
                                                            v20 = ((char)(((int)v20) == 0));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                tmp_24 = ((long long)v38->field_28);
                v38->field_20 = 18446744069414584319;
                v22 = ((long long)(((int)tmp_24) & -3 | ((int)v20) * 2));
                tmp_42 = v22;
                v38->field_28 = tmp_42;
                v0->field_0 = v38;
                v0 = v38 + 48;
                v10 = getmntent(((int)v35));
                v40 = ((int)v10);
                if (v10 == 0)
                {
                    break;
                }
            }
        }
        v10 = endmntent(((int)v35));
        if (v10 != 0)
        {
            v0->field_0 = 0;
            v35 = v6;
            v12 = v35;
            return v12;
        }
    }
    if (v38 != 0 || v10 == 0 && v35 != 0)
    {
        v35 = ((long long)v27->field_0);
        v27 = __errno_location();
        v0->field_0 = 0;
        v26 = v6;
        if (v6 != 0)
        {
            while (true)
            {
                v26 = v26->field_30;
                free_mount_entry();
                v6 = v26;
                if (v26 == 0)
                {
                    break;
                }
            }
            v27->field_0 = ((unsigned int)v35);
            v35 = 0;
            v12 = v35;
            return v12;
        }
        v27->field_0 = ((unsigned int)v35);
        v35 = 0;
        v12 = v35;
        return v12;
    }
}
