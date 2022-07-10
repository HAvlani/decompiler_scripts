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
    unsigned long long|struct_1 * v10;  // rdi
    unsigned long long v11;  // r9
    unsigned int v12[8];  // r12
    unsigned long v13;  // r12
    unsigned long long v14;  // cc_dep2
    unsigned long v15;  // cc_ndep
    unsigned long v16;  // d
    unsigned long long v2;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    struct_2 *|unsigned long long v7;  // rdx
    unsigned long long|struct_1 * v8;  // rsi
    unsigned int v9[8];  // rdi

    v0 = v13;
    v12 = v9;
    v2 = ((long long)v9[7]);
    v6 = ((long long)v9[6]);
    v4 = (0 - ((long long)(v9[7] < 56)) & 18446744069414584256) + 120;
    v10 = (0 - ((long long)(v9[7] < 56)) & 0xfffffffefffffff0) + 31;
    v15 = ((long long)(((int)v2) < 56));
    v11 = (0 - ((long long)(((int)v2) < 56)) & 0xfffffffefffffff0) + 30;
    v14 = ((long long)v12[5]);
    v8 = ((long long)(((int)v2) + v12[5]));
    v12[5] = ((int)v2) + v12[5];
    if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x3<64>, rax<8>, cc_dep2<8>, cc_ndep<8>)))
    {
        v6 = ((long long)(((int)v6) + 1));
        v12[6] = ((int)v6);
    }
    v5 = v4 - v2;
    v12 + v11 * 4[8] = (((int)v6) * 8 | ((int)v8) % 0x20000000) * 0x1000000 | (((int)v6) * 8 | ((int)v8) % 0x20000000) * 0x100 & 0xff0000 | (((int)v6) * 8 | ((int)v8) % 0x20000000) >> 8 & 0xff00 | (((int)v6) * 8 | ((int)v8) % 0x20000000) >> 24 & 255;
    v12 + v10 * 4[8] = ((int)v8) * 0x8000000 | ((int)v8) * 0x800 & 0xff0000 | ((int)v8) * 8 >> 8 & 0xff00 | ((int)v8) * 8 >> 24 & 255;
    v7 = v12 + 32 + v2;
    if (!(v5 < 8))
    {
        v10 = v7 + 8 & 18446744069414584312;
        v7->field_0 = 128;
        *(v7 + v5 + 8) = *(&fillbuf + v5 + 8);
        v7 -= v7 + 8 & 18446744069414584312;
        v8 = &fillbuf - v7;
        for (v5 = v5 + v7 >> 3; v5 != 0; v8 += v16 * 8)
        {
            v5 -= 1;
            v10->field_0 = v8->field_0;
            v10 += v16 * 8;
        }
        sha1_process_block();
    }
    else if (!(((long long)(v5 & 4)) == 0))
    {
        v7->field_0 = 128;
        *(v7 + v5 + 4) = *(&fillbuf + v5 + 4);
        sha1_process_block();
    }
    else if (v5 != 0)
    {
        v7->field_0 = 128;
        if (((long long)(v5 & 2)) != 0)
        {
            *(v7 + v5 + 2) = *(&fillbuf + v5 + 2);
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
