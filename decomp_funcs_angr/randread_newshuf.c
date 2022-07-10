typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char randread_error;

int randread_new()
{
    void *v10;  // r13
    struct_0 *v11;  // r14
    unsigned int v13;  // r15d
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbp
    unsigned long v6;  // rsi
    unsigned long v7;  // rdi
    unsigned long long v8;  // r12
    struct_1 *v9;  // r12

    if (v6 != 0)
    {
        v4 = v6;
        if (v7 != 0)
        {
            v10 = (long long)fopen_safer();
            if (v10 != 0)
            {
                v8 = (long long)xmalloc();
                *(v8) = v10;
                *(v8 + 8) = &randread_error;
                *(v8 + 16) = v7;
                setvbuf(v10, v8 + 24, 0x0, (v4 <= 0x1000? v4 : 0x1000));
                v3 = v8;
                return v3;
            }
            v8 = 0;
            v3 = v8;
            return v3;
        }
        v8 = (long long)xmalloc();
        *(v8) = 0;
        *(v8 + 8) = &randread_error;
        *(v8 + 16) = 0;
        v4 = (!(rbx<8> <= 0x800)? 0x800 : rbx<8>) + v8 + 32;
        v5 = v8 + 32;
        *(v8 + 24) = 0;
        if (v8 + 32 >= (!(v6 <= 0x800)? 0x800 : v6) + v8 + 32)
        {
            isaac_seed();
            v3 = v8;
            return v3;
        }
        else
        {
            while (true)
            {
                v2 = getrandom(((int)v5), ((int)(v4 - v5)), 0x0);
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v5 += v2;
                }
                else
                {
                    v13 = ((int)*(r14<8>));
                    r14<8> = __errno_location();
                    if (*(r14<8>) != 4)
                    {
                        randread_free_body();
                        v11->field_0 = v13;
                        v8 = 0;
                        v3 = v8;
                        return v3;
                    }
                }
                if (*(r14<8>) == 4 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    isaac_seed();
                    v3 = v8;
                    return v3;
                }
            }
        }
    }
    v9->field_0 = 0;
    v9 = (long long)xmalloc();
    *(v9 + 0x8) = &randread_error;
    *(v9 + 0x10) = 0;
    v3 = v8;
    return v3;
}
