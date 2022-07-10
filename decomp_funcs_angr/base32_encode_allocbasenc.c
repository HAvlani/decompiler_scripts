typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int base32_encode_alloc()
{
    unsigned long long v2;  // rax
    struct_0 *v3;  // rdx
    unsigned long long v4;  // rdx
    unsigned long v5;  // rsi
    unsigned long long v6;  // r12

    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))))
    {
        v3->field_0 = 0;
        v6 = 0;
        v2 = v6;
        return v2;
    }
    else if ([D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) == 0)
    {
        v3->field_0 = ...;
        v4 = malloc(...);
        if (v4 != 0)
        {
            base32_encode();
            return ...;
        }
        v6 = ...;
        v2 = v6;
        return v2;
    }
    else
    {
        v3->field_0 = 0;
        v6 = 0;
        v2 = v6;
        return v2;
    }
}
