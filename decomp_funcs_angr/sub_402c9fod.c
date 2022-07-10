extern unsigned int address_base;
extern unsigned int address_pad_len;
extern struct_0 format_address;
extern unsigned long long format_address_none;
extern unsigned long long format_address_std;
extern char *optarg;

int sub_402c9f()
{
    if (!(*(optarg) != 111))
    {
        address_base = 8;
        format_address = &format_address_std;
        address_pad_len = 7;
    }
    else if (!(((char)(((long long)*(optarg)) <= 111))))
    {
        address_base = 16;
        format_address = &format_address_std;
        address_pad_len = 6;
    }
    else if (*(optarg) != 100)
    {
        address_pad_len = 0;
        format_address = &format_address_none;
    }
    else
    {
        address_base = 10;
        format_address = &format_address_std;
        address_pad_len = 7;
    }
}
