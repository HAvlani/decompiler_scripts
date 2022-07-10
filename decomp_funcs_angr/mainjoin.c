typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_3 {
    char padding_0[24];
    unsigned long long field_18;
} struct_3;

extern unsigned long long autocount_1;
extern unsigned long long autocount_2;
extern char autoformat;
extern unsigned int check_input_order;
extern char eolchar;
extern char g_402903;
extern char g_402948;
extern char g_402957;
extern char g_402969;
extern char g_402978;
extern char g_402a51;
extern char g_402a60;
extern char g_402a73;
extern char g_402b7a;
extern char g_402b91;
extern char g_403437;
extern char g_40344d;
extern char g_403461;
extern char g_40349c;
extern char g_4034b2;
extern char g_4034c6;
extern char g_4034d9;
extern char g_4034ea;
extern unsigned int g_409aa0;
extern unsigned int g_409af8;
extern unsigned int g_409b1c;
extern char g_409b32;
extern unsigned int g_409c1e;
extern unsigned int g_409c60;
extern unsigned int g_409c77;
extern unsigned int g_409c96;
extern unsigned int g_409caa;
extern unsigned int g_409cba;
extern char g_409cd3;
extern unsigned int g_409cd5;
extern struct_1 g_409d30;
extern char g_40e199;
extern struct_0 g_40e1b8;
extern unsigned long long g_40e1d8;
extern struct_0 g_names;
extern char hard_LC_COLLATE;
extern char ignore_case;
extern unsigned short issued_disorder_warning;
extern unsigned long long join_field_1;
extern unsigned long long join_field_2;
extern char join_header_lines;
extern unsigned int longopts;
extern char optarg[2];
extern struct_1 optind;
extern unsigned long long prevline;
extern char print_pairables;
extern char print_unpairables_1;
extern char print_unpairables_2;
extern char seen_unpairable;
extern struct_0 stdin;
extern struct_1 tab;

