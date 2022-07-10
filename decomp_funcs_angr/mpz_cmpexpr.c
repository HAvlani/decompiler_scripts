typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpz_cmp()
{
    struct_1 * v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    struct_0 *v4;  // rsi
    struct_1 *v5;  // rsi
    struct_0 *v6;  // rdi
    struct_1 *v7;  // rdi

    v1 = ((long long)v6->field_4);
    if (((long long)v6->field_4) != ((long long)v4->field_4))
    {
        return [D] amd64g_calculate_condition(0xd<64>, 0x8<64>, Conv(32->64, Load(addr=(rdi<8> + 0x4<64>), size=4, endness=Iend_LE)), Conv(32->64, Load(addr=(rsi<8> + 0x4<64>), size=4, endness=Iend_LE)), cc_ndep<8>) * 2 - 1;
    }
    v7 = v6->field_8;
    v5 = v4->field_8;
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
    {
        v1 = !(rax<8>);
        while (true)
        {
            v3 = *(v5 + v1 * 8);
            v2 = *(v7 + v1 * 8);
            if (*(v5 + (v1 << 3)) == *(v7 + (v1 << 3)))
            {
                v1 -= 1;
                return 0;
            }
            else
            {
                return ((long long)((0 - ((int)(v2 < v3)) & 2) - 1));
            }
        }
    }
    else
    {
        while (true)
        {
            v1 -= 1;
            if (v1 != 18446744069414584319)
            {
                v3 = *(v7 + v1 * 8);
                v2 = *(v5 + v1 * 8);
                return ((long long)((0 - ((int)(v2 < v3)) & 2) - 1));
            }
        }
        return 0;
    }
}
