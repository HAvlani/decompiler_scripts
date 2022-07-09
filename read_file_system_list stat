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

extern unsigned int g_4117c3;
extern unsigned int g_411cda;
extern unsigned int g_411ce4;

int read_file_system_list()
{
    BOT tmp_14;  // tmp #14
    BOT tmp_34;  // tmp #34
    BOT tmp_36;  // tmp #36
    BOT tmp_30;  // tmp #30
    BOT tmp_24;  // tmp #24
    BOT tmp_42;  // tmp #42
    unsigned long|struct_0 * v0;  // [bp-0x80]
    unsigned long|struct_3 * v1;  // [bp-0x78]
    char *|unsigned long long|unsigned int v10;  // rax
    unsigned long long v11;  // rax
    char *|unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v16;  // rax
    unsigned long long v18;  // rax
    unsigned long v2;  // [bp-0x70]
    unsigned long long v20;  // rax
    char *|unsigned long long|char v23;  // rax
    unsigned long long v24;  // rcx
    struct_3 * v25;  // rdx
    struct_4 * v26;  // rbx
    struct_2 * v27;  // rbp
    char *|struct_1 * v28;  // rsi
    char * v29;  // rdi
    char v3;  // [bp-0x64]
    char * v30;  // rdi
    char *|char [2] v31;  // rdi
    unsigned long long v32;  // r8
    unsigned int v33;  // r9d
    unsigned long long v34;  // r9
    unsigned int|char v35;  // r12b
    unsigned long|unsigned int v36;  // r12d
    unsigned long long v37;  // r12
    char *v38;  // r13
    unsigned long|char *|struct_3 * v39;  // r14
    char v4;  // [bp-0x60]
    unsigned long|unsigned int v40;  // r15d
    unsigned long long v41;  // r15d
    unsigned long long v42;  // cc_dep1
    unsigned long long v43;  // cc_dep2
    unsigned long v44;  // d
    char v5;  // [bp-0x5c]
    struct_4 *|unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]

    v10 = fopen("/proc/self/mountinfo", "re");
    if (v39 != 0)
    {
        v39 = v10;
        v7 = 0;
        v8 = 0;
        v0 = &stack_base-88;
        while (true)
        {
            v10 = __getdelim(&v7, &v8, 0xa, v39);
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
                v35 = 1;
                v1->field_10 = (long long)xstrdup();
                v12 = xstrdup();
                v25 = v1;
                v27 = v12;
                v1->field_18 = v12;
                v29 = "autofs";
                v1->field_28 = v1->field_28 | 4;
                v28 = v12;
                v24 = 7;
                while (v24 != 0)
                {
                    v24 -= 1;
                    v42 = ((long long)v28->field_0);
                    v43 = ((long long)*(v29));
                    v29 += v44;
                    v28 += v44;
                    break;
                }
                v1->field_20 = ((long long)v4) * 0x1000 & 0xffffff00000 | ((long long)v3) * 0x100000000 & 0xffffefff00000000 | ((long long)(((int)(((long long)v3) * 0x100)) & 0xfff00)) | ((long long)v4);
                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                if (((char)v42) != 0)
                {
                    v24 = 5;
                    v29 = "proc";
                    v28 = v27;
                    while (v24 != 0)
                    {
                        v24 -= 1;
                        v42 = ((long long)v28->field_0);
                        v43 = ((long long)*(v29));
                        v29 += v44;
                        v28 += v44;
                        break;
                    }
                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                    if (((char)v42) != 0)
                    {
                        v24 = 6;
                        v29 = "subfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v42 = ((long long)v28->field_0);
                            v43 = ((long long)*(v29));
                            v29 += v44;
                            v28 += v44;
                            break;
                        }
                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                        if (((char)v42) != 0)
                        {
                            v24 = 8;
                            v29 = "debugfs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v42 = ((long long)v28->field_0);
                                v43 = ((long long)*(v29));
                                v29 += v44;
                                v28 += v44;
                                break;
                            }
                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            if (((char)v42) != 0)
                            {
                                v24 = 7;
                                v29 = "devpts";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v42 = ((long long)v28->field_0);
                                    v43 = ((long long)*(v29));
                                    v29 += v44;
                                    v28 += v44;
                                    break;
                                }
                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                if (((char)v42) != 0)
                                {
                                    v24 = 8;
                                    v29 = "fusectl";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v42 = ((long long)v28->field_0);
                                        v43 = ((long long)*(v29));
                                        v29 += v44;
                                        v28 += v44;
                                        break;
                                    }
                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                    if (((char)v42) != 0)
                                    {
                                        v24 = 12;
                                        v29 = "fuse.portal";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v42 = ((long long)v28->field_0);
                                            v43 = ((long long)*(v29));
                                            v29 += v44;
                                            v28 += v44;
                                            break;
                                        }
                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                        if (((char)v42) != 0)
                                        {
                                            v24 = 7;
                                            v29 = "mqueue";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v42 = ((long long)v28->field_0);
                                                v43 = ((long long)*(v29));
                                                v29 += v44;
                                                v28 += v44;
                                                break;
                                            }
                                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                            if (((char)v42) != 0)
                                            {
                                                v24 = 11;
                                                v29 = "rpc_pipefs";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v42 = ((long long)v28->field_0);
                                                    v43 = ((long long)*(v29));
                                                    v29 += v44;
                                                    v28 += v44;
                                                    break;
                                                }
                                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                if (((char)v42) != 0)
                                                {
                                                    v24 = 6;
                                                    v29 = "sysfs";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v42 = ((long long)v28->field_0);
                                                        v43 = ((long long)*(v29));
                                                        v29 += v44;
                                                        v28 += v44;
                                                        break;
                                                    }
                                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                    if (((char)v42) != 0)
                                                    {
                                                        v24 = 6;
                                                        v29 = "devfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v42 = ((long long)v28->field_0);
                                                            v43 = ((long long)*(v29));
                                                            v29 += v44;
                                                            v28 += v44;
                                                            break;
                                                        }
                                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                        if (((char)v42) != 0)
                                                        {
                                                            v12 = strcmp(v28, "kernfs");
                                                            v25 = v1;
                                                            if (v12 != 0)
                                                            {
                                                                v12 = strcmp(v28, "ignore");
                                                                v25 = v1;
                                                                if (v12 != 0)
                                                                {
                                                                    v35 = ((char)(strcmp(v28, "none") == 0));
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
                v20 = ((long long)(((int)tmp_14) & -2 | v35));
                v37 = v25->field_0;
                tmp_34 = v20;
                v25->field_28 = tmp_34;
                v31 = v37;
                v32 = strchr(v31, 0x3a);
                v18 = 1;
                if (v32 == 0)
                {
                    if (v31[1] == 47 && v31[0] == 47)
                    {
                        v24 = 6;
                        v31 = "smbfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v42 = ((long long)*(rsi<8>));
                            v43 = ((long long)*(v31));
                            v31 += v44;
                            v28 = rsi<8> + v44;
                            break;
                        }
                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                        if (((char)v42) != 0)
                        {
                            v24 = 5;
                            v31 = "smb3";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v42 = ((long long)v28->field_0);
                                v43 = ((long long)*(v31));
                                v31 += v44;
                                v28 += v44;
                                break;
                            }
                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            if (((char)v42) != 0)
                            {
                                v24 = 5;
                                v31 = "cifs";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v42 = ((long long)v28->field_0);
                                    v43 = ((long long)*(v31));
                                    v31 += v44;
                                    v28 += v44;
                                    break;
                                }
                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            }
                        }
                    }
                    if (v31[1] != 47 || v31[0] != 47 || ((char)v42) != 0 && ((char)v42) != 0 && ((char)v42) != 0)
                    {
                        v24 = 5;
                        v18 = 1;
                        v31 = "acfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v42 = ((long long)*(rsi<8>));
                            v43 = ((long long)*(v31));
                            v31 += v44;
                            v28 = rsi<8> + v44;
                            break;
                        }
                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                        if (((char)v42) != 0)
                        {
                            v24 = 4;
                            v31 = "afs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v42 = ((long long)v28->field_0);
                                v43 = ((long long)*(v31));
                                v31 += v44;
                                v28 += v44;
                                break;
                            }
                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            if (((char)v42) != 0)
                            {
                                v24 = 5;
                                v31 = "coda";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v42 = ((long long)v28->field_0);
                                    v43 = ((long long)*(v31));
                                    v31 += v44;
                                    v28 += v44;
                                    break;
                                }
                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                if (((char)v42) != 0)
                                {
                                    v24 = 11;
                                    v31 = "auristorfs";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v42 = ((long long)v28->field_0);
                                        v43 = ((long long)*(v31));
                                        v31 += v44;
                                        v28 += v44;
                                        break;
                                    }
                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                    if (((char)v42) != 0)
                                    {
                                        v24 = 6;
                                        v31 = "fhgfs";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v42 = ((long long)v28->field_0);
                                            v43 = ((long long)*(v31));
                                            v31 += v44;
                                            v28 += v44;
                                            break;
                                        }
                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                        if (((char)v42) != 0)
                                        {
                                            v24 = 5;
                                            v31 = "gpfs";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v42 = ((long long)v28->field_0);
                                                v43 = ((long long)*(v31));
                                                v31 += v44;
                                                v28 += v44;
                                                break;
                                            }
                                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                            if (((char)v42) != 0)
                                            {
                                                v24 = 6;
                                                v31 = "ibrix";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v42 = ((long long)v28->field_0);
                                                    v43 = ((long long)*(v31));
                                                    v31 += v44;
                                                    v28 += v44;
                                                    break;
                                                }
                                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                if (((char)v42) != 0)
                                                {
                                                    v24 = 6;
                                                    v31 = "ocfs2";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v42 = ((long long)v28->field_0);
                                                        v43 = ((long long)*(v31));
                                                        v31 += v44;
                                                        v28 += v44;
                                                        break;
                                                    }
                                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                    if (((char)v42) != 0)
                                                    {
                                                        v24 = 5;
                                                        v31 = "vxfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v42 = ((long long)v28->field_0);
                                                            v43 = ((long long)*(v31));
                                                            v31 += v44;
                                                            v28 += v44;
                                                            break;
                                                        }
                                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                        if (((char)v42) != 0)
                                                        {
                                                            v1 = v1;
                                                            v18 = strcmp("-hosts", v31);
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
                if (((long long)(*(v39) & 32)) == 0)
                {
                    v10 = rpl_fclose();
                    v0->field_0 = 0;
                    v37 = v6;
                    v14 = v37;
                    return v14;
                }
                v36 = ((long long)v27->field_0);
                v27 = __errno_location();
                rpl_fclose();
                v27->field_0 = ((int)v36);
                break;
            }
        }
        if (((long long)(*(v39) & 32)) == 0)
        {
            v36 = ((int)v27->field_0);
            v27 = __errno_location();
        }
        else if (((long long)(*(v39) & 32)) != 0)
        {
            v0->field_0 = 0;
            v26 = v6;
        }
    }
    else
    {
        v37 = setmntent(&g_411cda, &g_4117c3);
        if (v37 == 0)
        {
            v14 = v37;
            return v14;
        }
        v0 = &stack_base-88;
        v40 = getmntent(((int)v37));
        if (v40 != 0)
        {
            while (true)
            {
                hasmntopt(v40, &g_411ce4);
                v39 = (long long)xmalloc();
                v39->field_0 = (long long)xstrdup();
                v39->field_10 = 0;
                v41 = 1;
                v39->field_8 = (long long)xstrdup();
                v23 = xstrdup();
                v24 = 7;
                v30 = "autofs";
                v39->field_28 = v39->field_28 | 4;
                v28 = v23;
                v39->field_18 = v23;
                v38 = v23;
                while (v24 != 0)
                {
                    v24 -= 1;
                    v42 = ((long long)*(v28));
                    v43 = ((long long)*(v30));
                    v30 += v44;
                    v28 += v44;
                    break;
                }
                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                if (((char)v42) != 0)
                {
                    v24 = 5;
                    v28 = v38;
                    v30 = "proc";
                    while (v24 != 0)
                    {
                        v24 -= 1;
                        v42 = ((long long)*(v28));
                        v43 = ((long long)*(v30));
                        v30 += v44;
                        v28 += v44;
                        break;
                    }
                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                    if (((char)v42) != 0)
                    {
                        v24 = 6;
                        v30 = "subfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v42 = ((long long)*(v28));
                            v43 = ((long long)*(v30));
                            v30 += v44;
                            v28 += v44;
                            break;
                        }
                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                        if (((char)v42) != 0)
                        {
                            v24 = 8;
                            v30 = "debugfs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v42 = ((long long)*(v28));
                                v43 = ((long long)*(v30));
                                v30 += v44;
                                v28 += v44;
                                break;
                            }
                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            if (((char)v42) != 0)
                            {
                                v24 = 7;
                                v30 = "devpts";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v42 = ((long long)*(v28));
                                    v43 = ((long long)*(v30));
                                    v30 += v44;
                                    v28 += v44;
                                    break;
                                }
                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                if (((char)v42) != 0)
                                {
                                    v24 = 8;
                                    v30 = "fusectl";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v42 = ((long long)*(v28));
                                        v43 = ((long long)*(v30));
                                        v30 += v44;
                                        v28 += v44;
                                        break;
                                    }
                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                    if (((char)v42) != 0)
                                    {
                                        v24 = 12;
                                        v30 = "fuse.portal";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v42 = ((long long)*(v28));
                                            v43 = ((long long)*(v30));
                                            v30 += v44;
                                            v28 += v44;
                                            break;
                                        }
                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                        if (((char)v42) != 0)
                                        {
                                            v24 = 7;
                                            v30 = "mqueue";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v42 = ((long long)*(v28));
                                                v43 = ((long long)*(v30));
                                                v30 += v44;
                                                v28 += v44;
                                                break;
                                            }
                                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                            if (((char)v42) != 0)
                                            {
                                                v24 = 11;
                                                v30 = "rpc_pipefs";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v42 = ((long long)*(v28));
                                                    v43 = ((long long)*(v30));
                                                    v30 += v44;
                                                    v28 += v44;
                                                    break;
                                                }
                                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                if (((char)v42) != 0)
                                                {
                                                    v24 = 6;
                                                    v30 = "sysfs";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v42 = ((long long)*(v28));
                                                        v43 = ((long long)*(v30));
                                                        v30 += v44;
                                                        v28 += v44;
                                                        break;
                                                    }
                                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                    if (((char)v42) != 0)
                                                    {
                                                        v24 = 6;
                                                        v30 = "devfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v42 = ((long long)*(v28));
                                                            v43 = ((long long)*(v30));
                                                            v30 += v44;
                                                            v28 += v44;
                                                            break;
                                                        }
                                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                        if (((char)v42) != 0)
                                                        {
                                                            v23 = strcmp(v28, "kernfs");
                                                            if (v23 != 0)
                                                            {
                                                                v23 = strcmp(v28, "ignore");
                                                                if (v23 != 0)
                                                                {
                                                                    v23 = strcmp(v28, "none");
                                                                    v23 = ((char)(v23 == 0));
                                                                    v41 = v33 & reg_16<4>;
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
                v11 = ((long long)(((int)v39->field_28) & -2 | v41));
                v40 = v39->field_0;
                tmp_30 = v11;
                v39->field_28 = tmp_30;
                v31 = v40;
                v34 = strchr(v31, 0x3a);
                v13 = 1;
                if (v34 == 0)
                {
                    if (v31[0] == 47 && v31[1] == 47)
                    {
                        v24 = 6;
                        v31 = "smbfs";
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v42 = ((long long)*(rsi<8>));
                            v43 = ((long long)*(v31));
                            v31 += v44;
                            v28 = rsi<8> + v44;
                            break;
                        }
                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                        if (((char)v42) != 0)
                        {
                            v24 = 5;
                            v31 = "smb3";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v42 = ((long long)*(v28));
                                v43 = ((long long)*(v31));
                                v31 += v44;
                                v28 += v44;
                                break;
                            }
                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            if (((char)v42) != 0)
                            {
                                v24 = 5;
                                v31 = "cifs";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v42 = ((long long)*(v28));
                                    v43 = ((long long)*(v31));
                                    v31 += v44;
                                    v28 += v44;
                                    break;
                                }
                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            }
                        }
                    }
                    if (v31[0] != 47 || v31[1] != 47 || ((char)v42) != 0 && ((char)v42) != 0 && ((char)v42) != 0)
                    {
                        v24 = 5;
                        v31 = "acfs";
                        v13 = 1;
                        while (v24 != 0)
                        {
                            v24 -= 1;
                            v42 = ((long long)*(rsi<8>));
                            v43 = ((long long)*(v31));
                            v31 += v44;
                            v28 = rsi<8> + v44;
                            break;
                        }
                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                        if (((char)v42) != 0)
                        {
                            v24 = 4;
                            v31 = "afs";
                            while (v24 != 0)
                            {
                                v24 -= 1;
                                v42 = ((long long)*(v28));
                                v43 = ((long long)*(v31));
                                v31 += v44;
                                v28 += v44;
                                break;
                            }
                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                            if (((char)v42) != 0)
                            {
                                v24 = 5;
                                v31 = "coda";
                                while (v24 != 0)
                                {
                                    v24 -= 1;
                                    v42 = ((long long)*(v28));
                                    v43 = ((long long)*(v31));
                                    v31 += v44;
                                    v28 += v44;
                                    break;
                                }
                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                if (((char)v42) != 0)
                                {
                                    v24 = 11;
                                    v31 = "auristorfs";
                                    while (v24 != 0)
                                    {
                                        v24 -= 1;
                                        v42 = ((long long)*(v28));
                                        v43 = ((long long)*(v31));
                                        v31 += v44;
                                        v28 += v44;
                                        break;
                                    }
                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                    if (((char)v42) != 0)
                                    {
                                        v24 = 6;
                                        v31 = "fhgfs";
                                        while (v24 != 0)
                                        {
                                            v24 -= 1;
                                            v42 = ((long long)*(v28));
                                            v43 = ((long long)*(v31));
                                            v31 += v44;
                                            v28 += v44;
                                            break;
                                        }
                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                        if (((char)v42) != 0)
                                        {
                                            v24 = 5;
                                            v31 = "gpfs";
                                            while (v24 != 0)
                                            {
                                                v24 -= 1;
                                                v42 = ((long long)*(v28));
                                                v43 = ((long long)*(v31));
                                                v31 += v44;
                                                v28 += v44;
                                                break;
                                            }
                                            v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                            if (((char)v42) != 0)
                                            {
                                                v24 = 6;
                                                v31 = "ibrix";
                                                while (v24 != 0)
                                                {
                                                    v24 -= 1;
                                                    v42 = ((long long)*(v28));
                                                    v43 = ((long long)*(v31));
                                                    v31 += v44;
                                                    v28 += v44;
                                                    break;
                                                }
                                                v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                if (((char)v42) != 0)
                                                {
                                                    v24 = 6;
                                                    v31 = "ocfs2";
                                                    while (v24 != 0)
                                                    {
                                                        v24 -= 1;
                                                        v42 = ((long long)*(v28));
                                                        v43 = ((long long)*(v31));
                                                        v31 += v44;
                                                        v28 += v44;
                                                        break;
                                                    }
                                                    v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                    if (((char)v42) != 0)
                                                    {
                                                        v24 = 5;
                                                        v31 = "vxfs";
                                                        while (v24 != 0)
                                                        {
                                                            v24 -= 1;
                                                            v42 = ((long long)*(v28));
                                                            v43 = ((long long)*(v31));
                                                            v31 += v44;
                                                            v28 += v44;
                                                            break;
                                                        }
                                                        v42 = ((long long)(((char)(v42 > v43)) - 0 - ((char)(v42 < v43))));
                                                        if (((char)v42) != 0)
                                                        {
                                                            v13 = strcmp("-hosts", v31);
                                                            v13 = ((char)(((int)v13) == 0));
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
                tmp_24 = ((long long)v39->field_28);
                v39->field_20 = 18446744069414584319;
                v16 = ((long long)(((int)tmp_24) & -3 | ((int)v13) * 2));
                tmp_42 = v16;
                v39->field_28 = tmp_42;
                v0->field_0 = v39;
                v0 = v39 + 48;
                v10 = getmntent(((int)v37));
                v40 = ((int)v10);
                if (v10 == 0)
                {
                    break;
                }
            }
        }
        v10 = endmntent(((int)v37));
        if (v10 != 0)
        {
            v0->field_0 = 0;
            v37 = v6;
            v14 = v37;
            return v14;
        }
    }
    if (v39 != 0 || v10 == 0 && v37 != 0)
    {
        v36 = ((int)v27->field_0);
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
            v27->field_0 = v36;
            v37 = 0;
            v14 = v37;
            return v14;
        }
        v27->field_0 = v36;
        v37 = 0;
        v14 = v37;
        return v14;
    }
}
