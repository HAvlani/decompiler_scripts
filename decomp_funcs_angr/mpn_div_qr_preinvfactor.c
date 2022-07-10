typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpn_div_qr_preinv()
{
    BOT tmp_31;  // tmp #31
    BOT tmp_8;  // tmp #8
    BOT tmp_3;  // tmp #3
    BOT tmp_9;  // tmp #9
    BOT tmp_4;  // tmp #4
    BOT tmp_42;  // tmp #42
    BOT tmp_21;  // tmp #21
    BOT tmp_22;  // tmp #22
    BOT tmp_241;  // tmp #241
    BOT tmp_246;  // tmp #246
    BOT tmp_57;  // tmp #57
    BOT tmp_277;  // tmp #277
    BOT tmp_384;  // tmp #384
    BOT tmp_179;  // tmp #179
    BOT tmp_14;  // tmp #14
    unsigned long long v0[2];  // [bp-0xa8]
    unsigned long long v1[2];  // [bp-0xa0]
    unsigned int v10;  // [bp-0x54]
    unsigned long long v11;  // [bp-0x50]
    unsigned long v12;  // [bp-0x48]
    unsigned long v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long|unsigned int v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long [2] v18;  // rax
    unsigned long long|unsigned int v19;  // rax
    unsigned long|unsigned long long [2] v2;  // [bp-0x98]
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rcx
    unsigned long|unsigned long long v23;  // rdx
    unsigned long long [2] v24;  // rdx
    unsigned long long v25;  // rbx
    unsigned long long|struct_1 * v26;  // rbx
    unsigned long long v27;  // rbp
    unsigned long long|struct_1 * v28;  // rbp
    unsigned long long v29;  // rsi
    struct_0 *|unsigned long|unsigned long long v3;  // [bp-0x90]
    char v30;  // sil
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rsi
    unsigned long long v33;  // rsi
    unsigned long long|char v34;  // dil
    unsigned long long v35;  // r8
    unsigned long long v36;  // r8
    unsigned long v37;  // r8
    struct_0 *|unsigned long long v38;  // r9
    unsigned long long v39;  // r9
    unsigned long|unsigned int v4;  // [bp-0x88]
    struct_0 *v40;  // r9
    unsigned long long v41;  // r10
    unsigned long long v42;  // r10
    unsigned long long v43;  // r11
    struct_1 * v44;  // r12
    unsigned long long v45;  // r12
    unsigned long long v46;  // r13
    unsigned long long v47;  // r13
    unsigned long long v48;  // r13
    unsigned long long v49;  // r14
    unsigned long v5;  // [bp-0x80]
    unsigned long long v50;  // r14
    unsigned long long v51;  // r15
    unsigned long long v52;  // cc_dep1
    unsigned long long v53;  // cc_dep2
    unsigned long v55;  // cc_ndep
    unsigned long|unsigned long long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]

    v1 = v34;
    v0 = v33;
    if (!(v37 != 0))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(v37 <= v23))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(v37 != 1))
    {
        v17 = mpn_div_qr_1_preinv();
        v0[0] = v17;
        return v17;
    }
    else if (v37 != 2)
    {
        v19 = v38->field_8;
        v47 = v22;
        v9 = v37 * 8;
        v26 = v22 + v37 * 8 - 8;
        v51 = *(v22 + v37 * 8 + 8);
        if (v19 == *(v22 + (v37 << 3) + 8))
        {
            v28 = v22 + v9 - 16;
            v49 = *(v22 + v9 + 16);
            if (v38->field_10 == *(v22 + v9 + 16))
            {
                if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, rbp<8>, cc_dep2<8>, cc_ndep<8>)))
                {
                    v19 = ((int)v38->field_0);
                    v21 = 0;
                    v10 = v38->field_0;
                    if (v19 != 0)
                    {
                        v3 = v38;
                        v2 = v23;
                        v51 = v26->field_0;
                        v49 = v28->field_0;
                        v21 = (long long)mpn_lshift();
                    }
                    v4 = v3->field_18;
                    if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, rbp<8>, cc_dep2<8>, cc_ndep<8>)))
                    {
                        tmp_31 = v4;
                        v5 = v37;
                        v29 = v47;
                        v2 = v23 - v5;
                        v11 = tmp_31 >> 32;
                        *(&stack_base-72 + None) = v49 % 0x100000000;
                        v13 = v5 - 1;
                        v46 = v0 + (v23 - v5) * 8;
                        v44 = v0 + v23 * 8;
                        v3 = v5 - 2;
                        do
                        {
                            v15 = *(v44 + 0x8);
                            if (v15 == v49 && rcx<8> == v51)
                            {
                                v6 = v29;
                                v26 = 18446744069414584319;
                                mpn_submul_1();
                                v21 = *(v44 + 0x8);
                                v29 = v6;
                            }
                            if (v15 != v49 || rcx<8> != v51)
                            {
                                v43 = ...;
                                (tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1 = ((long long)(...));
                                v26 = ...;
                                v28 = ...;
                                v41 = ...;
                                v38 = ...;
                                v52 = ...;
                                if (...)
                                {
                                    v7 = v38;
                                    v6 = v29;
                                    v19 = mpn_submul_1();
                                    v29 = v6;
                                    v21 = v7 - ((long long)(v28 < v19));
                                    v28 -= v19;
                                    *(v44 + 0x10) = v28;
                                }
                                if (...)
                                {
                                    v26 += 1;
                                    v41 = v28 - v49;
                                    v38 = v38 - ((long long)(v28 < v49)) - v51;
                                }
                                if (...)
                                {
                                    v8 = r9<8>;
                                    v7 = r10<8>;
                                    v6 = v29;
                                    v19 = mpn_submul_1();
                                    v29 = v6;
                                    v21 = v8 - ((long long)!(v19 <= v7));
                                    *(v44 + 0x10) = v7 - v19;
                                    if (((long long)!(v19 <= v7)) > v8)
                                    {
                                        v23 = 0;
                                        v19 = 0;
                                        do
                                        {
                                            tmp_4 = *(v46 + v19 * 8);
                                            tmp_3 = v23 + *(v46 + v19 * 8);
                                            tmp_42 = (tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1;
                                            tmp_9 = *(v29 + v19 * 8);
                                            *(v46 + v19 * 8) = v23 + *(v46 + v19 * 8) + *(v29 + v19 * 8);
                                            (tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1 = (tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1;
                                            v23 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rdx<8>, t4, t42)) + ((tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1);
                                            v19 += 1;
                                        }
                                        while (v19 < v13);
                                        v26 -= 1;
                                        v21 = v21 + v51 + v23;
                                    }
                                }
                            }
                            if (v1 != 0)
                            {
                                v1[v2] = v26;
                            }
                            v44 -= 8;
                            v46 -= 8;
                            tmp_8 = v2;
                            v2 -= 1;
                        }
                        while (!(((char)(tmp_8 - 1 >> 63))));
                        v18 = v0;
                        v0 + v9[1] = v21;
                        if (v10 == 0)
                        {
                            return v18;
                        }
                        v18 = mpn_rshift();
                        if (v18 == 0)
                        {
                            return v18;
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    __assert_fail(); /* do not return */
                }
                __assert_fail(); /* do not return */
            }
            __assert_fail(); /* do not return */
        }
        __assert_fail(); /* do not return */
    }
    else if (v23 != 1)
    {
        tmp_21 = v40->field_18;
        v16 = ((int)v40->field_0);
        v36 = 0;
        v27 = v40->field_8;
        v25 = v40->field_10;
        v4 = v40->field_0;
        v45 = tmp_21;
        v3 = tmp_21 >> 32;
        if (v16 != 0)
        {
            v2 = v23;
            v36 = (long long)mpn_lshift();
        }
        v48 = v40->field_10;
        v31 = v36;
        v39 = v0 + v23 * 8[1];
        v24 = v23 - 2;
        *(&stack_base-152 + None) = v25 % 0x100000000;
        do
        {
            tmp_22 = v3 * v31 % 0x100000000;
            tmp_241 = v3 * v31 % 0x100000000 + 0x100000000;
            tmp_246 = !(v45 * (v31 >> 32) <= (v45 * v31 >> 32) + v3 * v31 + v45 * (v31 >> 32));
            tmp_57 = ((v45 * v31 >> 32) + v3 * v31 + v45 * v31 % 0x100000000) * 0x100000000 + v45 * v31 + v39;
            tmp_277 = ...;
            v50 = ...;
            v55 = ((long long)(...));
            v32 = 0;
            v42 = ...;
            v30 = ((char)(...));
            tmp_384 = rsi<8>;
            v16 = ...;
            tmp_179 = ...;
            v20 = ...;
            v39 = ...;
            v31 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Sub((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>), ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>))), t179, Conv(1->64, ((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>) < ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>)))))) + (0 - tmp_384 & v27) + v42;
            v53 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Sub((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>), ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>))), t179, Conv(1->64, ((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>) < ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>)))))) + (0 - tmp_384 & v27) + v42;
            if (v27 <= ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Sub((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>), ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>))), t179, Conv(1->64, ((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>) < ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>)))))) + (0 - tmp_384 & v27) + v42 && (((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, rbp<8>, cc_dep2<8>, cc_ndep<8>)) || v25 <= v20))
            {
                v34 = 0;
                v16 += 1;
                v34 = ((char)!(v25 <= v20));
                v20 -= v25;
                tmp_14 = rdi<8>;
                v39 = v20;
                v31 = v31 - tmp_14 - v27;
            }
            if (v1 != 0)
            {
                v1[v24] = rax<8>;
            }
            v24 -= 1;
        }
        while (v24 != 18446744069414584319);
        v35 = v31;
        if (v4 != 0)
        {
            v24 >>= ((char)(64 - v4)) & 63;
            if ((v39 & v24) == 0)
            {
                v39 = v39 >> (((char)v4) & 63) | v31 << (((char)(64 - v4)) & 63);
                v35 >>= ((char)v4) & 63;
                v0[1] = v35;
                v0[0] = v39;
                return v0;
            }
            __assert_fail(); /* do not return */
        }
        v0[1] = v35;
        v0[0] = v39;
        return v0;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
