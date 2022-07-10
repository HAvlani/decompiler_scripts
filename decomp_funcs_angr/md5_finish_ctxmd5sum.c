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
    struct_1 *|unsigned int v10;  // rdi
    unsigned long long v11;  // rdi
    unsigned int v12[7];  // rdi
    unsigned long long v13;  // r9
    unsigned long v14;  // r12
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // cc_ndep
    unsigned long v17;  // d
    unsigned long long v2;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long long|struct_2 * v7;  // rdx
    unsigned int v8[7];  // rbp
    struct_1 *|unsigned long long v9;  // rsi

    v0 = v14;
    v2 = ((long long)v12[6]);
    v8 = v12;
    v6 = ((long long)v12[5]);
    v4 = (0 - ((long long)(v12[6] < 56)) & 18446744069414584256) + 120;
    v9 = (0 - ((long long)(v12[6] < 56)) & 0xfffffffefffffff0) + 31;
    v16 = ((long long)(v12[6] < 56));
    v13 = (0 - ((long long)(v12[6] < 56)) & 0xfffffffefffffff0) + 30;
    v15 = ((long long)v12[4]);
    v11 = ((long long)(v12[6] + v12[4]));
    v8[4] = ((int)v11);
    if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x3<64>, rax<8>, cc_dep2<8>, cc_ndep<8>)))
    {
        v6 = ((long long)(((int)v6) + 1));
        v8[5] = ((int)v6);
    }
    v10 = ((int)v10) % 0x20000000;
    v5 = v4 - v2;
    v8 + v13 * 4[7] = ((int)v10) * 8;
    v8 + v9 * 4[7] = ((int)v6) * 8 | ((int)v10) % 0x20000000;
    v7 = v8 + 28 + v2;
    if (!(v5 < 8))
    {
        v10 = v7 + 8 & 18446744069414584312;
        v7->field_0 = 128;
        *(v7 + v5 + 8) = *(&fillbuf + v5 + 8);
        v7 -= v7 + 8 & 18446744069414584312;
        v9 = &fillbuf - v7;
        for (v5 = v5 + v7 >> 3; v5 != 0; v9 += v17 * 8)
        {
            v5 -= 1;
            v10->field_0 = v9->field_0;
            v10 += v17 * 8;
        }
        md5_process_block();
    }
    else if (!(((long long)(v5 & 4)) == 0))
    {
        v7->field_0 = 128;
        *(v7 + v5 + 4) = *(&fillbuf + v5 + 4);
        md5_process_block();
    }
    else if (v5 != 0)
    {
        v7->field_0 = 128;
        if (((long long)(v5 & 2)) != 0)
        {
            *(v7 + v5 + 2) = *(&fillbuf + v5 + 2);
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
