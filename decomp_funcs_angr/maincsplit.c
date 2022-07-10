typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_6 {
    char padding_0[24];
    unsigned int field_18;
} struct_6;

typedef struct struct_4 {
    char padding_0[1];
    char field_1;
} struct_4;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
    char field_1c;
    char padding_1d[1];
    char field_1e;
    char padding_1f[1];
    unsigned long long field_20;
    char padding_28[24];
    unsigned long long field_40;
    unsigned long long field_48;
} struct_5;

typedef struct struct_7 {
    char padding_0[24];
    unsigned int field_18;
    char padding_1c[1];
    char field_1d;
    char field_1e;
    char padding_1f[1];
    unsigned long long field_20;
    unsigned long long field_28;
} struct_7;

typedef struct struct_9 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[4];
    char field_1c;
} struct_9;

typedef struct struct_8 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned int field_18;
    char field_1c;
    char field_1d;
} struct_8;

extern char caught_signals;
extern unsigned long long control_used;
extern unsigned long long controls;
extern struct_1 current_line;
extern struct_0 digits;
extern struct_1 filename_space;
extern <missing-type> g_402b42;
extern <missing-type> g_402d9b;
extern <missing-type> g_402e4b;
extern <missing-type> g_402e7d;
extern <missing-type> g_402f08;
extern <missing-type> g_402f8f;
extern <missing-type> g_403619;
extern <missing-type> g_4037ce;
extern <missing-type> g_40380f;
extern char g_40389e;
extern char g_4038bd;
extern unsigned int g_418042;
extern unsigned int g_418107;
extern unsigned int g_41815e;
extern unsigned int g_418169;
extern unsigned int g_418179;
extern char g_418192;
extern unsigned int g_418194;
extern unsigned int g_4181af;
extern unsigned int g_4181c3;
extern unsigned int g_418860;
extern unsigned int g_418888;
extern unsigned int g_4188b8;
extern unsigned int g_4188e8;
extern unsigned int g_418910;
extern unsigned int g_418940;
extern unsigned int g_418970;
extern unsigned int g_4189a8;
extern unsigned int g_4189d0;
extern unsigned int g_4189f8;
extern unsigned int g_418a20;
extern unsigned int g_418a50;
extern unsigned int g_418a90;
extern unsigned int g_418ad0;
extern unsigned int g_418af8;
extern unsigned int g_418b28;
extern unsigned long long g_418b60;
extern unsigned long long g_418bdc;
extern struct_1 *global_argv;
extern char interrupt_handler;
extern unsigned long long last_val.7678;
extern unsigned int longopts;
extern struct_0 optind;
extern struct_1 prefix;
extern char remove_files;
extern unsigned long long rpl_re_syntax_options;
extern unsigned long long sig.7774;
extern char suffix[3];
extern char suppress_count;
extern char suppress_matched;

