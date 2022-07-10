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

extern <missing-type> g_403602;

int mode_adjust()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_83;  // tmp #83
    BOT tmp_86;  // tmp #86
    BOT tmp_87;  // tmp #87
    BOT tmp_18;  // tmp #18
    BOT tmp_6;  // tmp #6
    unsigned long long v1;  // rax
    unsigned int|unsigned long v10;  // r9d
    unsigned long long v11;  // r9
    unsigned int|unsigned long long v12;  // r10
    unsigned long|unsigned long long v13;  // r11
    unsigned long long v14;  // r11
    unsigned long long v15;  // r12
    unsigned long v16;  // r12
    char v17;  // r12b
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
    unsigned int v28;  // cc_dep1
    unsigned int|unsigned long long v29;  // cc_dep1
    unsigned int v30;  // cc_dep1
    unsigned int v31;  // cc_dep1
    struct_0 *v32;  // cc_dep1
    unsigned int v33;  // cc_dep1
    unsigned int v34;  // cc_dep1
    unsigned int v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long long v37;  // cc_dep2
    unsigned long long v38;  // cc_dep2
    unsigned long long v39;  // cc_dep2
    unsigned long long v40;  // cc_dep2
    unsigned long long v41;  // cc_dep2
    unsigned long long v42;  // cc_dep2
    unsigned long long v43;  // cc_dep2
    unsigned long long v44;  // cc_dep2
    unsigned long long v45;  // cc_dep2
    unsigned long v46;  // cc_ndep
    unsigned int|unsigned long|unsigned long long v5;  // rbx
    unsigned int v6;  // ebp
    char v7;  // sil
    unsigned int|unsigned long long v8;  // rdi
    struct_0 *v9;  // r8

    v13 = ((long long)v2->field_1);
    v1 = ((long long)(v8 & 4095));
    rsp<8> = &stack_base-24;
    v5 = 0;
    tmp_15 = v13;
    v23 = 17;
    v34 = ((int)tmp_15);
    v43 = 0;
    if (((long long)tmp_15) != 0)
    {
        while (true)
        {
            v6 = ((int)v2->field_4);
            v10 = ((int)v2->field_8);
            v27 = 17;
            v31 = ((int)v7);
            v44 = 0;
            if (((long long)v7) == 0)
            {
                v19 = 5;
                v33 = ((int)v13);
                v37 = 2;
                if (v13 != 2)
                {
                    v12 = -1;
                    v26 = 19;
                    v30 = 0;
                    v41 = 0;
                    v8 = 0;
                    /* goto 4207874; */
                }
                else
                {
                    v12 = -1;
                    v20 = 19;
                    v35 = ((int)(((int)v1) & 73));
                    v42 = 0;
                    v8 = ((long long)(((int)v1) & 73));
                    if ((((char)((int)v1)) & 73) != 0)
                    {
                        v26 = 19;
                        v30 = 0;
                        v41 = 0;
                        v8 = 0;
                        /* goto 4208045; */
                    }
                }
            }
            else
            {
                v12 = ((long long)(v2->field_c | -3073));
                v8 = ((int)(!(v2->field_c) & 0xc00));
                v26 = 5;
                v30 = ((int)v13);
                v41 = 2;
            }
            if (v13 != 2 || (((char)((int)v1)) & 73) == 0 && ((long long)v7) == 0)
            {
                v14 = ((long long)v2->field_0);
                v10 = ((int)(v10 & ((int)v12)));
                v18 = 19;
                v28 = v6;
                v36 = 0;
            }
            if (v13 != 2)
            {
                v20 = 5;
                v35 = ((int)v13);
                v42 = 3;
                if (v13 == 3)
                {
                    v11 = ((long long)(v10 & ((int)v1)));
                    v46 = ((long long)((((int)v11) & 292) < 1));
                    v15 = ((long long)(!(0 - ((int)((((int)v11) & 292) < 1))) & 292));
                    v17 = ((char)(!(0 - ((int)((((int)v11) & 292) < 1))) & 292)) | 146;
                    tmp_83 = v11;
                    tmp_86 = r12<8>;
                    tmp_87 = !(0 - ((int)((((int)v11) & 292) < 1))) & 292;
                    v16 = ((long long)((((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : !(0 - ((int)((((int)v11) & 292) < 1))) & 292) | 73));
                    v13 = ((long long)(((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87)));
                    v20 = 19;
                    v35 = ((int)(((int)v11) | (((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87))));
                    v42 = 0;
                    v10 = ((long long)(((int)v11) | (((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87))));
                    /* goto 4207943; */
                }
            }
            else if ((((char)((int)v1)) & 73) != 0 || ((long long)v7) != 0)
            {
                v14 = ((long long)v2->field_0);
                v10 = ((long long)((v10 | 73) & ((int)r10<8>)));
                v18 = 19;
                v28 = v6;
                v36 = 0;
                if (v6 != 0)
                {
                    /* goto 4208064; */
                }
            }
            if (v6 == 0)
            {
                v10 = ((int)(reg_88<4> & ((int)!(((int)rdx<8>)))));
                v21 = 5;
                v29 = ((long long)r11b<1>);
                v40 = 45;
                if (r11b<1> != 45)
                {
                    v24 = 5;
                    v29 = ((long long)r11b<1>);
                    v45 = 61;
                }
            }
            else
            {
                v10 = ((long long)(reg_88<4> & v6));
                v21 = 5;
                v29 = ((int)r11b<1>);
                v40 = 45;
                if (r11b<1> != 45)
                {
                    v24 = 5;
                    v29 = ((int)r11b<1>);
                    v45 = 61;
                    if (r11b<1> == 61)
                    {
                        v6 = ((int)!(((int)rbp<8>)));
                        v24 = 19;
                        v45 = 0;
                        v8 = ((long long)(reg_72<4> | !(((int)rbp<8>))));
                        v12 = ((int)!(((int)cc_dep1<8>)));
                        /* goto 4208089; */
                    }
                }
            }
            if (r11b<1> == 45 && v6 == 0 || r11b<1> == 45 && v6 != 0)
            {
                v5 = ((long long)(v5 | reg_88<4>));
                v10 = ((int)!(((int)r9<8>)));
                v22 = 19;
                v29 = ((long long)(((int)v1) & v10));
                v38 = 0;
                v1 = ((long long)(((int)v1) & v10));
                /* goto 4207983; */
            }
            if (v6 == 0 && r11b<1> != 45 || r11b<1> != 45 && v6 != 0)
            {
                if ((v6 == 0 || r11b<1> != 61) && (r11b<1> != 61 || v6 != 0))
                {
                    v22 = 5;
                    v29 = ((long long)r11b<1>);
                    v38 = 43;
                    if (r11b<1> == 43)
                    {
                        v5 = ((long long)(v5 | reg_88<4>));
                        v22 = 19;
                        v29 = ((long long)(((int)v1) | reg_88<4>));
                        v38 = 0;
                        v1 = ((long long)(((int)v1) | reg_88<4>));
                        /* goto 4207983; */
                    }
                }
                if ((r11b<1> == 61 || v6 == 0) && (r11b<1> == 61 || v6 != 0))
                {
                    v13 = ((long long)v2->field_11);
                    v12 = ((int)(reg_96<4> & 4095));
                    v2 += 16;
                    v5 = ((int)(v5 | v12));
                    v1 = ((long long)(((int)v1) & reg_72<4> | v10));
                    tmp_18 = v13;
                    v23 = 17;
                    v34 = ((int)tmp_18);
                    v43 = 0;
                    if (((long long)tmp_18) == 0)
                    {
                        break;
                    }
                }
            }
            if (r11b<1> != 61 || r11b<1> != 61)
            {
                v13 = ((long long)v2->field_11);
                v2 += 16;
                tmp_6 = v13;
                v23 = 17;
                v34 = ((int)tmp_6);
                v43 = 0;
                if (((long long)tmp_6) == 0)
                {
                    break;
                }
            }
        }
    }
    v25 = 20;
    v32 = v9;
    v39 = 0;
    if (v9 != 0)
    {
        v9->field_0 = ((unsigned int)v5);
        rip<8> = &g_403602;
        rsp<8> = &stack_base+8;
        return v1;
    }
    rip<8> = &g_403602;
    rsp<8> = &stack_base+8;
    return v1;
}
