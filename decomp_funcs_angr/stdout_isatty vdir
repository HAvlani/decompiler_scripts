extern char out_tty.10414;

int stdout_isatty()
{
    if (((char)out_tty.10414) >= 0)
    {
        return ((long long)(out_tty.10414 & 1));
    }
    out_tty.10414 = (char)isatty(0x1);
    return ((long long)(out_tty.10414 & 1));
}
