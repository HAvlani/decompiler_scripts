extern unsigned int g_40d6a0;
extern struct_0 optarg;

int sub_402a51()
{
    char v0;  // [bp+0x0]
    unsigned long|unsigned long long v1;  // [bp+0x8]
    unsigned long long v2;  // [bp+0x28]
    unsigned long long v4;  // rax

    if (!(optarg != 0))
    {
        v0 = 1;
        v1 = 32;
    }
    else if (xstrtoumax() == 0)
    {
        v4 = v2;
        v0 = 1;
        v1 = v4;
    }
    else
    {
        xstrtol_fatal();
        error(0x1, 0x0, dcgettext(0x0, &g_40d6a0, 0x5));
    }
}
