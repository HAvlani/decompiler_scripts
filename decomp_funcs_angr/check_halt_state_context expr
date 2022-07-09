typedef struct struct_2 {
    char padding_0[152];
    struct struct_3 *field_98;
} struct_2;

int check_halt_state_context()
{
    BOT tmp_22;  // tmp #22
    BOT tmp_25;  // tmp #25
    unsigned long long|unsigned int v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3[4];  // rbp
    unsigned long long v4;  // rsi
    struct_2 *|unsigned short|unsigned int v5;  // edi
    unsigned long long v6;  // r8
    unsigned long long v7;  // r9
    unsigned long long v8;  // r10
    unsigned int v9;  // r11d

    v3 = v4;
    v1 = re_string_context_at();
    v6 = v3[2];
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rbp<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
    {
        v8 = v3[3];
        v1 = ((int)(v1 & 1));
        v4 = 0;
        v7 = v5->field_98->field_0;
        v9 = v1 & 1;
        while (true)
        {
            v1 = *(v8 + v4 * 8);
            v2 = ((long long)*(*(v8 + v4 * 8) * 16 + v7 + 8)) >> 8;
            v5 = ((int)(((long long)*(*(v8 + v4 * 8) * 16 + v7 + 8)) >> 8));
            v5 = ...;
            if (*((*(v8 + (v4 << 3)) << 4) + v7 + 8) == 2)
            {
                if (((long long)v5) != 0)
                {
                    if (((long long)(v2 & 4)) == 0 && v9 != 0 && (((char)((int)v2)) & 8) != 0)
                    {
                        /* goto 4281080; */
                    }
                    if ((v9 == 0 || (((char)((int)v2)) & 8) == 0) && (((long long)(v2 & 4)) == 0 || v9 != 0) && (((long long)(v5 & 32)) == 0 || (((char)((int)tmp_22)) & 2) != 0))
                    {
                        if ((((char)reg_72<4>) & 128) == 0)
                        {
                            return v1;
                        }
                        else if ((((char)((int)tmp_25)) & 8) != 0)
                        {
                            return v1;
                        }
                    }
                }
                return v1;
            }
            if (...)
            {
                v4 += 1;
                return 0;
            }
        }
    }
    return 0;
}
