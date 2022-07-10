typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char fillbuf;

int md5_finish_ctx()
{
    unsigned long v0;  // [bp-0x8]
    struct_1 *|unsigned int v10;  // edi
    unsigned int v11[7];  // rdi
    unsigned long long v12;  // rdi
    unsigned long long v13;  // r9
    unsigned long v14;  // r12
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // cc_ndep
    unsigned long v17;  // d
    unsigned long long v2;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    unsigned long long|struct_2 * v6;  // rdx
    unsigned long long v7;  // rdx
    unsigned int v8[7];  // rbp
    unsigned long long|struct_1 * v9;  // rsi

    v0 = v14;
    v2 = ((long long)v11[6]);
    v8 = v11;
    v7 = ((long long)v11[5]);
    v5 = (0 - ((long long)(v11[6] < 56)) & 18446744069414584256) + 120;
    v9 = (0 - ((long long)(v11[6] < 56)) & 0xfffffffefffffff0) + 31;
    v16 = ((long long)(v11[6] < 56));
    v13 = (0 - ((long long)(v11[6] < 56)) & 0xfffffffefffffff0) + 30;
    v15 = ((long long)v11[4]);
    v12 = ((long long)(v11[6] + v11[4]));
    v8[4] = ((int)v12);
    if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x3<64>, rax<8>, cc_dep2<8>, cc_ndep<8>)))
    {
        v7 = ((long long)(((int)v7) + 1));
        v8[5] = ((int)v7);
    }
    v10 = ((int)v10) % 0x20000000;
    v4 = v5 - v2;
    v8 + v13 * 4[7] = ((int)v10) * 8;
    v8 + v9 * 4[7] = ((int)v7) * 8 | ((int)v10) % 0x20000000;
    v6 = v8 + 28 + v2;
    if (!(v4 < 8))
    {
        v10 = v6 + 8 & 18446744069414584312;
        v6->field_0 = 128;
        *(v6 + v4 + 8) = *(&fillbuf + v4 + 8);
        v6 -= v6 + 8 & 18446744069414584312;
        v9 = &fillbuf - v6;
        for (v4 = v4 + v6 >> 3; v4 != 0; v9 += v17 * 8)
        {
            v4 -= 1;
            v10->field_0 = v9->field_0;
            v10 += v17 * 8;
        }
        md5_process_block();
    }
    else if (!(((long long)(v4 & 4)) == 0))
    {
        v6->field_0 = 128;
        *(v6 + v4 + 4) = *(&fillbuf + v4 + 4);
        md5_process_block();
    }
    else if (v4 != 0)
    {
        v6->field_0 = 128;
        if (((long long)(v4 & 2)) != 0)
        {
            *(v6 + v4 + 2) = *(&fillbuf + v4 + 2);
            md5_process_block();
        }
        else
        {
            md5_process_block();
        }
    }
    else
    {
        md5_process_block();
    }
}
