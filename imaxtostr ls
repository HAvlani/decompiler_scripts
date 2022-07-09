typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int imaxtostr()
{
    BOT tmp_51;  // tmp #51
    BOT tmp_76;  // tmp #76
    char * v11;  // r8
    char *v2;  // rcx
    struct_0 *v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned long long v8;  // rdi

    v5->field_14 = 0;
    v11 = v5 + 20;
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))))
    {
        do
        {
            v11 -= 1;
            tmp_51 = ((long long)(((int)(rdi<8> - (((long long)(rdi<8> * 14757395258967641293 >> 64)) >> 3) * 10)) + 48));
            *(v11) = tmp_51;
            v6 = ((long long)(rdi<8> * 14757395258967641293 >> 64)) >> 3;
        }
        while (v6 != 0);
        return v11;
    }
    do
    {
        v2 = v11;
        v11 -= 1;
        v8 = (((long long)(rdi<8> * 7378697629483820647 >> 64)) >> 2) - (rdi<8> >> 63);
        tmp_76 = ((long long)(48 + ((((long long)(rdi<8> * 7378697629483820647 >> 64)) >> 2) - (rdi<8> >> 63)) * 10 - rdi<8>));
        *(v11) = tmp_76;
    }
    while ((((long long)(rdi<8> * 7378697629483820647 >> 64)) >> 2) - (rdi<8> >> 63) != 0);
    *(v11 + 0x1) = 45;
    return v2 - 2;
}
