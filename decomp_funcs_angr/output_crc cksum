typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long stdout[7];

int output_crc()
{
    unsigned long v0;  // [bp-0x30]
    char *v3;  // rax
    struct_0 *v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned int v6;  // edi
    char v7;  // r8b
    char v8;  // r9b
    struct_1 *v9;  // fs

    v5 = ((long long)v4->field_0);
    __printf_chk(0x1, "%u %s", v5, umaxtostr());
    if (((long long)v8) != 0)
    {
        __printf_chk(0x1, " %s", v6);
    }
    v3 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v3) = v7;
        return v0 ^ *(v9 + 0x28);
    }
    __overflow();
    return v0 ^ *(v9 + 0x28);
}
