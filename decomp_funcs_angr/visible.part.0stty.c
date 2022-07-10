typedef struct struct_0 {
    char field_0;
} struct_0;

extern unsigned short buf.7649;
extern char g_414121;
extern unsigned short g_414122;
extern struct_0 g_414123;
extern unsigned long long g_414124;

int visible.part.0()
{
    BOT tmp_11;  // tmp #11
    BOT tmp_10;  // tmp #10
    struct_0 * v1;  // rax
    unsigned long|char v2;  // rdi
    unsigned int v3;  // edi
    unsigned int v4;  // edi
    unsigned int v5;  // edi

    if (!(((long long)v2) > 31))
    {
        v2 = ((long long)v4) + 64;
        buf.7649 = 94;
        v1 = &g_414122;
        tmp_11 = v2;
        g_414121 = tmp_11;
        v1->field_0 = 0;
        return &buf.7649;
    }
    else if (((long long)v2) <= 126)
    {
        buf.7649 = v2;
        g_414121 = 0;
        return &buf.7649;
    }
    else if (v2 != 127)
    {
        buf.7649 = 11597;
        if (!(((long long)v2) > 159))
        {
            v2 = ((long long)v5) - 64;
            g_414122 = 94;
            v1 = &g_414124;
            tmp_11 = v2;
            g_414123 = tmp_11;
            v1->field_0 = 0;
            return &buf.7649;
        }
        else if (v2 != 255)
        {
            v2 = ((long long)v3) - 128;
            v1 = &g_414123;
            tmp_10 = v2;
            g_414122 = tmp_10;
            v1->field_0 = 0;
            return &buf.7649;
        }
        else
        {
            g_414122 = 16222;
            v1 = &g_414124;
            v1->field_0 = 0;
            return &buf.7649;
        }
    }
    else
    {
        v1 = &g_414122;
        buf.7649 = 16222;
        v1->field_0 = 0;
        return &buf.7649;
    }
}
