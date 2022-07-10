typedef struct struct_3 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_3;

extern unsigned int g_415f13;
extern unsigned int g_415f2a;
extern unsigned int g_415f6c;
extern unsigned int g_415f83;
extern unsigned int g_415fb2;
extern unsigned int g_415fb8;
extern unsigned int g_415fd6;
extern unsigned int g_416000;
extern unsigned int g_41601e;
extern unsigned long long g_41603b;
extern unsigned int g_41603c;
extern unsigned int g_41605a;
extern unsigned int g_416072;
extern unsigned int g_416085;
extern unsigned int g_4160a1;
extern unsigned int g_4160d4;
extern unsigned int g_4160ee;
extern unsigned int g_41610d;
extern unsigned int g_416127;
extern unsigned int g_416175;
extern unsigned int g_416186;
extern unsigned int g_416458;
extern unsigned int g_416578;
extern unsigned int g_4165d0;
extern unsigned int g_416600;
extern unsigned int g_416668;
extern unsigned int g_4166d0;
extern unsigned int g_416708;
extern unsigned int g_416730;
extern unsigned int g_416758;
extern unsigned int g_4167a8;
extern unsigned int g_4167d8;
extern unsigned int g_416818;
extern unsigned int g_416880;
extern unsigned int g_4168c8;
extern unsigned int g_416908;
extern unsigned int g_416948;
extern unsigned int g_416988;
extern unsigned int g_4169c8;
extern unsigned int g_4169f0;
extern unsigned int g_416a18;
extern unsigned int g_416a78;
extern unsigned int g_416ac8;
extern unsigned int g_416af0;
extern unsigned int g_416b30;
extern unsigned int g_416b58;
extern struct_2 stderr;

