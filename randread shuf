typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

int randread()
{
    BOT tmp_20;  // tmp #20
    BOT tmp_13;  // tmp #13
    unsigned long|unsigned long long v0;  // [bp-0x40]
    void *v10;  // rsi
    unsigned long long [4]|unsigned long long v11;  // rdi
    struct_0 *v12;  // r12
    struct_2 *|void * v13;  // r13
    unsigned long|unsigned int v14;  // r14d
    unsigned long|char *|unsigned long long v15;  // r15
    unsigned long long v4;  // rax
    unsigned long long v6;  // rcx
    unsigned long|unsigned long long v7;  // rdx
    unsigned long v8;  // rbx
    unsigned long long|void * v9;  // rbp

    v12 = v11;
    v9 = v10;
    v8 = v7;
    v15 = v11[0];
    if (v11[0] != 0)
    {
        v14 = 0;
        v13 = __errno_location();
        while (true)
        {
            v4 = fread_unlocked(v9, 0x1, v8, v15);
            v7 = ((long long)v13->field_0);
            v9 += v4;
            v8 -= v4;
            if (v8 == v4)
            {
                break;
            }
            v11 = v12->field_10;
            tmp_20 = ((int)v7);
            v7 = ((long long)(((long long)(v12->field_0->field_0 & 32)) == 0? ((int)v14) : ((int)v7)));
            v13->field_0 = (((long long)(v12->field_0->field_0 & 32)) == 0? ((int)v14) : tmp_20);
            v12->padding_8();
            v15 = v12->field_0;
        }
        return v4;
    }
    v6 = v11[3];
    v13 = v11 + 2104;
    if (v7 > v11[3])
    {
        while (true)
        {
            v0 = v6;
            memcpy(v9, 0x800 - v6 + v11 + 2104, v6);
            v9 += v0;
            v8 -= v0;
            tmp_13 = v9;
            if (((long long)(tmp_13 & 7)) != 0)
            {
                isaac_refill();
                v6 = 0x800;
                v15 = v8;
                break;
            }
            else
            {
                v0 = v9 + v8;
                v15 = ((long long)(((int)v8) & 2047));
                while (true)
                {
                    v9 = v0 - v8;
                    if (v8 != v15)
                    {
                        v8 -= 0x800;
                        v11[3] = 0;
                        return isaac_refill();
                    }
                    else
                    {
                        isaac_refill();
                    }
                }
            }
        }
        v6 = 0x800;
        v0 = v6;
        v4 = memcpy(v9, v13, v15);
        v11[3] = v0 - v15;
        return v4;
    }
    else
    {
        v15 = v7;
        v13 = v11 + 2104 - v11[3] + 0x800;
        v0 = v6;
        v4 = memcpy(v9, v13, v15);
        v11[3] = v0 - v15;
        return v4;
    }
}
