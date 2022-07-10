typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[24];
    char field_50;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

int _obstack_newchunk()
{
    BOT tmp_21;  // tmp #21
    BOT tmp_23;  // tmp #23
    BOT tmp_102;  // tmp #102
    BOT tmp_108;  // tmp #108
    unsigned long v10;  // r12
    unsigned long long v11[2];  // r13
    unsigned long v12;  // r14
    unsigned long long v2;  // rax
    char|unsigned long long v3;  // cl
    struct_0 *v4;  // rbx
    struct_1 *v5;  // rbp
    unsigned long v6;  // rsi
    unsigned long v7;  // rsi
    struct_0 *v8;  // rdi
    unsigned long long v9;  // r12

    v12 = v8->field_18 - v8->field_10;
    v5 = v8->field_8;
    tmp_21 = v7;
    tmp_23 = v7 + v8->field_18 - v8->field_10 + v8->field_30;
    v3 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Add(rsi<8>, (Load(addr=(rdi<8> + 0x18<64>), size=8, endness=Iend_LE) - Load(addr=(rdi<8> + 0x10<64>), size=8, endness=Iend_LE))), Load(addr=(rdi<8> + 0x30<64>), size=8, endness=Iend_LE), cc_ndep<8>));
    tmp_102 = v7 + v8->field_18 - v8->field_10 + v8->field_30 + (v8->field_18 - v8->field_10 >> 3) + 100;
    tmp_108 = v7 + v8->field_18 - v8->field_10 + v8->field_30 <= v8->field_0;
    v6 = (v7 + v8->field_18 - v8->field_10 + v8->field_30 <= v8->field_0? v8->field_0 : v7 + v8->field_18 - v8->field_10 + v8->field_30);
    v10 = (tmp_102 <= (tmp_108? v8->field_0 : tmp_23)? v6 : tmp_102);
    if (((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t21, Sub(Load(addr=(rdi<8> + 0x18<64>), size=8, endness=Iend_LE), Load(addr=(rdi<8> + 0x10<64>), size=8, endness=Iend_LE)), cc_ndep<8>)) == 0)
    {
        v3 = ((long long)v3);
        if (v3 == 0)
        {
            v4 = v8;
            v11 = (long long)call_chunkfun();
            if (v11 != 0)
            {
                v4->field_8 = v11;
                v11[1] = v5;
                v4->field_20 = v11 + v10;
                v11[0] = v11 + v10;
                v9 = v11 + v4->field_30 + 16 & !(v4->field_30);
                v2 = memcpy(v11 + v4->field_30 + 16 & !(v4->field_30), v4->field_10, v12);
                if (((long long)(v4->field_50 & 2)) == 0)
                {
                    v2 = !(v4->field_30) & v5 + v4->field_30 + 16;
                    if (v4->field_10 != (!(v4->field_30) & v5 + v4->field_30 + 16))
                    {
                        v4->field_50 = v4->field_50 & 253;
                        v4->field_10 = v9;
                        v4->field_18 = v12 + v9;
                        return v2;
                    }
                    v11[1] = v5->field_8;
                    v2 = call_freefun();
                    v4->field_50 = v4->field_50 & 253;
                    v4->field_10 = v9;
                    v4->field_18 = v12 + v9;
                    return v2;
                }
                v4->field_50 = v4->field_50 & 253;
                v4->field_10 = v9;
                v4->field_18 = v12 + v9;
                return v2;
            }
            print_and_abort(); /* do not return */
        }
        print_and_abort(); /* do not return */
    }
    print_and_abort(); /* do not return */
}
