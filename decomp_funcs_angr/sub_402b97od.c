extern char flag_dump_strings;
extern struct_0 optarg;
extern unsigned long long string_min;

int sub_402b97()
{
    unsigned long long v1;  // [bp+0x28]

    if (!(optarg != 0))
    {
        string_min = 3;
        flag_dump_strings = 1;
    }
    else if (xstrtoumax() == 0)
    {
        string_min = v1;
        flag_dump_strings = 1;
    }
    else
    {
        xstrtol_fatal();
    }
}
