typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char cksum_debug;
extern struct_0 cksum_fp;
extern unsigned long long cksum_pclmul;
extern unsigned long long cksum_slice8;
extern <missing-type> crctab;
extern unsigned int g_41a08b;

int crc_sum_stream()
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v10;  // rdx
    struct_1 *v11;  // rbp
    unsigned long|unsigned long long v12;  // rsi
    unsigned long long v13;  // rsi
    struct_0 *v14;  // r13
    unsigned long v15;  // cc_dep1
    unsigned long v16;  // cc_dep2
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long|unsigned long long v6;  // rcx
    unsigned int v7;  // ecx
    unsigned long long v8;  // rdx
    unsigned long long|unsigned int v9;  // edx

    v14 = v10;
    v11 = v12;
    v3 = cksum_fp;
    v0 = 0;
    v1 = 0;
    if (cksum_fp == 0)
    {
        [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
        [D] MBusEvent-Imbe_Fence
        if (((int)cksum_fp) != 0)
        {
            [D] t4294967295 = DIRTY 1 TODO(effects) ::: amd64g_dirtyhelper_CPUID_avx2(GSPTR)
            [D] MBusEvent-Imbe_Fence
            v6 = ((long long)(v7 & 268435458));
            if (((int)v6) != 268435458)
            {
                if (((long long)cksum_debug) != 0)
                {
                    v12 = "pclmul support not detected";
                }
            }
            else
            {
                if (((long long)cksum_debug) != 0)
                {
                    dcgettext(0x0, &g_41a08b, 0x5);
                    error(0x0, 0x0, "%s");
                }
                v3 = &cksum_pclmul;
                cksum_fp = &cksum_pclmul;
                /* goto 4221993; */
            }
        }
        else if (((long long)cksum_debug) != 0)
        {
            v12 = "failed to get cpuid";
        }
        if (((int)cksum_fp) == 0 || ((int)v6) != 268435458)
        {
            if (((long long)cksum_debug) != 0)
            {
                dcgettext(0x0, v12, 0x5);
                error(0x0, 0x0, "%s");
            }
            v3 = &cksum_slice8;
            cksum_fp = &cksum_slice8;
        }
    }
    v9 = &v0;
    v13 = &v1;
    if ((long long)rax<8>() != 0)
    {
        v6 = v0;
        v8 = v1;
        v14->field_0 = v0;
        if (v0 != 0)
        {
            do
            {
                v8 = v8 * 0x100 ^ *(crctab + (v8 % 0x1000000 ^ v6) * 8);
                v15 = v6 % 0x100;
                v16 = v6 % 128;
                v6 = v6 % 0x100;
            }
            while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))));
            v9 = ((int)!(rdx<8>));
            v4 = 0;
            v11->field_0 = ((int)!(rdx<8>));
            return v4;
        }
        v9 = ((int)!(rdx<8>));
        v4 = 0;
        v11->field_0 = ((int)!(rdx<8>));
        return v4;
    }
    v4 = -1;
    return v4;
}
