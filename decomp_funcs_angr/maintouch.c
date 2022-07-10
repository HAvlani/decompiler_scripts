typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char amtime_now;
extern unsigned int change_times;
extern char g_403abd;
extern char g_40418e;
extern char g_4041a4;
extern char g_4041b8;
extern unsigned int g_412004;
extern unsigned int g_41209b;
extern char g_4120e5;
extern char g_4120f1;
extern char g_412101;
extern unsigned int g_41210d;
extern char g_412119;
extern char g_412129;
extern unsigned int g_412163;
extern unsigned int g_412176;
extern unsigned int g_412186;
extern unsigned int g_412840;
extern char g_412868;
extern unsigned int g_412898;
extern unsigned int g_4128b8;
extern struct_0 g_412910;
extern unsigned long long g_419128;
extern struct_2 g_419130;
extern unsigned long long g_419138;
extern unsigned int longopts;
extern struct_2 newtime;
extern char no_create;
extern char no_dereference;
extern struct_1 optarg;
extern struct_0 optind;
extern struct_1 ref_file;
extern char use_ref;

int main()
{
    unsigned long v18;  // [bp-0x18]
    unsigned long v19;  // [bp-0x10]
    unsigned long v20;  // [bp-0x8]
    unsigned long v21;  // [bp+0x0]
    char *v34[2];  // rbp
    unsigned long long v35;  // rsi
    unsigned long v36;  // rdi
    unsigned long long v38;  // r12
    unsigned long long v39;  // r12
    unsigned long long v40;  // r13
    unsigned long long v42;  // r14

    rsp<8> = rsp<8> - 8;
    v21 = &g_403abd;
    v40 = (long long)posixtime();
    v42 = optarg;
    no_create = 1;
    use_ref = 1;
    ref_file = optarg;
    change_times = change_times | 2;
    change_times = change_times | 1;
    v42 = 0;
    v40 = 0;
    v39 = v36;
    v34 = v35;
    set_program_name();
    setlocale();
    bindtextdomain(&g_41209b, &g_412840);
    textdomain(&g_41209b);
    atexit();
    use_ref = 0;
    change_times = 0;
    no_create = 0;
    if (((long long)v40) != 0)
    {
        g_419128 = 0;
        g_419130 = newtime;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v20 = &g_40418e;
        v38 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v19 = &g_4041a4;
        rsp<8> = rsp<8> - 8;
        v18 = &g_4041b8;
        error(0x1, 0x0, dcgettext(0x0, &g_412004, 0x5));
    }
}
