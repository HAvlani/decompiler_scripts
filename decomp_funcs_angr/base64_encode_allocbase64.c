typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int base64_encode_alloc()
{
    unsigned long long v1;  // rax
    struct_0 *v3;  // rdx
    unsigned long v5;  // rsi
    unsigned long long v6;  // r12

    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))))
    {
        v3->field_0 = 0;
        v6 = 0;
        v1 = v6;
        return v1;
    }
    else if ([D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) == 0)
    {
        v3->field_0 = v3;
        v3 = malloc(...);
        if (v3 != 0)
        {
            base64_encode();
            return (((long long)(v5 * 6148914691236517206 >> 64)) - (v5 >> 63) + ((long long)(v5 != ((long long)(v5 * 6148914691236517206 >> 64)) - (v5 >> 63) + (((long long)(v5 * 6148914691236517206 >> 64)) - (v5 >> 63) << 1)))) * 4;
        }
        v6 = ...;
        v1 = v6;
        return v1;
    }
    else
    {
        v3->field_0 = 0;
        v6 = 0;
        v1 = v6;
        return v1;
    }
}
