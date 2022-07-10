typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 crctab;
extern char g_4187ed;
extern char g_418a15;
extern char g_418a25;

int cksum_pclmul()
{
    BOT tmp_26;  // tmp #26
    BOT tmp_133;  // tmp #133
    BOT tmp_130;  // tmp #130
    BOT tmp_134;  // tmp #134
    BOT tmp_135;  // tmp #135
    BOT tmp_139;  // tmp #139
    BOT tmp_129;  // tmp #129
    BOT tmp_24;  // tmp #24
    BOT tmp_141;  // tmp #141
    BOT tmp_128;  // tmp #128
    BOT tmp_143;  // tmp #143
    BOT tmp_131;  // tmp #131
    BOT tmp_144;  // tmp #144
    BOT tmp_145;  // tmp #145
    BOT tmp_149;  // tmp #149
    BOT tmp_25;  // tmp #25
    BOT tmp_151;  // tmp #151
    BOT tmp_179;  // tmp #179
    BOT tmp_176;  // tmp #176
    BOT tmp_180;  // tmp #180
    BOT tmp_181;  // tmp #181
    BOT tmp_185;  // tmp #185
    BOT tmp_175;  // tmp #175
    BOT tmp_66;  // tmp #66
    BOT tmp_187;  // tmp #187
    BOT tmp_174;  // tmp #174
    BOT tmp_189;  // tmp #189
    BOT tmp_177;  // tmp #177
    BOT tmp_190;  // tmp #190
    BOT tmp_191;  // tmp #191
    BOT tmp_195;  // tmp #195
    BOT tmp_67;  // tmp #67
    BOT tmp_197;  // tmp #197
    BOT tmp_207;  // tmp #207
    BOT tmp_204;  // tmp #204
    BOT tmp_208;  // tmp #208
    BOT tmp_209;  // tmp #209
    BOT tmp_213;  // tmp #213
    BOT tmp_203;  // tmp #203
    BOT tmp_86;  // tmp #86
    BOT tmp_215;  // tmp #215
    BOT tmp_202;  // tmp #202
    BOT tmp_217;  // tmp #217
    BOT tmp_205;  // tmp #205
    BOT tmp_218;  // tmp #218
    BOT tmp_219;  // tmp #219
    BOT tmp_223;  // tmp #223
    BOT tmp_87;  // tmp #87
    BOT tmp_225;  // tmp #225
    BOT tmp_235;  // tmp #235
    BOT tmp_232;  // tmp #232
    BOT tmp_236;  // tmp #236
    BOT tmp_237;  // tmp #237
    BOT tmp_241;  // tmp #241
    BOT tmp_231;  // tmp #231
    BOT tmp_106;  // tmp #106
    BOT tmp_243;  // tmp #243
    BOT tmp_230;  // tmp #230
    BOT tmp_245;  // tmp #245
    BOT tmp_233;  // tmp #233
    BOT tmp_246;  // tmp #246
    BOT tmp_247;  // tmp #247
    BOT tmp_251;  // tmp #251
    BOT tmp_107;  // tmp #107
    BOT tmp_253;  // tmp #253
    BOT tmp_201;  // tmp #201
    BOT tmp_198;  // tmp #198
    BOT tmp_70;  // tmp #70
    BOT tmp_196;  // tmp #196
    BOT tmp_211;  // tmp #211
    BOT tmp_199;  // tmp #199
    BOT tmp_212;  // tmp #212
    BOT tmp_71;  // tmp #71
    BOT tmp_234;  // tmp #234
    BOT tmp_239;  // tmp #239
    BOT tmp_229;  // tmp #229
    BOT tmp_109;  // tmp #109
    BOT tmp_228;  // tmp #228
    BOT tmp_244;  // tmp #244
    BOT tmp_249;  // tmp #249
    BOT tmp_110;  // tmp #110
    BOT tmp_265;  // tmp #265
    BOT tmp_262;  // tmp #262
    BOT tmp_266;  // tmp #266
    BOT tmp_267;  // tmp #267
    BOT tmp_271;  // tmp #271
    BOT tmp_261;  // tmp #261
    BOT tmp_273;  // tmp #273
    BOT tmp_260;  // tmp #260
    BOT tmp_275;  // tmp #275
    BOT tmp_263;  // tmp #263
    BOT tmp_276;  // tmp #276
    BOT tmp_277;  // tmp #277
    BOT tmp_281;  // tmp #281
    BOT tmp_283;  // tmp #283
    BOT tmp_289;  // tmp #289
    BOT tmp_286;  // tmp #286
    BOT tmp_290;  // tmp #290
    BOT tmp_291;  // tmp #291
    BOT tmp_295;  // tmp #295
    BOT tmp_285;  // tmp #285
    BOT tmp_152;  // tmp #152
    BOT tmp_297;  // tmp #297
    BOT tmp_284;  // tmp #284
    BOT tmp_299;  // tmp #299
    BOT tmp_287;  // tmp #287
    BOT tmp_300;  // tmp #300
    BOT tmp_301;  // tmp #301
    BOT tmp_305;  // tmp #305
    BOT tmp_153;  // tmp #153
    BOT tmp_307;  // tmp #307
    BOT tmp_97;  // tmp #97
    BOT tmp_94;  // tmp #94
    BOT tmp_98;  // tmp #98
    BOT tmp_99;  // tmp #99
    BOT tmp_103;  // tmp #103
    BOT tmp_93;  // tmp #93
    BOT tmp_17;  // tmp #17
    BOT tmp_105;  // tmp #105
    BOT tmp_92;  // tmp #92
    BOT tmp_95;  // tmp #95
    BOT tmp_108;  // tmp #108
    BOT tmp_113;  // tmp #113
    BOT tmp_18;  // tmp #18
    BOT tmp_115;  // tmp #115
    BOT tmp_121;  // tmp #121
    BOT tmp_118;  // tmp #118
    BOT tmp_122;  // tmp #122
    BOT tmp_123;  // tmp #123
    BOT tmp_127;  // tmp #127
    BOT tmp_117;  // tmp #117
    BOT tmp_35;  // tmp #35
    BOT tmp_116;  // tmp #116
    BOT tmp_119;  // tmp #119
    BOT tmp_132;  // tmp #132
    BOT tmp_137;  // tmp #137
    BOT tmp_36;  // tmp #36
    BOT tmp_161;  // tmp #161
    BOT tmp_158;  // tmp #158
    BOT tmp_162;  // tmp #162
    BOT tmp_163;  // tmp #163
    BOT tmp_167;  // tmp #167
    BOT tmp_157;  // tmp #157
    BOT tmp_63;  // tmp #63
    BOT tmp_169;  // tmp #169
    BOT tmp_156;  // tmp #156
    BOT tmp_171;  // tmp #171
    BOT tmp_159;  // tmp #159
    BOT tmp_172;  // tmp #172
    BOT tmp_173;  // tmp #173
    BOT tmp_64;  // tmp #64
    BOT tmp_186;  // tmp #186
    BOT tmp_183;  // tmp #183
    BOT tmp_188;  // tmp #188
    BOT tmp_192;  // tmp #192
    BOT tmp_182;  // tmp #182
    BOT tmp_83;  // tmp #83
    BOT tmp_194;  // tmp #194
    BOT tmp_184;  // tmp #184
    BOT tmp_84;  // tmp #84
    BOT tmp_34;  // tmp #34
    BOT tmp_31;  // tmp #31
    BOT tmp_40;  // tmp #40
    BOT tmp_30;  // tmp #30
    BOT tmp_16;  // tmp #16
    BOT tmp_42;  // tmp #42
    BOT tmp_29;  // tmp #29
    BOT tmp_44;  // tmp #44
    BOT tmp_32;  // tmp #32
    BOT tmp_45;  // tmp #45
    BOT tmp_46;  // tmp #46
    BOT tmp_50;  // tmp #50
    BOT tmp_52;  // tmp #52
    BOT tmp_60;  // tmp #60
    BOT tmp_57;  // tmp #57
    BOT tmp_61;  // tmp #61
    BOT tmp_62;  // tmp #62
    BOT tmp_56;  // tmp #56
    BOT tmp_33;  // tmp #33
    BOT tmp_68;  // tmp #68
    BOT tmp_55;  // tmp #55
    BOT tmp_58;  // tmp #58
    BOT tmp_72;  // tmp #72
    BOT tmp_76;  // tmp #76
    BOT tmp_78;  // tmp #78
    BOT tmp_27;  // tmp #27
    BOT tmp_28;  // tmp #28
    BOT tmp_23;  // tmp #23
    BOT tmp_13;  // tmp #13
    BOT tmp_22;  // tmp #22
    BOT tmp_37;  // tmp #37
    BOT tmp_38;  // tmp #38
    BOT tmp_39;  // tmp #39
    BOT tmp_43;  // tmp #43
    BOT tmp_14;  // tmp #14
    BOT tmp_12;  // tmp #12
    unsigned long v0;  // [bp-0x1070]
    unsigned long v1;  // [bp-0x1068]
    unsigned long v10;  // [bp-0x10]
    unsigned long v11;  // [bp-0x8]
    unsigned long v13;  // [bp+0xefb0]
    unsigned long v14;  // [bp+0xefc0]
    unsigned long v15;  // [bp+0xefd0]
    unsigned long long v16;  // [bp+0xefd8]
    unsigned long long v17;  // [bp+0xefe0]
    unsigned long v18;  // [bp+0xefe8]
    unsigned long long v19;  // rax
    unsigned long v2;  // [bp-0x1060]
    struct_1 *|unsigned long long v20;  // rax
    uint128_t [4] v21;  // rcx
    uint128_t [4] v22;  // rdx
    unsigned long long v23;  // rbx
    unsigned long|unsigned int v24;  // rbx
    unsigned long v25;  // rbx
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rsi
    char *v28;  // rdi
    unsigned long long v29;  // r12b
    unsigned long long v3;  // [bp-0x1058]
    unsigned long long v30;  // r12
    unsigned long v31;  // r12
    unsigned long long v32;  // r13
    unsigned long|struct_1 * v34;  // r14
    unsigned long long v35;  // r14
    unsigned long v36;  // r15
    unsigned long long v37;  // r15
    struct_1 *v38;  // fs
    BOT v39;  // xmm0
    uint128_t v4[4];  // [bp-0x1050]
    BOT v40;  // xmm3
    unsigned long|BOT v41;  // xmm4lq
    BOT v42;  // xmm6
    char v5;  // [bp-0x1048]
    unsigned long v6;  // [bp-0x1030]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x20]
    unsigned long v9;  // [bp-0x18]

    v11 = v36;
    v10 = v34;
    v9 = &v5;
    v8 = v31;
    rsp<8> = &stack_base-48;
    v7 = v24;
    do
    {
        rsp<8> = rsp<8> - 0x1000;
        v6 = v6;
    }
    while (rsp<8> != &stack_base-65584);
    rsp<8> = rsp<8> - 40;
    v4 = v22;
    v14 = *(v38 + 0x28);
    v29 = ((long long)(((int)v31) | ((int)(v22 == 0))));
    tmp_26 = v29;
    v29 = tmp_26 | ((char)(v28 == 0));
    if (((long long)(tmp_26 | ((char)(v28 == 0)))) == 0)
    {
        v34 = v27;
        v26 = 0;
        v24 = 0;
        while (true)
        {
            rsp<8> = rsp<8> - 8;
            v2 = &g_4187ed;
            v20 = fread_unlocked(v22, 0x1, 0x10000, v28);
            if (v20 != 0)
            {
                v26 += v20;
                if (!(((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rbp<8>, rax<8>, cc_ndep<8>))))
                {
                    if (v20 > 127)
                    {
                        v21 = v22;
                        v27 = v20 - 128 >> 6;
                        tmp_133 = BinaryOp SarN;
                        tmp_134 = BinaryOp SarN;
                        tmp_139 = BinaryOp Perm;
                        tmp_141 = BinaryOp Perm;
                        tmp_143 = BinaryOp SarN;
                        tmp_144 = BinaryOp SarN;
                        tmp_149 = BinaryOp Perm;
                        tmp_151 = BinaryOp Perm;
                        v39 = (((int)v24) CONCAT 0 CONCAT 0) ^ ((tmp_141 & tmp_134 | tmp_139 & !(tmp_134)) & !(tmp_133) CONCAT (tmp_151 & tmp_144 | tmp_149 & !(tmp_144)) & !(tmp_143));
                        v22 = ((v20 - 128 >> 6) + 1) * 64 + v22;
                        tmp_179 = BinaryOp SarN;
                        tmp_180 = BinaryOp SarN;
                        tmp_185 = BinaryOp Perm;
                        tmp_187 = BinaryOp Perm;
                        tmp_189 = BinaryOp SarN;
                        tmp_190 = BinaryOp SarN;
                        tmp_195 = BinaryOp Perm;
                        tmp_197 = BinaryOp Perm;
                        v40 = (tmp_187 & tmp_180 | tmp_185 & !(tmp_180)) & !(tmp_179) CONCAT (tmp_197 & tmp_190 | tmp_195 & !(tmp_190)) & !(tmp_189);
                        tmp_207 = BinaryOp SarN;
                        tmp_208 = BinaryOp SarN;
                        tmp_213 = BinaryOp Perm;
                        tmp_215 = BinaryOp Perm;
                        tmp_217 = BinaryOp SarN;
                        tmp_218 = BinaryOp SarN;
                        tmp_223 = BinaryOp Perm;
                        tmp_225 = BinaryOp Perm;
                        v42 = (tmp_215 & tmp_208 | tmp_213 & !(tmp_208)) & !(tmp_207) CONCAT (tmp_225 & tmp_218 | tmp_223 & !(tmp_218)) & !(tmp_217);
                        tmp_235 = BinaryOp SarN;
                        tmp_236 = BinaryOp SarN;
                        tmp_241 = BinaryOp Perm;
                        tmp_243 = BinaryOp Perm;
                        tmp_245 = BinaryOp SarN;
                        tmp_246 = BinaryOp SarN;
                        tmp_251 = BinaryOp Perm;
                        tmp_253 = BinaryOp Perm;
                        v41 = ((long long)((tmp_243 & tmp_236 | tmp_241 & !(tmp_236)) & !(tmp_235) CONCAT (tmp_253 & tmp_246 | tmp_251 & !(tmp_246)) & !(tmp_245)));
                        do
                        {
                            v21 += 64;
                            tmp_201 = BinaryOp SarN;
                            tmp_202 = BinaryOp SarN;
                            tmp_207 = BinaryOp Perm;
                            tmp_209 = BinaryOp Perm;
                            tmp_211 = BinaryOp SarN;
                            tmp_212 = BinaryOp SarN;
                            tmp_217 = BinaryOp Perm;
                            tmp_219 = BinaryOp Perm;
                            v39 = ([D] amd64g_calculate_pclmul(Conv(128->64, (xmm0<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, (xmm0<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x0<64>)) ^ ([D] amd64g_calculate_pclmul(Conv(128->64, xmm0<16>), Conv(128->64, 0xe6228b11<128>), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, xmm0<16>), Conv(128->64, 0xe6228b11<128>), 0x0<64>)) ^ ((tmp_209 & tmp_202 | tmp_207 & !(tmp_202)) & !(tmp_201) CONCAT (tmp_219 & tmp_212 | tmp_217 & !(tmp_212)) & !(tmp_211));
                            tmp_233 = BinaryOp SarN;
                            tmp_234 = BinaryOp SarN;
                            tmp_239 = BinaryOp Perm;
                            tmp_241 = BinaryOp Perm;
                            tmp_243 = BinaryOp SarN;
                            tmp_244 = BinaryOp SarN;
                            tmp_249 = BinaryOp Perm;
                            tmp_251 = BinaryOp Perm;
                            v40 = ([D] amd64g_calculate_pclmul(Conv(128->64, (xmm3<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, (xmm3<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x0<64>)) ^ ([D] amd64g_calculate_pclmul(Conv(128->64, xmm3<16>), Conv(128->64, 0xe6228b11<128>), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, xmm3<16>), Conv(128->64, 0xe6228b11<128>), 0x0<64>)) ^ ((tmp_241 & tmp_234 | tmp_239 & !(tmp_234)) & !(tmp_233) CONCAT (tmp_251 & tmp_244 | tmp_249 & !(tmp_244)) & !(tmp_243));
                            tmp_265 = BinaryOp SarN;
                            tmp_266 = BinaryOp SarN;
                            tmp_271 = BinaryOp Perm;
                            tmp_273 = BinaryOp Perm;
                            tmp_275 = BinaryOp SarN;
                            tmp_276 = BinaryOp SarN;
                            tmp_281 = BinaryOp Perm;
                            tmp_283 = BinaryOp Perm;
                            tmp_289 = BinaryOp SarN;
                            tmp_290 = BinaryOp SarN;
                            tmp_295 = BinaryOp Perm;
                            tmp_297 = BinaryOp Perm;
                            tmp_299 = BinaryOp SarN;
                            tmp_300 = BinaryOp SarN;
                            tmp_305 = BinaryOp Perm;
                            tmp_307 = BinaryOp Perm;
                            v41 = ([D] amd64g_calculate_pclmul(reg_352<8>, Conv(128->64, 0xe6228b11<128>), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(reg_352<8>, Conv(128->64, 0xe6228b11<128>), 0x0<64>)) ^ ([D] amd64g_calculate_pclmul(Conv(128->64, (xmm4<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, (xmm4<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x0<64>)) ^ ((tmp_273 & tmp_266 | tmp_271 & !(tmp_266)) & !(tmp_265) CONCAT (tmp_283 & tmp_276 | tmp_281 & !(tmp_276)) & !(tmp_275));
                            v42 = ([D] amd64g_calculate_pclmul(Conv(128->64, (xmm6<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, (xmm6<16> >> 0x40<8>)), Conv(128->64, (0xe6228b11<128> >> 0x40<8>)), 0x0<64>)) ^ ([D] amd64g_calculate_pclmul(Conv(128->64, xmm6<16>), Conv(128->64, 0xe6228b11<128>), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, xmm6<16>), Conv(128->64, 0xe6228b11<128>), 0x0<64>)) ^ ((tmp_297 & tmp_290 | tmp_295 & !(tmp_290)) & !(tmp_289) CONCAT (tmp_307 & tmp_300 | tmp_305 & !(tmp_300)) & !(tmp_299));
                        }
                        while (v21 != v22);
                        tmp_97 = BinaryOp SarN;
                        tmp_98 = BinaryOp SarN;
                        tmp_103 = BinaryOp Perm;
                        tmp_105 = BinaryOp Perm;
                        tmp_107 = BinaryOp SarN;
                        tmp_108 = BinaryOp SarN;
                        tmp_113 = BinaryOp Perm;
                        tmp_115 = BinaryOp Perm;
                        tmp_121 = BinaryOp SarN;
                        tmp_122 = BinaryOp SarN;
                        tmp_127 = BinaryOp Perm;
                        tmp_129 = BinaryOp Perm;
                        tmp_131 = BinaryOp SarN;
                        tmp_132 = BinaryOp SarN;
                        tmp_137 = BinaryOp Perm;
                        tmp_139 = BinaryOp Perm;
                        v24 = 0;
                        tmp_161 = BinaryOp SarN;
                        tmp_162 = BinaryOp SarN;
                        tmp_167 = BinaryOp Perm;
                        tmp_169 = BinaryOp Perm;
                        tmp_171 = BinaryOp SarN;
                        tmp_172 = BinaryOp SarN;
                        tmp_177 = BinaryOp Perm;
                        tmp_179 = BinaryOp Perm;
                        v22[0] = (tmp_129 & tmp_122 | tmp_127 & !(tmp_122)) & !(tmp_121) CONCAT (tmp_139 & tmp_132 | tmp_137 & !(tmp_132)) & !(tmp_131);
                        tmp_186 = BinaryOp SarN;
                        tmp_187 = BinaryOp SarN;
                        tmp_192 = BinaryOp Perm;
                        tmp_194 = BinaryOp Perm;
                        tmp_196 = BinaryOp SarN;
                        tmp_197 = BinaryOp SarN;
                        tmp_202 = BinaryOp Perm;
                        tmp_204 = BinaryOp Perm;
                        v20 = v20 + (0 - v27) * 64 - 64;
                        v22[1] = (tmp_105 & tmp_98 | tmp_103 & !(tmp_98)) & !(tmp_97) CONCAT (tmp_115 & tmp_108 | tmp_113 & !(tmp_108)) & !(tmp_107);
                        v22[2] = (tmp_169 & tmp_162 | tmp_167 & !(tmp_162)) & !(tmp_161) CONCAT (tmp_179 & tmp_172 | tmp_177 & !(tmp_172)) & !(tmp_171);
                        v22[3] = (tmp_194 & tmp_187 | tmp_192 & !(tmp_187)) & !(tmp_186) CONCAT (tmp_204 & tmp_197 | tmp_202 & !(tmp_197)) & !(tmp_196);
                    }
                    else if (v20 <= 31)
                    {
                        v22 = r13<8>;
                        /* goto 4294694; */
                    }
                    else
                    {
                        /* goto 4295088; */
                    }
                    if (v20 > 127 || v20 > 31)
                    {
                        tmp_34 = BinaryOp SarN;
                        tmp_35 = BinaryOp SarN;
                        tmp_40 = BinaryOp Perm;
                        tmp_42 = BinaryOp Perm;
                        tmp_44 = BinaryOp SarN;
                        tmp_45 = BinaryOp SarN;
                        tmp_50 = BinaryOp Perm;
                        tmp_52 = BinaryOp Perm;
                        v39 = ((tmp_42 & tmp_35 | tmp_40 & !(tmp_35)) & !(tmp_34) CONCAT (tmp_52 & tmp_45 | tmp_50 & !(tmp_45)) & !(tmp_44)) ^ (reg_40<4> CONCAT 0 CONCAT 0);
                        do
                        {
                            v20 = rax<8> - 16;
                            v22 = rdx<8> + 16;
                            tmp_60 = BinaryOp SarN;
                            tmp_61 = BinaryOp SarN;
                            tmp_66 = BinaryOp Perm;
                            tmp_68 = BinaryOp Perm;
                            tmp_70 = BinaryOp SarN;
                            tmp_71 = BinaryOp SarN;
                            tmp_76 = BinaryOp Perm;
                            tmp_78 = BinaryOp Perm;
                            v39 = ([D] amd64g_calculate_pclmul(Conv(128->64, (xmm0<16> >> 0x40<8>)), Conv(128->64, (0xe8a45605<128> >> 0x40<8>)), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, (xmm0<16> >> 0x40<8>)), Conv(128->64, (0xe8a45605<128> >> 0x40<8>)), 0x0<64>)) ^ ([D] amd64g_calculate_pclmul(Conv(128->64, xmm0<16>), Conv(128->64, 0xe8a45605<128>), 0x1<64>) CONCAT [D] amd64g_calculate_pclmul(Conv(128->64, xmm0<16>), Conv(128->64, 0xe8a45605<128>), 0x0<64>)) ^ ((tmp_68 & tmp_61 | tmp_66 & !(tmp_61)) & !(tmp_60) CONCAT (tmp_78 & tmp_71 | tmp_76 & !(tmp_71)) & !(tmp_70));
                        }
                        while (v20 > 31);
                        tmp_27 = BinaryOp SarN;
                        tmp_28 = BinaryOp SarN;
                        tmp_33 = BinaryOp Perm;
                        tmp_35 = BinaryOp Perm;
                        tmp_37 = BinaryOp SarN;
                        tmp_38 = BinaryOp SarN;
                        tmp_43 = BinaryOp Perm;
                        tmp_45 = BinaryOp Perm;
                        v24 = 0;
                        v22[0] = (tmp_35 & tmp_28 | tmp_33 & !(tmp_28)) & !(tmp_27) CONCAT (tmp_45 & tmp_38 | tmp_43 & !(tmp_38)) & !(tmp_37);
                    }
                    v20 += rdx<8>;
                    do
                    {
                        v22 = rdx<8> + 1;
                        tmp_28 = rbx<8>;
                        v25 = rbx<8> % 0x1000000;
                        tmp_12 = bl<1>;
                        v24 = tmp_28 * 0x100 ^ *(crctab + ((long long)(tmp_12 ^ v22[0])) * 8);
                    }
                    while (v22 != v20);
                    v20 = v3;
                    v34->field_0 = v24;
                    v29 = 1;
                    v20->field_0 = v26;
                    if ((v13 ^ *(v38 + 0x28)) == 0)
                    {
                        v19 = v29;
                        v23 = v14;
                        v30 = v15;
                        v32 = v16;
                        v35 = v17;
                        v37 = v18;
                        return v19;
                    }
                    rsp<8> = rsp<8> - 8;
                    v0 = &g_418a25;
                    __stack_chk_fail(); /* do not return */
                }
                rsp<8> = rsp<8> - 8;
                v1 = &g_418a15;
                *(__errno_location() + None) = 75;
                if ((v13 ^ *(v38 + 0x28)) == 0)
                {
                    v19 = v29;
                    v23 = v14;
                    v30 = v15;
                    v32 = v16;
                    v35 = v17;
                    v37 = v18;
                    return v19;
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v0 = &g_418a25;
                    __stack_chk_fail(); /* do not return */
                }
            }
            v20 = v3;
            v34->field_0 = v24;
            v29 = 1;
            v20->field_0 = v26;
            if ((v13 ^ *(v38 + 0x28)) == 0)
            {
                v19 = v29;
                v23 = v14;
                v30 = v15;
                v32 = v16;
                v35 = v17;
                v37 = v18;
                return v19;
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v0 = &g_418a25;
                __stack_chk_fail(); /* do not return */
            }
        }
    }
    v29 = 0;
    if ((v13 ^ *(v38 + 0x28)) == 0)
    {
        v19 = v29;
        v23 = v14;
        v30 = v15;
        v32 = v16;
        v35 = v17;
        v37 = v18;
        return v19;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v0 = &g_418a25;
        __stack_chk_fail(); /* do not return */
    }
}
