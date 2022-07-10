extern <missing-type> g_800000;

int ftoastr()
{
    BOT tmp_166;  // tmp #166
    BOT tmp_199;  // tmp #199
    BOT tmp_222;  // tmp #222
    BOT tmp_252;  // tmp #252
    BOT tmp_93;  // tmp #93
    BOT tmp_303;  // tmp #303
    unsigned long v0;  // [bp-0x78]
    unsigned short v1;  // [bp-0x4b]
    unsigned long long v10;  // r15
    unsigned long v11;  // cc_dep1
    BOT v12;  // xmm0
    unsigned long|BOT v13;  // xmm0
    unsigned long long v3;  // rax
    unsigned long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long v6;  // rdx
    unsigned long v7;  // rsi
    unsigned int v8;  // edi
    unsigned long long v9;  // r12

    v1 = 11557;
    tmp_166 = ((long long)(((int)v6) & 1));
    v13 = (v12 ^ 0x80000000) & v12 < 0 | !(v12 < 0) & v12;
    tmp_199 = ((long long)(((int)v6) % 2 & 1));
    *(&stack_base-104 + ((long long)(((int)v6) & 1)) + 30) = 43;
    tmp_222 = ((long long)(((int)v6) % 4 & 1));
    *(&stack_base-104 + ((long long)(((int)v6) & 1)) + 30 + ((long long)(((int)v6) % 2 & 1))) = 32;
    *(&stack_base-104 + ((long long)(((int)v6) & 1)) + 30 + ((long long)(((int)v6) % 2 & 1)) + ((long long)(((int)v6) % 4 & 1))) = 48;
    tmp_252 = ((long long)(((int)v6) % 8 & 1));
    *(((long long)(((int)v6) % 8 & 1)) + &stack_base-104 + ((long long)(((int)v6) & 1)) + 30 + ((long long)(((int)v6) % 2 & 1)) + ((long long)(((int)v6) % 4 & 1))) = 11818;
    *(((long long)(((int)v6) % 8 & 1)) + &stack_base-104 + ((long long)(((int)v6) & 1)) + 30 + ((long long)(((int)v6) % 2 & 1)) + ((long long)(((int)v6) % 4 & 1)) + 2) = 42;
    v5 = ((long long)((0 - ((int)((((int)v6) & 16) < 1)) & 32) + 71));
    tmp_93 = v13;
    *(tmp_252 + &stack_base-104 + tmp_166 + 30 + tmp_199 + tmp_222 + 4) = 0;
    tmp_303 = v5;
    *(tmp_252 + &stack_base-104 + tmp_166 + 30 + tmp_199 + tmp_222 + 3) = tmp_303;
    v10 = ...;
    while (true)
    {
        v0 = v10;
        v13 = ((long long)v13);
        v9 = __snprintf_chk();
        if (((int)v4) < 0)
        {
            v4 = v9;
            return v3;
        }
        else if (((int)v10) <= 8)
        {
            if (v4 < v7)
            {
                strtof(v8, 0x0);
                v11 = ((long long)(BinaryOp CmpF)) & 69;
                if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)) && (((char)((((long long)(BinaryOp CmpF)) & 69) >> 2)) & 1) == 0)
                {
                    v4 = v9;
                    return v3;
                }
            }
            if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))) || (((char)((((long long)(BinaryOp CmpF)) & 69) >> 2)) & 1) != 0 || v4 >= v7)
            {
                v10 = ((long long)(((int)v10) + 1));
            }
        }
        else
        {
            v4 = v9;
            return v3;
        }
    }
}
