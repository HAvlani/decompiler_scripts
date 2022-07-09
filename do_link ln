typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 backup_type;
extern struct_1 dest_set;
extern unsigned int g_40c008;
extern unsigned int g_40c038;
extern unsigned int g_40c049;
extern unsigned int g_40c087;
extern unsigned int g_40c248;
extern unsigned int g_40c270;
extern unsigned int g_40c338;
extern char g_40da38;
extern char hard_dir_link;
extern char interactive;
extern char logical;
extern char relative;
extern char remove_existing_files;
extern char symbolic_link;
extern char verbose;

int do_link()
{
    unsigned long v0;  // [bp-0x198]
    unsigned long|unsigned long long|unsigned int|char v1;  // [bp-0x188]
    unsigned long v10;  // [bp-0xd0]
    unsigned int v11;  // [bp-0xc0]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v19;  // rax
    unsigned long|unsigned long long|unsigned int|char v2;  // [bp-0x180]
    unsigned long|unsigned long long v23;  // rcx
    void *v24;  // rcx
    unsigned long|char * v25;  // rdx
    unsigned long long v26;  // rbx
    unsigned long long|unsigned int v27;  // ebp
    unsigned long|unsigned int v28;  // esi
    unsigned long long v29;  // rdi
    unsigned long|unsigned long long|unsigned int v3;  // [bp-0x178]
    unsigned long v30;  // r8
    unsigned long long v31;  // r9
    unsigned long|unsigned int v32;  // r10
    char *|unsigned long long v33;  // r12
    unsigned long|unsigned long long|unsigned int v34;  // r13
    struct_0 *|char *|unsigned long long|unsigned int v35;  // r15d
    unsigned int v4;  // [bp-0x16c]
    char v5;  // [bp-0x168]
    unsigned long v6;  // [bp-0x160]
    unsigned long v7;  // [bp-0x158]
    unsigned int v8;  // [bp-0x150]
    char v9;  // [bp-0xd8]

    v32 = v30;
    v34 = ((int)v25);
    v33 = v29;
    v27 = v28;
    if (((int)v30) < 0)
    {
        v32 = (long long)atomic_link();
    }
    v31 = ((long long)symbolic_link);
    if (((int)v32) == 0)
    {
        v35 = dest_set;
        if (!(((long long)symbolic_link) != 0))
        {
            v1 = &stack_base-360;
            v14 = __fxstatat(0x1, 0xffffff9c, ((int)v29), ((int)&stack_base-360), ((int)(((long long)(logical == 0)) * 0x100)), ((int)&stack_base-360));
            if (v14 == 0)
            {
                v35 = 0;
                /* goto 4208926; */
            }
            else
            {
                v34 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40c008, 0x5));
                return v31;
            }
        }
        else if (verbose == 0)
        {
            v1 = v31;
            rpl_free();
            rpl_free();
            return v31;
        }
    }
    else
    {
        v35 = 1;
        if (((long long)symbolic_link) == 0)
        {
            v1 = ((int)v32);
            ((unsigned int)v35) = __fxstatat(0x1, 0xffffff9c, ((int)v29), ((int)&stack_base-360), ((int)(((long long)(logical == 0)) * 0x100)), ((int)&stack_base-360));
            if (!(((int)((unsigned int)v35)) == 0))
            {
                v34 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40c008, 0x5));
                return v31;
            }
            else if (((long long)hard_dir_link) == 0)
            {
                if ((((short)v8) & 0xf000) == 0x4000)
                {
                    v1 = hard_dir_link;
                    v33 = (long long)quotearg_n_style_colon();
                    error(0x0, 0x0, dcgettext(0x0, &g_40c248, 0x5));
                    return v31;
                }
            }
        }
        if (((long long)symbolic_link) != 0 || ((int)((unsigned int)v35)) == 0 && (((short)v8) & 0xf000) != 0x4000 || ((int)((unsigned int)v35)) == 0 && ((long long)hard_dir_link) != 0)
        {
            if (relative != 0)
            {
                v4 = v32;
                v3 = (long long)dir_name();
                v19 = canonicalize_filename_mode();
                v1 = v19;
                v26 = v19;
                v2 = (long long)canonicalize_filename_mode();
                if (v26 != 0)
                {
                    if (v2 != 0)
                    {
                        v26 = (long long)xmalloc();
                        v13 = relpath();
                        if (((long long)v13) != 0)
                        {
                            v4 = v4;
                            v33 = v26;
                            rpl_free();
                            rpl_free();
                            rpl_free();
                        }
                        else
                        {
                            rpl_free();
                        }
                    }
                }
                if (((long long)v13) == 0 || v26 == 0 || v2 == 0)
                {
                    rpl_free();
                    rpl_free();
                    rpl_free();
                    v1 = v4;
                    v33 = (long long)xstrdup();
                }
            }
            if (remove_existing_files != 0 || interactive != 0 || backup_type != 0)
            {
                v1 = ((int)v32);
                v2 = &stack_base-216;
                v14 = __fxstatat(0x1, v27, ((int)v25), ((int)&stack_base-216), 0x100, ((int)&stack_base-216));
                if (!(v14 == 0))
                {
                    v1 = v1;
                    v35 = __errno_location();
                    if (v35->field_0 != 2)
                    {
                        v33 = (long long)quotearg_style();
                        error(0x0, v35->field_0, dcgettext(0x0, &g_40c008, 0x5));
                        rpl_free();
                        return v31;
                    }
                }
                else if ((((short)v11) & 0xf000) != 0x4000)
                {
                    v1 = v1;
                    v14 = seen_file();
                    if (((long long)v14) == 0)
                    {
                        v14 = ((long long)remove_existing_files);
                        if (backup_type != 0)
                        {
                            v14 = ((long long)(((int)symbolic_link) ^ 1));
                        }
                        if (((long long)v14) != 0)
                        {
                            if (v35 != 0)
                            {
                                v1 = ((int)v1);
                                v14 = __xstat(0x1, ((int)v33), ((int)&stack_base-360));
                            }
                        }
                    }
                    v27 = (long long)quotearg_n_style();
                    v33 = (long long)quotearg_n_style();
                }
                else
                {
                    v33 = (long long)quotearg_n_style_colon();
                    error(0x0, 0x0, dcgettext(0x0, &g_40c270, 0x5));
                    rpl_free();
                    return v31;
                }
            }
        }
    }
    if (...)
    {
        if (v6 == v10)
        {
            if (v5 == v9)
            {
                if (v7 != 1)
                {
                    v1 = ((int)v32);
                    v14 = same_nameat();
                }
            }
        }
    }
    if (...)
    {
        v27 = (long long)quotearg_n_style();
        v33 = (long long)quotearg_n_style();
    }
    if (...)
    {
        error(0x0, 0x0, dcgettext(0x0, v28, 0x5));
        rpl_free();
        return v31;
    }
    if (...)
    {
        if (((long long)interactive) != 0)
        {
            v3 = ((int)v32);
            v2 = interactive;
            v1 = (long long)quotearg_style();
            dcgettext(0x0, &g_40c038, 0x5);
            __fprintf_chk();
            v14 = yesno();
            v32 = ((int)v3);
            if (((long long)v14) == 0)
            {
                v1 = v2;
                rpl_free();
                return v31;
            }
        }
    }
    if (...)
    {
        if (backup_type != 0)
        {
            v1 = v32;
            v35 = (long long)find_backup_file_name();
            v14 = renameat(v27, ((int)v25), v27, ((int)v35));
            if (v14 != 0)
            {
                v2 = v1;
                v1 = *(__errno_location());
                rpl_free();
                if (v1 != 2)
                {
                    v33 = (long long)quotearg_style();
                    error(0x0, v1, dcgettext(0x0, &g_40c049, 0x5));
                    rpl_free();
                    return v31;
                }
            }
        }
    }
    if (...)
    {
        v35 = 0;
    }
    if (...)
    {
        v35 = 0;
    }
    if (...)
    {
        if (symbolic_link == 0)
        {
            v31 = (long long)force_linkat();
        }
        else
        {
            v31 = force_symlinkat();
        }
        if (v31 > 0)
        {
            v2 = v31;
            v1 = (long long)quotearg_n_style();
            v23 = (long long)quotearg_n_style();
            if (symbolic_link != 0)
            {
                if (((int)v2) != 36)
                {
                    if (*(v33) != 0)
                    {
                        v3 = ((int)v2);
                        v28 = "failed to create symbolic link %s";
                        v2 = v2;
                    }
                }
                if (((int)v2) == 36 || *(v33) == 0)
                {
                    v3 = ((int)v2);
                    v28 = "failed to create symbolic link %s -> %s";
                    v2 = v23;
                }
            }
            else if (((int)v2) != 31)
            {
                if (((int)v2) != 122)
                {
                    if (((int)v2) != 17)
                    {
                        if ((((int)v2) & -3) != 28)
                        {
                            v3 = v2;
                            v2 = v2;
                            v25 = dcgettext(0x0, &g_40c338, 0x5);
                            /* goto 4207954; */
                        }
                    }
                }
                if (((int)v2) == 17 || (((int)v2) & -3) == 28 || ((int)v2) == 122)
                {
                    v3 = ((int)v2);
                    v28 = "failed to create hard link %s";
                    v2 = v2;
                }
            }
            else
            {
                v3 = ((int)v2);
                v28 = "failed to create hard link to %.0s%s";
                v2 = v2;
            }
            if (((int)v2) == 17 || ((int)v2) == 31 || (((int)v2) & -3) == 28 || ((int)v2) == 122 || symbolic_link != 0)
            {
                v25 = dcgettext(0x0, v28, 0x5);
            }
            error(0x0, v31, v25);
            v31 = 0;
            if (v35 == 0)
            {
                v1 = v31;
                rpl_free();
                rpl_free();
                return v31;
            }
            v1 = 0;
            v14 = renameat(v27, ((int)v35), v27, v34);
            v31 = ((long long)v1);
            if (v14 == 0)
            {
                v1 = v31;
                rpl_free();
                rpl_free();
                return v31;
            }
            else
            {
                v34 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40c087, 0x5));
                v1 = v31;
                rpl_free();
                rpl_free();
                return v31;
            }
        }
        v31 = ((long long)symbolic_link);
    }
    if (...)
    {
        record_file();
    }
    if (...)
    {
        v31 = 1;
        if (verbose == 0)
        {
            v1 = v31;
            rpl_free();
            rpl_free();
            return v31;
        }
        else if (v35 != 0)
        {
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(rdx<8>, rcx<8>), 0x0<64>, cc_ndep<8>))))
            {
                strlen(v35);
                memcpy(v1, v24, v25 - v24);
                v1 = (long long)xmalloc();
                strcpy(v1 + v25 - v24, v35);
            }
            v34 = quotearg_n_style();
            rpl_free();
            v23 = " ~ ";
            /* goto 4208389; */
        }
    }
    if (...)
    {
        v23 = &g_40da38;
        v34 = &g_40da38;
    }
    if (...)
    {
        v1 = v23;
        v0 = (long long)quotearg_n_style();
        __printf_chk(0x1, "%s%s%s %c> %s\n", v34, ((int)v1), quotearg_n_style(), (0 - ((int)(((long long)symbolic_link) < 1)) & 16) + 45, ((int)v0));
        v1 = v31;
        rpl_free();
        rpl_free();
        return v31;
    }
}
