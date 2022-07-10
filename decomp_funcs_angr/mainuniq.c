typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern unsigned long long check_chars;
extern unsigned int countmode;
extern unsigned int delimit_groups;
extern struct_0 delimit_method_map;
extern char g_402b54;
extern char g_402b82;
extern char g_402bb2;
extern char g_402bdd;
extern char g_402c5e;
extern unsigned int g_408090;
extern unsigned int g_4080cb;
extern unsigned int g_4080e3;
extern unsigned int g_408131;
extern unsigned int g_4088d0;
extern char g_408968;
extern char g_408998;
extern char g_4089d0;
extern char g_408bd7;
extern unsigned int grouping;
extern struct_0 grouping_method_map;
extern char ignore_case;
extern unsigned int longopts;
extern char *optarg;
extern struct_0 optind;
extern char output_first_repeated;
extern char output_later_repeated;
extern char output_unique;
extern unsigned long long skip_chars;
extern unsigned long long skip_fields;
extern char *stdin;
extern unsigned long long stdout[7];

int main()
{
    char *v12;  // [bp-0x58]
    unsigned long v13;  // [bp-0x50]
    unsigned long v14;  // [bp-0x10]
    unsigned long long v15;  // [bp-0x8]
    unsigned long v16;  // [bp+0x0]
    char v18;  // [bp+0x10]
    char v19;  // [bp+0x18]
    char v2;  // [bp-0xc0]
    unsigned int v20;  // [bp+0x28]
    unsigned int v21;  // [bp+0x30]
    unsigned int|unsigned long long v23;  // rax
    char v3;  // [bp-0xb8]
    unsigned long v40;  // rdx
    unsigned long|unsigned long long v41;  // rdx
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rbp
    unsigned long v46;  // rdi
    unsigned int v54;  // r12
    unsigned int v57;  // r14
    unsigned int v6;  // [bp-0xa0]

    output_unique = 0;
    output_later_repeated = 1;
    v42 = 0;
    output_first_repeated = 0;
    v19 = 1;
    output_unique = 0;
    v19 = 1;
    countmode = 0;
    v19 = 1;
    rsp<8> = rsp<8> - 8;
    v16 = &g_402b82;
    check_chars = (long long)size_opt();
    rsp<8> = rsp<8> - 8;
    v16 = &g_402bb2;
    skip_chars = (long long)size_opt();
    rsp<8> = rsp<8> - 8;
    v16 = &g_402bdd;
    v20 = 2;
    skip_fields = (long long)size_opt();
    v57 = ((int)v46);
    v42 = 10;
    v2 = ((char)(getenv("POSIXLY_CORRECT") != 0));
    v43 = 0;
    v54 = 0;
    v13 = "-";
    v12 = "-";
    set_program_name();
    setlocale();
    bindtextdomain(&g_408090, &g_4088d0);
    textdomain(&g_408090);
    atexit();
    output_first_repeated = 1;
    skip_chars = 0;
    skip_fields = 0;
    check_chars = 18446744069414584319;
    output_unique = 1;
    output_later_repeated = 0;
    countmode = 1;
    delimit_groups = 0;
    v3 = 0;
    v6 = 0;
    if (v21 != 2)
    {
        v23 = skip_fields;
        if (skip_fields <= 1844674407370955161)
        {
            v41 = v40 + v23 * 10;
            if (v23 <= skip_fields)
            {
                /* goto 4206770; */
            }
        }
        if (skip_fields > 1844674407370955161 || v23 > skip_fields)
        {
            skip_fields = 18446744069414584319;
            v21 = 1;
        }
    }
    else
    {
        /* goto 4206770; */
    }
    if (optarg != 0)
    {
        v16 = v41;
        v15 = 1;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v14 = &g_402b54;
        v23 = ((int)*(grouping_method_map + (long long)__xargmatch_internal() * 4));
        grouping = v23;
        v16 = v46;
        v15 = 1;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v14 = &g_402c5e;
        v23 = ((int)*(delimit_method_map + (long long)__xargmatch_internal() * 4));
        rsp<8> = rsp<8> + 8 + 8;
        delimit_groups = v23;
        v18 = 1;
    }
    else
    {
        grouping = 3;
        delimit_groups = 0;
        v19 = 1;
    }
    if (v21 == 2 || skip_fields <= 1844674407370955161 && v23 <= skip_fields)
    {
        skip_fields = v41;
        v21 = 1;
    }
}
