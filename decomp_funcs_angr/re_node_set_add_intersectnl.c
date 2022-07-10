typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int re_node_set_add_intersect()
{
    BOT tmp_17;  // tmp #17
    unsigned long long v10[3];  // rbx
    unsigned long long v11[3];  // rbp
    struct_0 *|unsigned long|unsigned long long v12;  // rsi
    unsigned long long v13[3];  // rsi
    struct_0 * v14;  // rdi
    unsigned long long v15[3];  // rdi
    struct_0 *|unsigned long long v16;  // r8
    struct_0 * v17;  // r8
    struct_0 *|unsigned long long v18;  // r9
    struct_0 *|unsigned long long v19;  // r10
    unsigned long long v2;  // rax
    struct_0 *v20;  // r11
    unsigned long long v21[3];  // r12
    unsigned long|unsigned long long v22;  // r13
    unsigned long long v23;  // cc_dep1
    unsigned long long v24;  // cc_dep2
    struct_0 * v3;  // rax
    struct_0 * v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    struct_0 *v7;  // rdx
    unsigned long v8;  // rdx
    unsigned long long|unsigned long long [3] v9;  // rdx

    v2 = 0;
    v11 = v13;
    v12 = v13[1];
    if (v12 != 0)
    {
        v16 = v9[1];
        v21 = v9;
        if (v9[1] != 0)
        {
            v5 = v15[1];
            v22 = v15[0];
            v9 = v12 + v9[1];
            v10 = v15;
            v14 = v15[2];
            if (v12 + v16 + v5 > v22)
            {
                v22 += v9;
                v12 = v22 * 8;
                v14 = realloc(v14, v12);
                if (v14 != 0)
                {
                    v12 = v11[1];
                    v16 = v21[1];
                    v10[2] = v14;
                    v10[0] = v22;
                    v5 = v10[1];
                }
                else
                {
                    v2 = 12;
                    return v2;
                }
            }
            if (v12 + v16 + v5 <= v22 || v14 != 0)
            {
                tmp_17 = v5 + v12;
                v20 = v11[2];
                v12 -= 1;
                v3 = v5 - 1;
                v7 = v21[2];
                v19 = tmp_17 + v16;
                v17 = v16 - 1;
                v6 = *(v11[2] + v12 * 8);
                v18 = *(v21[2] + v17 * 8);
                while (true)
                {
                    v23 = v6;
                    v24 = v18;
                    if (v6 == v18 || v6 == *(v7 + (v17 << 3)))
                    {
                        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
                        {
                        }
                        else
                        {
                            while (true)
                            {
                                v23 = *(v14 + v3 * 8);
                                if (*(v14 + (v3 << 3)) > v6)
                                {
                                    v3 -= 1;
                                }
                            }
                            if (True)
                            {
                                v19 -= 1;
                                *(v14 + v19 * 8) = v6;
                            }
                            else if (*(v14 + (v3 << 3)) <= v6)
                            {
                                v12 -= 1;
                                if (((char)(v12 - 1 >> 63)))
                                {
                                    break;
                                }
                            }
                        }
                        v19 -= 1;
                        *(v14 + v19 * 8) = v6;
                        v17 -= 1;
                        if (((char)(v17 - 1 >> 63)))
                        {
                            break;
                        }
                        v6 = *(v20 + v12 * 8);
                    }
                    if (((char)(v23 < v24)))
                    {
                        v18 = *(v7 + v17 * 8);
                        v23 = v6;
                        v24 = *(v7 + v17 * 8);
                    }
                    if (((char)(v23 < v24)))
                    {
                        v17 -= 1;
                        if (((char)(v17 - 1 >> 63)))
                        {
                            break;
                        }
                    }
                    v12 -= 1;
                    if (((char)(v12 - 1 >> 63)))
                    {
                        break;
                    }
                    v6 = *(v20 + v12 * 8);
                }
                v4 = v10[1] - 1;
                v16 = v11[1] + v10[1] + v21[1] - 1;
                v8 = v11[1] + v10[1] + v21[1] - v19;
                v10[1] = v10[1] + v11[1] + v10[1] + v21[1] - v19;
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
                {
                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        while (true)
                        {
                            v12 = *(v14 + v16 * 8);
                            v6 = *(v14 + v4 * 8);
                            v18 = v14 + (v4 + v8) * 8;
                            if (*(v14 + (v16 << 3)) <= *(v14 + (v4 << 3)))
                            {
                                v4 -= 1;
                                v18->field_0 = v6;
                            }
                            else
                            {
                                v18->field_0 = v12;
                                v16 -= 1;
                                v8 -= 1;
                                v9 = 0;
                                memcpy(v14, v14 + v19 * 8, v9);
                                v2 = 0;
                                return v2;
                            }
                        }
                    }
                }
                v9 = v8 * 8;
                memcpy(v14, v14 + v19 * 8, v9);
                v2 = 0;
                return v2;
            }
        }
        return v2;
    }
    return v2;
}
