typedef struct struct_1 {
    char field_0;
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[1];
    char field_11;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern <missing-type> g_407ac2;

int mode_adjust()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_83;  // tmp #83
    BOT tmp_86;  // tmp #86
    BOT tmp_87;  // tmp #87
    BOT tmp_18;  // tmp #18
    BOT tmp_6;  // tmp #6
    unsigned long long v1;  // rax
    unsigned long|unsigned int v10;  // r9d
    unsigned long long v11;  // r9
    unsigned long long|unsigned int v12;  // r10
    unsigned long long v13;  // r11
    unsigned long|unsigned long long v14;  // r11
    char v15;  // r12b
    unsigned long long v16;  // r12
    unsigned long v17;  // r12
    unsigned long long v18;  // cc_op
    unsigned long long v19;  // cc_op
    struct_1 * v2;  // rcx
    unsigned long long v20;  // cc_op
    unsigned long long v21;  // cc_op
    unsigned long long v22;  // cc_op
    unsigned long long v23;  // cc_op
    unsigned long long v24;  // cc_op
    unsigned long long v25;  // cc_op
    unsigned long long v26;  // cc_op
    unsigned long long v27;  // cc_op
    struct_0 *v28;  // cc_dep1
    unsigned int v29;  // cc_dep1
    unsigned int v30;  // cc_dep1
    unsigned long long|unsigned int v31;  // cc_dep1
    unsigned int v32;  // cc_dep1
    unsigned int v33;  // cc_dep1
    unsigned long long|unsigned int v34;  // cc_dep1
    unsigned int v35;  // cc_dep1
    unsigned int v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long long v38;  // cc_dep2
    unsigned long long v39;  // cc_dep2
    unsigned long long v40;  // cc_dep2
    unsigned long long v41;  // cc_dep2
    unsigned long long v42;  // cc_dep2
    unsigned long long v43;  // cc_dep2
    unsigned long long v44;  // cc_dep2
    unsigned long long v45;  // cc_dep2
    unsigned long long v46;  // cc_dep2
    unsigned long v47;  // cc_ndep
    unsigned long long|unsigned int v5;  // rbx
    unsigned int v6;  // ebp
    char v7;  // sil
    unsigned long long|unsigned int v8;  // edi
    struct_0 *v9;  // r8

    v14 = ((long long)v2->field_1);
    v1 = ((long long)(v8 & 4095));
    rsp<8> = &stack_base-24;
    v5 = 0;
    tmp_15 = v14;
    v25 = 17;
    v32 = ((int)tmp_15);
    v39 = 0;
    if (((long long)tmp_15) != 0)
    {
        while (true)
        {
            v6 = ((int)v2->field_4);
            v10 = ((int)v2->field_8);
            v18 = 17;
            v33 = ((int)v7);
            v38 = 0;
            if (((long long)v7) == 0)
            {
                v20 = 5;
                v35 = ((int)v14);
                v46 = 2;
                if (v14 != 2)
                {
                    v12 = -1;
                    v26 = 19;
                    v29 = 0;
                    v37 = 0;
                    v8 = 0;
                    /* goto 4225474; */
                }
                else
                {
                    v12 = -1;
                    v21 = 19;
                    v36 = ((int)(((int)v1) & 73));
                    v45 = 0;
                    v8 = ((long long)(((int)v1) & 73));
                    if ((((char)((int)v1)) & 73) != 0)
                    {
                        v26 = 19;
                        v29 = 0;
                        v37 = 0;
                        v8 = 0;
                        /* goto 4225645; */
                    }
                }
            }
            else
            {
                v12 = ((int)(v2->field_c | -3073));
                v8 = ((long long)(!(v2->field_c) & 0xc00));
                v26 = 5;
                v29 = ((int)v14);
                v37 = 2;
            }
            if (v14 != 2)
            {
                v21 = 5;
                v36 = ((int)v14);
                v45 = 3;
                if (v14 == 3)
                {
                    v11 = ((long long)(v10 & ((int)v1)));
                    v47 = ((long long)((((int)v11) & 292) < 1));
                    v16 = ((long long)(!(0 - ((int)((((int)v11) & 292) < 1))) & 292));
                    v15 = ((char)(!(0 - ((int)((((int)v11) & 292) < 1))) & 292)) | 146;
                    tmp_83 = v11;
                    tmp_86 = r12<8>;
                    tmp_87 = !(0 - ((int)((((int)v11) & 292) < 1))) & 292;
                    v17 = ((long long)((((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : !(0 - ((int)((((int)v11) & 292) < 1))) & 292) | 73));
                    v14 = ((long long)(((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87)));
                    v21 = 19;
                    v36 = ((int)(((int)v11) | (((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87))));
                    v45 = 0;
                    v10 = ((long long)(((int)v11) | (((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87))));
                }
            }
            else if (((long long)v7) != 0 || (((char)((int)v1)) & 73) != 0)
            {
                v13 = ((long long)v2->field_0);
                v10 = ((long long)((v10 | 73) & reg_96<4>));
                v24 = 19;
                v30 = v6;
                v43 = 0;
                if (v6 != 0)
                {
                    /* goto 4225664; */
                }
            }
            if (v14 != 2 || ((long long)v7) == 0 && (((char)((int)v1)) & 73) == 0)
            {
                v13 = ((long long)v2->field_0);
                v10 = ((int)(reg_88<4> & v12));
                v24 = 19;
                v30 = v6;
                v43 = 0;
            }
            if (v6 == 0)
            {
                v10 = ((long long)(reg_88<4> & ((int)!(((int)rdx<8>)))));
                v19 = 5;
                v34 = ((long long)r11b<1>);
                v42 = 45;
                if (r11b<1> != 45)
                {
                    v23 = 5;
                    v31 = ((long long)r11b<1>);
                    v40 = 61;
                }
            }
            else
            {
                v10 = ((int)(reg_88<4> & v6));
                v19 = 5;
                v34 = ((int)r11b<1>);
                v42 = 45;
                if (r11b<1> != 45)
                {
                    v23 = 5;
                    v31 = ((int)r11b<1>);
                    v40 = 61;
                    if (r11b<1> == 61)
                    {
                        v6 = ((int)!(((int)rbp<8>)));
                        v23 = 19;
                        v40 = 0;
                        v8 = ((int)(((int)rdi<8>) | !(((int)rbp<8>))));
                        v12 = ((long long)!(((int)cc_dep1<8>)));
                        /* goto 4225689; */
                    }
                }
            }
            if (v6 == 0 && r11b<1> == 45 || r11b<1> == 45 && v6 != 0)
            {
                v5 = ((long long)(v5 | reg_88<4>));
                v10 = ((int)!(((int)r9<8>)));
                v22 = 19;
                v31 = ((long long)(((int)v1) & v10));
                v44 = 0;
                v1 = ((long long)(((int)v1) & v10));
                /* goto 4225583; */
            }
            if (v6 == 0 && r11b<1> != 45 || v6 != 0 && r11b<1> != 45)
            {
                if ((v6 == 0 || r11b<1> != 61) && (v6 != 0 || r11b<1> != 61))
                {
                    v22 = 5;
                    v31 = ((long long)r11b<1>);
                    v44 = 43;
                    if (r11b<1> == 43)
                    {
                        v5 = ((long long)(v5 | reg_88<4>));
                        v22 = 19;
                        v31 = ((long long)(((int)v1) | reg_88<4>));
                        v44 = 0;
                        v1 = ((long long)(((int)v1) | reg_88<4>));
                        /* goto 4225583; */
                    }
                }
                if ((r11b<1> == 61 || v6 == 0) && (r11b<1> == 61 || v6 != 0))
                {
                    v14 = ((long long)v2->field_11);
                    v12 = ((int)(reg_96<4> & 4095));
                    v2 += 16;
                    v5 = ((int)(v5 | v12));
                    v1 = ((long long)(((int)v1) & reg_72<4> | reg_88<4>));
                    tmp_18 = v14;
                    v25 = 17;
                    v32 = ((int)tmp_18);
                    v39 = 0;
                    if (((long long)tmp_18) == 0)
                    {
                        break;
                    }
                }
            }
            if (r11b<1> != 61 || r11b<1> != 61)
            {
                v14 = ((long long)v2->field_11);
                v2 += 16;
                tmp_6 = v14;
                v25 = 17;
                v32 = ((int)tmp_6);
                v39 = 0;
                if (((long long)tmp_6) == 0)
                {
                    break;
                }
            }
        }
    }
    v27 = 20;
    v28 = v9;
    v41 = 0;
    if (v9 != 0)
    {
        v9->field_0 = ((unsigned int)v5);
        rip<8> = &g_407ac2;
        rsp<8> = &stack_base+8;
        return v1;
    }
    rip<8> = &g_407ac2;
    rsp<8> = &stack_base+8;
    return v1;
}
