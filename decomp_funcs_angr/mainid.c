typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 egid;
extern struct_0 euid;
extern char g_402b95;
extern char g_402ba6;
extern unsigned int g_4084b0;
extern unsigned int g_4084d8;
extern unsigned int g_408510;
extern unsigned int g_408540;
extern unsigned int g_408578;
extern unsigned int g_40864b;
extern unsigned int g_408693;
extern char g_40869c;
extern unsigned int g_4086ac;
extern unsigned int g_4086bd;
extern unsigned int g_4086d6;
extern unsigned int g_4086ea;
extern unsigned int g_408703;
extern struct_0 g_408744;
extern char just_group;
extern char just_group_list;
extern char just_user;
extern unsigned int longopts;
extern <missing-type> multiple_users;
extern char ok;
extern char opt_zero;
extern struct_0 optind;
extern struct_0 rgid;
extern struct_0 ruid;
extern char use_name;
extern char use_real;

int main()
{
    unsigned long v2;  // [bp-0x8]
    unsigned long v3;  // [bp+0x0]

    just_user = 1;
    use_real = 1;
    use_name = 1;
    just_group = 1;
    just_group_list = 1;
    rsp<8> = rsp<8> - 8;
    v3 = &g_402b95;
    rsp<8> = rsp<8> - 8;
    v2 = &g_402ba6;
    error(0x1, 0x0, dcgettext(0x0, &g_4084d8, 0x5));
    set_program_name();
    setlocale();
    bindtextdomain(&g_40864b, &g_4084b0);
    textdomain(&g_40864b);
    atexit();
}
