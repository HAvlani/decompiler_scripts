int __libc_csu_init()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r12
    unsigned long long v7;  // r13
    unsigned long long v8;  // r14

    v8 = v2;
    v7 = v4;
    v6 = v5;
    v1 = _init();
    if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x8<64>, 0x3<8>), Sar(0x8<64>, 0x2<8>), cc_ndep<8>))))
    {
        v3 = 0;
        while (true)
        {
            v2 = v8;
            v4 = v7;
            v5 = v6;
            v1 = *(4292816 + rbx<8> * 8)();
            v3 += 1;
            if (v3 == 1)
            {
                break;
            }
        }
        return v1;
    }
    return v1;
}
