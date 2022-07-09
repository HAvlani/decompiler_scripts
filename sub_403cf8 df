extern unsigned int header_mode;
extern struct_0 optarg;
extern char print_type;

int sub_403cf8()
{
    char *v3;  // r12
    char *v4;  // r12

    if (header_mode != 1)
    {
        if (header_mode == 0)
        {
            if (((char)&stack_base+0) != 0)
            {
                error(0x0, 0x0, v3);
                usage(); /* do not return */
            }
        }
        if (((char)&stack_base+0) == 0 || header_mode != 0)
        {
            if (print_type == 0)
            {
                header_mode = 4;
                decode_output_arg();
            }
            else
            {
                error(0x0, 0x0, v4);
            }
        }
    }
    else
    {
        error(0x0, 0x0, v4);
    }
}
