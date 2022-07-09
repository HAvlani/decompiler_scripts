extern struct_0 empty_filler;
extern unsigned int g_409ac8;
extern struct_0 optarg;

int sub_402a86()
{
    unsigned long long v1;  // rax

    if (empty_filler != 0)
    {
        v1 = strcmp(empty_filler, optarg);
        if (v1 == 0)
        {
            empty_filler = optarg;
        }
        else
        {
            error(0x1, 0x0, dcgettext(0x0, &g_409ac8, 0x5));
        }
    }
    else
    {
        empty_filler = optarg;
    }
}
