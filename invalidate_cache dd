typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char i_nocache_eof;
extern unsigned long long i_pending.7465;
extern struct_0 input_offset;
extern char input_seekable;
extern char o_nocache_eof;
extern char o_pending.7466;
extern struct_0 output_offset.7478;

int invalidate_cache()
{
    struct_0 *|unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long|unsigned long long v4;  // rsi
    unsigned int v5;  // edi
    unsigned long long v6;  // r12
    unsigned long long v7;  // r13
    unsigned long long|char v8;  // r14
    unsigned long long v9;  // r15

    v1 = &o_pending.7466;
    v3 = v4;
    v9 = ((long long)o_nocache_eof);
    if (v5 == 0)
    {
        v9 = ((long long)i_nocache_eof);
        v1 = &i_pending.7465;
    }
    v6 = v1->field_0;
    if (v4 != 0)
    {
        v6 += v3;
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, r12<8>, rbx<8>, cc_ndep<8>))))
        {
            v7 = ((long long)(((int)(v6 + (v6 >> 63 >> 47))) & 131071)) - (v6 >> 63 >> 47);
            v1->field_0 = ((long long)(((int)(v6 + (v6 >> 63 >> 47))) & 131071)) - (v6 >> 63 >> 47);
            if (v6 <= ((long long)(((int)(v6 + (v6 >> 63 >> 47))) & 131071)) - (v6 >> 63 >> 47))
            {
                v8 = 1;
                v2 = r14<8>;
                return v2;
            }
            v6 -= v7;
            if (v6 == v7)
            {
                v8 = 1;
                v2 = r14<8>;
                return v2;
            }
        }
        else
        {
            v1->field_0 = 131071;
            v7 = 131071;
            v6 = 0x7ffffffffffe0000;
        }
    }
    else
    {
        v7 = 0;
        if (v6 == 0)
        {
            if (((long long)v9) == 0)
            {
                v8 = 1;
                v2 = r14<8>;
                return v2;
            }
        }
    }
    if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, r12<8>, rbx<8>, cc_ndep<8>)) && v4 != 0 || v4 == 0 && v6 != 0 || v4 == 0 && ((long long)v9) != 0 || v4 != 0 && v6 != v7 && v6 > ((long long)(((int)(v6 + (v6 >> 63 >> 47))) & 131071)) - (v6 >> 63 >> 47))
    {
        if (v5 == 0)
        {
            v8 = ((long long)input_seekable);
            v4 = input_offset;
            if (((long long)input_seekable) == 0)
            {
                *(__errno_location() + None) = 29;
                v2 = r14<8>;
                return v2;
            }
        }
        v8 = 0;
        if (output_offset.7478 == 18446744069414584319)
        {
            v2 = r14<8>;
            return v2;
        }
        else if (!(!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, r12<8>, rbx<8>, cc_ndep<8>)))))
        {
            v1 = lseek(0x1, 0x0, 0x1);
            output_offset.7478 = v1;
            v4 = v1;
        }
        else if (v4 != 0)
        {
            v4 = output_offset.7478 + v7 + v6;
            output_offset.7478 = output_offset.7478 + v7 + v6;
        }
        if (v5 == 0 && ((long long)input_seekable) != 0 || v5 != 0 && output_offset.7478 != 18446744069414584319)
        {
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, r12<8>, rbx<8>, cc_ndep<8>)) || v5 == 0 || v4 != 0)
            {
                v8 = 0;
            }
            if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, r12<8>, rbx<8>, cc_ndep<8>)))
            {
                v2 = r14<8>;
                return v2;
            }
            if (v3 == 0)
            {
                if (v6 != 0)
                {
                    if (((long long)v9) == 0)
                    {
                        v8 = ((char)(posix_fadvise(v5) != -1));
                        v2 = r14<8>;
                        return v2;
                    }
                }
            }
            if (v3 != 0 && v6 != 0)
            {
                v8 = ((char)(posix_fadvise(v5) != -1));
                v2 = r14<8>;
                return v2;
            }
            if (v6 == 0 || v3 == 0 && ((long long)v9) != 0)
            {
                v8 = ((char)(posix_fadvise(v5) != -1));
                v2 = r14<8>;
                return v2;
            }
        }
    }
}
