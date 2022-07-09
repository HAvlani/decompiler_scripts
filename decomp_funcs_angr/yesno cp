extern struct_0 stdin;

int yesno()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *|unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long|unsigned long long|char v6;  // r12

    v6 = 0;
    v0 = 0;
    v1 = 0;
    v4 = __getdelim(&v0, &v1, 0xa, stdin);
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        v4 = v0 + v4 - 1;
        if (*(v4) != 10)
        {
            v6 = ((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(64->64, Call(0x403a60<64>, <SimCCSystemVAMD64>: [], ret: reg_16<8>)), 0x0<64>, cc_ndep<8>));
            rpl_free();
            v5 = v6;
            return v5;
        }
        *(v4) = 0;
        v6 = ((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(64->64, Call(0x403a60<64>, <SimCCSystemVAMD64>: [], ret: reg_16<8>)), 0x0<64>, cc_ndep<8>));
        rpl_free();
        v5 = v6;
        return v5;
    }
    rpl_free();
    v5 = v6;
    return v5;
}
