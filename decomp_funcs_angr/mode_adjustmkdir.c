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

extern <missing-type> g_403d52;

int mode_adjust()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_83;  // tmp #83
    BOT tmp_86;  // tmp #86
    BOT tmp_87;  // tmp #87
    BOT tmp_18;  // tmp #18
    BOT tmp_6;  // tmp #6
    unsigned long long v1;  // rax
    unsigned long|unsigned long long|unsigned int v10;  // r9d
    unsigned long long|unsigned int v11;  // r10d
    unsigned long|unsigned long long v12;  // r11
    unsigned long long v13;  // r11
    unsigned long long v14;  // r12
    char v15;  // r12b
    unsigned long v16;  // r12
    unsigned long long v17;  // cc_op
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
    unsigned int v27;  // cc_dep1
    unsigned int v28;  // cc_dep1
    unsigned int v29;  // cc_dep1
    unsigned int v30;  // cc_dep1
    unsigned long long|unsigned int v31;  // cc_dep1
    struct_0 *v32;  // cc_dep1
    unsigned int v33;  // cc_dep1
    unsigned int v34;  // cc_dep1
    unsigned long long v35;  // cc_dep2
    unsigned long long v36;  // cc_dep2
    unsigned long long v37;  // cc_dep2
    unsigned long long v38;  // cc_dep2
    unsigned long long v39;  // cc_dep2
    unsigned long long v40;  // cc_dep2
    unsigned long long v41;  // cc_dep2
    unsigned long long v42;  // cc_dep2
    unsigned long long v43;  // cc_dep2
    unsigned long long v44;  // cc_dep2
    unsigned long v45;  // cc_ndep
    unsigned long|unsigned long long|unsigned int v5;  // rbx
    unsigned int v6;  // ebp
    char v7;  // sil
    unsigned long|unsigned long long|unsigned int v8;  // rdi
    struct_0 *v9;  // r8

    v12 = ((long long)v2->field_1);
    v1 = ((long long)(v8 & 4095));
    rsp<8> = &stack_base-24;
    v5 = 0;
    tmp_15 = v12;
    v24 = 17;
    v33 = ((int)tmp_15);
    v37 = 0;
    if (((long long)tmp_15) != 0)
    {
        while (true)
        {
            v6 = ((int)v2->field_4);
            v10 = ((long long)v2->field_8);
            v21 = 17;
            v29 = ((int)v7);
            v40 = 0;
            if (((long long)v7) == 0)
            {
                v20 = 5;
                v28 = ((int)v12);
                v44 = 2;
                if (v12 != 2)
                {
                    v11 = -1;
                    v25 = 19;
                    v34 = 0;
                    v36 = 0;
                    v8 = 0;
                    /* goto 4209746; */
                }
                else
                {
                    v11 = -1;
                    v18 = 19;
                    v30 = ((int)(((int)v1) & 73));
                    v43 = 0;
                    v8 = ((long long)(((int)v1) & 73));
                    if ((((char)((int)v1)) & 73) != 0)
                    {
                        v25 = 19;
                        v34 = 0;
                        v36 = 0;
                        v8 = 0;
                        /* goto 4209917; */
                    }
                }
            }
            else
            {
                v11 = ((int)(v2->field_c | -3073));
                v8 = ((int)(!(v2->field_c) & 0xc00));
                v25 = 5;
                v34 = ((int)v12);
                v36 = 2;
            }
            if (v12 != 2 || ((long long)v7) == 0 && (((char)((int)v1)) & 73) == 0)
            {
                v13 = ((long long)v2->field_0);
                v10 = ((long long)(v10 & reg_96<4>));
                v22 = 19;
                v27 = v6;
                v41 = 0;
            }
            if (v12 != 2)
            {
                v18 = 5;
                v30 = ((int)v12);
                v43 = 3;
                if (v12 == 3)
                {
                    v10 = ((long long)(((int)v10) & ((int)v1)));
                    v45 = ((long long)((((int)v10) & 292) < 1));
                    v14 = ((long long)(!(0 - ((int)((((int)v10) & 292) < 1))) & 292));
                    v15 = ((char)(!(0 - ((int)((((int)v10) & 292) < 1))) & 292)) | 146;
                    tmp_83 = v10;
                    tmp_86 = r12<8>;
                    tmp_87 = !(0 - ((int)((((int)v10) & 292) < 1))) & 292;
                    v16 = ((long long)((((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : !(0 - ((int)((((int)v10) & 292) < 1))) & 292) | 73));
                    v12 = ((long long)(((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87)));
                    v18 = 19;
                    v30 = ((int)(((int)v10) | (((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87))));
                    v43 = 0;
                    v10 = ((int)(((int)v10) | (((long long)(tmp_83 & 73)) != 0? (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87) | 73 : (((long long)(tmp_83 & 146)) != 0? ((int)tmp_86) : tmp_87))));
                    /* goto 4209815; */
                }
            }
            else if (((long long)v7) != 0 || (((char)((int)v1)) & 73) != 0)
            {
                v13 = ((long long)v2->field_0);
                v10 = ((int)((((int)v10) | 73) & reg_96<4>));
                v22 = 19;
                v27 = v6;
                v41 = 0;
                if (v6 != 0)
                {
                    /* goto 4209936; */
                }
            }
            if (v6 == 0)
            {
                v10 = ((long long)(v10 & ((int)!(((int)rdx<8>)))));
                v23 = 5;
                v31 = ((long long)v13);
                v38 = 45;
                if (v13 != 45)
                {
                    v26 = 5;
                    v31 = ((long long)v13);
                    v39 = 61;
                }
            }
            else
            {
                v10 = ((int)(reg_88<4> & v6));
                v23 = 5;
                v31 = ((int)r11b<1>);
                v38 = 45;
                if (r11b<1> != 45)
                {
                    v26 = 5;
                    v31 = ((int)r11b<1>);
                    v39 = 61;
                    if (r11b<1> == 61)
                    {
                        v6 = ((int)!(((int)rbp<8>)));
                        v26 = 19;
                        v39 = 0;
                        v8 = ((long long)(v8 | !(((int)rbp<8>))));
                        v11 = ((long long)!(((int)cc_dep1<8>)));
                        /* goto 4209961; */
                    }
                }
            }
            if (v6 == 0 && v13 == 45 || r11b<1> == 45 && v6 != 0)
            {
                v5 = ((int)(v5 | reg_88<4>));
                v10 = ((int)!(((int)r9<8>)));
                v17 = 19;
                v31 = ((long long)(((int)v1) & v10));
                v35 = 0;
                v1 = ((long long)(((int)v1) & v10));
                /* goto 4209855; */
            }
            if (v6 == 0 && v13 != 45 || r11b<1> != 45 && v6 != 0)
            {
                if ((v6 == 0 || r11b<1> != 61) && (v13 != 61 || v6 != 0))
                {
                    v17 = 5;
                    v31 = ((long long)r11b<1>);
                    v35 = 43;
                    if (r11b<1> == 43)
                    {
                        v5 = ((long long)(v5 | reg_88<4>));
                        v17 = 19;
                        v31 = ((long long)(((int)v1) | reg_88<4>));
                        v35 = 0;
                        v1 = ((long long)(((int)v1) | reg_88<4>));
                        /* goto 4209855; */
                    }
                }
                if ((r11b<1> == 61 || v6 == 0) && (v13 == 61 || v6 != 0))
                {
                    v12 = ((long long)v2->field_11);
                    v11 = ((int)(reg_96<4> & 4095));
                    v2 += 16;
                    v5 = ((long long)(v5 | v11));
                    v1 = ((long long)(((int)v1) & reg_72<4> | reg_88<4>));
                    tmp_18 = v12;
                    v24 = 17;
                    v33 = ((int)tmp_18);
                    v37 = 0;
                    if (((long long)tmp_18) == 0)
                    {
                        break;
                    }
                }
            }
            if (r11b<1> != 61 || v13 != 61)
            {
                v12 = ((long long)v2->field_11);
                v2 += 16;
                tmp_6 = v12;
                v24 = 17;
                v33 = ((int)tmp_6);
                v37 = 0;
                if (((long long)tmp_6) == 0)
                {
                    break;
                }
            }
        }
    }
    v19 = 20;
    v32 = v9;
    v42 = 0;
    if (v9 != 0)
    {
        v9->field_0 = v5;
        rip<8> = &g_403d52;
        rsp<8> = &stack_base+8;
        return v1;
    }
    rip<8> = &g_403d52;
    rsp<8> = &stack_base+8;
    return v1;
}