int main()
{
    unsigned long long v13;  // [bp-0x48]
    unsigned long v14;  // [bp-0x18]
    unsigned long v15;  // [bp-0x10]
    unsigned long v16;  // [bp-0x8]
    unsigned long v17;  // [bp+0x0]
    unsigned int v19;  // [bp+0x1c]
    unsigned int v20;  // [bp+0x24]
    unsigned long long v21;  // [bp+0x50]
    unsigned long|unsigned long long|unsigned int v22;  // eax
    unsigned long long v30;  // rax
    unsigned int v4;  // [bp-0x98]
    unsigned int v5;  // [bp-0x94]
    unsigned long long v50;  // rcx
    unsigned long v51;  // rdx
    unsigned int v52;  // ebp
    char [2]|unsigned int v54;  // esi
    char *|unsigned int v55;  // rdi
    unsigned long long v58;  // r12
    unsigned long long v60;  // r12
    unsigned int v61;  // r12
    unsigned long long v66;  // cc_dep1
    unsigned long long v67;  // cc_dep2
    unsigned long v68;  // d

    v50 = 5;
    v55 = "auto";
    v54 = optarg;
    /* goto 4205053; */
    v22 = ((long long)*(optarg));
    v22 = ((long long)*(optarg));
    print_pairables = 0;
    rsp<8> = rsp<8> - 8;
    v17 = &g_402903;
    v22 = xstrtoul();
    check_input_order = 2;
    check_input_order = 1;
    eolchar = 0;
    ignore_case = 1;
    rsp<8> = rsp<8> - 8;
    v17 = &g_402948;
    string_to_join_field();
    rsp<8> = rsp<8> - 8;
    v16 = &g_402957;
    set_join_field();
    rsp<8> = rsp<8> - 8;
    v17 = &g_402969;
    string_to_join_field();
    rsp<8> = rsp<8> - 8;
    v16 = &g_402978;
    set_join_field();
    v61 = v55;
    v52 = v54;
    v4 = 0;
    v13 = 0;
    v5 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_409c1e, &g_409aa0);
    textdomain(&g_409c1e);
    hard_LC_COLLATE = (char)hard_locale();
    atexit();
    atexit();
    print_pairables = 1;
    seen_unpairable = 0;
    issued_disorder_warning = 0;
    check_input_order = 0;
    v50 -= 1;
    v66 = ((long long)v54[0]);
    v67 = ((long long)*(v55));
    v55 += v68;
    v54 += v68;
    if (((long long)*(optarg)) == 0)
    {
        v22 = 10;
    }
    else if (*(optarg + 1) != 0)
    {
        rsp<8> = rsp<8> - 8;
        v17 = &g_402b7a;
        v30 = strcmp(optarg, "\\0");
        if (v30 == 0)
        {
            v22 = 0;
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v16 = &g_40349c;
            v60 = (long long)quote();
            rsp<8> = rsp<8> - 8;
            v15 = &g_4034b2;
            rsp<8> = rsp<8> - 8;
            v14 = &g_4034c6;
            error(0x1, 0x0, dcgettext(0x0, &g_409c60, 0x5));
        }
    }
    if ((((long long)*(optarg)) - 49 & 255) <= 1)
    {
        if (*(optarg + 1) == 0)
        {
            if (optarg == v16 + 2)
            {
                v51 = ((long long)(v22 == 50));
                v22 = ((int)(((int)(v22 == 50)) + 1));
                *(rsp<8> + v51 * 4 + 112) = *(rsp<8> + v51 * 4 + 112) + 1;
                v20 = v22;
            }
        }
    }
    if (v22 == 0)
    {
        v22 = v21;
        if (!(v21 - 1 <= 1))
        {
            rsp<8> = rsp<8> - 8;
            v16 = &g_403437;
            v58 = (long long)quote();
            rsp<8> = rsp<8> - 8;
            v15 = &g_40344d;
            rsp<8> = rsp<8> - 8;
            v14 = &g_403461;
            error(0x1, 0x0, dcgettext(0x0, &g_409b1c, 0x5));
        }
        else if (v22 != 1)
        {
            print_unpairables_2 = 1;
            /* goto 4204847; */
        }
        else
        {
            print_unpairables_1 = 1;
            /* goto 4204847; */
        }
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v16 = &g_403437;
        v58 = (long long)quote();
        rsp<8> = rsp<8> - 8;
        v15 = &g_40344d;
        rsp<8> = rsp<8> - 8;
        v14 = &g_403461;
        error(0x1, 0x0, dcgettext(0x0, &g_409b1c, 0x5));
    }
    if (((char)(v66 > v67)) - ((char)(v66 < v67)) == 0)
    {
        autoformat = 1;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v17 = &g_402b91;
        add_field_list();
        v19 = 3;
    }
    if (optarg != v16 + 2 || (((long long)*(optarg)) - 49 & 255) > 1 || *(optarg + 1) != 0)
    {
        rsp<8> = rsp<8> - 8;
        v17 = &g_402a51;
        string_to_join_field();
        rsp<8> = rsp<8> - 8;
        v16 = &g_402a60;
        set_join_field();
        rsp<8> = rsp<8> - 8;
        v15 = &g_402a73;
        set_join_field();
        /* goto 4204847; */
    }
    if (((long long)*(optarg)) == 0 || *(optarg + 1) == 0 || v30 == 0)
    {
        if (((int)tab) >= 0)
        {
            if (tab != v22)
            {
                rsp<8> = rsp<8> - 8;
                v16 = &g_4034d9;
                rsp<8> = rsp<8> - 8;
                v15 = &g_4034ea;
                error(0x1, 0x0, dcgettext(0x0, &g_409c77, 0x5));
            }
        }
    }
    if (v30 == 0 || tab == v22)
    {
        tab = v22;
    }
}
