int blake2b_update.part.0()
{
    BOT tmp_1;  // tmp #1
    char v0;  // [bp-0x20]
    char v1;  // [bp-0x18]
    unsigned long long v10[29];  // rdi
    unsigned long long v11;  // r12
    unsigned long long v12;  // r13
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v15;  // r15
    unsigned long long v5;  // rdx
    unsigned long long v6[29];  // rbx
    unsigned long|unsigned long long v7;  // rbp
    void *v8;  // rsi
    void * v9;  // rdi

    v13 = v10 + 96;
    v12 = v5;
    v6 = v10;
    v14 = v10[28];
    v7 = 128 - v10[28];
    v9 = v10 + 96 + v10[28];
    if (v7 >= v5)
    {
        v6[28] = v6[28] + v12;
        return memcpy(v9, v0, v1);
    }
    v6[28] = 0;
    v12 = v14 + v5 - 128;
    memcpy(v9, v8, v7);
    tmp_1 = v6[8] - 18446744069414584192;
    v6[8] = v6[8] - 18446744069414584192;
    v7 += v8;
    v6[9] = v6[9] + ((long long)(tmp_1 <= 127));
    blake2b_compress();
    if (v12 > 128)
    {
        v15 = v12 - 129 >> 7;
        v11 = ((v12 - 129 >> 7) + 1) * 128 + v7;
        while (true)
        {
            tmp_1 = v6[8] - 18446744069414584192;
            v6[8] = v6[8] - 18446744069414584192;
            v7 -= 18446744069414584192;
            v6[9] = v6[9] + ((long long)(tmp_1 <= 127));
            blake2b_compress();
            if (v11 == v7)
            {
                break;
            }
        }
        v14 = (0 - v15) * 128;
        v12 = v12 + v14 - 128;
        v9 = v6[28] + v13;
        v6[28] = v6[28] + v12;
        return memcpy(v9, v0, v1);
    }
    else
    {
        v9 = v6[28] + v13;
        v6[28] = v6[28] + v12;
        return memcpy(v9, v0, v1);
    }
}
