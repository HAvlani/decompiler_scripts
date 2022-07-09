typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned long long temphead;

int sighandler()
{
    unsigned long v0;  // [bp-0x10]
    struct_0 * v3;  // rbx
    unsigned long v4;  // rbx
    unsigned int v5;  // edi

    v0 = v4;
    v3 = temphead;
    if (temphead != 0)
    {
        while (true)
        {
            unlink(v3 + 13);
            v3 = v3->field_0;
            if (v3 == 0)
            {
                break;
            }
        }
        temphead = 0;
        signal(v5, 0x0);
    }
    else
    {
        temphead = 0;
        signal(v5, 0x0);
    }
}
