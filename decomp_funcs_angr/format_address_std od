typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 address_base;
extern struct_0 address_pad_len;
extern struct_1 stdout;

int format_address_std()
{
    BOT tmp_38;  // tmp #38
    BOT tmp_19;  // tmp #19
    char v0;  // [bp-0x22]
    char v1;  // [bp-0x21]
    char * v11;  // r8
    unsigned long v12;  // cc_dep1
    unsigned long v13;  // cc_dep2
    struct_1 *v14;  // fs
    char v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    char * v7;  // rcx
    char v8;  // sil
    unsigned long|unsigned long long v9;  // rdi

    v7 = &v1;
    v2 = 0;
    v1 = v8;
    v11 = &v1 - ((long long)address_pad_len);
    if (!(address_base != 10))
    {
        do
        {
            v7 = &v0;
            v0 = ((char)(((int)(rdi<8> - (((long long)(rdi<8> * 14757395258967641293 >> 64)) >> 3) * 10)) + 48));
            v5 = rdi<8>;
            v9 = ((long long)(rdi<8> * 14757395258967641293 >> 64)) >> 3;
        }
        while (v5 > 9);
    }
    else if (address_base != 16)
    {
        if (address_base == 8)
        {
            do
            {
                v7 = &v0;
                v5 = ((long long)((((int)rdi<8>) & 7) + 48));
                v12 = rdi<8> % 8;
                v13 = rdi<8> % 4;
                v9 = rdi<8> % 8;
                tmp_38 = v5;
                v0 = tmp_38;
            }
            while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))));
        }
    }
    if (address_base == 16)
    {
        do
        {
            v7 = &v0;
            tmp_19 = ((long long)(((int)rdi<8>) & 15));
            v12 = rdi<8> % 16;
            v13 = rdi<8> % 8;
            v9 = rdi<8> % 16;
            v0 = *(tmp_19 + 4243460);
        }
        while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))));
        if (&v1 - ((long long)address_pad_len) >= v7)
        {
            v11 = v7;
            fputs_unlocked(v11, stdout);
            return v3 ^ *(v14 + 0x28);
        }
    }
    if (address_base == 10 || address_base != 16)
    {
        if (&v1 - ((long long)address_pad_len) < v7)
        {
        }
        else
        {
            v11 = v7;
            fputs_unlocked(v11, stdout);
            return v3 ^ *(v14 + 0x28);
        }
    }
    if (address_base == 16 && &v1 - ((long long)address_pad_len) < v7 || &v1 - ((long long)address_pad_len) < v7 && address_base == 10 || &v1 - ((long long)address_pad_len) < v7 && address_base != 16)
    {
        do
        {
            v7 -= 1;
            *(v7) = 48;
        }
        while (&v1 - ((long long)address_pad_len) != v7);
        fputs_unlocked(v11, stdout);
        return v3 ^ *(v14 + 0x28);
    }
}
