typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long stdout[7];

int output_bsd()
{
    unsigned long v0;  // [bp-0x30]
    char *v2;  // rax
    struct_0 *v4;  // rdx
    unsigned int v5;  // edi
    char v6;  // r8b
    char v7;  // r9b
    struct_1 *v8;  // fs

    __printf_chk(0x1, "%05d %5s", v4->field_0, human_readable());
    if (((long long)v7) != 0)
    {
        __printf_chk(0x1, " %s", v5);
    }
    v2 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v2) = v6;
        return v0 ^ *(v8 + 0x28);
    }
    __overflow();
    return v0 ^ *(v8 + 0x28);
}
