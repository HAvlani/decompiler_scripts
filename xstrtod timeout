typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int xstrtod()
{
    char *v0;  // [bp-0x38]
    struct_1 *v3;  // rdx
    struct_1 *v4;  // rsi
    unsigned long v5;  // rdi
    char|unsigned long long v6;  // r8
    struct_0 *v7;  // r12
    unsigned long v9;  // xmm0lq

    v7->field_0 = 0;
    rcx<8>();
    if (v0 != v5)
    {
        if (!(v4 != 0))
        {
            v6 = 0;
            if (*(v0) != 0)
            {
                v3->field_0 = v9;
                return v6;
            }
            if ((((char)((((long long)(BinaryOp CmpF)) & 69) >> 2)) & 1) == 0)
            {
                v6 = 1;
                if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, And(Conv(32->64, (xmm0lq<8> ==f 0x0<64>)), 0x45<64>), 0x0<64>, cc_ndep<8>)))
                {
                    v3->field_0 = v9;
                    return v6;
                }
            }
        }
        else if ((((char)((((long long)(BinaryOp CmpF)) & 69) >> 2)) & 1) == 0)
        {
            v6 = 1;
            if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, And(Conv(32->64, (xmm0lq<8> ==f 0x0<64>)), 0x45<64>), 0x0<64>, cc_ndep<8>)))
            {
                v4->field_0 = v0;
                v3->field_0 = v9;
                return v6;
            }
        }
        if ((*(v0) == 0 || v4 != 0) && ((((char)((((long long)(BinaryOp CmpF)) & 69) >> 2)) & 1) != 0 || !(((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, And(Conv(32->64, (xmm0lq<8> ==f 0x0<64>)), 0x45<64>), 0x0<64>, cc_ndep<8>)))))
        {
            v6 = ((char)(*(__errno_location()) != 34));
        }
    }
    else
    {
        v6 = 0;
    }
    if (v0 != v5 && (*(v0) == 0 || v4 != 0) && ((((char)((((long long)(BinaryOp CmpF)) & 69) >> 2)) & 1) != 0 || !(((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, And(Conv(32->64, (xmm0lq<8> ==f 0x0<64>)), 0x45<64>), 0x0<64>, cc_ndep<8>)))) || v0 == v5)
    {
        if (v4 != 0)
        {
            v4->field_0 = v0;
            v3->field_0 = v9;
            return v6;
        }
        v3->field_0 = v9;
        return v6;
    }
}
