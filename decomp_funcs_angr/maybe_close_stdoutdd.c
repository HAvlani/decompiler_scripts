extern char close_stdout_required;

int maybe_close_stdout()
{
    unsigned long long v1;  // rax

    if (close_stdout_required != 0)
    {
    }
    else
    {
        v1 = close_stream();
        if (((int)v1) == 0)
        {
            return v1;
        }
        _exit(0x1);
    }
}
