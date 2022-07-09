typedef struct struct_6 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_3 *field_10;
} struct_6;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

typedef struct struct_5 {
    char padding_0[10];
    char field_a;
} struct_5;

int re_acquire_state_context()
{
    BOT tmp_18;  // tmp #18
    BOT tmp_2;  // tmp #2
    BOT tmp_10;  // tmp #10
    unsigned long v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x4c]
    unsigned long long v10[3];  // rdx
    unsigned long long [18] v11;  // rbx
    unsigned long long v12;  // rbp
    struct_2 *|unsigned long long|unsigned int v13;  // edi
    unsigned long long v14;  // r8w
    unsigned long long v15;  // r10
    unsigned long long v16;  // r11
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned int|unsigned long|unsigned long long v19;  // r14
    struct_2 *v2;  // [bp-0x48]
    struct_6 *v20;  // r15
    unsigned long long v21;  // cc_dep1
    unsigned long v3;  // [bp-0x40]
    unsigned int|struct_4 *|struct_5 *|unsigned long long v5;  // rax
    struct_3 * v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rcx
    unsigned int|unsigned long long v9;  // rdx

    v20 = v10;
    v9 = v10[1];
    v2 = v13;
    if (v9 != 0)
    {
        v19 = ((int)v8);
        v11 = v8 + v9;
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rbx<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rbx<8> + 0x88<64>), size=8, endness=Iend_LE) & rbx<8>) + ((Load(addr=(rbx<8> + 0x88<64>), size=8, endness=Iend_LE) & rbx<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            v6 = v20->field_10;
            v9 = v20->field_10 + v9 * 8;
            do
            {
                v11 += v6->field_0;
                v6 += 8;
            }
            while (v9 != v6);
        }
        v5 = v11[8] + (v11[17] & v11) * 24;
        v16 = *(v11[8] + (v11[17] & v11) * 24);
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rbx<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rbx<8> + 0x88<64>), size=8, endness=Iend_LE) & rbx<8>) + ((Load(addr=(rbx<8> + 0x88<64>), size=8, endness=Iend_LE) & rbx<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            v12 = v5->field_10;
            v15 = 0;
            while (true)
            {
                v17 = *(v12 + v15 * 8);
                if (((int)(*(v17 + 104) & 15)) == ((int)v8) && *(*(v12 + (v15 << 3))) == v11)
                {
                    v5 = re_node_set_compare();
                    if (((long long)v5) != 0)
                    {
                        v7 = v17;
                        return v7;
                    }
                }
                if (((long long)v5) == 0 || ((int)(*(v17 + 104) & 15)) != ((int)v8) || *(*(v12 + (v15 << 3))) != v11)
                {
                    v15 += 1;
                }
            }
        }
        v17 = calloc(0x70, 0x1);
        if (v17 != 0)
        {
            v12 = v17 + 8;
            v5 = re_node_set_init_copy();
            if (v5 == 0)
            {
                tmp_18 = ((long long)*(v17 + 104));
                *(v17 + 80) = v19;
                v21 = v20->field_8;
                *(v17 + 104) = ((char)(((int)tmp_18) & -0x10 | ((int)v8) & 15));
                if (v21 > 0)
                {
                    v3 = v11;
                    v15 = 0;
                    v0 = v17 + 24;
                    v18 = 0;
                    v19 = v12;
                    while (true)
                    {
                        v5 = *(v20->field_10 + v18 * 8) * 16 + *(v18);
                        v13 = ((int)*(*(v20->field_10 + v18 * 8) * 16 + *(v18) + 8));
                        v14 = ((int)(((long long)*(*(v20->field_10 + v18 * 8) * 16 + *(v18) + 8)) >> 8));
                        v9 = ((int)(...));
                        v14 = ...;
                        if (*((*(v20->field_10 + (v18 << 3)) << 4) + *(v18) + 8) != 1 || v9 != 0)
                        {
                            v5 = ((long long)v5->field_a);
                            tmp_2 = v5;
                            v5 = ((int)(...));
                            *(v17 + 104) = ((char)(...));
                            if (v13 == 2)
                            {
                                v5 = ((long long)(v5 | 16));
                                tmp_10 = v5;
                                *(v17 + 104) = tmp_10;
                            }
                            else if (v13 == 4)
                            {
                                v5 = ((long long)(v5 | 64));
                                tmp_10 = v5;
                                *(v17 + 104) = tmp_10;
                            }
                            if (v9 != 0)
                            {
                                if (v19 == *(v17 + 80))
                                {
                                    v1 = reg_80<4>;
                                    v13 = malloc(0x18);
                                    *(v17 + 80) = v13;
                                    v1 = ((int)v1);
                                    v5 = re_node_set_init_copy();
                                    v14 = ((long long)v1);
                                    *(v17 + 104) = *(v17 + 104) | 128;
                                    v15 = 0;
                                }
                                if (((long long)(r8b<1> & 1)) == 0 && ((long long)(r8b<1> & 2)) != 0 && ((long long)(((char)v8) & 1)) != 0)
                                {
                                    /* goto 4229360; */
                                }
                                if (((long long)(((char)v8) & 2)) == 0 && ((long long)(r8b<1> & 16)) != 0 || ((long long)(((char)v8) & 4)) == 0 && (((char)reg_80<4>) & 64) != 0 || ((long long)(((char)v8) & 1)) == 0 && ((long long)(r8b<1> & 1)) != 0 || ((long long)(r8b<1> & 1)) != 0 && ((long long)(r8b<1> & 2)) != 0 || ((long long)(r8b<1> & 1)) == 0 && ((long long)(r8b<1> & 2)) != 0 && ((long long)(((char)v8) & 1)) != 0)
                                {
                                    v9 = v18 - v15;
                                    if (!(((char)(v18 - v15 >> 63))))
                                    {
                                        v5 = *(v17 + 16);
                                        if (v9 < *(v17 + 16))
                                        {
                                            *(v17 + 16) = v5 - 1;
                                            re_node_set_remove_at.isra.0.part.0();
                                        }
                                    }
                                    v15 += 1;
                                }
                            }
                        }
                        v18 += 1;
                        break;
                    }
                    if (...)
                    {
                        v5 = register_state();
                    }
                    else if (v19 == *(v17 + 80) && v9 != 0)
                    {
                        free_state();
                    }
                }
                if (v21 <= 0 || v5 != 0)
                {
                    v5 = register_state();
                }
                if (v21 <= 0 && v5 == 0)
                {
                    v7 = v17;
                    return v7;
                }
                if (v5 != 0)
                {
                    free_state();
                    v17 = 0;
                    v2->field_0 = 12;
                    v7 = v17;
                    return v7;
                }
            }
            rpl_free();
            v17 = 0;
            v2->field_0 = 12;
            v7 = v17;
            return v7;
        }
        v17 = 0;
        v2->field_0 = 12;
        v7 = v17;
        return v7;
    }
    v13->field_0 = 0;
    v17 = 0;
    v7 = v17;
    return v7;
}
