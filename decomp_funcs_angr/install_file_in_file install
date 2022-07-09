typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern void a_buff.7794;
extern void b_buff.7795;
extern char copy_only_if_needed;
extern unsigned int g_417038;
extern unsigned int g_418116;
extern unsigned int g_418136;
extern struct_1 group_id;
extern struct_1 mode;
extern struct_1 owner_id;
extern struct_1 selinux_enabled;
extern char strip_files;
extern struct_0 strip_program;
extern char use_default_selinux_context;

int install_file_in_file()
{
    char s_214[52];  // [bp-0x214]
    unsigned long v0;  // [bp-0x228]
    unsigned long long v1;  // [bp-0x220]
    char v10;  // [bp-0x168]
    unsigned int v11;  // [bp-0x150]
    unsigned long v12;  // [bp-0x138]
    unsigned long v13;  // [bp-0xd8]
    unsigned long v14;  // [bp-0xd0]
    unsigned long v15;  // [bp-0xc8]
    unsigned long|unsigned int v16;  // [bp-0xc0]
    unsigned int v17;  // [bp-0xbc]
    unsigned int v18;  // [bp-0xb8]
    unsigned long v19;  // [bp-0xa8]
    unsigned long v2;  // [bp-0x210]
    unsigned long|unsigned long long|unsigned int v21;  // rax
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v25;  // ecx
    unsigned long|unsigned int v26;  // edx
    unsigned int v27;  // ebp
    unsigned int v28;  // esi
    char v3;  // [bp-0x1fc]
    unsigned long|char * v30;  // rdi
    char [52] v31;  // r8
    unsigned long long|unsigned int v32;  // r12
    unsigned long long v33;  // r13
    unsigned long long v34;  // r13
    unsigned long long v35;  // r13
    struct_1 *|unsigned long long|unsigned int v36;  // r14d
    struct_1 *v37;  // r14
    char v4;  // [bp-0x1f8]
    unsigned int v5;  // [bp-0x1e0]
    unsigned long v6;  // [bp-0x1b0]
    unsigned long v7;  // [bp-0x1a8]
    unsigned long v8;  // [bp-0x1a0]
    unsigned long v9;  // [bp-0x198]

    v32 = v25;
    v27 = v26;
    if (v31[31] != 0)
    {
        v21 = __xstat(0x1, ((int)v30), ((int)&v4));
        if (v21 != 0)
        {
            v33 = (long long)quotearg_style();
        }
    }
    if (v21 == 0 || v31[31] == 0)
    {
        if (copy_only_if_needed != 0)
        {
            if ((mode & -0xf200) == 0)
            {
                v21 = __lxstat(0x1, ((int)v30), ((int)&v10));
                if (v21 != 0)
                {
                    /* goto 4214912; */
                }
                else
                {
                    v21 = __fxstatat(0x1);
                    if (v21 == 0)
                    {
                        if ((((short)v11) & 0xf000) == 0x8000)
                        {
                            if ((((short)v16) & 0xf000) == 0x8000)
                            {
                                if (((v11 | v16) & -0xf200) == 0)
                                {
                                    if (v12 == v19)
                                    {
                                        if (mode == ((int)(v16 & 4095)))
                                        {
                                            v21 = ((int)owner_id);
                                            if (owner_id == -1)
                                            {
                                                v37->field_0 = 0;
                                                v37 = __errno_location();
                                                v21 = getuid();
                                                if (((int)v21) == -1)
                                                {
                                                    if (v36->field_0 != 0)
                                                    {
                                                        /* goto 4214912; */
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
    if (...)
    {
        if (v21 == v17)
        {
            v21 = ((int)group_id);
            if (group_id == -1)
            {
                v36->field_0 = 0;
                v36 = __errno_location();
                v21 = getgid();
                if (((int)v21) == -1)
                {
                    if (v36->field_0 != 0)
                    {
                        /* goto 4214912; */
                    }
                }
            }
        }
    }
    if (...)
    {
        if (v21 == v18)
        {
            if (selinux_enabled != 0)
            {
                if (v31[51] != 0)
                {
                    *(__errno_location() + None) = 95;
                    /* goto 4214912; */
                }
            }
        }
    }
    if (...)
    {
        v31 = open(v30, 0x0, ((short)(v16 & 4095)));
        if (v31 >= 0)
        {
            v36 = openat();
            if (v36 >= 0)
            {
                while (true)
                {
                    v31 = s_214;
                    v25 = (long long)full_read();
                    if (v2 != 0)
                    {
                        v2 = v25;
                        v31 = v31;
                        v26 = (long long)full_read();
                        if (v26 == v2)
                        {
                            v21 = memcmp(&a_buff.7794, &b_buff.7795, v26);
                        }
                        close(v31);
                        close(v36);
                        break;
                    }
                    else
                    {
                        close(v31);
                        close(v36);
                        break;
                    }
                }
                if (v2 == 0 && strip_files != 0)
                {
                    v30 = (long long)fork();
                }
                else if (v2 != 0 && (v21 != 0 || v26 != v2))
                {
                    v1 = 0;
                    v0 = &stack_base-508;
                    v21 = copy();
                }
            }
            else
            {
                close(v31);
            }
        }
    }
    if (...)
    {
        v1 = 0;
        v0 = &stack_base-508;
        v21 = copy();
        if (((long long)v21) != 0)
        {
        }
        else
        {
            v32 = 0;
            v23 = v32;
            return v23;
        }
    }
    if (...)
    {
        v30 = (long long)fork();
        if (((int)v30) != 0)
        {
            v21 = waitpid(v30, ((int)&stack_base-508), 0x0);
            if (!((v3 >> 8 | v3 & 127) == 0))
            {
                error(0x0, 0x0, dcgettext(0x0, &g_417038, 0x5));
                /* goto 4215385; */
            }
        }
        if (((int)v30) == 0)
        {
            execlp(((int)strip_program), ((int)strip_program), v28, 0x0);
            v35 = (long long)quotearg_style();
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_418116, 0x5));
        }
    }
    if (...)
    {
        error(0x0, *(__errno_location()), dcgettext(0x0, v28, 0x5));
    }
    if (...)
    {
        v21 = unlinkat(v27, v32, 0x0);
        if (v21 == 0)
        {
            v32 = 0;
            v23 = v32;
            return v23;
        }
        v34 = (long long)quotearg_style();
        error(0x1, *(__errno_location()), dcgettext(0x0, &g_418136, 0x5));
    }
    if (...)
    {
        v13 = v6;
        v14 = v7;
        v15 = v8;
        v16 = v9;
        v21 = utimensat(v27, v32, ((int)&v13), 0x0);
        if (v21 != 0)
        {
            v33 = (long long)quotearg_style();
        }
    }
    if (...)
    {
        if ((owner_id & group_id) != -1)
        {
            v21 = fchownat(v27, v32, owner_id, group_id, 0x100);
            if (v21 != 0)
            {
                v36 = (long long)quotearg_style();
            }
        }
        if (v21 == 0 || (owner_id & group_id) == -1)
        {
            v32 = 1;
            v21 = rpl_fchmodat();
            if (v21 != 0)
            {
                v36 = (long long)quotearg_style();
            }
        }
        if (v21 != 0 || v21 != 0 && (owner_id & group_id) != -1)
        {
            v32 = 0;
            error(0x0, *(__errno_location()), v26);
        }
        if (!(use_default_selinux_context != 0))
        {
            v23 = v32;
            return v23;
        }
        else if (selinux_enabled == 1)
        {
            v21 = __lxstat(0x1, v28, ((int)&v13));
            if (v21 == 0)
            {
                v21 = get_labeling_handle();
                if (v21 != 0)
                {
                    *(__errno_location() + None) = 95;
                    v23 = v32;
                    return v23;
                }
                v23 = v32;
                return v23;
            }
            v23 = v32;
            return v23;
        }
        else
        {
            v23 = v32;
            return v23;
        }
    }
    if (...)
    {
        error(0x0, *(__errno_location()), dcgettext(0x0, v28, 0x5));
        v32 = 0;
        v23 = v32;
        return v23;
    }
}
