typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_4;

typedef struct struct_6 {
    char padding_0[8];
    unsigned int field_8;
} struct_6;

extern char elide_empty_files;
extern unsigned int eolchar;
extern char filter_command[2];
extern char g_402b86;
extern char g_402bae;
extern char g_402c0c;
extern char g_402c41;
extern char g_402ca0;
extern char g_402cbf;
extern char g_402cde;
extern char g_402d06;
extern char g_402d28;
extern char g_402d54;
extern char g_402d79;
extern char g_402d95;
extern char g_402dba;
extern char g_402de8;
extern char g_402e10;
extern char g_402ea0;
extern char g_402f0a;
extern char g_402f32;
extern char g_402fb4;
extern char g_4031fc;
extern char g_40321e;
extern char g_4042c0;
extern char g_4042d6;
extern char g_4042ef;
extern char g_404364;
extern char g_40437a;
extern char g_40438e;
extern char g_4043a1;
extern char g_4043b2;
extern char g_4044f3;
extern char g_40451e;
extern char g_404588;
extern char g_404599;
extern unsigned int g_40a1b3;
extern unsigned int g_40a1fa;
extern unsigned int g_40a215;
extern unsigned int g_40a22b;
extern unsigned int g_40a243;
extern unsigned int g_40a25e;
extern unsigned int g_40a277;
extern unsigned int g_40a28c;
extern unsigned int g_40a2a6;
extern unsigned int g_40a2c3;
extern char g_40a2ff;
extern char g_40a303;
extern unsigned int g_40a317;
extern unsigned int g_40a350;
extern unsigned int g_40ae70;
extern unsigned int g_40aef0;
extern unsigned int g_40af18;
extern unsigned int g_40af40;
extern char g_40afa0;
extern unsigned int g_40afd8;
extern char g_40b008;
extern unsigned int g_40b048;
extern <missing-type> g_40b1e0;
extern struct_0 g_40f318;
extern struct_2 g_40f330;
extern struct_2 g_40f338;
extern unsigned int in_stat_buf;
extern struct_2 infile;
extern unsigned int longopts;
extern unsigned int newblocked;
extern char numeric_suffix_start[2];
extern unsigned int oldblocked;
extern char optarg[2];
extern struct_0 optind;
extern struct_2 outbase;
extern struct_2 stdout;
extern struct_2 suffix_alphabet;
extern char suffix_auto;
extern struct_2 suffix_length;
extern char unbuffered;
extern char verbose;

