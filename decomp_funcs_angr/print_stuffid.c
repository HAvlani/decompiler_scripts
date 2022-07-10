typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 egid;
extern struct_0 euid;
extern unsigned int g_408008;
extern unsigned int g_408028;
extern unsigned int g_408050;
extern unsigned int g_4085ab;
extern unsigned int g_4085b3;
extern unsigned int g_4085b5;
extern unsigned int g_4085bc;
extern unsigned int g_4085c5;
extern char just_group;
extern char just_group_list;
extern char just_user;
extern char multiple_users;
extern char ok;
extern char opt_zero;
extern struct_0 rgid;
extern struct_0 ruid;
extern unsigned long long stdout[7];
extern char use_name;
extern char use_real;

int print_stuff()
{
    char v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long long|struct_1 * v11;  // ebx
    unsigned long|unsigned long long|unsigned int v12;  // ebp
    unsigned long long v13;  // rsi
    unsigned long|char * v14;  // rdi
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    struct_1 *v18;  // fs
    struct_1 * v3;  // rax
    char * v4;  // rax
    struct_1 *v5;  // rax
    char *v7;  // rax

    if (just_user != 0)
    {
        v12 = ((int)euid);
        if (use_real != 0)
        {
            v12 = ((long long)ruid);
        }
        if (use_name != 0)
        {
            v5 = getpwuid(v12);
            if (v5 != 0)
            {
                v14 = v5->field_0;
                /* goto 4206235; */
            }
            else
            {
                v15 = (long long)umaxtostr();
                error(0x0, 0x0, dcgettext(0x0, &g_408008, 0x5));
                ok = 0;
            }
        }
        if (v5 == 0 || use_name == 0)
        {
            v14 = (long long)umaxtostr();
        }
        fputs_unlocked(v14, stdout);
    }
    else if (just_group != 0)
    {
        ok = ok & (char)print_group();
    }
    else if (just_group_list != 0)
    {
        ok = ok & (char)print_group_list();
    }
    else
    {
        v16 = (long long)umaxtostr();
        __printf_chk(0x1, dcgettext(0x0, &g_4085b5, 0x5));
        v11 = getpwuid(ruid);
        if (v11 != 0)
        {
            __printf_chk(0x1, "(%s)", ((int)v11->field_0));
        }
        v15 = (long long)umaxtostr();
        __printf_chk(0x1, dcgettext(0x0, &g_4085ab, 0x5));
        v3 = getgrgid(rgid);
        if (v3 != 0)
        {
            __printf_chk(0x1, "(%s)", ((int)v3->field_0));
        }
        if (euid != ruid)
        {
            v15 = (long long)umaxtostr();
            __printf_chk(0x1, dcgettext(0x0, &g_4085b3, 0x5));
            v11 = getpwuid(euid);
            if (v11 != 0)
            {
                __printf_chk(0x1, "(%s)", ((int)v11->field_0));
            }
        }
        if (egid != rgid)
        {
            v15 = (long long)umaxtostr();
            __printf_chk(0x1, dcgettext(0x0, &g_4085bc, 0x5));
            v3 = getgrgid(egid);
            if (v3 != 0)
            {
                __printf_chk(0x1, "(%s)", ((int)v3->field_0));
            }
        }
        if (v14 != 0)
        {
            v11 = xgetgroups();
            if (v11 < 0)
            {
                v17 = (long long)quote();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_408028, 0x5));
                /* goto 4207171; */
            }
        }
        else
        {
            v11 = (long long)xgetgroups();
            if (((int)v11) < 0)
            {
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_408050, 0x5));
            }
        }
        if (v14 == 0 && ((int)v11) >= 0 || v14 != 0 && v11 >= 0)
        {
            if (v11 != 0)
            {
                v11 = (((long long)v11) - 1) * 4;
                v12 = 0;
                fputs_unlocked(dcgettext(0x0, &g_4085c5, 0x5), stdout);
                while (true)
                {
                    fputs_unlocked((long long)umaxtostr(), stdout);
                    v3 = getgrgid(*(v0 + v12));
                    if (v3 != 0)
                    {
                        __printf_chk(0x1, "(%s)", ((int)v3->field_0));
                    }
                    if (v12 == v11)
                    {
                        break;
                    }
                    v7 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v7) = 44;
                    }
                    else
                    {
                        __overflow();
                    }
                    v12 = 4;
                }
            }
            rpl_free();
            /* goto 4206247; */
        }
        if (((int)v11) < 0 && v14 == 0 || v11 < 0 && v14 != 0)
        {
            ok = 0;
            /* goto 4206247; */
        }
    }
    v4 = *(stdout + 40);
    if (opt_zero != 0)
    {
        if (just_group_list != 0)
        {
            if (multiple_users != 0)
            {
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v4) = 0;
                }
                else
                {
                    __overflow();
                }
                v4 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v4) = 0;
                    return v1 ^ *(v18 + 0x28);
                }
                __overflow();
                return v1 ^ *(v18 + 0x28);
            }
        }
        if (just_group_list == 0 || multiple_users == 0)
        {
            v13 = 0;
        }
    }
    else
    {
        v13 = 10;
    }
    if (just_group_list == 0 || multiple_users == 0 || opt_zero == 0)
    {
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v4) = v13;
            return v1 ^ *(v18 + 0x28);
        }
        __overflow();
        return v1 ^ *(v18 + 0x28);
    }
}
