typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_scan1()
{
    unsigned long|unsigned long long v1;  // rax
    unsigned long long v2;  // rsi
    unsigned long v3;  // rsi
    struct_0 *v4;  // rdi

    v3 = v2 % 64;
    if (!(((long long)((v4->field_4 ^ ((int)(((long long)v4->field_4) >> 31))) - ((int)(((long long)v4->field_4) >> 31)))) > v1))
    {
        return (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(32->64, Load(addr=(rdi<8> + 0x4<64>), size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))? ((long long)v4->field_4) : 18446744069414584319);
    }
    else
    {
        v1 = rsi<8>;
        if (rsi<8> == 0)
        {
        }
        else
        {
            while (true)
            {
                if (*(v4->field_8 + (v1 << 3) + 8) == 0)
                {
                    v1 -= 1;
                }
                else
                {
                    break;
                }
            }
        }
    }
}
