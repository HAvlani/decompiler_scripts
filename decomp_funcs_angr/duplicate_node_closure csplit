typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    char padding_0[8];
    unsigned int field_8;
} struct_6;

typedef struct struct_7 {
    char padding_0[16];
    unsigned long long field_10;
} struct_7;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_5 {
    char padding_0[8];
    unsigned int field_8;
    char field_a;
} struct_5;

int duplicate_node_closure()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_41;  // tmp #41
    struct_4 * v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long|unsigned long long|struct_4 * v10;  // r8
    struct_4 * v11;  // r10
    struct_4 *v12;  // r12
    unsigned long long|unsigned int v13;  // r13d
    struct_4 * v14;  // r14
    struct_4 *v15;  // r15
    unsigned long long v16;  // cc_dep1
    struct_5 *|struct_6 *|unsigned long long|struct_4 * v3;  // rax
    unsigned long|unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long|struct_4 * v6;  // rbx
    unsigned long long v7[6];  // rbp
    struct_7 *|unsigned long long|struct_4 * v8;  // rsi
    unsigned long|unsigned long long|struct_0 * v9;  // rdi

    v11 = v8;
    v13 = v10;
    v7 = v9;
    v6 = v5;
    v1 = v4;
    while (true)
    {
        v5 = v7[0];
        v9 = v7[5];
        v14 = v6;
        v3 = v11 * 16 + v7[0];
        if (*((v11 << 4) + v7[0] + 8) != 4)
        {
            v15 = v11 * 24;
            v8 = v9 + v11 * 24;
            v4 = *(v9 + v11 * 24 + 8);
            if (*(v9 + (v11 + (v11 << 1) << 3) + 8) != 0)
            {
                v8 = v8->field_10;
                v9 += v6 * 24;
                v14 = v8->field_0;
                v9->field_8 = 0;
                if (v4 != 1)
                {
                    v4 = v7[2];
                    v8 = v7[2] - 1;
                    v3 = (v7[2] - 1) * 16 + v5;
                    if (...)
                    {
                        v5 -= v3;
                        v10 = v7[4];
                        v4 = v5 + v4 * 16 - 32;
                        while (true)
                        {
                            if (*(v10 + (v8 << 3)) == v11 && ((int)v13) == (((int)(((long long)v3->field_8) >> 8)) & 1023))
                            {
                                v3 = re_node_set_insert();
                                v3 = 12;
                                return v3;
                            }
                            if (*(v10 + (v8 << 3)) != v11 || ((int)v13) != (((int)(((long long)v3->field_8) >> 8)) & 1023))
                            {
                                v3 += v4;
                                v8 -= 1;
                                v16 = ((long long)(*(v3 + 0xa) & 4));
                            }
                        }
                        if (*(v10 + (v8 << 3)) != v11 || ((int)v13) != (((int)(((long long)v3->field_8) >> 8)) & 1023))
                        {
                            v6 = (long long)duplicate_node();
                            if (v6 == 18446744069414584319)
                            {
                                break;
                            }
                        }
                        else if (*(v10 + (v8 << 3)) == v11 && ((int)v13) == (((int)(((long long)v3->field_8) >> 8)) & 1023))
                        {
                            v0 = *(*(v7[5] + v15 + 16) + 8);
                            v6 = (long long)duplicate_node();
                            if (v6 == 18446744069414584319)
                            {
                                break;
                            }
                        }
                    }
                    if (v6 != 18446744069414584319)
                    {
                        v3 = re_node_set_insert();
                        if (((long long)v3) == 0)
                        {
                            break;
                        }
                        if (((long long)v3) != 0)
                        {
                            v3 = duplicate_node_closure();
                            if (((int)v3) != 0)
                            {
                                return v3;
                            }
                        }
                        if (...)
                        {
                            v0 = *(*(v7[5] + v15 + 16) + 8);
                        }
                    }
                }
                if (v11 == v1 && v11 != v6)
                {
                    v10 = (long long)re_node_set_insert();
                    v3 = 0;
                    tmp_5 = v10;
                    if (((long long)tmp_5) != 0)
                    {
                        return v3;
                    }
                    else
                    {
                        break;
                    }
                }
                if (v11 == v6 || v11 != v1)
                {
                    v13 = ((int)(v13 | ((int)(((long long)v3->field_8) >> 8)) & 1023));
                    v6 = (long long)duplicate_node();
                    if (v6 == 18446744069414584319)
                    {
                        break;
                    }
                    if (v6 == 18446744069414584319)
                    {
                        v3 = 12;
                        return v3;
                    }
                    else
                    {
                        v3 = re_node_set_insert();
                        if (((long long)v3) == 0)
                        {
                            break;
                        }
                        if (((long long)v3) == 0)
                        {
                            v3 = 12;
                            return v3;
                        }
                        else
                        {
                            v11 = v14;
                        }
                    }
                }
            }
            else
            {
                *(v7[3] + v6 * 8) = *(v7[3] + v11 * 8);
                v3 = 0;
                return v3;
            }
        }
        else
        {
            v12 = v11 * 8;
            tmp_41 = *(v7[3] + v11 * 8);
            *(v9 + v6 * 24 + 8) = 0;
            v0 = tmp_41;
            v6 = (long long)duplicate_node();
            if (v6 == 18446744069414584319)
            {
                break;
            }
            if (v6 != 18446744069414584319)
            {
                v3 = v7[3];
                v0 = v0;
                *(v3 + v14 * 8) = *(v3 + v12);
            }
        }
        if (...)
        {
            v3 = re_node_set_insert();
            v11 = v0;
            if (((long long)v3) == 0)
            {
                break;
            }
            v3 = 12;
            return v3;
        }
    }
    v3 = 12;
    return v3;
}