int main()
{
    unsigned long long v0;  // [bp-0x138]
    unsigned int v1;  // [bp-0x128]
    unsigned long long v106;  // rax
    struct_1 *v107;  // rax
    char v108[3];  // rax
    unsigned long long v112;  // rax
    unsigned long long v118;  // rax
    unsigned long long v122;  // rax
    char [2]|unsigned long long v124;  // rcx
    unsigned long long v125;  // rcx
    struct_0 *|unsigned long long v127;  // rdx
    char *v132[2];  // rbx
    unsigned long long v134;  // rbp
    unsigned long long v139;  // rsi
    char * v143;  // rdi
    unsigned int v144;  // edi
    unsigned long long v146;  // rdi
    char v147[3];  // r8
    unsigned long long v148;  // r9
    unsigned long long v151;  // r12
    struct_0 *|unsigned long long v157;  // r12
    unsigned long long v183;  // cc_op
    unsigned long long v184;  // cc_op
    unsigned long long v185;  // cc_op
    unsigned long long v195;  // cc_op
    unsigned long long v197;  // cc_op
    unsigned long long v206;  // cc_op
    unsigned long long v210;  // cc_op
    unsigned long long v22;  // rax
    unsigned long long v220;  // cc_op
    unsigned long long v223;  // cc_op
    unsigned long long v224;  // cc_op
    struct_0 *|struct_1 *|unsigned long long v236;  // cc_dep1
    unsigned long long v241;  // cc_dep1
    unsigned long long v244;  // cc_dep1
    unsigned long long v248;  // cc_dep1
    unsigned long long v25;  // rax
    unsigned long long v256;  // cc_dep1
    char v257[3];  // cc_dep1
    unsigned long long v267;  // cc_dep1
    unsigned long long v272;  // cc_dep1
    unsigned long long v274;  // cc_dep1
    unsigned long long v285;  // cc_dep1
    unsigned long long v288;  // cc_dep2
    unsigned long long v289;  // cc_dep2
    char *v29;  // rax
    unsigned long long v295;  // cc_dep2
    unsigned long long v298;  // cc_dep2
    unsigned long long v311;  // cc_dep2
    unsigned long long v313;  // cc_dep2
    unsigned long long v318;  // cc_dep2
    unsigned long long v32;  // rax
    struct_0 *v325;  // cc_dep2
    unsigned long long v334;  // cc_dep2
    char|unsigned long long v339;  // cc_dep2
    unsigned long v345;  // d
    unsigned int v44;  // eax
    unsigned long long v52;  // rax
    unsigned long long v54;  // rax
    struct_0 *|unsigned long long v57;  // rax
    unsigned long long v67;  // rax
    unsigned long long v70;  // rax
    unsigned long long v72;  // rax
    unsigned long long v97;  // rax

    v157 = &g_418b60;
    v132 = v139;
    v1 = v144;
    rsp<8> = &stack_base-304;
    v72 = set_program_name();
    rsp<8> = &stack_base-304;
    v112 = setlocale();
    rsp<8> = &stack_base-304;
    v52 = bindtextdomain(&g_418107, &g_418860);
    rsp<8> = &stack_base-304;
    v32 = textdomain(&g_418107);
    rsp<8> = &stack_base-304;
    v22 = atexit();
    v106 = "xx";
    remove_files = 1;
    global_argv = v132;
    controls = 0;
    control_used = 0;
    suppress_count = 0;
    suppress_matched = 0;
    rip<8> = &g_402b42;
    prefix = "xx";
    /* goto 4205392; */
    v44 = 2;
    v124[0] = 100;
    v44 = 1;
    rsp<8> = &stack_base-304;
    v57 = getopt_long(v1, ((int)v132), &g_41815e, &longopts, 0x0);
    v197 = 7;
    v248 = v57;
    v289 = -1;
    if (((int)v57) != -1)
    {
        v195 = 7;
        v236 = v57;
        v288 = 128;
        if (((int)v57) <= 128)
        {
            v184 = 7;
            v244 = v57;
            v318 = 97;
            if (((int)v57) > 97)
            {
                v57 = ((long long)(((int)v57) - 98));
                v195 = 7;
                v236 = v57;
                v288 = 30;
                if (((int)v57) <= 30)
                {
                    v220 = 4;
                    v285 = ((long long)*(v157 + v57 * 4));
                    v325 = v157;
                    v122 = ((long long)*(v157 + v57 * 4)) + v157;
                    /* goto v122; */
                }
                else
                {
                    rsp<8> = &stack_base-304;
                    v70 = usage(); /* do not return */
                }
            }
            else
            {
                v185 = 7;
                v241 = v57;
                v311 = -131;
                if (((int)v57) == -131)
                {
                    v0 = 0;
                    rsp<8> = &stack_base-320;
                    v25 = version_etc();
                    rsp<8> = &stack_base-320;
                    v54 = exit(0x0); /* do not return */
                }
                v195 = 7;
                v236 = v57;
                v288 = -130;
                if (((int)v57) != -130)
                {
                    rsp<8> = &stack_base-304;
                    v70 = usage(); /* do not return */
                }
                if (((int)v57) == -130)
                {
                    rsp<8> = &stack_base-304;
                    v67 = usage(); /* do not return */
                }
            }
        }
        else
        {
            rsp<8> = &stack_base-304;
            v70 = usage(); /* do not return */
        }
    }
    else
    {
        v107 = ((long long)optind);
        v210 = 7;
        v272 = ((long long)(v1 - optind));
        v334 = 1;
        v127 = ((long long)(v1 - optind - 1));
        if (v1 - optind > 1)
        {
            v143 = prefix;
            v183 = 20;
            v267 = 18446744069414584319;
            v339 = 0;
            v125 = 18446744069414584319;
        }
        else
        {
            v195 = 7;
            v236 = v107;
            v288 = ((long long)v1);
            if (((int)v107) >= v1)
            {
                rsp<8> = &stack_base-304;
                rsp<8> = &stack_base-304;
                v57 = error(0x0, 0x0, dcgettext(0x0, &g_418169, 0x5));
                rsp<8> = &stack_base-304;
                v70 = usage(); /* do not return */
            }
            v134 = ((long long)v1);
            rsp<8> = &stack_base-304;
            v157 = quote();
            rsp<8> = &stack_base-304;
            rsp<8> = &stack_base-304;
            v57 = error(0x0, 0x0, dcgettext(0x0, &g_418179, 0x5));
            rsp<8> = &stack_base-304;
            v70 = usage(); /* do not return */
        }
    }
    v125 -= 1;
    v183 = 5;
    v267 = ((long long)0);
    v339 = ((char)*(v143));
    v143 += v345;
    v29 = suffix;
    v124 = !(rcx<8>);
    v151 = v124 - 1;
    v223 = 20;
    v257 = suffix;
    v298 = 0;
    if (suffix != 0)
    {
        v147 = suffix;
        v148 = 0;
        v127 = &g_418bdc;
        v139 = ((long long)*(suffix));
        v108 = suffix;
        v224 = 17;
        v274 = ((long long)*(suffix));
        v295 = 0;
        if (((long long)*(suffix)) == 0)
        {
            rsp<8> = &stack_base-304;
            rsp<8> = &stack_base-304;
            v97 = error(0x1, 0x0, dcgettext(0x0, &g_418888, 0x5));
        }
    }
    else
    {
        v118 = ((long long)digits);
        v146 = 11;
        v206 = 7;
        v256 = ((long long)digits);
        v313 = 10;
        if (digits > 10)
        {
            v146 = ((long long)digits);
        }
    }
}
