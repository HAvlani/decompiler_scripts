extern void fillbuf;

int sha512_conclude_ctx()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v10;  // rdi
    unsigned long long v11[11];  // rdi
    unsigned long long v12;  // r8
    unsigned long v13;  // r12
    unsigned long long v14[11];  // r12
    unsigned long v15;  // r13
    unsigned long long v16;  // cc_dep2
    unsigned long v17;  // cc_ndep
    unsigned long long v3;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdx
    unsigned long v8;  // rdx
    unsigned long long v9;  // rsi

    v1 = v15;
    v0 = v13;
    v14 = v11;
    v3 = v11[10];
    v6 = v11[9];
    v7 = (0 - ((long long)(v11[10] < 112)) & 18446744069414584192) + 240;
    v10 = (0 - ((long long)(v11[10] < 112)) & 0xfffffffefffffff0) + 31;
    v17 = ((long long)(v3 < 112));
    v12 = (0 - ((long long)(v3 < 112)) & 0xfffffffefffffff0) + 30;
    v16 = v14[8];
    v9 = v3 + v14[8];
    v14[8] = v3 + v14[8];
    if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rax<8>, cc_dep2<8>, cc_ndep<8>)))
    {
        v6 += 1;
        v14[9] = v6;
        v8 = v7 - v3;
        v5 = ...;
        v14 + v12 * 8[11] = v5;
        v14 + v10 * 8[11] = (((((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) & 0xfffeffffffff0000) >> 16 | ((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) * 0x10000 & 0xfffeffffffff0000) & 0xfffffffe00000000) >> 32 | ((((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) & 0xfffeffffffff0000) >> 16 | ((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) * 0x10000 & 0xfffeffffffff0000) * 0x100000000 & 0xfffffffe00000000;
        memcpy(v14 + 88 + v3, &fillbuf, v8);
    }
    else
    {
        v8 = v7 - v3;
        v5 = ...;
        v14 + v12 * 8[11] = v5;
        v14 + v10 * 8[11] = (((((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) & 0xfffeffffffff0000) >> 16 | ((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) * 0x10000 & 0xfffeffffffff0000) & 0xfffffffe00000000) >> 32 | ((((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) & 0xfffeffffffff0000) >> 16 | ((v9 * 8 & 0xff00feffff00ff00) >> 8 | v9 * 0x800 & 0xff00feffff00ff00) * 0x10000 & 0xfffeffffffff0000) * 0x100000000 & 0xfffffffe00000000;
        memcpy(v14 + 88 + v3, &fillbuf, v8);
    }
}
