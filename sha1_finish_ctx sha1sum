typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char fillbuf;

int sha1_finish_ctx()
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v10[8];  // rdi
    unsigned long long v11;  // r9
    unsigned int v12[8];  // r12
    unsigned long v13;  // r12
    unsigned long long v14;  // cc_dep2
    unsigned long v15;  // cc_ndep
    unsigned long v16;  // d
    unsigned long long v2;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    struct_2 *|unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx
    unsigned long long|struct_1 * v8;  // rsi
    unsigned long long|struct_1 * v9;  // rdi

    v0 = v13;
    v12 = v10;
    v2 = ((long long)v10[7]);
    v7 = ((long long)v10[6]);
    v5 = (0 - ((long long)(v10[7] < 56)) & 18446744069414584256) + 120;
    v9 = (0 - ((long long)(v10[7] < 56)) & 0xfffffffefffffff0) + 31;
    v15 = ((long long)(((int)v2) < 56));
    v11 = (0 - ((long long)(((int)v2) < 56)) & 0xfffffffefffffff0) + 30;
    v14 = ((long long)v12[5]);
    v8 = ((long long)(((int)v2) + v12[5]));
    v12[5] = ((int)v2) + v12[5];
    if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x3<64>, rax<8>, cc_dep2<8>, cc_ndep<8>)))
    {
        v7 = ((long long)(((int)v7) + 1));
        v12[6] = ((int)v7);
    }
    v4 = v5 - v2;
    v12 + v11 * 4[8] = (((int)v7) * 8 | ((int)v8) % 0x20000000) * 0x1000000 | (((int)v7) * 8 | ((int)v8) % 0x20000000) * 0x100 & 0xff0000 | (((int)v7) * 8 | ((int)v8) % 0x20000000) >> 8 & 0xff00 | (((int)v7) * 8 | ((int)v8) % 0x20000000) >> 24 & 255;
    v12 + v9 * 4[8] = ((int)v8) * 0x8000000 | ((int)v8) * 0x800 & 0xff0000 | ((int)v8) * 8 >> 8 & 0xff00 | ((int)v8) * 8 >> 24 & 255;
    v6 = v12 + 32 + v2;
    if (!(v4 < 8))
    {
        v9 = v6 + 8 & 18446744069414584312;
        v6->field_0 = 128;
        *(v6 + v4 + 8) = *(&fillbuf + v4 + 8);
        v6 -= v6 + 8 & 18446744069414584312;
        v8 = &fillbuf - v6;
        for (v4 = v4 + v6 >> 3; v4 != 0; v8 += v16 * 8)
        {
            v4 -= 1;
            v9->field_0 = v8->field_0;
            v9 += v16 * 8;
        }
        sha1_process_block();
    }
    else if (!(((long long)(v4 & 4)) == 0))
    {
        v6->field_0 = 128;
        *(v6 + v4 + 4) = *(&fillbuf + v4 + 4);
        sha1_process_block();
    }
    else if (v4 != 0)
    {
        v6->field_0 = 128;
        if (((long long)(v4 & 2)) != 0)
        {
            *(v6 + v4 + 2) = *(&fillbuf + v4 + 2);
            sha1_process_block();
        }
        else
        {
            sha1_process_block();
        }
    }
    else
    {
        sha1_process_block();
    }
}
