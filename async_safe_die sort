typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int async_safe_die()
{
    BOT tmp_12;  // tmp #12
    unsigned long v0;  // [bp-0x10]
    void *v10;  // rsi
    char * v11;  // rdi
    char v12;  // cc_dep2
    unsigned long v13;  // d
    struct_0 *v14;  // fs
    unsigned long long|unsigned int v4;  // eax
    unsigned long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long v8;  // rdx
    struct_1 * v9;  // rdx

    v9 = v10;
    v0 = *(v14 + 0x28);
    v4 = 0;
    do
    {
        tmp_12 = ((long long)v9->field_0);
        v9 += 4;
        v4 = ((int)(((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152));
    }
    while ((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152) == 0);
    v5 = ((long long)((((int)(tmp_12 - 16843009)) & !(((int)tmp_12)) & 2155905152 & 32896) == 0? ((int)(rax<8> >> 16)) : ((int)rax<8>)));
    v8 = ...;
    write(0x2, v10, v8);
    while (true)
    {
        write(0x2, "\n", 0x1);
        _exit(0x2);
        write(0x2, ": errno ", 0x8);
        v11 = (long long)inttostr();
        v6 = 18446744069414584319;
        while (v6 != 0)
        {
            v6 -= 1;
            v12 = ((char)*(v11));
            v11 += v13;
            break;
        }
        v8 = !(rcx<8>) - 1;
        write(0x2, v11, v8);
    }
}
