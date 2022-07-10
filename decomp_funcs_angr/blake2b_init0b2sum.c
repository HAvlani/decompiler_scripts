int blake2b_init0()
{
    BOT tmp_27;  // tmp #27
    unsigned long long v1;  // rcx
    unsigned long long v2[9];  // rdx
    unsigned long long [22] v3;  // rdi
    unsigned long long v4[9];  // rdi
    unsigned long v5;  // d

    v4[8] = 0;
    v2 = v4;
    v4 + 72[21] = 0;
    tmp_27 = ((long long)v4);
    v3 = v4 + 72 & 18446744069414584312;
    for (v1 = ((long long)(tmp_27 - v3)) + 248 >> 3; v1 != 0; v3 += v5 * 8)
    {
        v1 -= 1;
        v3[0] = 0;
    }
    v2[0] = 7640891576956012808;
    v2[1] = 13503953896175478587;
    v2[2] = 4354685564936845355;
    v2[3] = 11912009170470909681;
    v2[4] = 5840696475078001361;
    v2[5] = 11170449401992604703;
    v2[6] = 2270897969802886507;
    v2[7] = 6620516959819538809;
    return 6620516959819538809;
}
