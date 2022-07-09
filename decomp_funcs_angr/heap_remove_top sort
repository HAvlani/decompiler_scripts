typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int heap_remove_top()
{
    BOT tmp_29;  // tmp #29
    BOT tmp_25;  // tmp #25
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    struct_0 * v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rsi
    unsigned long long [4]|unsigned long long v14;  // rdi
    unsigned long long v15;  // r9
    unsigned long long v16;  // r9
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r14
    unsigned long v2;  // [bp-0x50]
    unsigned long long v20;  // r15
    unsigned long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long|struct_0 * v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rdx

    v17 = 0;
    v6 = v14[2];
    if (v14[2] != 0)
    {
        v9 = v14[0];
        v3 = v14[2] - 1;
        tmp_29 = *(v9 + v6 * 8);
        v17 = *(v9 + 8);
        v14[2] = v6 - 1;
        v8 = v6 - 1 >> 1;
        v4 = v6 - 1 >> 1;
        *(v9 + 8) = tmp_29;
        v20 = v14[0];
        v0 = v14[3];
        v19 = *(v9 + 8);
        if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr((rax<8> - 0x1<64>), 0x1<8>), Sub(rax<8>, 0x1<64>), cc_ndep<8>))))
        {
            v18 = 1;
            while (true)
            {
                v12 = v18 * 2;
                if (v3 <= v18 << 1)
                {
                    v10 = v18 * 16 + v20;
                }
                else
                {
                    v16 = v12 + 1;
                    tmp_25 = v0;
                    v2 = v12 + 1;
                    v11 = v18 * 16 + v20;
                    v1 = v20 + (v12 + 1) * 8;
                    v13 = *(v20 + (v12 + 1) * 8);
                    v14 = *(v18 * 16 + v20);
                    v6 = tmp_25();
                    v15 = v2;
                    v10 = (v6 < 0? v1 : rbx<8>);
                    v12 = (v6 < 0? v2 : rbp<8>);
                }
                v14 = v10->field_0;
                v13 = v19;
                v6 = v20 + v18 * 8;
                if ((int)*(&stack_base-96)() > 0)
                {
                    v8 = v10->field_0;
                    v6->field_0 = v10->field_0;
                    if (v12 <= v4)
                    {
                        v18 = v12;
                    }
                    else
                    {
                        v10->field_0 = v13;
                        v7 = v17;
                        return v7;
                    }
                    v6->field_0 = v13;
                    v7 = v17;
                    return v7;
                }
            }
        }
        v6 = v14[0] + 8;
        v6->field_0 = v13;
        v7 = v17;
        return v7;
    }
    v7 = v17;
    return v7;
}
