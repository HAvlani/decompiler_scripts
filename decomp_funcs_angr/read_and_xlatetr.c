extern char xlate;

int read_and_xlate()
{
    BOT tmp_9;  // tmp #9
    unsigned long long v1;  // rax
    char * v4;  // rdi

    v1 = safe_read();
    if (!(v1 != 18446744069414584319))
    {
        plain_read.part.0(); /* do not return */
    }
    else if (v1 != 0)
    {
        do
        {
            tmp_9 = ((long long)*(v4));
            v4 += 1;
            *(v4 + 0x1) = *(tmp_9 + 4251872);
        }
        while (v4 + v1 != v4);
        return v1;
    }
    else
    {
        return v1;
    }
}
