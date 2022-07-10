typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_1 g_4150b8;
extern unsigned int g_415528;

int parse_field_count()
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long long|struct_1 * v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    struct_0 *v7;  // rsi

    switch (((int)v3))
    {
    case 0: case 2:
        v7->field_0 = v1;
        v4 = v0;
        break;
        return v4;
    case 1: case 3:
        v7->field_0 = 18446744069414584319;
        v4 = v0;
        break;
        return v4;
    case 4:
        if (v5 == 0)
        {
            v4 = 0;
            break;
            return v4;
        }
    default:
        v4 = v0;
        break;
        return v4;
    }
    v3 = ((long long)*(g_4150b8 + xstrtoumax() * 4)) + &g_4150b8;
}
