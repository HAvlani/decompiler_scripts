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
    unsigned int|unsigned long long v15;  // rax
    unsigned int|unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long [2] v18;  // rax
    unsigned long long v19;  // rax
    unsigned long|unsigned long long [2] v2;  // [bp-0x98]
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rcx
    unsigned long long [2] v23;  // rdx
    unsigned long|unsigned long long v24;  // rdx
    struct_1 *|unsigned long long v25;  // rbx
    unsigned long long v26;  // rbx
    struct_1 *|unsigned long long v27;  // rbp
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rsi
    unsigned long|struct_0 *|unsigned long long v3;  // [bp-0x90]
    unsigned long long v30;  // rsi
    char v31;  // sil
    unsigned long long v32;  // rsi
    unsigned long long v33;  // rsi
    char|unsigned long long v34;  // rdi
    unsigned long long v35;  // r8
    unsigned long long v36;  // r8
    unsigned long v37;  // r8
    struct_0 *v38;  // r9
    unsigned long long v39;  // r9
    unsigned int|unsigned long v4;  // [bp-0x88]
    struct_0 *|unsigned long long v40;  // r9
    unsigned long long v41;  // r10
    unsigned long long v42;  // r10
    unsigned long long v43;  // r11
    unsigned long long v44;  // r12
    struct_1 * v45;  // r12
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
    else if (!(v37 <= v24))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(v37 != 1))
    {
        v19 = mpn_div_qr_1_preinv();
        v0[0] = v19;
        return v19;
    }
    else if (v37 != 2)
    {
        v16 = v40->field_8;
        v47 = v21;
        v9 = v37 * 8;
        v25 = v21 + v37 * 8 - 8;
        v51 = *(v21 + v37 * 8 + 8);
        if (v16 == *(v21 + (v37 << 3) + 8))
        {
            v27 = v21 + v9 - 16;
            v49 = *(v21 + v9 + 16);
            if (v40->field_10 == *(v21 + v9 + 16))
            {
                if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, rbp<8>, cc_dep2<8>, cc_ndep<8>)))
                {
                    v16 = ((int)v40->field_0);
                    v20 = 0;
                    v10 = v40->field_0;
                    if (v16 != 0)
                    {
                        v3 = v40;
                        v2 = v24;
                        v51 = v25->field_0;
                        v49 = v27->field_0;
                        v20 = (long long)mpn_lshift();
                    }
                    v4 = v3->field_18;
                    if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, rbp<8>, cc_dep2<8>, cc_ndep<8>)))
                    {
                        tmp_31 = v4;
                        v5 = v37;
                        v30 = v47;
                        v2 = v24 - v5;
                        v11 = tmp_31 >> 32;
                        *(&stack_base-72 + None) = v49 % 0x100000000;
                        v13 = v5 - 1;
                        v46 = v0 + (v24 - v5) * 8;
                        v45 = v0 + v24 * 8;
                        v3 = v5 - 2;
                        do
                        {
                            v17 = *(v45 + 0x8);
                            if (v17 == v49 && rcx<8> == v51)
                            {
                                v6 = v30;
                                v25 = 18446744069414584319;
                                mpn_submul_1();
                                v20 = *(v45 + 0x8);
                                v30 = v6;
                            }
                            if (v17 != v49 || rcx<8> != v51)
                            {
                                v43 = ...;
                                (tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1 = ((long long)(...));
                                v25 = ...;
                                v27 = ...;
                                v41 = ...;
                                v40 = ...;
                                v52 = ...;
                                if (...)
                                {
                                    v7 = v40;
                                    v6 = v30;
                                    v16 = mpn_submul_1();
                                    v30 = v6;
                                    v20 = v7 - ((long long)(v27 < v16));
                                    v27 -= v16;
                                    *(v45 + 0x10) = v27;
                                }
                                if (...)
                                {
                                    v25 += 1;
                                    v41 = v27 - v49;
                                    v40 = v40 - ((long long)(v27 < v49)) - v51;
                                }
                                if (...)
                                {
                                    v8 = v40;
                                    v7 = r10<8>;
                                    v6 = v30;
                                    v16 = mpn_submul_1();
                                    v30 = v6;
                                    v20 = v8 - ((long long)!(v16 <= v7));
                                    *(v45 + 0x10) = v7 - v16;
                                    if (((long long)!(v16 <= v7)) > v8)
                                    {
                                        v24 = 0;
                                        v16 = 0;
                                        do
                                        {
                                            tmp_4 = *(v46 + v16 * 8);
                                            tmp_3 = v24 + *(v46 + v16 * 8);
                                            tmp_42 = (tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1;
                                            tmp_9 = *(v30 + v16 * 8);
                                            *(v46 + v16 * 8) = v24 + *(v46 + v16 * 8) + *(v30 + v16 * 8);
                                            v24 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rdx<8>, t4, t42)) + ((tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1);
                                            v16 += 1;
                                        }
                                        while (v16 < v13);
                                        v25 -= 1;
                                        v20 = v20 + v51 + v24;
                                    }
                                }
                            }
                            if (v1 != 0)
                            {
                                v1[v2] = rbx<8>;
                            }
                            v45 -= 8;
                            v46 -= 8;
                            tmp_8 = v2;
                            v2 -= 1;
                        }
                        while (!(((char)(tmp_8 - 1 >> 63))));
                        v18 = v0;
                        v0 + v9[1] = v20;
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
    else if (v24 != 1)
    {
        tmp_21 = v38->field_18;
        v15 = ((int)v38->field_0);
        v35 = 0;
        v28 = v38->field_8;
        v26 = v38->field_10;
        v4 = v38->field_0;
        v44 = tmp_21;
        v3 = tmp_21 >> 32;
        if (v15 != 0)
        {
            v2 = v24;
            v35 = (long long)mpn_lshift();
        }
        v48 = v38->field_10;
        v29 = v35;
        v39 = v0 + v24 * 8[1];
        v23 = v24 - 2;
        *(&stack_base-152 + None) = v26 % 0x100000000;
        do
        {
            tmp_22 = v3 * v29 % 0x100000000;
            tmp_241 = v3 * v29 % 0x100000000 + 0x100000000;
            tmp_246 = !(v44 * (v29 >> 32) <= (v44 * v29 >> 32) + v3 * v29 + v44 * (v29 >> 32));
            tmp_57 = ((v44 * v29 >> 32) + v3 * v29 + v44 * v29 % 0x100000000) * 0x100000000 + v44 * v29 + v39;
            tmp_277 = ...;
            v50 = ...;
            v55 = ((long long)(...));
            v32 = 0;
            v42 = ...;
            v31 = ((char)(...));
            tmp_384 = rsi<8>;
            v15 = ...;
            tmp_179 = ...;
            v22 = ...;
            v39 = ...;
            v29 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Sub((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>), ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>))), t179, Conv(1->64, ((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>) < ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>)))))) + (0 - tmp_384 & v28) + v42;
            v53 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Sub((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>), ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>))), t179, Conv(1->64, ((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>) < ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>)))))) + (0 - tmp_384 & v28) + v42;
            if (v28 <= ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Sub((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>), ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>))), t179, Conv(1->64, ((Load(addr=(Load(addr=stack_base-168, size=8, endness=Iend_LE) + (rdx<8> << 0x3<8>)), size=8, endness=Iend_LE) - rbx<8>) < ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) + ((((r13<8> * ((t277 + ((t246) ? (t241) : (t22))) >> 0x20<8>)) + (Load(addr=stack_base-152, size=8, endness=Iend_LE) * (t277 + ((t246) ? (t241) : (t22))))) + ((r13<8> * (t277 + ((t246) ? (t241) : (t22)))) >> 0x20<8>)) << 0x20<8>)))))) + (0 - tmp_384 & v28) + v42 && (((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, rbp<8>, cc_dep2<8>, cc_ndep<8>)) || v26 <= v22))
            {
                v34 = 0;
                v15 += 1;
                v34 = ((char)!(v26 <= v22));
                v22 -= v26;
                tmp_14 = rdi<8>;
                v39 = v22;
                v29 = v29 - tmp_14 - v28;
            }
            if (v1 != 0)
            {
                v1[v23] = v15;
            }
            v23 -= 1;
        }
        while (v23 != 18446744069414584319);
        v36 = v29;
        if (v4 != 0)
        {
            v23 >>= ((char)(64 - v4)) & 63;
            if ((v39 & v23) == 0)
            {
                v39 = v39 >> (((char)v4) & 63) | v29 << (((char)(64 - v4)) & 63);
                v36 >>= ((char)v4) & 63;
                v0[1] = v36;
                v0[0] = v39;
                return v0;
            }
            __assert_fail(); /* do not return */
        }
        v0[1] = v36;
        v0[0] = v39;
        return v0;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
