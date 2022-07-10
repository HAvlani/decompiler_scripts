typedef struct struct_0 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
    unsigned short field_a;
} struct_0;

int strmode()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    char v3;  // al
    struct_0 *v4;  // rsi
    unsigned int v5;  // edi

    v4->field_0 = v3;
    v4->field_1 = ((char)((0 - ((int)((v5 & 0x100) < 1)) & -69) + 114));
    v4->field_2 = ((char)((0 - ((int)((v5 & 128) < 1)) & -74) + 119));
    if ((((short)v5) & 0x800) != 0)
    {
        v1 = ((long long)((0 - ((int)((v5 & 64) < 1)) & -32) + 115));
    }
    else
    {
        v1 = ((long long)((0 - ((int)((v5 & 64) < 1)) & -75) + 120));
    }
    v4->field_3 = v1;
    v4->field_4 = ((char)((0 - ((int)((v5 & 32) < 1)) & -69) + 114));
    v4->field_5 = ((char)((0 - ((int)((v5 & 16) < 1)) & -74) + 119));
    if ((((short)v5) & 0x400) != 0)
    {
        v2 = ((long long)((0 - ((int)((v5 & 8) < 1)) & -32) + 115));
        v4->field_6 = v2;
        v4->field_7 = ((char)((0 - ((int)((v5 & 4) < 1)) & -69) + 114));
        v4->field_8 = ((char)((0 - ((int)((v5 & 2) < 1)) & -74) + 119));
        if ((((short)v5) & 0x200) != 0)
        {
            v4->field_9 = ((char)((0 - ((int)((v5 & 1) < 1)) & -32) + 116));
            v4->field_a = 32;
            return 32;
        }
        v4->field_9 = ((char)((0 - ((int)((v5 & 1) < 1)) & -75) + 120));
        v4->field_a = 32;
        return 32;
    }
    v2 = ((long long)((0 - ((int)((v5 & 8) < 1)) & -75) + 120));
    v4->field_6 = v2;
    v4->field_7 = ((char)((0 - ((int)((v5 & 4) < 1)) & -69) + 114));
    v4->field_8 = ((char)((0 - ((int)((v5 & 2) < 1)) & -74) + 119));
    if ((((short)v5) & 0x200) != 0)
    {
        v4->field_9 = ((char)((0 - ((int)((v5 & 1) < 1)) & -32) + 116));
        v4->field_a = 32;
        return 32;
    }
    else
    {
        v4->field_9 = ((char)((0 - ((int)((v5 & 1) < 1)) & -75) + 120));
        v4->field_a = 32;
        return 32;
    }
}
