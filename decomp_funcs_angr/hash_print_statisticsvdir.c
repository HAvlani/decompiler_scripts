typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int hash_print_statistics()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v10;  // r12
    unsigned long v11;  // r13
    unsigned long v2;  // [bp-0x8]
    struct_0 * v4;  // rax
    unsigned long long [2] v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long v7;  // rbx
    unsigned long long v8[2];  // rdi
    unsigned long|unsigned long long v9;  // r12

    v2 = v11;
    v1 = v10;
    v9 = 0;
    v0 = v7;
    v5 = v8[0];
    if (v8[0] >= v8[1])
    {
    }
    else
    {
        while (true)
        {
            if (v5[0] == 0)
            {
                v5 += 16;
                if (v5 >= v8[1])
                {
                    break;
                }
            }
            else
            {
                v4 = v5[1];
                v6 = 1;
                if (v5[1] != 0)
                {
                    do
                    {
                        v4 = v4->field_8;
                        v6 += 1;
                    }
                    while (v4 != 0);
                }
                v9 = (v9 < v6? v6 : v9);
                v5 += 16;
                if (v5 >= v8[1])
                {
                    break;
                }
            }
        }
    }
    __fprintf_chk();
    __fprintf_chk();
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rdi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
    {
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rdi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            __fprintf_chk();
        }
        else
        {
            __fprintf_chk();
        }
    }
    else
    {
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rdi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            __fprintf_chk();
        }
        else
        {
            __fprintf_chk();
        }
    }
}
