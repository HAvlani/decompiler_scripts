typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40a19c;
extern unsigned int g_40a1f4;
extern unsigned int g_40a21e;
extern unsigned int g_40a838;
extern struct_0 g_40a860;
extern char include_exit;
extern char include_heading;
extern char include_idle;
extern char include_mesg;
extern unsigned int longopts;
extern char my_line_only;
extern char need_boottime;
extern char need_clockchange;
extern char need_deadprocs;
extern char need_initspawn;
extern char need_login;
extern char need_runlevel;
extern char need_users;
extern struct_0 optind;
extern char short_list;
extern char short_output;
extern struct_1 time_format;
extern unsigned int time_format_width;

int main()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned int v11;  // esi
    unsigned int v12;  // edi
    unsigned long long v13;  // r12
    char v14;  // r13b
    unsigned long long v4;  // rax
    struct_0 *|unsigned long long v7;  // rax

    short_output = 1;
    /* goto 4204696; */
    short_list = 1;
    /* goto 4204696; */
    my_line_only = 1;
    /* goto 4204696; */
    include_mesg = 1;
    /* goto 4204696; */
    include_heading = 1;
    /* goto 4204696; */
    need_users = 1;
    include_idle = 1;
    /* goto 4204696; */
    need_clockchange = 1;
    /* goto 4204696; */
    need_runlevel = 1;
    include_idle = 1;
    /* goto 4204696; */
    need_initspawn = 1;
    /* goto 4204696; */
    need_login = 1;
    include_idle = 1;
    /* goto 4204696; */
    need_deadprocs = 1;
    include_idle = 1;
    include_exit = 1;
    /* goto 4204696; */
    need_boottime = 1;
    /* goto 4204696; */
    need_boottime = 1;
    need_deadprocs = 1;
    need_login = 1;
    need_initspawn = 1;
    need_runlevel = 1;
    need_clockchange = 1;
    need_users = 1;
    include_mesg = 1;
    include_idle = 1;
    include_exit = 1;
    /* goto 4204696; */
    set_program_name();
    setlocale();
    bindtextdomain(&g_40a19c, &g_40a838);
    textdomain(&g_40a19c);
    atexit();
    v7 = getopt_long(v12, v11, &g_40a1f4, &longopts, 0x0);
    if (!(v7 != -1))
    {
        if (((long long)v14) != 0)
        {
            need_users = 1;
            short_output = 1;
        }
        if (include_exit != 0)
        {
            short_output = 0;
        }
        v7 = hard_locale();
        if (((long long)v7) == 0)
        {
            time_format_width = 12;
            time_format = "%b %e %H:%M";
        }
        else
        {
            time_format_width = 16;
            time_format = "%Y-%m-%d %H:%M";
        }
        if (v12 - optind != 1)
        {
            if (((char)(((long long)(v12 - optind)) <= 1)))
            {
                if (v12 - optind + 1 <= 1)
                {
                    who();
                    return 0;
                }
                v13 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_40a21e, 0x5));
                usage(); /* do not return */
            }
            if (v12 - optind == 2)
            {
                my_line_only = 1;
                who();
                return 0;
            }
            else
            {
                v13 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_40a21e, 0x5));
                usage(); /* do not return */
            }
        }
        who();
        return 0;
    }
    else if (!(v7 <= 128))
    {
        usage(); /* do not return */
    }
    else if (v7 > 71)
    {
        v7 = ((long long)v7) - 72;
        if (((int)v7) <= 56)
        {
            v4 = ((long long)*(g_40a860 + v7 * 4)) + &g_40a860;
            /* goto v4; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v7 == -131)
    {
        v1 = 0;
        v0 = "Michael Stone";
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v7 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
