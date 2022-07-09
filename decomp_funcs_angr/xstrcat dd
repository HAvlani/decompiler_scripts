typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int xstrcat()
{
    BOT tmp_7;  // tmp #7
    BOT|unsigned int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned long long v10;  // rdi
    struct_0 *v11;  // r12
    unsigned long long v12;  // r13
    unsigned long long v13;  // r14
    unsigned long long|void * v14;  // r15
    unsigned long v2;  // [bp-0x48]
    unsigned long long|void * v4;  // rax
    unsigned long long v5;  // rax
    struct_2 *|unsigned long long v6;  // rdx
    unsigned long|unsigned long long v7;  // rbx
    void *|unsigned long long|char * v8;  // rbp
    struct_0 *v9;  // rsi

    v0 = v9->field_0;
    v14 = v9->field_10;
    v2 = v9->field_10;
    if (v10 != 0)
    {
        v12 = v10;
        v11 = v9;
        v8 = v10;
        v7 = 0;
        do
        {
            if (((int)v0) <= 47)
            {
                tmp_7 = ((long long)((int)v0));
                v0 = ((int)v0) + 8;
                v6 = tmp_7 + v14;
            }
            else
            {
                v6 = ((long long)*((long long *)(((char *)&v0) + 8)));
                v1 = ((long long)*((long long *)(((char *)&v0) + 8))) + 8;
            }
            v7 = (((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rbx<8>, Call (target: 0x402680<64>, prototype: (char*) -> unsigned long (64 bits), args: [Load(addr=rdx<8>, size=8, endness=Iend_LE)]), cc_ndep<8>))? 18446744069414584319 : rbx<8> + strlen(*(rdx<8>)));
            v8 -= 1;
        }
        while (v8 != 1);
        if (v7 <= 2147483647)
        {
            v4 = xmalloc();
            v13 = v4;
            v8 = v4;
            while (true)
            {
                if (v9->field_0 <= 47)
                {
                    v6 = ((long long)v9->field_0) + v11->field_10;
                    v11->field_0 = v9->field_0 + 8;
                }
                else
                {
                    v6 = v11->field_8;
                    v11->field_8 = v11->field_8 + 8;
                }
                v14 = *(rdx<8>);
                v7 = strlen(*(rdx<8>));
                memcpy(v8, v14, v7);
                v8 += v7;
                v12 -= 1;
                if (v12 == 1)
                {
                    break;
                }
            }
            *(v8) = 0;
            v5 = v13;
            return v5;
        }
        v13 = 0;
        *(__errno_location() + None) = 75;
        v5 = v13;
        return v5;
    }
    v4 = xmalloc();
    v8 = v4;
    v13 = v4;
    *(v8) = 0;
    v5 = v13;
    return v5;
}