int parse_datetime_body()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_19;  // tmp #19
    BOT tmp_12;  // tmp #12
    BOT tmp_48;  // tmp #48
    BOT tmp_7;  // tmp #7
    BOT tmp_60;  // tmp #60
    BOT tmp_96;  // tmp #96
    BOT tmp_99;  // tmp #99
    BOT tmp_116;  // tmp #116
    BOT tmp_138;  // tmp #138
    BOT tmp_147;  // tmp #147
    BOT tmp_156;  // tmp #156
    BOT tmp_165;  // tmp #165
    BOT tmp_20;  // tmp #20
    BOT tmp_51;  // tmp #51
    BOT tmp_16;  // tmp #16
    BOT tmp_14;  // tmp #14
    BOT tmp_11;  // tmp #11
    BOT tmp_18;  // tmp #18
    unsigned long v0;  // [bp-0x4b8]
    unsigned long v1;  // [bp-0x4b0]
    struct_3 *|unsigned int v10;  // [bp-0x468]
    unsigned long long v100;  // rax
    unsigned long long|unsigned int v108;  // rax
    unsigned long|unsigned int v11;  // [bp-0x460]
    unsigned long|unsigned long long v110;  // rax
    unsigned long long v118;  // rax
    unsigned long|unsigned long long|char [2]|unsigned int v12;  // [bp-0x458]
    unsigned long long v120;  // rax
    unsigned long long|unsigned int v125;  // rcx
    unsigned long v126;  // rcx
    char *|char|unsigned long long|char [2]|unsigned long|unsigned int v127;  // rdx
    unsigned long long v128;  // rbx
    unsigned int v129;  // ebx
    unsigned long long|unsigned int v13;  // [bp-0x450]
    unsigned long long v130;  // rbp
    char *|char [5]|char [2]|void *|unsigned long long|unsigned long|unsigned int v131;  // rsi
    char *v132;  // rsi
    char * v134;  // rsi
    unsigned long|char *|unsigned long long|unsigned int v135;  // rdi
    unsigned long v136;  // rdi
    unsigned long|unsigned long long|unsigned int v137;  // r8d
    unsigned long|unsigned long long|unsigned int v138;  // r9
    unsigned long v139;  // r10
    unsigned long long|unsigned int v14;  // [bp-0x448]
    unsigned long|unsigned long long|unsigned int v140;  // r11
    unsigned long long v141;  // r12
    unsigned long long [2]|unsigned long long|unsigned int v142;  // r13
    unsigned long long v143;  // r13
    unsigned long long v144;  // r13
    unsigned long long v145;  // r13
    unsigned long long v146;  // r13
    char *|char [5]|unsigned long long v147;  // r14
    unsigned long long v148;  // r15
    unsigned long long v149;  // cc_dep1
    unsigned long long v15;  // [bp-0x440]
    unsigned long long v150;  // cc_dep1
    unsigned long long v151;  // cc_dep2
    unsigned long v152;  // d
    unsigned int v16;  // [bp-0x438]
    unsigned int v17;  // [bp-0x434]
    unsigned int v18;  // [bp-0x430]
    unsigned int v19;  // [bp-0x42c]
    unsigned long v2;  // [bp-0x4a8]
    char v20;  // [bp-0x428]
    unsigned long|unsigned long long|unsigned int v21;  // [bp-0x418]
    unsigned int v22;  // [bp-0x414]
    unsigned long|unsigned long long|unsigned int v23;  // [bp-0x410]
    unsigned long long|unsigned int v24;  // [bp-0x40c]
    unsigned long|unsigned long long|unsigned int v25;  // [bp-0x408]
    unsigned int v26;  // [bp-0x404]
    unsigned int v27;  // [bp-0x400]
    unsigned int v28;  // [bp-0x3fc]
    unsigned int v29;  // [bp-0x3f8]
    unsigned long v3;  // [bp-0x4a0]
    unsigned long v30;  // [bp-0x3f0]
    unsigned int v31;  // [bp-0x3d8]
    unsigned int v32;  // [bp-0x3d4]
    unsigned int v33;  // [bp-0x3d0]
    unsigned int v34;  // [bp-0x3cc]
    unsigned int v35;  // [bp-0x3c8]
    unsigned int v36;  // [bp-0x3c4]
    unsigned int v37;  // [bp-0x3b8]
    unsigned int v38;  // [bp-0x398]
    unsigned int v39;  // [bp-0x394]
    unsigned long v4;  // [bp-0x498]
    unsigned int v40;  // [bp-0x390]
    unsigned int v41;  // [bp-0x38c]
    unsigned int v42;  // [bp-0x388]
    unsigned int v43;  // [bp-0x384]
    unsigned int v44;  // [bp-0x378]
    char *v45;  // [bp-0x368]
    unsigned long v46;  // [bp-0x358]
    unsigned int v47;  // [bp-0x2f8]
    unsigned long v48;  // [bp-0x2e8]
    unsigned long v49;  // [bp-0x2d8]
    unsigned long v5;  // [bp-0x490]
    unsigned long long v50;  // [bp-0x2d0]
    unsigned int v51;  // [bp-0x2c8]
    unsigned int v52;  // [bp-0x2c4]
    unsigned int v53;  // [bp-0x2c0]
    unsigned int v54;  // [bp-0x2bc]
    unsigned long long v55;  // [bp-0x2b0]
    unsigned long long v56;  // [bp-0x2a8]
    unsigned long v57;  // [bp-0x2a0]
    unsigned long long v58;  // [bp-0x298]
    unsigned long v59;  // [bp-0x290]
    unsigned long|unsigned long long v6;  // [bp-0x488]
    unsigned long long v60;  // [bp-0x288]
    unsigned long v61;  // [bp-0x280]
    unsigned long|unsigned long long v62;  // [bp-0x278]
    unsigned long long v63;  // [bp-0x270]
    unsigned long long v64;  // [bp-0x268]
    unsigned long long v65;  // [bp-0x260]
    unsigned long long v66;  // [bp-0x258]
    unsigned long long v67;  // [bp-0x250]
    unsigned long long v68;  // [bp-0x248]
    unsigned int v69;  // [bp-0x240]
    unsigned long|char [2]|unsigned int v7;  // [bp-0x480]
    unsigned short v70;  // [bp-0x238]
    unsigned long long v71;  // [bp-0x230]
    unsigned long long v72;  // [bp-0x228]
    unsigned long long v73;  // [bp-0x220]
    unsigned long long v74;  // [bp-0x218]
    unsigned long long v75;  // [bp-0x210]
    unsigned long long v76;  // [bp-0x208]
    char v77;  // [bp-0x200]
    char v78;  // [bp-0x1ff]
    unsigned short v79;  // [bp-0x1fe]
    unsigned long|unsigned long long|unsigned int v8;  // [bp-0x478]
    unsigned int v80;  // [bp-0x1fc]
    char v81;  // [bp-0x1f8]
    unsigned long v82;  // [bp-0x1f0]
    unsigned int v83;  // [bp-0x1e8]
    unsigned int v84;  // [bp-0x1e4]
    unsigned long long v85;  // [bp-0x1e0]
    unsigned int v86;  // [bp-0x1d8]
    unsigned int v87;  // [bp-0x1d4]
    unsigned long long v88;  // [bp-0x1d0]
    unsigned short v89;  // [bp-0xa8]
    unsigned long|unsigned int|char v9;  // [bp-0x470]
    char v90;  // [bp-0xa6]
    char v91;  // [bp-0x75]
    unsigned long long|char [2]|unsigned int|char v94;  // rax

    v142 = v127;
    v141 = v137;
    v130 = v132;
    v10 = v136;
    v8 = ((int)v126);
    v7 = v138;
    v11 = strlen(v132);
    if (v127 == 0)
    {
        v142 = &v20;
        gettime();
    }
    v128 = v142[0];
    v147 = v132;
    v9 = v142[1];
    while (true)
    {
        v94 = ((long long)v147[0]);
        if (((char)(((long long)v147[0]) <= 13)))
        {
            if (((char)(((long long)v94) <= 8)))
            {
                break;
            }
        }
        else
        {
            if (v94 != 32)
            {
                break;
            }
        }
        v147 += 1;
    }
    v125 = 4;
    v135 = "TZ=\"";
    v131 = v147;
    while (v125 != 0)
    {
        v125 -= 1;
        v150 = ((long long)v131[0]);
        v151 = ((long long)*(v135));
        v135 += v152;
        v131 += v152;
        break;
    }
    v149 = ((long long)(((char)(v150 > v151)) - 0 - ((char)(v150 < v151))));
    if (((char)v149) == 0)
    {
        v148 = ((long long)v147[4]);
        v131 = v147 + 4;
        if (((long long)v147[4]) != 0)
        {
            v127 = v131;
            v94 = v148;
            v135 = 1;
            while (true)
            {
                if (v94 == 92)
                {
                    v94 = v127 + 1;
                    v127 = ((long long)v127[1]);
                    tmp_4 = v127;
                    if (v127 != 34 && tmp_4 != 92)
                    {
                        break;
                    }
                }
                else if (v94 != 34)
                {
                    v94 = v127;
                    /* goto 4235211; */
                }
                if (v94 == 34)
                {
                    v6 = 0;
                    v7 = &stack_base-280;
                    if (v135 > 100)
                    {
                        v7 = v131;
                        v6 = malloc(v135);
                        if (v6 != 0)
                        {
                            v7 = v6;
                            /* goto 4237343; */
                            v6 = 0;
                            v142 = 0;
                            rpl_free();
                            v100 = r13<8>;
                            return v100;
                        }
                    }
                    if (v135 <= 100 || v6 != 0)
                    {
                        v127 = v7;
                        if (v148 != 34)
                        {
                            do
                            {
                                v94 = 0;
                                v94 = ((char)(v148 == 92));
                                v127 += 1;
                                tmp_12 = rax<8>;
                                v125 = ((long long)*(v131 + ((long long)(v148 == 92))));
                                v148 = ((long long)*(((long long)(v148 == 92)) + v131 + 1));
                                v131 = tmp_12 + v131 + 1;
                                tmp_48 = v125;
                                *(v127 + 0x1) = tmp_48;
                                tmp_19 = v148;
                            }
                            while (tmp_19 != 34);
                        }
                        *(v127) = 0;
                        v12 = v131;
                        v148 = (long long)tzalloc();
                        if (v148 != 0)
                        {
                            v147 = v12 + 1;
                            while (true)
                            {
                                v94 = ((long long)*(v147));
                                if (((char)(((long long)*(v147)) <= 13)))
                                {
                                    if (((char)(((long long)v94) <= 8)))
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    if (v94 != 32)
                                    {
                                        break;
                                    }
                                }
                                v147 += 1;
                            }
                            v94 = localtime_rz();
                            break;
                        }
                        else
                        {
                            v142 = 0;
                            rpl_free();
                            v100 = r13<8>;
                            return v100;
                        }
                    }
                }
                if (v94 == 92 && v127 == 34 || v94 == 92 && tmp_4 == 92 || v94 != 34 && v94 != 92)
                {
                    v127 = v94 + 1;
                    v94 = ((long long)v94[1]);
                    v135 += 1;
                    tmp_7 = v94;
                }
            }
            if (v94 == 34 && v148 != 0 && (v135 <= 100 || v6 != 0))
            {
                tmp_60 = ((long long)v147[0]);
                v56 = 0;
                v54 = 2;
                v108 = ((long long)((char)v8));
                v63 = 0;
                tmp_96 = v108;
                v78 = tmp_96;
                tmp_99 = ((long long)v43);
                v49 = (((char)tmp_60) == 0? "0" : v147);
                v147 = ((long long)((int)v9));
                v78 &= 1;
                v55 = tmp_99 + 1900;
                tmp_116 = ((long long)v42);
                v62 = v147;
                v64 = 0;
                v65 = 0;
                v57 = ((long long)(((int)tmp_116) + 1));
                tmp_138 = ((long long)v41);
                v66 = 0;
                v58 = tmp_138;
                tmp_147 = ((long long)v40);
                v67 = 0;
                v59 = tmp_147;
                tmp_156 = ((long long)v39);
                v68 = 0;
                v60 = tmp_156;
                tmp_165 = ((long long)v38);
                v69 = 0;
                v61 = tmp_165;
                v108 = ((int)v44);
                v70 = 0;
                v29 = v108;
                v71 = 0;
                v127 = v45;
                v72 = 0;
                v75 = 0;
                v73 = 0;
                v74 = 0;
                v76 = 0;
                v77 = 0;
            }
            else if (v94 == 92 || v127 == 34 || tmp_4 == 92 || v94 != 34)
            {
                v94 = localtime_rz();
            }
        }
    }
    v94 = localtime_rz();
    if (v94 != 0)
    {
        v6 = 0;
        v148 = v137;
    }
    else
    {
        v6 = 0;
        v142 = 0;
        rpl_free();
        v100 = r13<8>;
        return v100;
    }
    if (v94 != 0 || ((char)v149) == 0 && ((long long)v147[4]) != 0)
    {
        tmp_60 = ((long long)v147[0]);
        v56 = 0;
        v54 = 2;
        v108 = ((long long)((char)v8));
        v63 = 0;
        tmp_96 = v108;
        v78 = tmp_96;
        tmp_99 = ((long long)v43);
        v49 = (((char)tmp_60) == 0? "0" : v147);
        v147 = ((long long)((int)v9));
        v78 &= 1;
        v55 = tmp_99 + 1900;
        tmp_116 = ((long long)v42);
        v62 = v147;
        v64 = 0;
        v65 = 0;
        v57 = ((long long)(((int)tmp_116) + 1));
        tmp_138 = ((long long)v41);
        v66 = 0;
        v58 = tmp_138;
        tmp_147 = ((long long)v40);
        v67 = 0;
        v59 = tmp_147;
        tmp_156 = ((long long)v39);
        v68 = 0;
        v60 = tmp_156;
        tmp_165 = ((long long)v38);
        v69 = 0;
        v61 = tmp_165;
        v108 = ((int)v44);
        v70 = 0;
        v29 = v108;
        v71 = 0;
        v127 = v45;
        v72 = 0;
        v75 = 0;
        v73 = 0;
        v74 = 0;
        v76 = 0;
        v77 = 0;
        v80 = 0;
        v81 = 0;
        v82 = v127;
        v83 = 269;
        v84 = v29;
        v85 = 0;
        v79 = 0;
        v142 = 0x76a700;
        while (true)
        {
            v46 = v142 + v128;
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>)))
            {
                break;
            }
            v108 = localtime_rz();
            if (v108 != 0 && v48 != 0)
            {
                v127 = ((int)v47);
                if (v47 != v84)
                {
                    v85 = v48;
                    v86 = 269;
                    v87 = v127;
                    v88 = 0;
                    break;
                }
            }
            if (v108 == 0 || v48 == 0 || v47 == v84)
            {
                v142 = ((long long)(((int)v142) + 0x76a700));
                if (((int)v142) == 0x1da9c00)
                {
                    break;
                }
            }
        }
        if (v82 != 0)
        {
            if (v85 != 0)
            {
                v108 = strcmp(v45, v85);
                if (v108 == 0)
                {
                    v84 = -1;
                    v85 = 0;
                }
            }
        }
        v94 = yyparse();
    }
    if (v94 == 0 && (((char)v149) == 0 || v94 != 0) && (((long long)v147[4]) != 0 || v94 != 0))
    {
        if (v78 == 0)
        {
            v142 = ((long long)((char)v70));
            if (((long long)((char)v70)) == 0)
            {
            }
            else
            {
                v10->field_0 = v61;
            }
        }
        else
        {
            dcgettext(0x0, &g_415f2a, 0x5);
            dbg_printf();
            v131 = "'@timespec' - always UTC";
            if (((char)v70) == 0)
            {
                v131 = "parsed date/time string";
                if (v76 == 0)
                {
                    v128 = v7;
                    if (!(v7 != 0))
                    {
                        v131 = "system default";
                    }
                    else if (v137 != v148)
                    {
                        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_415f6c, 0x5), ((int)v7), v137);
                    }
                    else
                    {
                        v134 = v7;
                        v125 = 5;
                        v135 = "UTC0";
                        while (v125 != 0)
                        {
                            v125 -= 1;
                            v149 = ((long long)*(v134));
                            v151 = ((long long)*(v135));
                            v135 += v152;
                            v134 += v152;
                            break;
                        }
                        v131 = "TZ=\"UTC0\" environment value or -u";
                        v149 = ((long long)(((char)(v149 > v151)) - 0 - ((char)(v149 < v151))));
                        if (((char)v149) != 0)
                        {
                            __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_415f83, 0x5), ((int)v7), v137);
                        }
                    }
                }
            }
            if (v7 == 0 || v76 != 0 || ((char)v70) != 0 || v137 == v148 && ((char)v149) == 0)
            {
                __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, v131, 0x5), v125, v137);
            }
            if (v73 != 0)
            {
                v131 = stderr;
                if (v52 > 0)
                {
                    fwrite(", dst", 0x1, 0x5, stderr);
                }
            }
            if (v73 == 0 || v52 > 0)
            {
                v131 = stderr;
                /* goto 4237941; */
            }
            if (False)
            {
                __fprintf_chk(((int)stderr), 0x1, &g_415fb2, time_zone_str(), v137);
            }
            fputc(0xa, v131);
            v142 = ((long long)v78);
            if (((char)v70) != 0)
            {
                v10->field_0 = v61;
            }
            else if ((v75 | v71 | v72 | v74 | v76 + v73) > 1)
            {
                if (((long long)v78) != 0)
                {
                    if (False)
                    {
                        dbg_printf();
                    }
                    if (False)
                    {
                        dbg_printf();
                    }
                    if (v72 > 1)
                    {
                        dbg_printf();
                    }
                    if (v74 > 1)
                    {
                        dbg_printf();
                    }
                    if (v76 + v73 > 1)
                    {
                        dbg_printf();
                        /* goto 4237136; */
                    }
                }
            }
        }
    }
    if (v94 != 0 && (((char)v149) == 0 || v94 != 0) && (((long long)v147[4]) != 0 || v94 != 0))
    {
        if (((long long)v78) != 0)
        {
            v130 += v11;
            if (v49 >= v130)
            {
                v135 = dcgettext(0x0, &g_415f13, 0x5);
            }
            else
            {
                v135 = dcgettext(0x0, &g_416458, 0x5);
            }
            dbg_printf();
        }
    }
    if (v94 == 0 && ((long long)((char)v70)) == 0 && v78 == 0 && (((char)v149) == 0 || v94 != 0) && (((long long)v147[4]) != 0 || v94 != 0) && (v75 | v71 | v72 | v74 | v76 + v73) <= 1 || v94 == 0 && ((char)v70) == 0 && v78 != 0 && (((char)v149) == 0 || v94 != 0) && (((long long)v147[4]) != 0 || v94 != 0) && (v75 | v71 | v72 | v74 | v76 + v73) <= 1)
    {
        v130 = v55;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
        {
            if (v56 == 2)
            {
                v128 = (69 <= v130? 1900 : 2000) + v130;
                if (((long long)v142) == 0)
                {
                    v130 = v128;
                }
                else
                {
                    dcgettext(0x0, &g_416578, 0x5);
                    v130 = v128;
                    dbg_printf();
                }
            }
            v129 = 0;
            v94 = ((int)v130) - 1900;
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>)) && v130 >= 1900 || v130 < 1900 && !(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
            {
                v129 = 1;
            }
            v26 = v94;
            v128 = ((long long)((((long long)v26) != ((long long)v26)? 1 : ((int)rbx<8>)) & 1));
        }
        else
        {
            v26 = ((int)(18446744069414582420 - v55));
            v128 = ((long long)(18446744069414582420 - v130 == 18446744069414582420 - v130? ((int)(((18446744069414582420 ^ v130) & (18446744069414582420 ^ 18446744069414582420 - v130)) >> 63)) : 1));
        }
        if (((long long)v128) == 0)
        {
            tmp_20 = v57;
            v94 = v57 - 1;
            v25 = ((int)(v57 - 1));
            v131 = v94;
            v125 = ((long long)v78);
            if ((v131 != v131? 1 : ((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, t20, 0xffffffffffffffff<64>, cc_ndep<8>))) == 0)
            {
                v94 = v58;
                v24 = ((int)v58);
                v127 = v94;
                if (v75 == 0)
                {
                    if (((char)*((char *)(((char *)&v70) + 1))) != 0)
                    {
                        if (v71 == 0)
                        {
                            if (v72 != 0)
                            {
                                v21 = 0;
                                v23 = 0;
                                v62 = 0;
                                if (((long long)v125) == 0)
                                {
                                    v137 = 0;
                                    v140 = 0;
                                    v135 = 0;
                                    /* goto 4236285; */
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (((long long)v142) != 0)
            {
                dcgettext(0x0, &g_415fb8, 0x5);
                dbg_printf();
            }
            v125 = ((long long)v78);
        }
    }
    if (...)
    {
        v131 = "error: year, month, or day overflow\n";
    }
    if (...)
    {
        v21 = 0;
        v23 = 0;
        v62 = 0;
        if (((long long)v125) == 0)
        {
            v140 = 0;
            v135 = 0;
        }
    }
    if (...)
    {
        v130 = v59;
        if (v54 != 0)
        {
            if (!(((int)2) != 1))
            {
                v138 = ((int)v130) + 12;
                if (v130 - 1 > 10)
                {
                    if (v130 == 12)
                    {
                        v23 = 12;
                        /* goto 4239592; */
                    }
                    else
                    {
                        v23 = -1;
                    }
                }
            }
            else if (v59 > 23)
            {
                v23 = -1;
            }
        }
        else
        {
            if (v59 - 1 > 10)
            {
                if (v59 == 12)
                {
                    v23 = 0;
                    /* goto 4239592; */
                }
                else
                {
                    v23 = -1;
                }
            }
        }
    }
    dbg_printf();
    v138 = v59;
    v23 = v138;
    if (...)
    {
        v137 = v60;
        v139 = v61;
        v22 = ((int)v60);
        v140 = v137;
        v135 = v139;
        v21 = v135;
        if (((long long)v125) == 0)
        {
        }
        else
        {
            v5 = v61;
            v4 = v137;
            __snprintf_chk();
            if (v75 != 0)
            {
                v135 = dcgettext(0x0, &g_4165d0, 0x5);
            }
            else
            {
                v135 = dcgettext(0x0, &g_416600, 0x5);
            }
            dbg_printf();
            /* goto 4242011; */
        }
    }
    if (...)
    {
        if (((long long)v78) != 0)
        {
            dcgettext(0x0, &g_415fd6, 0x5);
            dbg_printf();
            /* goto 4237136; */
        }
    }
    v135 = ((long long)v21);
    v140 = ((int)*((int *)(((char *)&v21) + 4)));
    v127 = ((int)v24);
    v131 = ((int)v25);
    v29 = -1;
    if (...)
    {
        if (v73 == 0)
        {
            v94 = ((long long)v29);
        }
        else
        {
            v94 = ((int)v52);
            v29 = v52;
        }
        v34 = v127;
        v127 = ((int)v26);
        v31 = v135;
        v35 = v131;
        v32 = v140;
        v33 = v137;
        v36 = v127;
        v37 = v94;
        v27 = -1;
        v8 = (long long)mktime_z();
        v94 = mktime_ok();
        if (((long long)v94) == 0)
        {
            v15 = v76;
            v138 = ((int)v31);
            v137 = ((int)((int)v21));
            v125 = ((int)v32);
            v11 = v33;
            v12 = ((int)v23);
            v7 = v34;
            v8 = v24;
            v9 = v35;
            v10 = ((int)v25);
            v13 = v36;
            v14 = ((int)*((int *)(((char *)&v25) + 4)));
            v94 = ((long long)v78);
            if (v16 != v17 || ((int)v32) != ((int)*((int *)(((char *)&v21) + 4))))
            {
                v19 = ((int)((int)*((int *)(((char *)&v21) + 4))));
                v18 = v125;
                v17 = v137;
                v16 = v138;
                if (((long long)v94) != 0)
                {
                    dcgettext(0x0, &g_416668, 0x5);
                    dbg_printf();
                    v145 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_41601e, 0x5);
                    dbg_printf();
                    v142 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_41603c, 0x5);
                    dbg_printf();
                }
            }
            if (v16 == v17)
            {
                if (((int)v32) == ((int)*((int *)(((char *)&v21) + 4))))
                {
                    if (v7 == v8)
                    {
                        if (((int)v11) != v12)
                        {
                            if (((int)v9) == v10)
                            {
                                if (v13 == v14)
                                {
                                    if (((long long)v78) != 0)
                                    {
                                        dcgettext(0x0, &g_416668, 0x5);
                                        dbg_printf();
                                        v144 = (long long)debug_strfdatetime.constprop.0();
                                        dcgettext(0x0, &g_41601e, 0x5);
                                        dbg_printf();
                                        v143 = (long long)debug_strfdatetime.constprop.0();
                                        dcgettext(0x0, &g_41603c, 0x5);
                                        v142 = 1;
                                        dbg_printf();
                                        v127 = &g_41603b;
                                        v110 = &g_41603b;
                                        /* goto 4236812; */
                                    }
                                }
                            }
                        }
                    }
                }
                if (((int)v32) != ((int)*((int *)(((char *)&v21) + 4))) && ((long long)v94) != 0)
                {
                    v110 = &g_41603b;
                    v127 = "--";
                    /* goto 4242664; */
                }
            }
            else if (((long long)v94) != 0)
            {
                v110 = "--";
                if (v18 == v19)
                {
                    v127 = &g_41603b;
                    /* goto 4242664; */
                }
            }
            if (...)
            {
                if (((long long)v78) != 0)
                {
                    dcgettext(0x0, &g_416668, 0x5);
                    dbg_printf();
                    v146 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_41601e, 0x5);
                    dbg_printf();
                    v142 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_41603c, 0x5);
                    dbg_printf();
                    v110 = &g_41603b;
                }
            }
            if (...)
            {
                v127 = v110;
            }
            if (...)
            {
                v125 = "--";
                "--" = (v11 != v12? "--" : 4284475);
                v142 = 0;
            }
            if (...)
            {
                v125 = &g_41603b;
            }
            if (...)
            {
                tmp_51 = v9 == v10;
                v4 = v110;
                v3 = v127;
                v2 = "--";
                v1 = v125;
                v0 = (tmp_51? &g_41603b : "--");
                __snprintf_chk();
                v118 = 52;
                while (true)
                {
                    v127 = v118;
                    if (v118 != 0)
                    {
                        v118 -= 1;
                        if (v91 != 32)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v127 = 0;
                        break;
                    }
                }
                *(&stack_base-1160 + v127 + 992) = 0;
                dbg_printf();
                dcgettext(0x0, &g_41605a, 0x5);
                dbg_printf();
                if (v142 != 0)
                {
                    dcgettext(0x0, &g_4166d0, 0x5);
                    dbg_printf();
                }
                if (v7 != v8)
                {
                    if (((int)v9) != v10)
                    {
                        dcgettext(0x0, &g_416708, 0x5);
                        dbg_printf();
                    }
                }
                dcgettext(0x0, &g_416730, 0x5);
                dbg_printf();
                if (v15 != 0)
                {
                    v131 = dcgettext(0x0, &g_416072, 0x5);
                }
                else
                {
                    v131 = dcgettext(0x0, &g_416085, 0x5);
                }
                dbg_printf();
                /* goto 4237136; */
            }
        }
        else if (v72 != 0)
        {
            if (v71 == 0)
            {
                v94 = v50;
                v28 = -1;
                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
                {
                    v94 = v50 - ((long long)(v27 != v51));
                }
                v125 = v94 * 7;
                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
                {
                    v94 = ...;
                    tmp_16 = ((long long)((int)*((int *)(((char *)&v23) + 4))));
                    v94 = ((int)(v94 + ((long long)((int)*((int *)(((char *)&v23) + 4))))));
                    v24 = ((int)(v94 + ((long long)((int)*((int *)(((char *)&v23) + 4))))));
                    if ((((long long)v24) != ((long long)v24)? 1 : ((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, t16, cc_ndep<8>))) == 0)
                    {
                        v29 = -1;
                        v8 = (long long)mktime_z();
                        if (((int)-1) >= 0)
                        {
                            if (v78 != 0)
                            {
                                v9 = (long long)debug_strfdatetime.constprop.0();
                                v142 = (long long)str_days.constprop.0();
                                dcgettext(0x0, &g_4160a1, 0x5);
                                dbg_printf();
                            }
                        }
                    }
                }
            }
        }
    }
    if (False)
    {
        v90 = 88;
        v89 = 22616;
        v8 = &stack_base-168;
        time_zone_str();
        v137 = (long long)tzalloc();
        tmp_14 = v31;
        v11 = v137;
        v27 = -1;
        v21 = tmp_14;
        v23 = *((long long *)(((char *)&v34) + -4));
        v25 = v35;
        v29 = v37;
        v8 = (long long)mktime_z();
        v9 = (char)mktime_ok();
        tzfree();
        if (v78 != 0)
        {
            dcgettext(0x0, &g_416000, 0x5);
            dbg_printf();
            /* goto 4237136; */
        }
    }
    if (...)
    {
        if (v78 != 0)
        {
            v128 = (long long)debug_strfdatetime.constprop.0();
            v7 = v50;
            v130 = (long long)str_days.constprop.0();
            dcgettext(0x0, &g_416758, 0x5);
            dbg_printf();
            /* goto 4237136; */
        }
    }
    if (...)
    {
        if (v78 != 0)
        {
            if (v71 == 0)
            {
                tmp_11 = ((long long)((int)v25));
                v11 = ((int)*((int *)(((char *)&v23) + 4)));
                v9 = ((int)(tmp_11 + 1));
                tm_year_str();
                v5 = ((long long)v11);
                v4 = ((long long)v9);
                __snprintf_chk();
                dcgettext(0x0, &g_4167a8, 0x5);
                dbg_printf();
            }
        }
    }
    if (...)
    {
        if ((v64 | v63 | v65) == 0)
        {
            if (v76 != 0)
            {
                v94 = 0;
                /* goto 4241765; */
            }
        }
    }
    if (...)
    {
        v9 = (long long)str_days.constprop.0();
        dcgettext(0x0, &g_4167d8, 0x5);
        dbg_printf();
    }
    if (...)
    {
        v142 = (long long)debug_strfdatetime.constprop.0();
        dcgettext(0x0, &g_4160d4, 0x5);
        dbg_printf();
        v94 = ((long long)v78);
        if ((v63 | v64 | v65) != 0)
        {
            if (((long long)v78) != 0)
            {
                if (False)
                {
                    if (((int)*((int *)(((char *)&v23) + 4))) != 15)
                    {
                        dcgettext(0x0, &g_416818, 0x5);
                        dbg_printf();
                    }
                }
                if (((int)v23) != 12)
                {
                    dcgettext(0x0, &g_416880, 0x5);
                    dbg_printf();
                }
                v127 = 0;
                v127 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1028, size=4, endness=Iend_LE)), Load(addr=stack_base-624, size=8, endness=Iend_LE), cc_ndep<8>));
                if (reg_32<4> == 0)
                {
                    v9 = ((int)(((long long)((int)*((int *)(((char *)&v25) + 4)))) + 0));
                    /* goto 4240104; */
                }
            }
        }
    }
    if (...)
    {
        if (((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1028, size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) == 0)
        {
            v9 = ((int)(((long long)((int)*((int *)(((char *)&v25) + 4)))) + 0));
        }
    }
    if (...)
    {
        v125 = ((long long)((int)v25)) + 0;
        v11 = ((long long)((int)v25)) + 0;
        if (((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1028, size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) == 0)
        {
            v94 = 0;
            v94 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1036, size=4, endness=Iend_LE)), Load(addr=stack_base-608, size=8, endness=Iend_LE), cc_ndep<8>));
            if (reg_16<4> == 0)
            {
                tmp_16 = ((long long)v9);
                v24 = ((int)(((long long)((int)*((int *)(((char *)&v23) + 4)))) + 0));
                v27 = -1;
                v26 = ((int)tmp_16);
                v25 = ((int)v11);
                v21 = v31;
                v23 = v33;
                v29 = v37;
                v8 = (long long)mktime_z();
                if (((int)v27) >= 0)
                {
                    v94 = ((long long)v78);
                    if (((long long)v78) == 0)
                    {
                        if (v76 != 0)
                        {
                            v131 = v8 - (((long long)v53) - v30);
                        }
                    }
                    else
                    {
                        v14 = v65;
                        v13 = 0;
                        v12 = 0;
                        dcgettext(0x0, &g_416908, 0x5);
                        dbg_printf();
                        v12 = (long long)debug_strfdatetime.constprop.0();
                        dcgettext(0x0, &g_41610d, 0x5);
                        dbg_printf();
                        if (v37 != -1)
                        {
                            if (v37 != v29)
                            {
                                dcgettext(0x0, &g_416948, 0x5);
                                dbg_printf();
                            }
                        }
                        if (v65 == 0)
                        {
                            if (((int)(((long long)((int)*((int *)(((char *)&v23) + 4)))) + 0)) != v24 || v64 == 0 && ((int)v11) != v25)
                            {
                                dcgettext(0x0, &g_416988, 0x5);
                                dbg_printf();
                                v12 = &stack_base-437;
                                v9 = (long long)tm_year_str();
                                dcgettext(0x0, &g_4169c8, 0x5);
                                dbg_printf();
                                tmp_18 = ((long long)v25);
                                v11 = v24;
                                v9 = ((int)(tmp_18 + 1));
                                v142 = (long long)tm_year_str();
                                dcgettext(0x0, &g_4169f0, 0x5);
                                dbg_printf();
                            }
                        }
                        v94 = ((long long)v78);
                    }
                }
                else if (v78 != 0)
                {
                    v130 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_4168c8, 0x5);
                    dbg_printf();
                    /* goto 4237136; */
                }
            }
        }
    }
    if (...)
    {
        if (v78 != 0)
        {
            dcgettext(0x0, &g_4160ee, 0x5);
            dbg_printf();
            /* goto 4237136; */
        }
    }
    if (...)
    {
        v131 = v8 - (((long long)v53) - v30);
        if ((((long long)(((((long long)v53) ^ v30) & (((long long)v53) ^ ((long long)v53) - v30)) >> 63)) | ((v8 ^ ((long long)v53) - v30) & (v8 ^ v8 - (((long long)v53) - v30))) >> 63) != 0)
        {
            if (((long long)v94) != 0)
            {
                dcgettext(0x0, &g_416a18, 0x5);
                dbg_printf();
                /* goto 4237136; */
            }
        }
    }
    v8 = v131;
    if (...)
    {
        if (((long long)v94) != 0)
        {
            v142 = (long long)debug_strfdatetime.constprop.0();
            dcgettext(0x0, &g_416127, 0x5);
            dbg_printf();
            v138 = v66 * 3600;
            if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
            {
                v128 = ((long long)v78);
                v125 = ...;
                v94 = ((long long)(...));
                v130 = v8 + v138;
                v127 = v67 * 60;
            }
            else
            {
                v128 = ((long long)v78);
            }
        }
    }
    if (...)
    {
        v140 = v66 * 3600;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
        {
            v125 = ...;
            v94 = ((long long)(...));
            v130 = v8 + v140;
            v127 = v67 * 60;
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>)))
            {
                /* goto 4237136; */
            }
        }
    }
    if (...)
    {
        v130 += v127;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
        {
            v130 += v68;
            v130 += ((long long)v94);
            v10->field_0 = v130;
            v10->field_8 = v125;
            if (((long long)v128) != 0)
            {
                if (False)
                {
                    v9 = 0;
                    v8 = 0;
                    dcgettext(0x0, &g_416a78, 0x5);
                    dbg_printf();
                    dcgettext(0x0, &g_416ac8, 0x5);
                    dbg_printf();
                    if (v29 != -1)
                    {
                        v94 = localtime_rz();
                        if (v94 != 0)
                        {
                            if (v29 != v47)
                            {
                                dcgettext(0x0, &g_416af0, 0x5);
                                dbg_printf();
                            }
                        }
                    }
                }
            }
            v142 = ((long long)v78);
        }
    }
    if (...)
    {
        if (((long long)v128) != 0)
        {
            v131 = "error: adding relative time caused an overflow\n";
            /* goto 4238901; */
        }
    }
    if (...)
    {
        if (((long long)v142) != 0)
        {
            v131 = "timezone: system default\n";
            if (v7 != 0)
            {
                v131 = v7;
                v125 = 5;
                v135 = "UTC0";
                while (v125 != 0)
                {
                    v125 -= 1;
                    v149 = ((long long)*(v131));
                    v151 = ((long long)*(v135));
                    v135 += v152;
                    v131 += v152;
                    break;
                }
                v149 = ((long long)(((char)(v149 > v151)) - 0 - ((char)(v149 < v151))));
                if (((char)v149) == 0)
                {
                    v131 = "timezone: Universal Time\n";
                }
                else
                {
                    dcgettext(0x0, &g_416b30, 0x5);
                    dbg_printf();
                    /* goto 4238081; */
                }
            }
            if (v7 == 0 || ((char)v149) == 0)
            {
                dcgettext(0x0, v131, 0x5);
                dbg_printf();
            }
            dcgettext(0x0, &g_416b58, 0x5);
            dbg_printf();
            v120 = gmtime_r(((int)v10), ((int)&v46));
            if (v120 != 0)
            {
                v130 = (long long)debug_strfdatetime.constprop.0();
                dcgettext(0x0, &g_416175, 0x5);
                dbg_printf();
            }
            v94 = localtime_rz();
            if (v94 != 0)
            {
                v147 = (long long)time_zone_str();
                v130 = (long long)debug_strfdatetime.constprop.0();
                dcgettext(0x0, &g_416186, 0x5);
                dbg_printf();
            }
        }
    }
    if (...)
    {
        dcgettext(0x0, v131, 0x5);
        dbg_printf();
    }
    if (...)
    {
        if (v148 != v141)
        {
            tzfree();
            rpl_free();
            v100 = r13<8>;
            return v100;
        }
        rpl_free();
        v100 = r13<8>;
        return v100;
    }
}
