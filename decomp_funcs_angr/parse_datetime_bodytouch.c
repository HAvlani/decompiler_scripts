typedef struct struct_3 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_3;

extern unsigned int g_412bb8;
extern unsigned int g_412bcf;
extern unsigned int g_412c11;
extern unsigned int g_412c2d;
extern unsigned int g_412c5c;
extern unsigned int g_412c62;
extern unsigned int g_412c80;
extern unsigned int g_412caa;
extern unsigned int g_412cc8;
extern unsigned long long g_412ce5;
extern unsigned int g_412ce6;
extern unsigned int g_412d04;
extern unsigned int g_412d1c;
extern unsigned int g_412d2f;
extern unsigned int g_412d4b;
extern unsigned int g_412d7e;
extern unsigned int g_412d98;
extern unsigned int g_412db7;
extern unsigned int g_412dd1;
extern unsigned int g_412e1f;
extern unsigned int g_412e30;
extern unsigned int g_413108;
extern unsigned int g_413228;
extern unsigned int g_413280;
extern unsigned int g_4132b0;
extern unsigned int g_413318;
extern unsigned int g_413380;
extern unsigned int g_4133b8;
extern unsigned int g_4133e0;
extern unsigned int g_413408;
extern unsigned int g_413458;
extern unsigned int g_413488;
extern unsigned int g_4134c8;
extern unsigned int g_413530;
extern unsigned int g_413578;
extern unsigned int g_4135b8;
extern unsigned int g_4135f8;
extern unsigned int g_413638;
extern unsigned int g_413678;
extern unsigned int g_4136a0;
extern unsigned int g_4136c8;
extern unsigned int g_413728;
extern unsigned int g_413778;
extern unsigned int g_4137a0;
extern unsigned int g_4137e0;
extern unsigned int g_413808;
extern struct_1 stderr;

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
    struct_3 *|unsigned long long v10;  // [bp-0x468]
    unsigned long long v105;  // rax
    unsigned long long v109;  // rax
    unsigned int|unsigned long|unsigned long long v11;  // [bp-0x460]
    unsigned long|unsigned long long v117;  // rax
    unsigned long long v118;  // rax
    char [2]|unsigned long|unsigned long long v12;  // [bp-0x458]
    unsigned int|unsigned long long v125;  // rcx
    unsigned long v126;  // rcx
    unsigned long long|char|unsigned long|unsigned int|char *|char [2] v127;  // rdx
    unsigned long long v128;  // rbx
    unsigned int v129;  // ebx
    unsigned int|unsigned long long v13;  // [bp-0x450]
    unsigned long long v130;  // rbp
    char *v132;  // rsi
    unsigned long long|unsigned long|unsigned int|char *|char [2]|void *|char [5] v133;  // esi
    char * v134;  // rsi
    unsigned int|char *|unsigned long|unsigned long long v135;  // rdi
    unsigned long v136;  // rdi
    unsigned int|unsigned long|unsigned long long v137;  // r8
    unsigned int|unsigned long|unsigned long long v138;  // r9
    unsigned long long v139;  // r10
    unsigned long long v14;  // [bp-0x448]
    unsigned int|unsigned long long v140;  // r11
    unsigned long long v141;  // r12
    unsigned long long v142;  // r13
    unsigned int|unsigned long long [2]|unsigned long long v143;  // r13
    unsigned long long v144;  // r13
    unsigned long long v145;  // r13
    unsigned long long v146;  // r13
    char *|unsigned long long|char [5] v147;  // r14
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
    unsigned int|unsigned long|unsigned long long v21;  // [bp-0x418]
    unsigned int v22;  // [bp-0x414]
    unsigned int|unsigned long long v23;  // [bp-0x410]
    unsigned int|unsigned long long v24;  // [bp-0x40c]
    unsigned int|unsigned long long v25;  // [bp-0x408]
    unsigned int|unsigned long long v26;  // [bp-0x404]
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
    char [2]|unsigned int|unsigned long v7;  // [bp-0x480]
    unsigned short v70;  // [bp-0x238]
    unsigned long long v71;  // [bp-0x230]
    unsigned long long v72;  // [bp-0x228]
    unsigned long long v73;  // [bp-0x220]
    unsigned long long v74;  // [bp-0x218]
    unsigned long long v75;  // [bp-0x210]
    unsigned long long v76;  // [bp-0x208]
    char v77;  // [bp-0x200]
    char|unsigned long long v78;  // [bp-0x1ff]
    unsigned short v79;  // [bp-0x1fe]
    unsigned int|unsigned long|unsigned long long v8;  // [bp-0x478]
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
    unsigned int|char|unsigned long v9;  // [bp-0x470]
    char v90;  // [bp-0xa6]
    char [2]|unsigned int|char|unsigned long long v93;  // rax
    unsigned int|unsigned long long v97;  // rax

    v143 = v127;
    v141 = v137;
    v130 = v132;
    v10 = v136;
    v8 = ((int)v126);
    v7 = v138;
    v11 = strlen(v132);
    if (v127 == 0)
    {
        v143 = &v20;
        gettime();
    }
    v128 = v143[0];
    v147 = v132;
    v9 = v143[1];
    while (true)
    {
        v93 = ((long long)v147[0]);
        if (((char)(((long long)v147[0]) <= 13)))
        {
            if (((char)(((long long)v93) <= 8)))
            {
                break;
            }
        }
        else
        {
            if (v93 != 32)
            {
                break;
            }
        }
        v147 += 1;
    }
    v125 = 4;
    v135 = "TZ=\"";
    v133 = v147;
    while (v125 != 0)
    {
        v125 -= 1;
        v149 = ((long long)v133[0]);
        v151 = ((long long)*(v135));
        v135 += v152;
        v133 += v152;
        break;
    }
    v150 = ((long long)(((char)(v149 > v151)) - 0 - ((char)(v149 < v151))));
    if (((char)v150) == 0)
    {
        v148 = ((long long)v147[4]);
        v133 = v147 + 4;
        if (((long long)v147[4]) != 0)
        {
            v127 = v133;
            v93 = v148;
            v135 = 1;
            while (true)
            {
                if (v93 == 92)
                {
                    v93 = v127 + 1;
                    v127 = ((long long)v127[1]);
                    tmp_4 = v127;
                    if (v127 != 34 && tmp_4 != 92)
                    {
                        break;
                    }
                }
                else if (v93 != 34)
                {
                    v93 = v127;
                    /* goto 4225883; */
                }
                if (v93 == 34)
                {
                    v6 = 0;
                    v7 = &stack_base-280;
                    if (v135 > 100)
                    {
                        v7 = v133;
                        v6 = malloc(v135);
                        if (v6 != 0)
                        {
                            v7 = v6;
                            /* goto 4228015; */
                            v6 = 0;
                            v143 = 0;
                            rpl_free();
                            v118 = r13<8>;
                            return v118;
                        }
                    }
                    if (v135 <= 100 || v6 != 0)
                    {
                        v127 = v7;
                        if (v148 != 34)
                        {
                            do
                            {
                                v93 = 0;
                                v93 = ((char)(v148 == 92));
                                v127 += 1;
                                tmp_12 = rax<8>;
                                v125 = ((long long)*(v133 + ((long long)(v148 == 92))));
                                v148 = ((long long)*(((long long)(v148 == 92)) + v133 + 1));
                                v133 = tmp_12 + v133 + 1;
                                tmp_48 = v125;
                                *(v127 + 0x1) = tmp_48;
                                tmp_19 = v148;
                            }
                            while (tmp_19 != 34);
                        }
                        *(v127) = 0;
                        v12 = v133;
                        v148 = (long long)tzalloc();
                        if (v148 != 0)
                        {
                            v147 = v12 + 1;
                            while (true)
                            {
                                v93 = ((long long)*(v147));
                                if (((char)(((long long)*(v147)) <= 13)))
                                {
                                    if (((char)(((long long)v93) <= 8)))
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    if (v93 != 32)
                                    {
                                        break;
                                    }
                                }
                                v147 += 1;
                            }
                            v93 = localtime_rz();
                            break;
                        }
                        else
                        {
                            v143 = 0;
                            rpl_free();
                            v118 = r13<8>;
                            return v118;
                        }
                    }
                }
                if (v127 == 34 && v93 == 92 || tmp_4 == 92 && v93 == 92 || v93 != 34 && v93 != 92)
                {
                    v127 = v93 + 1;
                    v93 = ((long long)v93[1]);
                    v135 += 1;
                    tmp_7 = v93;
                }
            }
            if (v93 == 34 && v148 != 0 && (v135 <= 100 || v6 != 0))
            {
                tmp_60 = ((long long)v147[0]);
                v56 = 0;
                v54 = 2;
                v97 = ((long long)((char)v8));
                v63 = 0;
                tmp_96 = v97;
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
                v97 = ((int)v44);
                v70 = 0;
                v29 = v97;
                v71 = 0;
                v127 = v45;
                v72 = 0;
                v75 = 0;
                v73 = 0;
                v74 = 0;
                v76 = 0;
                v77 = 0;
            }
            else if (True)
            {
                v93 = localtime_rz();
            }
        }
    }
    v93 = localtime_rz();
    if (v93 != 0)
    {
        v6 = 0;
        v148 = v137;
    }
    else
    {
        v6 = 0;
        v143 = 0;
        rpl_free();
        v118 = r13<8>;
        return v118;
    }
    if (v93 != 0 || ((char)v150) == 0 && ((long long)v147[4]) != 0)
    {
        tmp_60 = ((long long)v147[0]);
        v56 = 0;
        v54 = 2;
        v97 = ((long long)((char)v8));
        v63 = 0;
        tmp_96 = v97;
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
        v97 = ((int)v44);
        v70 = 0;
        v29 = v97;
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
        v143 = 0x76a700;
        while (true)
        {
            v46 = v143 + v128;
            if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
            {
                v97 = localtime_rz();
                if (v48 != 0 && v97 != 0)
                {
                    v127 = ((int)v47);
                    if (v47 != v84)
                    {
                        v85 = v48;
                        v86 = 269;
                        v87 = v127;
                        v88 = 0;
                    }
                }
                if (v48 == 0 || v97 == 0 || v47 == v84)
                {
                    v143 = ((long long)(((int)v143) + 0x76a700));
                }
            }
            if (v85 == 0 || v82 == 0)
            {
                break;
            }
            v84 = -1;
            v85 = 0;
            break;
            v97 = strcmp(v45, v85);
            if (v97 != 0)
            {
                break;
            }
        }
        v93 = yyparse();
    }
    if (v93 == 0 && (((char)v150) == 0 || v93 != 0) && (((long long)v147[4]) != 0 || v93 != 0))
    {
        if (v78 == 0)
        {
            v143 = ((long long)((char)v70));
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
            dcgettext(0x0, &g_412bcf, 0x5);
            dbg_printf();
            v133 = "'@timespec' - always UTC";
            if (((char)v70) == 0)
            {
                v133 = "parsed date/time string";
                if (v76 == 0)
                {
                    v128 = v7;
                    if (!(v7 != 0))
                    {
                        v133 = "system default";
                    }
                    else if (v137 != v148)
                    {
                        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_412c11, 0x5), ((int)v7), v137);
                    }
                    else
                    {
                        v134 = v7;
                        v125 = 5;
                        v135 = "UTC0";
                        while (v125 != 0)
                        {
                            v125 -= 1;
                            v150 = ((long long)*(v134));
                            v151 = ((long long)*(v135));
                            v135 += v152;
                            v134 += v152;
                            break;
                        }
                        v133 = "TZ=\"UTC0\" environment value or -u";
                        v150 = ((long long)(((char)(v150 > v151)) - 0 - ((char)(v150 < v151))));
                        if (((char)v150) != 0)
                        {
                            __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_412c2d, 0x5), ((int)v7), v137);
                        }
                    }
                }
            }
            if (v7 == 0 || v76 != 0 || ((char)v70) != 0 || v137 == v148 && ((char)v150) == 0)
            {
                __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, v133, 0x5), v125, v137);
            }
            if (v73 != 0)
            {
                v133 = stderr;
                if (v52 > 0)
                {
                    fwrite(", dst", 0x1, 0x5, stderr);
                }
            }
            if (v73 == 0 || v52 > 0)
            {
                v133 = stderr;
                /* goto 4228613; */
            }
            if (False)
            {
                __fprintf_chk(((int)stderr), 0x1, &g_412c5c, time_zone_str(), v137);
            }
            fputc(0xa, v133);
            v143 = ((long long)v78);
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
                        /* goto 4227808; */
                    }
                }
            }
        }
    }
    if (v93 != 0 && (((char)v150) == 0 || v93 != 0) && (((long long)v147[4]) != 0 || v93 != 0))
    {
        if (((long long)v78) != 0)
        {
            v130 += v11;
            if (v49 >= v130)
            {
                v135 = dcgettext(0x0, &g_412bb8, 0x5);
            }
            else
            {
                v135 = dcgettext(0x0, &g_413108, 0x5);
            }
            dbg_printf();
        }
    }
    if (v78 == 0 && v93 == 0 && ((long long)((char)v70)) == 0 && (((char)v150) == 0 || v93 != 0) && (((long long)v147[4]) != 0 || v93 != 0) && (v75 | v71 | v72 | v74 | v76 + v73) <= 1 || v93 == 0 && ((char)v70) == 0 && v78 != 0 && (((char)v150) == 0 || v93 != 0) && (((long long)v147[4]) != 0 || v93 != 0) && (v75 | v71 | v72 | v74 | v76 + v73) <= 1)
    {
        v130 = v55;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
        {
            if (v56 == 2)
            {
                v128 = (69 <= v130? 1900 : 2000) + v130;
                if (((long long)v143) == 0)
                {
                    v130 = v128;
                }
                else
                {
                    dcgettext(0x0, &g_413228, 0x5);
                    v130 = v128;
                    dbg_printf();
                }
            }
            v129 = 0;
            v93 = ((int)v130) - 1900;
            if (v130 < 1900 && !(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))) || ((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>)) && v130 >= 1900)
            {
                v129 = 1;
            }
            v26 = v93;
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
            v93 = v57 - 1;
            v25 = ((int)(v57 - 1));
            v133 = v93;
            v125 = ((long long)v78);
            if ((v133 != v133? 1 : ((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, t20, 0xffffffffffffffff<64>, cc_ndep<8>))) == 0)
            {
                v93 = v58;
                v24 = ((int)v58);
                v127 = v93;
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
                                    /* goto 4226957; */
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (((long long)v143) != 0)
            {
                dcgettext(0x0, &g_412c62, 0x5);
                dbg_printf();
            }
            v125 = ((long long)v78);
        }
    }
    if (...)
    {
        v133 = "error: year, month, or day overflow\n";
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
                        /* goto 4230264; */
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
                    /* goto 4230264; */
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
                v135 = dcgettext(0x0, &g_413280, 0x5);
            }
            else
            {
                v135 = dcgettext(0x0, &g_4132b0, 0x5);
            }
            dbg_printf();
            /* goto 4232683; */
        }
    }
    if (...)
    {
        if (((long long)v78) != 0)
        {
            dcgettext(0x0, &g_412c80, 0x5);
            dbg_printf();
            /* goto 4227808; */
        }
    }
    v135 = ((long long)v21);
    v140 = ((long long)*((int *)(((char *)&v21) + 4)));
    v127 = ((int)v24);
    v133 = ((int)v25);
    v29 = -1;
    if (...)
    {
        if (v73 == 0)
        {
            v93 = ((long long)v29);
        }
        else
        {
            v93 = ((int)v52);
            v29 = v52;
        }
        v34 = v127;
        v127 = ((int)v26);
        v31 = v135;
        v35 = v133;
        v32 = v140;
        v33 = v137;
        v36 = v127;
        v37 = v93;
        v27 = -1;
        v8 = (long long)mktime_z();
        v93 = mktime_ok();
        if (((long long)v93) == 0)
        {
            v15 = v76;
            v138 = ((int)v31);
            v137 = ((int)((int)v21));
            v125 = ((int)v32);
            v11 = v33;
            v12 = v23;
            v7 = v34;
            v8 = v24;
            v9 = v35;
            v10 = v25;
            v13 = v36;
            v14 = v26;
            v93 = ((long long)v78);
            if (((int)v32) != *((int *)(((char *)&v21) + 4)) || v16 != v17)
            {
                v19 = ((int)*((int *)(((char *)&v21) + 4)));
                v18 = v125;
                v17 = v137;
                v16 = v138;
                if (((long long)v93) != 0)
                {
                    dcgettext(0x0, &g_413318, 0x5);
                    dbg_printf();
                    v145 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_412cc8, 0x5);
                    dbg_printf();
                    v143 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_412ce6, 0x5);
                    dbg_printf();
                }
            }
            if (v16 == v17)
            {
                if (((int)v32) == *((int *)(((char *)&v21) + 4)))
                {
                    if (v7 == v8)
                    {
                        if (((int)v11) != v12)
                        {
                            if (v9 == v10)
                            {
                                if (v13 == v14)
                                {
                                    if (((long long)v78) != 0)
                                    {
                                        dcgettext(0x0, &g_413318, 0x5);
                                        dbg_printf();
                                        v142 = (long long)debug_strfdatetime.constprop.0();
                                        dcgettext(0x0, &g_412cc8, 0x5);
                                        dbg_printf();
                                        v144 = (long long)debug_strfdatetime.constprop.0();
                                        dcgettext(0x0, &g_412ce6, 0x5);
                                        v143 = 1;
                                        dbg_printf();
                                        v127 = &g_412ce5;
                                        "--" = "--";
                                        v117 = &g_412ce5;
                                        /* goto 4227484; */
                                    }
                                }
                            }
                        }
                    }
                }
                if (((int)v32) != *((int *)(((char *)&v21) + 4)) && ((long long)v93) != 0)
                {
                    v117 = &g_412ce5;
                    v127 = "--";
                    /* goto 4233336; */
                }
            }
            else if (((long long)v93) != 0)
            {
                v117 = "--";
                if (v18 == v19)
                {
                    v127 = &g_412ce5;
                    /* goto 4233336; */
                }
            }
            if (...)
            {
                if (((long long)v78) != 0)
                {
                    dcgettext(0x0, &g_413318, 0x5);
                    dbg_printf();
                    v146 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_412cc8, 0x5);
                    dbg_printf();
                    v143 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_412ce6, 0x5);
                    dbg_printf();
                    v117 = &g_412ce5;
                }
            }
            if (...)
            {
                v127 = v117;
            }
            if (...)
            {
                v125 = "--";
                v143 = 0;
            }
            if (...)
            {
                v125 = &g_412ce5;
            }
            if (...)
            {
                tmp_51 = v9 == v10;
                v4 = v117;
                v3 = v127;
                v2 = "--";
                v1 = v125;
                v0 = (tmp_51? &g_412ce5 : "--");
                __snprintf_chk();
                v105 = 52;
                while (true)
                {
                    v127 = v105;
                    if (v105 != 0)
                    {
                        v105 -= 1;
                    }
                    else
                    {
                        v127 = 0;
                    }
                    *(&stack_base-1160 + v127 + 992) = 0;
                    dbg_printf();
                    dcgettext(0x0, &g_412d04, 0x5);
                    dbg_printf();
                    if (v143 != 0)
                    {
                        dcgettext(0x0, &g_413380, 0x5);
                        dbg_printf();
                    }
                    if (v7 == v8 || v9 == v10)
                    {
                        break;
                    }
                    dcgettext(0x0, &g_4133b8, 0x5);
                    dbg_printf();
                }
                dcgettext(0x0, &g_4133e0, 0x5);
                dbg_printf();
                if (v15 != 0)
                {
                    v133 = dcgettext(0x0, &g_412d1c, 0x5);
                }
                else
                {
                    v133 = dcgettext(0x0, &g_412d2f, 0x5);
                }
                dbg_printf();
                /* goto 4227808; */
            }
        }
        else if (v72 != 0)
        {
            if (v71 == 0)
            {
                v93 = v50;
                v28 = -1;
                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
                {
                    v93 = v50 - ((long long)(v27 != v51));
                }
                v125 = v93 * 7;
                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
                {
                    v93 = ...;
                    tmp_16 = ((long long)*((int *)(((char *)&v23) + 4)));
                    v93 = ((int)(v93 + ((long long)*((int *)(((char *)&v23) + 4)))));
                    v24 = ((int)(v93 + ((long long)*((int *)(((char *)&v23) + 4)))));
                    if ((((long long)v24) != ((long long)v24)? 1 : ((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, t16, cc_ndep<8>))) == 0)
                    {
                        v29 = -1;
                        v8 = (long long)mktime_z();
                        if (((int)-1) >= 0)
                        {
                            if (v78 != 0)
                            {
                                v9 = (long long)debug_strfdatetime.constprop.0();
                                v143 = (long long)str_days.constprop.0();
                                dcgettext(0x0, &g_412d4b, 0x5);
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
        tmp_14 = *((long long *)(((char *)&v32) + -4));
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
            dcgettext(0x0, &g_412caa, 0x5);
            dbg_printf();
            /* goto 4227808; */
        }
    }
    if (...)
    {
        if (v78 != 0)
        {
            v128 = (long long)debug_strfdatetime.constprop.0();
            v7 = v50;
            v130 = (long long)str_days.constprop.0();
            dcgettext(0x0, &g_413408, 0x5);
            dbg_printf();
            /* goto 4227808; */
        }
    }
    if (...)
    {
        if (v78 != 0)
        {
            if (v71 == 0)
            {
                tmp_11 = ((long long)v25);
                v11 = v24;
                v9 = ((int)(tmp_11 + 1));
                tm_year_str();
                v5 = ((long long)v11);
                v4 = ((long long)v9);
                __snprintf_chk();
                dcgettext(0x0, &g_413458, 0x5);
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
                v93 = 0;
                /* goto 4232437; */
            }
        }
    }
    if (...)
    {
        v9 = (long long)str_days.constprop.0();
        dcgettext(0x0, &g_413488, 0x5);
        dbg_printf();
    }
    if (...)
    {
        v143 = (long long)debug_strfdatetime.constprop.0();
        dcgettext(0x0, &g_412d7e, 0x5);
        dbg_printf();
        v93 = ((long long)v78);
        if ((v63 | v64 | v65) != 0)
        {
            if (((long long)v78) != 0)
            {
                if (False)
                {
                    if (v24 != 15)
                    {
                        dcgettext(0x0, &g_4134c8, 0x5);
                        dbg_printf();
                    }
                }
                if (v23 != 12)
                {
                    dcgettext(0x0, &g_413530, 0x5);
                    dbg_printf();
                }
                v127 = 0;
                v127 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1028, size=4, endness=Iend_LE)), Load(addr=stack_base-624, size=8, endness=Iend_LE), cc_ndep<8>));
                if (reg_32<4> == 0)
                {
                    v9 = ((int)(((long long)*((int *)(((char *)&v25) + 4))) + 0));
                    /* goto 4230776; */
                }
            }
        }
    }
    if (...)
    {
        if (((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1028, size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) == 0)
        {
            v9 = ((int)(((long long)*((int *)(((char *)&v25) + 4))) + 0));
        }
    }
    if (...)
    {
        v125 = ((long long)v25) + 0;
        v11 = ((long long)v25) + 0;
        if (((int)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1028, size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) == 0)
        {
            v93 = 0;
            v93 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Conv(32->64, Load(addr=stack_base-1036, size=4, endness=Iend_LE)), Load(addr=stack_base-608, size=8, endness=Iend_LE), cc_ndep<8>));
            if (reg_16<4> == 0)
            {
                tmp_16 = ((long long)v9);
                v24 = ((int)(((long long)v24) + 0));
                v27 = -1;
                v26 = ((int)tmp_16);
                v25 = ((int)v11);
                v21 = *((long long *)(((char *)&v32) + -4));
                v23 = v33;
                v29 = v37;
                v8 = (long long)mktime_z();
                if (((int)v27) >= 0)
                {
                    v93 = ((long long)v78);
                    if (((long long)v78) == 0)
                    {
                        if (v76 != 0)
                        {
                            v133 = v8 - (((long long)v53) - v30);
                        }
                    }
                    else
                    {
                        v14 = v65;
                        v13 = 0;
                        v12 = 0;
                        dcgettext(0x0, &g_4135b8, 0x5);
                        dbg_printf();
                        v12 = (long long)debug_strfdatetime.constprop.0();
                        dcgettext(0x0, &g_412db7, 0x5);
                        dbg_printf();
                        if (v37 != -1)
                        {
                            if (v37 != v29)
                            {
                                dcgettext(0x0, &g_4135f8, 0x5);
                                dbg_printf();
                            }
                        }
                        if (v65 == 0)
                        {
                            if (((int)(((long long)v24) + 0)) != v24 || v64 == 0 && ((int)v11) != v25)
                            {
                                dcgettext(0x0, &g_413638, 0x5);
                                dbg_printf();
                                v12 = &stack_base-437;
                                v9 = (long long)tm_year_str();
                                dcgettext(0x0, &g_413678, 0x5);
                                dbg_printf();
                                tmp_18 = ((long long)v25);
                                v11 = v24;
                                v9 = ((int)(tmp_18 + 1));
                                v143 = (long long)tm_year_str();
                                dcgettext(0x0, &g_4136a0, 0x5);
                                dbg_printf();
                            }
                        }
                        v93 = ((long long)v78);
                    }
                }
                else if (v78 != 0)
                {
                    v130 = (long long)debug_strfdatetime.constprop.0();
                    dcgettext(0x0, &g_413578, 0x5);
                    dbg_printf();
                    /* goto 4227808; */
                }
            }
        }
    }
    if (...)
    {
        if (v78 != 0)
        {
            dcgettext(0x0, &g_412d98, 0x5);
            dbg_printf();
            /* goto 4227808; */
        }
    }
    if (...)
    {
        v133 = v8 - (((long long)v53) - v30);
        if ((((long long)(((((long long)v53) ^ v30) & (((long long)v53) ^ ((long long)v53) - v30)) >> 63)) | ((v8 ^ ((long long)v53) - v30) & (v8 ^ v8 - (((long long)v53) - v30))) >> 63) != 0)
        {
            if (((long long)v93) != 0)
            {
                dcgettext(0x0, &g_4136c8, 0x5);
                dbg_printf();
                /* goto 4227808; */
            }
        }
    }
    v8 = v133;
    if (...)
    {
        if (((long long)v93) != 0)
        {
            v143 = (long long)debug_strfdatetime.constprop.0();
            dcgettext(0x0, &g_412dd1, 0x5);
            dbg_printf();
            v138 = v66 * 3600;
            if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
            {
                v128 = ((long long)v78);
                v125 = ...;
                v93 = ((long long)(...));
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
            v93 = ((long long)(...));
            v130 = v8 + v140;
            v127 = v67 * 60;
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>)))
            {
                /* goto 4227808; */
            }
        }
    }
    if (...)
    {
        v130 += v127;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=stack_base-592, size=8, endness=Iend_LE), 0x3c<64>, cc_ndep<8>))))
        {
            v130 += v68;
            v130 += ((long long)v93);
            v10->field_0 = v130;
            v10->field_8 = v125;
            if (((long long)v128) != 0)
            {
                if (False)
                {
                    v9 = 0;
                    v8 = 0;
                    dcgettext(0x0, &g_413728, 0x5);
                    dbg_printf();
                    dcgettext(0x0, &g_413778, 0x5);
                    dbg_printf();
                    if (v29 != -1)
                    {
                        v93 = localtime_rz();
                        if (v93 != 0)
                        {
                            if (v29 != v47)
                            {
                                dcgettext(0x0, &g_4137a0, 0x5);
                                dbg_printf();
                            }
                        }
                    }
                }
            }
            v143 = ((long long)v78);
        }
    }
    if (...)
    {
        if (((long long)v128) != 0)
        {
            v133 = "error: adding relative time caused an overflow\n";
            /* goto 4229573; */
        }
    }
    if (...)
    {
        if (((long long)v143) != 0)
        {
            v133 = "timezone: system default\n";
            if (v7 != 0)
            {
                v133 = v7;
                v125 = 5;
                v135 = "UTC0";
                while (v125 != 0)
                {
                    v125 -= 1;
                    v150 = ((long long)*(v133));
                    v151 = ((long long)*(v135));
                    v135 += v152;
                    v133 += v152;
                    break;
                }
                v150 = ((long long)(((char)(v150 > v151)) - 0 - ((char)(v150 < v151))));
                if (((char)v150) == 0)
                {
                    v133 = "timezone: Universal Time\n";
                }
                else
                {
                    dcgettext(0x0, &g_4137e0, 0x5);
                    dbg_printf();
                    /* goto 4228753; */
                }
            }
            if (((char)v150) == 0 || v7 == 0)
            {
                dcgettext(0x0, v133, 0x5);
                dbg_printf();
            }
            dcgettext(0x0, &g_413808, 0x5);
            dbg_printf();
            v109 = gmtime_r(((int)v10), ((int)&v46));
            if (v109 != 0)
            {
                v130 = (long long)debug_strfdatetime.constprop.0();
                dcgettext(0x0, &g_412e1f, 0x5);
                dbg_printf();
            }
            v93 = localtime_rz();
            if (v93 != 0)
            {
                v147 = (long long)time_zone_str();
                v130 = (long long)debug_strfdatetime.constprop.0();
                dcgettext(0x0, &g_412e30, 0x5);
                dbg_printf();
            }
        }
    }
    if (...)
    {
        dcgettext(0x0, v133, 0x5);
        dbg_printf();
    }
    if (...)
    {
        if (v148 != v141)
        {
            tzfree();
            rpl_free();
            v118 = r13<8>;
            return v118;
        }
        rpl_free();
        v118 = r13<8>;
        return v118;
    }
}
