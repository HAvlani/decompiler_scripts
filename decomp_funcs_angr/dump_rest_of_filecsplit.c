int dump_rest_of_file()
{
    unsigned long long v2;  // rdi

    while (true)
    {
        v2 = (long long)remove_line();
        if (v2 == 0)
        {
            break;
        }
        save_line_to_file.isra.0();
    }
    return v2;
}
