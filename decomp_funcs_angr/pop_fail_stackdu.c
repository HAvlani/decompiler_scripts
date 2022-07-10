typedef struct struct_3 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int pop_fail_stack()
{
    BOT tmp_20;  // tmp #20
    unsigned long long v10[6];  // rbx
    unsigned long long v11[3];  // rbp
    struct_2 *v12;  // rsi
    unsigned long long v13[3];  // rdi
    void *v14;  // r8
    unsigned long v15;  // r9
    unsigned long v16;  // r12
    struct_3 *v17;  // r13
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    void *v7;  // rcx
    unsigned long v8;  // rdx
    unsigned long v9;  // rdx

    v11 = v13;
    if (v13 != 0)
    {
        v3 = v13[0];
        if (v13[0] != 0)
        {
            v17 = v15;
            v11[0] = v13[0] - 1;
            v16 = v8 * 16;
            tmp_20 = v11[2] + (v3 - 1) * 48;
            v12->field_0 = *(v11[2] + (v3 - 1) * 48);
            v9 = v8 * 16;
            memcpy(v7, *(tmp_20 + 16), v9);
            memcpy(v14, *(v11[2] + (v13[0] - 1) * 48 + 16) + v16, v16);
            rpl_free();
            rpl_free();
            v10 = (v13[0] - 1) * 48 + v11[2];
            v17->field_0 = *((v13[0] - 1) * 48 + v13[2] + 24);
            v17->field_10 = v10[5];
            v4 = v10[1];
            return v4;
        }
        v4 = 18446744069414584319;
        return v4;
    }
    v4 = 18446744069414584319;
    return v4;
}
