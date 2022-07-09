extern struct_0 stdin;

int yesno()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v3;  // rax
    char *|unsigned long long v5;  // rax
    unsigned long long v6;  // r12b

    v6 = 0;
    v0 = 0;
    v1 = 0;
    v5 = __getdelim(&v0, &v1, 0xa, stdin);
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        v5 = v0 + v5 - 1;
        if (*(v5) != 10)
        {
            v6 = ((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(64->64, Call(0x4026e0<64>, <SimCCSystemVAMD64>: [], ret: reg_16<8>)), 0x0<64>, cc_ndep<8>));
            rpl_free();
            v3 = v6;
            return v3;
        }
        *(v5) = 0;
        v6 = ((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(64->64, Call(0x4026e0<64>, <SimCCSystemVAMD64>: [], ret: reg_16<8>)), 0x0<64>, cc_ndep<8>));
        rpl_free();
        v3 = v6;
        return v3;
    }
    rpl_free();
    v3 = v6;
    return v3;
}
