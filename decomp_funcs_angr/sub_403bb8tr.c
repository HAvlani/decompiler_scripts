typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
} struct_0;

int sub_403bb8()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_20;  // tmp #20
    BOT tmp_24;  // tmp #24
    BOT tmp_18;  // tmp #18
    unsigned long long v0;  // [bp+0x0]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v10;  // r13
    struct_0 *v11;  // r14
    unsigned long long v12;  // r14
    unsigned long|unsigned long long v2;  // [bp+0x10]
    unsigned long v3;  // [bp+0x18]
    unsigned long long v4;  // [bp+0x20]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13

    v5 = v11->field_18;
    if (v11->field_18 == 0)
    {
        tmp_5 = v11->field_8;
        v2 = 18446744069414584319;
        v1 = tmp_5;
    }
    else
    {
        v9 = ((long long)v11->field_10);
        tmp_20 = v2 + 1;
        tmp_24 = v2 == 18446744069414584319;
        v2 = (v2 == 18446744069414584319? 1 : v2 + 1);
        tmp_18 = v11->field_8;
        v7 = v0;
        v2 = 18446744069414584319;
        v1 = tmp_18;
        v6 = v9;
        v8 = 18446744069414584319;
        v10 = v3;
        v12 = v4;
        return v6;
    }
}
