typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char field_28;
} struct_4;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_3 {
    char padding_0[48];
    unsigned long long field_30;
} struct_3;

extern unsigned int g_412076;
extern unsigned int g_41225c;
extern unsigned int g_412266;

int read_file_system_list()
{
    BOT tmp_14;  // tmp #14
    BOT tmp_34;  // tmp #34
    BOT tmp_36;  // tmp #36
    BOT tmp_30;  // tmp #30
    BOT tmp_24;  // tmp #24
    BOT tmp_42;  // tmp #42
    struct_0 *|unsigned long v0;  // [bp-0x80]
    char *|struct_4 * v1;  // [bp-0x78]
    unsigned int v10;  // [bp+0x100008]
    unsigned long long|void *|char *|unsigned int v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v14;  // rax
    unsigned long long v16;  // rax
    char|unsigned long long|char * v17;  // rax
    unsigned long long|char * v18;  // rax
    unsigned long v2;  // [bp-0x70]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v25;  // rcx
    struct_4 * v26;  // rdx
    struct_3 * v27;  // rbx
    struct_2 * v28;  // rbp
    struct_1 *|char * v29;  // rsi
    char v3;  // [bp-0x64]
    char [2]|char * v30;  // rdi
    char * v31;  // rdi
    char * v32;  // rdi
    unsigned long long v33;  // r8
    unsigned int v34;  // r9d
    unsigned long long v35;  // r9
    unsigned long long|char *|unsigned int v36;  // r12
    unsigned int v37;  // r12d
    char *v38;  // r13
    char *|unsigned long|struct_4 * v39;  // r14
    char v4;  // [bp-0x60]
    unsigned long|unsigned int v40;  // r15d
    char *v41;  // r15
    unsigned int v42;  // r15
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep2
    unsigned long v45;  // d
    char v5;  // [bp-0x5c]
    struct_3 *|unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]

    v11 = fopen("/proc/self/mountinfo", "re");
    if (v39 != 0)
    {
        v39 = v11;
        v7 = 0;
        v8 = 0;
        v0 = &stack_base-88;
        while (true)
        {
            v11 = __getdelim(&v7, &v8, 0xa, v39);
            if (v11 != 18446744069414584319)
            {
                v11 = ((int)(__isoc99_sscanf(NULL, "%*u %*u %u:%u %n", ((int)&v3), ((int)&v4), ((int)&v5)) - 2));
                v11 = strchr(((long long)v5) + 0, 0x20);
                *(v11) = 0;
                v28 = v11 + 1;
                v11 = strchr(v11 + 1, 0x20);
                *(v11) = 0;
                v11 = strstr(v11 + 1, " - ");
                v11 = strchr(v11 + 3, 0x20);
                *(v11) = 0;
                v1 = v11 + 1;
                v11 = strchr(v11 + 1, 0x20);
                *(v11) = 0;
                v2 = v1;
                unescape_tab();
                unescape_tab();
                unescape_tab();
                unescape_tab();
                v1 = (long long)xmalloc();
                v1->field_0 = (long long)xstrdup();
                v1->field_8 = (long long)xstrdup();
                v37 = 1;
                v1->field_10 = (long long)xstrdup();
                v18 = xstrdup();
                v26 = v1;
                v28 = v18;
                v1->field_18 = v18;
                v31 = "autofs";
                v1->field_28 = v1->field_28 | 4;
                v29 = v18;
                v25 = 7;
                while (v25 != 0)
                {
                    v25 -= 1;
                    v43 = ((long long)v29->field_0);
                    v44 = ((long long)*(v31));
                    v31 += v45;
                    v29 += v45;
                    break;
                }
                v1->field_20 = ((long long)v4) * 0x1000 & 0xffffff00000 | ((long long)v3) * 0x100000000 & 0xffffefff00000000 | ((long long)(((int)(((long long)v3) * 0x100)) & 0xfff00)) | ((long long)v4);
                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                if (((char)v43) != 0)
                {
                    v25 = 5;
                    v31 = "proc";
                    v29 = v28;
                    while (v25 != 0)
                    {
                        v25 -= 1;
                        v43 = ((long long)v29->field_0);
                        v44 = ((long long)*(v31));
                        v31 += v45;
                        v29 += v45;
                        break;
                    }
                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                    if (((char)v43) != 0)
                    {
                        v25 = 6;
                        v31 = "subfs";
                        while (v25 != 0)
                        {
                            v25 -= 1;
                            v43 = ((long long)v29->field_0);
                            v44 = ((long long)*(v31));
                            v31 += v45;
                            v29 += v45;
                            break;
                        }
                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                        if (((char)v43) != 0)
                        {
                            v25 = 8;
                            v31 = "debugfs";
                            while (v25 != 0)
                            {
                                v25 -= 1;
                                v43 = ((long long)v29->field_0);
                                v44 = ((long long)*(v31));
                                v31 += v45;
                                v29 += v45;
                                break;
                            }
                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            if (((char)v43) != 0)
                            {
                                v25 = 7;
                                v31 = "devpts";
                                while (v25 != 0)
                                {
                                    v25 -= 1;
                                    v43 = ((long long)v29->field_0);
                                    v44 = ((long long)*(v31));
                                    v31 += v45;
                                    v29 += v45;
                                    break;
                                }
                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                if (((char)v43) != 0)
                                {
                                    v25 = 8;
                                    v31 = "fusectl";
                                    while (v25 != 0)
                                    {
                                        v25 -= 1;
                                        v43 = ((long long)v29->field_0);
                                        v44 = ((long long)*(v31));
                                        v31 += v45;
                                        v29 += v45;
                                        break;
                                    }
                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                    if (((char)v43) != 0)
                                    {
                                        v25 = 12;
                                        v31 = "fuse.portal";
                                        while (v25 != 0)
                                        {
                                            v25 -= 1;
                                            v43 = ((long long)v29->field_0);
                                            v44 = ((long long)*(v31));
                                            v31 += v45;
                                            v29 += v45;
                                            break;
                                        }
                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                        if (((char)v43) != 0)
                                        {
                                            v25 = 7;
                                            v31 = "mqueue";
                                            while (v25 != 0)
                                            {
                                                v25 -= 1;
                                                v43 = ((long long)v29->field_0);
                                                v44 = ((long long)*(v31));
                                                v31 += v45;
                                                v29 += v45;
                                                break;
                                            }
                                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                            if (((char)v43) != 0)
                                            {
                                                v25 = 11;
                                                v31 = "rpc_pipefs";
                                                while (v25 != 0)
                                                {
                                                    v25 -= 1;
                                                    v43 = ((long long)v29->field_0);
                                                    v44 = ((long long)*(v31));
                                                    v31 += v45;
                                                    v29 += v45;
                                                    break;
                                                }
                                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                if (((char)v43) != 0)
                                                {
                                                    v25 = 6;
                                                    v31 = "sysfs";
                                                    while (v25 != 0)
                                                    {
                                                        v25 -= 1;
                                                        v43 = ((long long)v29->field_0);
                                                        v44 = ((long long)*(v31));
                                                        v31 += v45;
                                                        v29 += v45;
                                                        break;
                                                    }
                                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                    if (((char)v43) != 0)
                                                    {
                                                        v25 = 6;
                                                        v31 = "devfs";
                                                        while (v25 != 0)
                                                        {
                                                            v25 -= 1;
                                                            v43 = ((long long)v29->field_0);
                                                            v44 = ((long long)*(v31));
                                                            v31 += v45;
                                                            v29 += v45;
                                                            break;
                                                        }
                                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                        if (((char)v43) != 0)
                                                        {
                                                            v18 = strcmp(v29, "kernfs");
                                                            v26 = v1;
                                                            if (v18 != 0)
                                                            {
                                                                v18 = strcmp(v29, "ignore");
                                                                v26 = v1;
                                                                if (v18 != 0)
                                                                {
                                                                    v37 = ((char)(strcmp(v29, "none") == 0));
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
                tmp_14 = ((long long)v26->field_28);
                v1 = v26;
                v14 = ((long long)(((int)tmp_14) & -2 | v37));
                v36 = v26->field_0;
                tmp_34 = v14;
                v26->field_28 = tmp_34;
                v30 = v36;
                v33 = strchr(v30, 0x3a);
                v21 = 1;
                if (v33 == 0)
                {
                    if (v30[1] == 47 && v30[0] == 47)
                    {
                        v25 = 6;
                        v30 = "smbfs";
                        while (v25 != 0)
                        {
                            v25 -= 1;
                            v43 = ((long long)*(rsi<8>));
                            v44 = ((long long)*(v30));
                            v30 += v45;
                            v29 = rsi<8> + v45;
                            break;
                        }
                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                        if (((char)v43) != 0)
                        {
                            v25 = 5;
                            v30 = "smb3";
                            while (v25 != 0)
                            {
                                v25 -= 1;
                                v43 = ((long long)v29->field_0);
                                v44 = ((long long)*(v30));
                                v30 += v45;
                                v29 += v45;
                                break;
                            }
                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            if (((char)v43) != 0)
                            {
                                v25 = 5;
                                v30 = "cifs";
                                while (v25 != 0)
                                {
                                    v25 -= 1;
                                    v43 = ((long long)v29->field_0);
                                    v44 = ((long long)*(v30));
                                    v30 += v45;
                                    v29 += v45;
                                    break;
                                }
                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            }
                        }
                    }
                    if (v30[1] != 47 || v30[0] != 47 || ((char)v43) != 0 && ((char)v43) != 0 && ((char)v43) != 0)
                    {
                        v25 = 5;
                        v21 = 1;
                        v30 = "acfs";
                        while (v25 != 0)
                        {
                            v25 -= 1;
                            v43 = ((long long)*(rsi<8>));
                            v44 = ((long long)*(v30));
                            v30 += v45;
                            v29 = rsi<8> + v45;
                            break;
                        }
                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                        if (((char)v43) != 0)
                        {
                            v25 = 4;
                            v30 = "afs";
                            while (v25 != 0)
                            {
                                v25 -= 1;
                                v43 = ((long long)v29->field_0);
                                v44 = ((long long)*(v30));
                                v30 += v45;
                                v29 += v45;
                                break;
                            }
                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            if (((char)v43) != 0)
                            {
                                v25 = 5;
                                v30 = "coda";
                                while (v25 != 0)
                                {
                                    v25 -= 1;
                                    v43 = ((long long)v29->field_0);
                                    v44 = ((long long)*(v30));
                                    v30 += v45;
                                    v29 += v45;
                                    break;
                                }
                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                if (((char)v43) != 0)
                                {
                                    v25 = 11;
                                    v30 = "auristorfs";
                                    while (v25 != 0)
                                    {
                                        v25 -= 1;
                                        v43 = ((long long)v29->field_0);
                                        v44 = ((long long)*(v30));
                                        v30 += v45;
                                        v29 += v45;
                                        break;
                                    }
                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                    if (((char)v43) != 0)
                                    {
                                        v25 = 6;
                                        v30 = "fhgfs";
                                        while (v25 != 0)
                                        {
                                            v25 -= 1;
                                            v43 = ((long long)v29->field_0);
                                            v44 = ((long long)*(v30));
                                            v30 += v45;
                                            v29 += v45;
                                            break;
                                        }
                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                        if (((char)v43) != 0)
                                        {
                                            v25 = 5;
                                            v30 = "gpfs";
                                            while (v25 != 0)
                                            {
                                                v25 -= 1;
                                                v43 = ((long long)v29->field_0);
                                                v44 = ((long long)*(v30));
                                                v30 += v45;
                                                v29 += v45;
                                                break;
                                            }
                                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                            if (((char)v43) != 0)
                                            {
                                                v25 = 6;
                                                v30 = "ibrix";
                                                while (v25 != 0)
                                                {
                                                    v25 -= 1;
                                                    v43 = ((long long)v29->field_0);
                                                    v44 = ((long long)*(v30));
                                                    v30 += v45;
                                                    v29 += v45;
                                                    break;
                                                }
                                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                if (((char)v43) != 0)
                                                {
                                                    v25 = 6;
                                                    v30 = "ocfs2";
                                                    while (v25 != 0)
                                                    {
                                                        v25 -= 1;
                                                        v43 = ((long long)v29->field_0);
                                                        v44 = ((long long)*(v30));
                                                        v30 += v45;
                                                        v29 += v45;
                                                        break;
                                                    }
                                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                    if (((char)v43) != 0)
                                                    {
                                                        v25 = 5;
                                                        v30 = "vxfs";
                                                        while (v25 != 0)
                                                        {
                                                            v25 -= 1;
                                                            v43 = ((long long)v29->field_0);
                                                            v44 = ((long long)*(v30));
                                                            v30 += v45;
                                                            v29 += v45;
                                                            break;
                                                        }
                                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                        if (((char)v43) != 0)
                                                        {
                                                            v1 = v1;
                                                            v21 = strcmp("-hosts", v30);
                                                            v26 = v1;
                                                            v21 = ((char)(((int)v21) == 0));
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
                v11 = ((long long)(((int)v26->field_28) & -3 | ((int)v21) * 2));
                tmp_36 = v11;
                v26->field_28 = tmp_36;
                v0->field_0 = v26;
                v0 = v26 + 48;
            }
            else
            {
                rpl_free();
                if (((long long)(*(v39) & 32)) == 0)
                {
                    v11 = rpl_fclose();
                    v0->field_0 = 0;
                    v36 = v6;
                    v16 = v36;
                    return v16;
                }
                v36 = ((int)v28->field_0);
                v28 = __errno_location();
                rpl_fclose();
                v28->field_0 = v36;
                break;
            }
        }
        if (((long long)(*(v39) & 32)) == 0)
        {
            v36 = ((long long)v10);
            v28 = __errno_location();
        }
        else if (((long long)(*(v39) & 32)) != 0)
        {
            v0->field_0 = 0;
            v27 = v6;
        }
    }
    else
    {
        v36 = setmntent(&g_41225c, &g_412076);
        if (v36 == 0)
        {
            v16 = v36;
            return v16;
        }
        v0 = &stack_base-88;
        v22 = getmntent(((int)v36));
        v40 = ((int)v22);
        if (v22 != 0)
        {
            while (true)
            {
                hasmntopt(v40, &g_412266);
                v39 = (long long)xmalloc();
                v39->field_0 = (long long)xstrdup();
                v39->field_10 = 0;
                v42 = 1;
                v39->field_8 = (long long)xstrdup();
                v17 = xstrdup();
                v25 = 7;
                v32 = "autofs";
                v39->field_28 = v39->field_28 | 4;
                v29 = v17;
                v39->field_18 = v17;
                v38 = v17;
                while (v25 != 0)
                {
                    v25 -= 1;
                    v43 = ((long long)*(v29));
                    v44 = ((long long)*(v32));
                    v32 += v45;
                    v29 += v45;
                    break;
                }
                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                if (((char)v43) != 0)
                {
                    v25 = 5;
                    v29 = v38;
                    v32 = "proc";
                    while (v25 != 0)
                    {
                        v25 -= 1;
                        v43 = ((long long)*(v29));
                        v44 = ((long long)*(v32));
                        v32 += v45;
                        v29 += v45;
                        break;
                    }
                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                    if (((char)v43) != 0)
                    {
                        v25 = 6;
                        v32 = "subfs";
                        while (v25 != 0)
                        {
                            v25 -= 1;
                            v43 = ((long long)*(v29));
                            v44 = ((long long)*(v32));
                            v32 += v45;
                            v29 += v45;
                            break;
                        }
                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                        if (((char)v43) != 0)
                        {
                            v25 = 8;
                            v32 = "debugfs";
                            while (v25 != 0)
                            {
                                v25 -= 1;
                                v43 = ((long long)*(v29));
                                v44 = ((long long)*(v32));
                                v32 += v45;
                                v29 += v45;
                                break;
                            }
                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            if (((char)v43) != 0)
                            {
                                v25 = 7;
                                v32 = "devpts";
                                while (v25 != 0)
                                {
                                    v25 -= 1;
                                    v43 = ((long long)*(v29));
                                    v44 = ((long long)*(v32));
                                    v32 += v45;
                                    v29 += v45;
                                    break;
                                }
                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                if (((char)v43) != 0)
                                {
                                    v25 = 8;
                                    v32 = "fusectl";
                                    while (v25 != 0)
                                    {
                                        v25 -= 1;
                                        v43 = ((long long)*(v29));
                                        v44 = ((long long)*(v32));
                                        v32 += v45;
                                        v29 += v45;
                                        break;
                                    }
                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                    if (((char)v43) != 0)
                                    {
                                        v25 = 12;
                                        v32 = "fuse.portal";
                                        while (v25 != 0)
                                        {
                                            v25 -= 1;
                                            v43 = ((long long)*(v29));
                                            v44 = ((long long)*(v32));
                                            v32 += v45;
                                            v29 += v45;
                                            break;
                                        }
                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                        if (((char)v43) != 0)
                                        {
                                            v25 = 7;
                                            v32 = "mqueue";
                                            while (v25 != 0)
                                            {
                                                v25 -= 1;
                                                v43 = ((long long)*(v29));
                                                v44 = ((long long)*(v32));
                                                v32 += v45;
                                                v29 += v45;
                                                break;
                                            }
                                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                            if (((char)v43) != 0)
                                            {
                                                v25 = 11;
                                                v32 = "rpc_pipefs";
                                                while (v25 != 0)
                                                {
                                                    v25 -= 1;
                                                    v43 = ((long long)*(v29));
                                                    v44 = ((long long)*(v32));
                                                    v32 += v45;
                                                    v29 += v45;
                                                    break;
                                                }
                                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                if (((char)v43) != 0)
                                                {
                                                    v25 = 6;
                                                    v32 = "sysfs";
                                                    while (v25 != 0)
                                                    {
                                                        v25 -= 1;
                                                        v43 = ((long long)*(v29));
                                                        v44 = ((long long)*(v32));
                                                        v32 += v45;
                                                        v29 += v45;
                                                        break;
                                                    }
                                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                    if (((char)v43) != 0)
                                                    {
                                                        v25 = 6;
                                                        v32 = "devfs";
                                                        while (v25 != 0)
                                                        {
                                                            v25 -= 1;
                                                            v43 = ((long long)*(v29));
                                                            v44 = ((long long)*(v32));
                                                            v32 += v45;
                                                            v29 += v45;
                                                            break;
                                                        }
                                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                        if (((char)v43) != 0)
                                                        {
                                                            v17 = strcmp(v29, "kernfs");
                                                            if (v17 != 0)
                                                            {
                                                                v17 = strcmp(v29, "ignore");
                                                                if (v17 != 0)
                                                                {
                                                                    v17 = strcmp(v29, "none");
                                                                    v17 = ((char)(v17 == 0));
                                                                    ((unsigned int)v42) = ((long long)(v34 & reg_16<4>));
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
                v20 = ((long long)(((int)v39->field_28) & -2 | ((unsigned int)v42)));
                v41 = v39->field_0;
                tmp_30 = v20;
                v39->field_28 = tmp_30;
                v30 = v41;
                v35 = strchr(v30, 0x3a);
                v12 = 1;
                if (v35 == 0)
                {
                    if (v30[0] == 47 && v30[1] == 47)
                    {
                        v25 = 6;
                        v30 = "smbfs";
                        while (v25 != 0)
                        {
                            v25 -= 1;
                            v43 = ((long long)*(rsi<8>));
                            v44 = ((long long)*(v30));
                            v30 += v45;
                            v29 = rsi<8> + v45;
                            break;
                        }
                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                        if (((char)v43) != 0)
                        {
                            v25 = 5;
                            v30 = "smb3";
                            while (v25 != 0)
                            {
                                v25 -= 1;
                                v43 = ((long long)*(v29));
                                v44 = ((long long)*(v30));
                                v30 += v45;
                                v29 += v45;
                                break;
                            }
                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            if (((char)v43) != 0)
                            {
                                v25 = 5;
                                v30 = "cifs";
                                while (v25 != 0)
                                {
                                    v25 -= 1;
                                    v43 = ((long long)*(v29));
                                    v44 = ((long long)*(v30));
                                    v30 += v45;
                                    v29 += v45;
                                    break;
                                }
                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            }
                        }
                    }
                    if (v30[0] != 47 || v30[1] != 47 || ((char)v43) != 0 && ((char)v43) != 0 && ((char)v43) != 0)
                    {
                        v25 = 5;
                        v30 = "acfs";
                        v12 = 1;
                        while (v25 != 0)
                        {
                            v25 -= 1;
                            v43 = ((long long)*(rsi<8>));
                            v44 = ((long long)*(v30));
                            v30 += v45;
                            v29 = rsi<8> + v45;
                            break;
                        }
                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                        if (((char)v43) != 0)
                        {
                            v25 = 4;
                            v30 = "afs";
                            while (v25 != 0)
                            {
                                v25 -= 1;
                                v43 = ((long long)*(v29));
                                v44 = ((long long)*(v30));
                                v30 += v45;
                                v29 += v45;
                                break;
                            }
                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                            if (((char)v43) != 0)
                            {
                                v25 = 5;
                                v30 = "coda";
                                while (v25 != 0)
                                {
                                    v25 -= 1;
                                    v43 = ((long long)*(v29));
                                    v44 = ((long long)*(v30));
                                    v30 += v45;
                                    v29 += v45;
                                    break;
                                }
                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                if (((char)v43) != 0)
                                {
                                    v25 = 11;
                                    v30 = "auristorfs";
                                    while (v25 != 0)
                                    {
                                        v25 -= 1;
                                        v43 = ((long long)*(v29));
                                        v44 = ((long long)*(v30));
                                        v30 += v45;
                                        v29 += v45;
                                        break;
                                    }
                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                    if (((char)v43) != 0)
                                    {
                                        v25 = 6;
                                        v30 = "fhgfs";
                                        while (v25 != 0)
                                        {
                                            v25 -= 1;
                                            v43 = ((long long)*(v29));
                                            v44 = ((long long)*(v30));
                                            v30 += v45;
                                            v29 += v45;
                                            break;
                                        }
                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                        if (((char)v43) != 0)
                                        {
                                            v25 = 5;
                                            v30 = "gpfs";
                                            while (v25 != 0)
                                            {
                                                v25 -= 1;
                                                v43 = ((long long)*(v29));
                                                v44 = ((long long)*(v30));
                                                v30 += v45;
                                                v29 += v45;
                                                break;
                                            }
                                            v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                            if (((char)v43) != 0)
                                            {
                                                v25 = 6;
                                                v30 = "ibrix";
                                                while (v25 != 0)
                                                {
                                                    v25 -= 1;
                                                    v43 = ((long long)*(v29));
                                                    v44 = ((long long)*(v30));
                                                    v30 += v45;
                                                    v29 += v45;
                                                    break;
                                                }
                                                v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                if (((char)v43) != 0)
                                                {
                                                    v25 = 6;
                                                    v30 = "ocfs2";
                                                    while (v25 != 0)
                                                    {
                                                        v25 -= 1;
                                                        v43 = ((long long)*(v29));
                                                        v44 = ((long long)*(v30));
                                                        v30 += v45;
                                                        v29 += v45;
                                                        break;
                                                    }
                                                    v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                    if (((char)v43) != 0)
                                                    {
                                                        v25 = 5;
                                                        v30 = "vxfs";
                                                        while (v25 != 0)
                                                        {
                                                            v25 -= 1;
                                                            v43 = ((long long)*(v29));
                                                            v44 = ((long long)*(v30));
                                                            v30 += v45;
                                                            v29 += v45;
                                                            break;
                                                        }
                                                        v43 = ((long long)(((char)(v43 > v44)) - 0 - ((char)(v43 < v44))));
                                                        if (((char)v43) != 0)
                                                        {
                                                            v12 = strcmp("-hosts", v30);
                                                            v12 = ((char)(((int)v12) == 0));
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
                v22 = ((long long)(((int)tmp_24) & -3 | ((int)v12) * 2));
                tmp_42 = v22;
                v39->field_28 = tmp_42;
                v0->field_0 = v39;
                v0 = v39 + 48;
                v40 = getmntent(((int)v36));
                if (v40 == 0)
                {
                    break;
                }
            }
        }
        v11 = endmntent(((int)v36));
        if (v11 != 0)
        {
            v0->field_0 = 0;
            v36 = v6;
            v16 = v36;
            return v16;
        }
    }
    if (v39 != 0 || v11 == 0 && v36 != 0)
    {
        v36 = ((long long)v10);
        v28 = __errno_location();
        v0->field_0 = 0;
        v27 = v6;
        if (v6 != 0)
        {
            while (true)
            {
                v27 = v27->field_30;
                free_mount_entry();
                v6 = v27;
                if (v27 == 0)
                {
                    break;
                }
            }
            v28->field_0 = ((unsigned int)v36);
            v36 = 0;
            v16 = v36;
            return v16;
        }
        v28->field_0 = ((unsigned int)v36);
        v36 = 0;
        v16 = v36;
        return v16;
    }
}