int main()
{
    unsigned long long v1;  // [bp-0x178]
    unsigned long v100;  // d
    unsigned long v17;  // [bp-0x30]
    unsigned long v18;  // [bp-0x28]
    unsigned long v19;  // [bp-0x20]
    unsigned long v20;  // [bp-0x18]
    unsigned long v21;  // [bp-0x10]
    unsigned long v22;  // [bp-0x8]
    unsigned long|unsigned int v23;  // [bp+0x0]
    unsigned long|unsigned long long v24;  // [bp+0x8]
    unsigned long|unsigned int v25;  // [bp+0x10]
    unsigned long v26;  // [bp+0x18]
    unsigned long long|char [2] v33;  // rax
    unsigned long long v49;  // rax
    unsigned long long v5;  // [bp-0x158]
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rcx
    unsigned long|unsigned long long v56;  // rdx
    char * v57;  // rdx
    unsigned long v58;  // rdx
    struct_5 *v62;  // rbp
    unsigned long|unsigned long long|struct_5 * v64;  // rsi
    char [2]|unsigned int v65;  // dil
    unsigned int v66;  // r8d
    unsigned int v67;  // r8b
    unsigned long long v72;  // r12
    unsigned int v79;  // r12d
    unsigned long long v80;  // r12
    unsigned long long v83;  // r12
    unsigned long long v9;  // [bp-0x138]
    unsigned long v92;  // r13
    unsigned long|char *|char [2] v94;  // r14
    unsigned long long|char [2] v96;  // r14
    unsigned long v97;  // r15
    unsigned long long v98;  // cc_dep1
    char v99;  // cc_dep2

    v33 = ((int)*(optarg));
    v94 = optarg;
    v25 = v67;
    suffix_alphabet = (v67 != 100? "0123456789abcdef" : "0123456789");
    unbuffered = 1;
    elide_empty_files = 1;
    filter_command = optarg;
    rsp<8> = rsp<8> - 8;
    v23 = &g_402b86;
    dcgettext(0x0, &g_40a2c3, 0x5);
    rsp<8> = rsp<8> - 8;
    v22 = &g_402bae;
    v26 = (long long)xdectoumax();
    rsp<8> = rsp<8> - 8;
    v23 = &g_402d95;
    dcgettext(0x0, &g_40a215, 0x5);
    rsp<8> = rsp<8> - 8;
    v22 = &g_402dba;
    suffix_length = (long long)xdectoumax();
    v79 = v65;
    v62 = v64;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40a1b3, &g_40ae70);
    textdomain(&g_40a1b3);
    atexit();
    v1 = 0;
    infile = "-";
    outbase = "x";
    v9 = 0;
    v5 = 0;
    if (((int)v92) == 0)
    {
        rsp<8> = rsp<8> - 8;
        v23 = &g_402c41;
        v55 = *(__ctype_b_loc());
        v33 = optarg;
        /* goto 4205655; */
    }
    if (((int)v92) == 0)
    {
        rsp<8> = rsp<8> - 8;
        v23 = &g_402d54;
        dcgettext(0x0, &g_40a243, 0x5);
        rsp<8> = rsp<8> - 8;
        v22 = &g_402d79;
        v22 = (long long)xdectoumax();
    }
    if (((int)v92) == 0)
    {
        rsp<8> = rsp<8> - 8;
        v23 = &g_402de8;
        dcgettext(0x0, &g_40a22b, 0x5);
        rsp<8> = rsp<8> - 8;
        v22 = &g_402e10;
        v22 = (long long)xdectoumax();
    }
    if (((int)v92) == 0)
    {
        rsp<8> = rsp<8> - 8;
        v23 = &g_402f0a;
        dcgettext(0x0, &g_40a22b, 0x5);
        rsp<8> = rsp<8> - 8;
        v22 = &g_402f32;
        v22 = (long long)xdectoumax();
    }
    if (((long long)*(optarg)) != 0)
    {
        if (*(optarg + 1) != 0)
        {
            rsp<8> = rsp<8> - 8;
            v23 = &g_402c0c;
            v49 = strcmp(optarg, "\\0");
            if (v49 == 0)
            {
                v33 = 0;
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v22 = &g_404364;
                v80 = (long long)quote();
                rsp<8> = rsp<8> - 8;
                v21 = &g_40437a;
                rsp<8> = rsp<8> - 8;
                v20 = &g_40438e;
                error(0x1, 0x0, dcgettext(0x0, &g_40a2a6, 0x5));
            }
        }
        if (*(optarg + 1) == 0 || v49 == 0)
        {
            if (((int)eolchar) >= 0)
            {
                if (eolchar != v33)
                {
                    rsp<8> = rsp<8> - 8;
                    v23 = &g_4043a1;
                    rsp<8> = rsp<8> - 8;
                    v22 = &g_4043b2;
                    error(0x1, 0x0, dcgettext(0x0, &g_40aef0, 0x5));
                }
            }
            if (eolchar == v33 || ((int)eolchar) < 0)
            {
                eolchar = v33;
            }
        }
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v23 = &g_404588;
        rsp<8> = rsp<8> - 8;
        v22 = &g_404599;
        error(0x1, 0x0, dcgettext(0x0, &g_40a28c, 0x5));
    }
    if (optarg != 0)
    {
        v54 = 18446744069414584319;
        v65 = optarg;
        /* goto 4206218; */
    }
    v96 = v33;
    v33 += 1;
    v56 = ((long long)v96[0]);
    v98 = ((long long)(*(v55 + v56 * 2 + 1) & 32));
    if (((int)v92) == 4)
    {
        if (((int)v97) == 0 || ((int)v97) == ((int)v94))
        {
            v64 = v24;
            if (v24 <= 1844674407370955161)
            {
                v56 = v58 + v64 * 10;
                if (v56 >= v64)
                {
                    v24 = v56;
                }
                else
                {
                    v25 = v66;
                    rsp<8> = rsp<8> - 8;
                    v23 = &g_4042c0;
                    v83 = (long long)umaxtostr();
                    rsp<8> = rsp<8> - 8;
                    v22 = &g_4042d6;
                    rsp<8> = rsp<8> - 8;
                    v21 = &g_4042ef;
                    error(0x1, 0x0, dcgettext(0x0, &g_40af18, 0x5));
                }
            }
            else
            {
                v25 = v66;
                rsp<8> = rsp<8> - 8;
                v23 = &g_4042c0;
                v83 = (long long)umaxtostr();
                rsp<8> = rsp<8> - 8;
                v22 = &g_4042d6;
                rsp<8> = rsp<8> - 8;
                v21 = &g_4042ef;
                error(0x1, 0x0, dcgettext(0x0, &g_40af18, 0x5));
            }
        }
    }
    if (((int)v92) != 0 || ((int)v92) != 0 || ((int)v92) != 0 || ((int)v92) != 0 || ((int)v92) != 0 && ((int)v92) != 4)
    {
        v64 = "cannot split in more than one way";
        error(0x0, 0x0, dcgettext(0x0, v64, 0x5));
        usage(); /* do not return */
    }
    v54 -= 1;
    v99 = ((char)v65[0]);
    v65 += v100;
    /* goto 4206220; */
    if (((char)v98) != 0)
    {
        optarg = v33;
        /* goto 4205655; */
    }
    else
    {
        if (v96[0] == 114)
        {
            if (v96[1] == 47)
            {
                v96 += 2;
                optarg = v96;
                /* goto 4205711; */
            }
        }
        if (v96[1] != 47 || v96[0] != 114)
        {
            rsp<8> = rsp<8> - 8;
            v22 = &g_402fb4;
            v33 = strncmp(v96, "l/", 0x2);
            if (v33 == 0)
            {
                v96 += 2;
                optarg = v96;
            }
        }
        rsp<8> = rsp<8> - 8;
        v21 = &g_402ca0;
        v94 = strchr(optarg, 0x2f);
        if (v94 != 0)
        {
            rsp<8> = rsp<8> - 8;
            v20 = &g_402cbf;
            dcgettext(0x0, &g_40a25e, 0x5);
            rsp<8> = rsp<8> - 8;
            v19 = &g_402cde;
            v19 = (long long)xdectoumax();
            if (v94 != optarg)
            {
                *(v94) = 0;
                rsp<8> = rsp<8> - 8;
                v18 = &g_402d06;
                dcgettext(0x0, &g_40a277, 0x5);
                rsp<8> = rsp<8> - 8;
                v17 = &g_402d28;
                v25 = (long long)xdectoumax();
            }
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v20 = &g_4031fc;
            dcgettext(0x0, &g_40a25e, 0x5);
            rsp<8> = rsp<8> - 8;
            v19 = &g_40321e;
            v19 = (long long)xdectoumax();
        }
    }
    v55 = !(rcx<8>);
    v26 = v55 - 1;
    rsp<8> = rsp<8> - 8;
    v23 = &g_402ea0;
    v33 = strspn(((int)optarg));
    v67 = ((int)((int)v24));
    if (((int)v92) == 0 || ((int)v92) == 4 && ((int)v97) != 0 && ((int)v97) != ((int)v94))
    {
        v24 = v56;
    }
    if (v25 != v33)
    {
        v23 = v67;
        rsp<8> = rsp<8> - 8;
        v22 = &g_4044f3;
        v72 = (long long)quote();
        if (((int)v22) != 100)
        {
            v57 = dcgettext(0x0, v64, 0x5);
            error(0x0, 0x0, v57);
            usage(); /* do not return */
        }
        rsp<8> = rsp<8> - 8;
        v21 = &g_40451e;
        v57 = dcgettext(0x0, &g_40af40, 0x5);
        error(0x0, 0x0, v57);
        usage(); /* do not return */
    }
    if (v94[0] == 48)
    {
        if (v94[1] != 0)
        {
            v94 += 1;
            optarg = v94;
        }
    }
    if (v94[1] == 0 || v94[0] != 48)
    {
        numeric_suffix_start = v94;
    }
}
